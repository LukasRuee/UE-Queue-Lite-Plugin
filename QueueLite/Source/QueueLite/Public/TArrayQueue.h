/**
 * UE-Queue Lite Plugin
 * TArrayQueue Implementation
 * 
 * Author: LukasRuee
 * GitHub: https://github.com/LukasRuee/UE-Queue-Lite-Plugin
 * License: MIT License
 * 
 * Description:
 *   Lightweight, circular queue implementation built on TArray.
 *   Supports O(1) enqueue/dequeue, range-based iteration,
 *   and Blueprint-accessible wrappers for common Unreal types.
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TArrayQueue.generated.h"


template <typename ElementType>
class QUEUELITE_API TArrayQueue
{
private:
    TArray<ElementType> Data;   // Underlying storage
    int32 Head = 0;             // Index of the front element
    int32 Count = 0;            // Number of elements in the queue
    int32 GrowthSize = 32;       // Number of elements in the queue

    /** Convert logical index to physical index in Data */
    FORCEINLINE int32 InternalIndex(const int32 Index) const
    {
        check(Data.Num() > 0);
        return (Head + Index) % Data.Num();
    }

    /** Grow storage array, copying elements with wrap-around handling */
    void Grow()
    {
        TArray<ElementType> NewData;
        NewData.SetNumUninitialized(GrowthSize + Data.Num());

        if (Count == 0)
        {
            Data = MoveTemp(NewData);
            Head = 0;
            return;
        }

        const int32 FirstPart = FMath::Min(Data.Num() - Head, Count);
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
    explicit TArrayQueue(int32 InitialCapacity, const int32 InGrowthSize) { Data.Reserve(InitialCapacity); GrowthSize = FMath::Max(1, InGrowthSize); }
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

    /** Removes last element. Returns false if empty. O(1). Also returns Popped Element*/
    FORCEINLINE bool PopOut(ElementType& OutItem, int32& OutLogicalIndex)
    {
        if (Count == 0) return false;

        OutLogicalIndex = Count - 1; // last element logical index
        const int32 TailIndex = InternalIndex(OutLogicalIndex);
        OutItem = Data[TailIndex];
        --Count;

        if (Count == 0) Head = 0;

        return true;
    }
    
    /** Removes last element. Returns false if empty. O(1). */
    FORCEINLINE bool Pop()
    {
        if (Count == 0) return false;
        --Count;
        if (Count == 0) Head = 0;
        return true;
    }
    
    /** Appends all elements from another queue, moving them if possible. */
    FORCEINLINE void Append(TArrayQueue&& Other)
    {
        if (Other.Count == 0)
        {
            return;
        }

        // If current queue is empty, just take over its data
        if (IsEmpty())
        {
            Swap(Other);
            return;
        }

        // Otherwise, append element-wise via move
        const int32 RequiredCapacity = Count + Other.Count;
        if (RequiredCapacity > Data.Num())
        {
            while (Data.Num() < RequiredCapacity)
            {
                Grow();
            }
        }

        for (int32 i = 0; i < Other.Count; ++i)
        {
            Enqueue(MoveTemp(Other.Data[Other.InternalIndex(i)]));
        }

        Other.Clear();
    }

    FORCEINLINE int32 GetIndexOfElement(const ElementType& Value)
    {
        for (int32 i = 0; i < Count; ++i)
        {
            if (Data[InternalIndex(i)] == Value)
            {
                return i;
            }
        }
        return INDEX_NONE;
    }
    
    FORCEINLINE bool OverwriteInQueue(const int32 TargetIndex, const ElementType& NewValue)
    {
        if (TargetIndex < 0 || TargetIndex >= Count) return false;

        Data[InternalIndex(TargetIndex)] = NewValue;
        return true;
    }
    
    /** Copy data to an Array */
    FORCEINLINE TArray<ElementType> ToArray() const
    {
        TArray<ElementType> Result;
        Result.Reserve(Count);
        for (int32 i = 0; i < Count; ++i)
        {
            Result.Add(Data[InternalIndex(i)]);
        }
        return Result;
    }
    
    /** Clears all elements but keeps allocated memory for reuse */
    FORCEINLINE void Clear() { Count = 0; Head = 0; }
    /** True if empty */
    FORCEINLINE bool IsEmpty() const { return Count == 0; }
    /** Number of elements */
    FORCEINLINE int32 Num() const { return Count; }
    /** Returns the number of allocated slots in the queue (capacity of the underlying array) */
    FORCEINLINE int32 Capacity() const { return Data.Num(); }

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
    /** Peek at element without removing. O(1). */
    bool PeekAt(ElementType& OutValue, const int32 Index) const
    {
        if (Index < 0 || Index >= Count) return false;
        OutValue = Data[InternalIndex(Index)];
        return true;
    }
    
    /** Swap contents with another queue */
    FORCEINLINE void Swap(TArrayQueue& Other)
    {
        Data.Swap(Other.Data);
        ::Swap(Head, Other.Head);
        ::Swap(Count, Other.Count);
    }
    
    /** Overrides GrowthSize, but ensures a min GrowthSize of 1 */
    FORCEINLINE void SetGrowthSize(const int32 InGrowthSize)
    {
        GrowthSize = FMath::Max(1, InGrowthSize);
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

public:
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void Initialize(const int32 InitialCapacity = 32, const int32 InGrowthSize = 32)
    {
        Queue = TArrayQueue<int32>(FMath::Max(1, InitialCapacity), FMath::Max(1, InGrowthSize));
    }
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void SetGrowthSize(const int32 InGrowthSize = 32)
    {
        Queue.SetGrowthSize(FMath::Max(1, InGrowthSize));
    }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const int32 Value) { Queue.Enqueue(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(int32& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopOut(int32& OutValue, int32& OutLogicalIndex) { return Queue.PopOut(OutValue, OutLogicalIndex); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Pop() { return Queue.Pop(); } 

    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 GetIndexOfElement(const int32 Value) { return Queue.GetIndexOfElement(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool OverwriteInQueue(const int32 TargetIndex, const int32 Value) { return Queue.OverwriteInQueue(TargetIndex, Value); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    TArray<int32> ToArray() const { return Queue.ToArray(); } 
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Capacity() const { return Queue.Capacity(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(int32& OutValue) const { return Queue.PeekFront(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(int32& OutValue) const { return Queue.PeekBack(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekAt(int32& OutValue, const int32 Index) const { return Queue.PeekAt(OutValue, Index); }
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
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void Initialize(const int32 InitialCapacity = 32, const int32 InGrowthSize = 32)
    {
        Queue = TArrayQueue<float>(FMath::Max(1, InitialCapacity), FMath::Max(1, InGrowthSize));
    }
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void SetGrowthSize(const int32 InGrowthSize = 32)
    {
        Queue.SetGrowthSize(FMath::Max(1, InGrowthSize));
    }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const float Value) { Queue.Enqueue(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(float& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopOut(float& OutValue, int32& OutLogicalIndex) { return Queue.PopOut(OutValue, OutLogicalIndex); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Pop() { return Queue.Pop(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 GetIndexOfElement(const float Value) { return Queue.GetIndexOfElement(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool OverwriteInQueue(const int32 TargetIndex, const float Value) { return Queue.OverwriteInQueue(TargetIndex, Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    TArray<float> ToArray() const { return Queue.ToArray(); } 

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Capacity() const { return Queue.Capacity(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(float& OutValue) const { return Queue.PeekFront(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(float& OutValue) const { return Queue.PeekBack(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekAt(float& OutValue, const int32 Index) const { return Queue.PeekAt(OutValue, Index); }
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
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void Initialize(const int32 InitialCapacity = 32, const int32 InGrowthSize = 32)
    {
        Queue = TArrayQueue<AActor*>(FMath::Max(1, InitialCapacity), FMath::Max(1, InGrowthSize));
    }
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void SetGrowthSize(const int32 InGrowthSize = 32)
    {
        Queue.SetGrowthSize(FMath::Max(1, InGrowthSize));
    }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(AActor* Actor) { Queue.Enqueue(Actor); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(AActor*& OutActor) { return Queue.Dequeue(OutActor); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopOut(AActor*& OutValue, int32& OutLogicalIndex) { return Queue.PopOut(OutValue, OutLogicalIndex); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Pop() { return Queue.Pop(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 GetIndexOfElement(AActor* Value) { return Queue.GetIndexOfElement(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool OverwriteInQueue(const int32 TargetIndex, AActor* Value) { return Queue.OverwriteInQueue(TargetIndex, Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    TArray<AActor*> ToArray() const { return Queue.ToArray(); } 

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Capacity() const { return Queue.Capacity(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(AActor*& OutActor) const { return Queue.PeekFront(OutActor); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(AActor*& OutActor) const { return Queue.PeekBack(OutActor); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekAt(AActor*& OutValue, const int32 Index) const { return Queue.PeekAt(OutValue, Index); }
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
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void Initialize(const int32 InitialCapacity = 32, const int32 InGrowthSize = 32)
    {
        Queue = TArrayQueue<UObject*>(FMath::Max(1, InitialCapacity), FMath::Max(1, InGrowthSize));
    }
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void SetGrowthSize(const int32 InGrowthSize = 32)
    {
        Queue.SetGrowthSize(FMath::Max(1, InGrowthSize));
    }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(UObject* Value) { Queue.Enqueue(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(UObject*& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopOut(UObject*& OutValue, int32& OutLogicalIndex) { return Queue.PopOut(OutValue, OutLogicalIndex); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Pop() { return Queue.Pop(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 GetIndexOfElement(UObject* Value) { return Queue.GetIndexOfElement(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool OverwriteInQueue(const int32 TargetIndex, UObject* Value) { return Queue.OverwriteInQueue(TargetIndex, Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    TArray<UObject*> ToArray() const { return Queue.ToArray(); } 

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Capacity() const { return Queue.Capacity(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(UObject*& OutValue) const { return Queue.PeekFront(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(UObject*& OutValue) const { return Queue.PeekBack(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekAt(UObject*& OutValue, const int32 Index) const { return Queue.PeekAt(OutValue, Index); }
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
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void Initialize(const int32 InitialCapacity = 32, const int32 InGrowthSize = 32)
    {
        Queue = TArrayQueue<TSubclassOf<AActor>>(FMath::Max(1, InitialCapacity), FMath::Max(1, InGrowthSize));
    }
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void SetGrowthSize(const int32 InGrowthSize = 32)
    {
        Queue.SetGrowthSize(FMath::Max(1, InGrowthSize));
    }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const TSubclassOf<AActor> Value) { Queue.Enqueue(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(TSubclassOf<AActor>& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopOut(TSubclassOf<AActor>& OutValue, int32& OutLogicalIndex) { return Queue.PopOut(OutValue, OutLogicalIndex); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Pop() { return Queue.Pop(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 GetIndexOfElement(const TSubclassOf<AActor> Value) { return Queue.GetIndexOfElement(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool OverwriteInQueue(const int32 TargetIndex, const TSubclassOf<AActor> Value) { return Queue.OverwriteInQueue(TargetIndex, Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    TArray<TSubclassOf<AActor>> ToArray() const { return Queue.ToArray(); } 

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Capacity() const { return Queue.Capacity(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(TSubclassOf<AActor>& OutValue) const { return Queue.PeekFront(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(TSubclassOf<AActor>& OutValue) const { return Queue.PeekBack(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekAt(TSubclassOf<AActor>& OutValue, const int32 Index) const { return Queue.PeekAt(OutValue, Index); }
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
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void Initialize(const int32 InitialCapacity = 32, const int32 InGrowthSize = 32)
    {
        Queue = TArrayQueue<FString>(FMath::Max(1, InitialCapacity), FMath::Max(1, InGrowthSize));
    }
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void SetGrowthSize(const int32 InGrowthSize = 32)
    {
        Queue.SetGrowthSize(FMath::Max(1, InGrowthSize));
    }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const FString& Value) { Queue.Enqueue(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(FString& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopOut(FString& OutValue, int32& OutLogicalIndex) { return Queue.PopOut(OutValue, OutLogicalIndex); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Pop() { return Queue.Pop(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 GetIndexOfElement(const FString Value) { return Queue.GetIndexOfElement(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool OverwriteInQueue(const int32 TargetIndex, const FString Value) { return Queue.OverwriteInQueue(TargetIndex, Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    TArray<FString> ToArray() const { return Queue.ToArray(); } 

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Capacity() const { return Queue.Capacity(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(FString& OutValue) const { return Queue.PeekFront(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(FString& OutValue) const { return Queue.PeekBack(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekAt(FString& OutValue, const int32 Index) const { return Queue.PeekAt(OutValue, Index); }
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
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void Initialize(const int32 InitialCapacity = 32, const int32 InGrowthSize = 32)
    {
        Queue = TArrayQueue<FVector>(FMath::Max(1, InitialCapacity), FMath::Max(1, InGrowthSize));
    }
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void SetGrowthSize(const int32 InGrowthSize = 32)
    {
        Queue.SetGrowthSize(FMath::Max(1, InGrowthSize));
    }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const FVector& Value) { Queue.Enqueue(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(FVector& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopOut(FVector& OutValue, int32& OutLogicalIndex) { return Queue.PopOut(OutValue, OutLogicalIndex); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Pop() { return Queue.Pop(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 GetIndexOfElement(const FVector Value) { return Queue.GetIndexOfElement(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool OverwriteInQueue(const int32 TargetIndex, const FVector Value) { return Queue.OverwriteInQueue(TargetIndex, Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    TArray<FVector> ToArray() const { return Queue.ToArray(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Capacity() const { return Queue.Capacity(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(FVector& OutValue) const { return Queue.PeekFront(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(FVector& OutValue) const { return Queue.PeekBack(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekAt(FVector& OutValue, const int32 Index) const { return Queue.PeekAt(OutValue, Index); }
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
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void Initialize(const int32 InitialCapacity = 32, const int32 InGrowthSize = 32)
    {
        Queue = TArrayQueue<FRotator>(FMath::Max(1, InitialCapacity), FMath::Max(1, InGrowthSize));
    }
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void SetGrowthSize(const int32 InGrowthSize = 32)
    {
        Queue.SetGrowthSize(FMath::Max(1, InGrowthSize));
    }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const FRotator& Value) { Queue.Enqueue(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(FRotator& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopOut(FRotator& OutValue, int32& OutLogicalIndex) { return Queue.PopOut(OutValue, OutLogicalIndex); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Pop() { return Queue.Pop(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 GetIndexOfElement(const FRotator Value) { return Queue.GetIndexOfElement(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool OverwriteInQueue(const int32 TargetIndex, const FRotator Value) { return Queue.OverwriteInQueue(TargetIndex, Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    TArray<FRotator> ToArray() const { return Queue.ToArray(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Capacity() const { return Queue.Capacity(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(FRotator& OutValue) const { return Queue.PeekFront(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(FRotator& OutValue) const { return Queue.PeekBack(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekAt(FRotator& OutValue, const int32 Index) const { return Queue.PeekAt(OutValue, Index); }
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
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void Initialize(const int32 InitialCapacity = 32, const int32 InGrowthSize = 32)
    {
        Queue = TArrayQueue<FTransform>(FMath::Max(1, InitialCapacity), FMath::Max(1, InGrowthSize));
    }
    UFUNCTION(BlueprintCallable, Category="Queue", meta=(ClampMin="1", UIMin="1"))
    void SetGrowthSize(const int32 InGrowthSize = 32)
    {
        Queue.SetGrowthSize(FMath::Max(1, InGrowthSize));
    }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Enqueue(const FTransform& Value) { Queue.Enqueue(Value); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Dequeue(FTransform& OutValue) { return Queue.Dequeue(OutValue); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PopOut(FTransform& OutValue, int32& OutLogicalIndex) { return Queue.PopOut(OutValue, OutLogicalIndex); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool Pop() { return Queue.Pop(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 GetIndexOfElement(const FTransform& Value) const
    {
        for (int32 i = 0; i < Queue.Num(); ++i)
        {
            if (FTransform Elem; Queue.PeekAt(Elem, i))
            {
                if (Elem.GetLocation() == Value.GetLocation() &&
                    Elem.GetRotation() == Value.GetRotation() &&
                    Elem.GetScale3D() == Value.GetScale3D())
                {
                    return i;
                }
            }
        }
        return INDEX_NONE;
    }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool OverwriteInQueue(const int32 TargetIndex, const FTransform Value) { return Queue.OverwriteInQueue(TargetIndex, Value); }

    UFUNCTION(BlueprintCallable, Category="Queue")
    TArray<FTransform> ToArray() const { return Queue.ToArray(); } 

    UFUNCTION(BlueprintCallable, Category="Queue")
    void Clear() { Queue.Clear(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    void Empty() { Queue.Empty(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Num() const { return Queue.Num(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    int32 Capacity() const { return Queue.Capacity(); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool IsEmpty() const { return Queue.IsEmpty(); }
    
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekFront(FTransform& OutValue) const { return Queue.PeekFront(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekBack(FTransform& OutValue) const { return Queue.PeekBack(OutValue); }
    UFUNCTION(BlueprintCallable, Category="Queue")
    bool PeekAt(FTransform& OutValue, const int32 Index) const { return Queue.PeekAt(OutValue, Index); }
};
#pragma endregion

/* 
 * End of TArrayQueue / UE-Queue Lite Plugin
 * 
 * MIT License applies to all code in this file.
 * 
 * For documentation, examples, and updates:
 *   GitHub: https://github.com/LukasRuee/UE-Queue-Lite-Plugin
 * 
 * Keep your circular queues efficient, clean, and safe!
 */
