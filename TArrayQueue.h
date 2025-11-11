#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TArrayQueue.generated.h"

/**
 * Circular queue implemented on top of TArray.
 * Supports enqueue/dequeue from front and pop from back.
 * Efficient O(1) operations with occasional array growth.
 */
template <typename ElementType>
class QUEUELITE_API TArrayQueue
{
private:
    TArray<ElementType> Data;  // Underlying storage
    int32 Head = 0;            // Index of the front element
    int32 Count = 0;           // Number of elements in the queue

    /** Convert logical index to physical index in Data */
    FORCEINLINE int32 InternalIndex(const int32 Index) const
    {
        check(Data.Num() > 0);
        return (Head + Index) % Data.Num();
    }

    /** Grow storage array, copying elements with wrap-around handling */
    void Grow()
    {
        const int32 OldCapacity = Data.Num();
        const int32 NewCapacity = FMath::Max(4, OldCapacity * 2);

        TArray<ElementType> NewData;
        NewData.SetNumUninitialized(NewCapacity);

        if (Count == 0)
        {
            Data = MoveTemp(NewData);
            Head = 0;
            return;
        }

        const int32 FirstPart = FMath::Min(OldCapacity - Head, Count);
        if (FirstPart > 0)
        {
            FMemory::Memcpy(NewData.GetData(), &Data[Head], sizeof(ElementType) * FirstPart);
        }

        if (const int32 SecondPart = Count - FirstPart; SecondPart > 0)
        {
            FMemory::Memcpy(NewData.GetData() + FirstPart, Data.GetData(), sizeof(ElementType) * SecondPart);
        }

        Data = MoveTemp(NewData);
        Head = 0;
    }

public:
    TArrayQueue() = default;
    explicit TArrayQueue(int32 InitialCapacity) { Data.Reserve(InitialCapacity); }
    ~TArrayQueue() { Empty(); }

    /** Removes all elements and frees underlying storage */
    FORCEINLINE void Empty()
    {
        Data.Empty(); // Frees memory + resets array
        Head = 0;
        Count = 0;
    }
    
    /** Adds an element to the back. Amortized O(1) with circular buffer logic */
    FORCEINLINE void Enqueue(const ElementType& Item)
    {
        if (Count == Data.Num()) Grow();

        const int32 TailIndex = InternalIndex(Count);
        if (Count < Data.Num())
        {
            Data[TailIndex] = Item;
        }
        else
        {
            Data.Add(Item);
        }
        ++Count;
    }

    /** Removes front element. Returns false if empty. O(1). */
    FORCEINLINE bool Dequeue(ElementType& OutItem)
    {
        if (Count == 0) return false;

        OutItem = Data[Head];
        Head = (Head + 1) % Data.Num();
        --Count;

        if (Count == 0) Head = 0;

        return true;
    }

    /** Removes last element. Returns false if empty. O(1). */
    FORCEINLINE bool PopLast(ElementType& OutItem)
    {
        if (Count == 0) return false;

        const int32 TailIndex = InternalIndex(Count - 1);
        OutItem = Data[TailIndex];
        --Count;

        if (Count == 0) Head = 0;

        return true;
    }

    /** Clears all elements but keeps allocated memory for reuse */
    FORCEINLINE void Clear() { Count = 0; Head = 0; }

    /** True if empty */
    FORCEINLINE bool IsEmpty() const { return Count == 0; }

    /** Number of elements */
    FORCEINLINE int32 Num() const { return Count; }

    /** Reference front element. Check fails if empty. */
    FORCEINLINE const ElementType& Front() const { check(Count > 0); return Data[Head]; }

    /** Reference back element. Check fails if empty. */
    FORCEINLINE const ElementType& Back() const { check(Count > 0); return Data[InternalIndex(Count - 1)]; }

    /** Peek front element without removing. O(1). */
    FORCEINLINE bool PeekFront(ElementType& OutItem) const
    {
        if (Count == 0) return false;
        OutItem = Data[Head];
        return true;
    }

    /** Peek back element without removing. O(1). */
    FORCEINLINE bool PeekBack(ElementType& OutItem) const
    {
        if (Count == 0) return false;
        OutItem = Data[InternalIndex(Count - 1)];
        return true;
    }

    /** Swap contents with another queue */
    FORCEINLINE void Swap(TArrayQueue& Other)
    {
        Data.Swap(Other.Data);
        ::Swap(Head, Other.Head);
        ::Swap(Count, Other.Count);
    }

    /** Iterator for range-based for loops, handles wrap-around */
    struct FIterator
    {
        const TArrayQueue* Queue;
        int32 Index;
        int32 Iterated;

        FIterator(const TArrayQueue* InQueue, int32 Start)
            : Queue(InQueue), Index(InQueue->Data.Num() > 0 ? Start % InQueue->Data.Num() : 0), Iterated(0) {}

        bool operator!=(const FIterator& Other) const { return Iterated != Other.Iterated; }

        void operator++()
        {
            if (Queue->Data.Num() > 0)
            {
                Index = (Index + 1) % Queue->Data.Num();
            }
            ++Iterated;
        }

        const ElementType& operator*() const { check(Queue->Data.Num() > 0); return Queue->Data[Index]; }
    };

    /** Begin iterator for range-based loops */
    auto begin() const { return FIterator(this, Head); }

    /** End iterator for range-based loops */
    auto end() const { return FIterator(this, Head + Count); }
};

#pragma region Wrappers
//=============================================[Int32 Wrapper]=============================================

/**
 * Blueprint-accessible wrapper for TArrayQueue<int32>
 */
UCLASS(BlueprintType)
class QUEUELITE_API UIntQueueObject : public UObject
{
    GENERATED_BODY()

private:
    TArrayQueue<int32> Queue;
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const int32 Value) { Queue.Enqueue(Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(int32& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopLast(int32& OutValue) { return Queue.PopLast(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(int32& OutValue) const { return Queue.PeekFront(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(int32& OutValue) const { return Queue.PeekBack(OutValue); }
};

//=============================================[Float Wrapper]=============================================

/**
 * Blueprint-accessible wrapper for TArrayQueue<float>
 */
UCLASS(BlueprintType)
class QUEUELITE_API UFloatQueueObject : public UObject
{
    GENERATED_BODY()

private:
    TArrayQueue<float> Queue;

public:
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const float Value) { Queue.Enqueue(Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(float& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopLast(float& OutValue) { return Queue.PopLast(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(float& OutValue) const { return Queue.PeekFront(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(float& OutValue) const { return Queue.PeekBack(OutValue); }
};

//=============================================[AActor* Wrapper]=============================================

/**
 * Blueprint-accessible wrapper for TArrayQueue<AActor*>
 */
UCLASS(BlueprintType)
class QUEUELITE_API UActorQueueObject : public UObject
{
    GENERATED_BODY()

private:
    TArrayQueue<AActor*> Queue;

public:
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(AActor* Actor) { Queue.Enqueue(Actor); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(AActor*& OutActor) { return Queue.Dequeue(OutActor); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopLast(AActor*& OutActor) { return Queue.PopLast(OutActor); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(AActor*& OutActor) const { return Queue.PeekFront(OutActor); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(AActor*& OutActor) const { return Queue.PeekBack(OutActor); }
};

//=============================================[UObject* Wrapper]=============================================

/**
 * Blueprint-accessible wrapper for TArrayQueue<UObject*>
 */
UCLASS(BlueprintType)
class QUEUELITE_API UObjectQueueObject : public UObject
{
    GENERATED_BODY()

private:
    TArrayQueue<UObject*> Queue;

public:
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(UObject* Value) { Queue.Enqueue(Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(UObject*& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopLast(UObject*& OutValue) { return Queue.PopLast(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(UObject*& OutValue) const { return Queue.PeekFront(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(UObject*& OutValue) const { return Queue.PeekBack(OutValue); }
};

//=============================================[TSubclass QUEUELITE_APIOf<AActor> Wrapper]=============================================

/**
 * Blueprint-accessible wrapper for TArrayQueue<TSubclass QUEUELITE_APIOf<AActor>>
 */
UCLASS(BlueprintType)
class QUEUELITE_API USubclassOfActorQueueObject : public UObject
{
    GENERATED_BODY()

private:
    TArrayQueue<TSubclassOf<AActor>> Queue;

public:
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const TSubclassOf<AActor> Value) { Queue.Enqueue(Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(TSubclassOf<AActor>& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopLast(TSubclassOf<AActor>& OutValue) { return Queue.PopLast(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(TSubclassOf<AActor>& OutValue) const { return Queue.PeekFront(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(TSubclassOf<AActor>& OutValue) const { return Queue.PeekBack(OutValue); }
};

//=============================================[FString Wrapper]=============================================

/**
 * Blueprint-accessible wrapper for TArrayQueue<FString>
 */
UCLASS(BlueprintType)
class QUEUELITE_API UStringQueueObject : public UObject
{
    GENERATED_BODY()

private:
    TArrayQueue<FString> Queue;

public:
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const FString& Value) { Queue.Enqueue(Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(FString& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopLast(FString& OutValue) { return Queue.PopLast(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(FString& OutValue) const { return Queue.PeekFront(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(FString& OutValue) const { return Queue.PeekBack(OutValue); }
};

//=============================================[FVector Wrapper]=============================================

/**
 * Blueprint-accessible wrapper for TArrayQueue<FVector>
 */
UCLASS(BlueprintType)
class QUEUELITE_API UVectorQueueObject : public UObject
{
    GENERATED_BODY()

private:
    TArrayQueue<FVector> Queue;

public:
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const FVector& Value) { Queue.Enqueue(Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(FVector& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopLast(FVector& OutValue) { return Queue.PopLast(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(FVector& OutValue) const { return Queue.PeekFront(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(FVector& OutValue) const { return Queue.PeekBack(OutValue); }
};

//=============================================[FRotator Wrapper]=============================================

/**
 * Blueprint-accessible wrapper for TArrayQueue<FRotator>
 */
UCLASS(BlueprintType)
class QUEUELITE_API URotatorQueueObject : public UObject
{
    GENERATED_BODY()

private:
    TArrayQueue<FRotator> Queue;

public:
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const FRotator& Value) { Queue.Enqueue(Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(FRotator& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopLast(FRotator& OutValue) { return Queue.PopLast(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(FRotator& OutValue) const { return Queue.PeekFront(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(FRotator& OutValue) const { return Queue.PeekBack(OutValue); }
};

//=============================================[FTransform Wrapper]=============================================

/**
 * Blueprint-accessible wrapper for TArrayQueue<FTransform>
 */
UCLASS(BlueprintType)
class QUEUELITE_API UTransformQueueObject : public UObject
{
    GENERATED_BODY()

private:
    TArrayQueue<FTransform> Queue;

public:
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const FTransform& Value) { Queue.Enqueue(Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(FTransform& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopLast(FTransform& OutValue) { return Queue.PopLast(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(FTransform& OutValue) const { return Queue.PeekFront(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(FTransform& OutValue) const { return Queue.PeekBack(OutValue); }
};
#pragma endregion