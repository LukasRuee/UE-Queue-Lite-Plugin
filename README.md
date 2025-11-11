# UnrealTArrayQueue

A lightweight circular queue implementation for Unreal Engine based on `TArray`.  
Provides efficient O(1) enqueue/dequeue operations and includes Blueprint-accessible wrapper classes for common Unreal types.

---

## Features

- Header-only `TArrayQueue<T>` template for C++
- Efficient circular buffer with automatic growth
- Supports range-based iteration
- Safe and minimal memory overhead
- Blueprint wrappers included for:
  - `int32`
  - `float`
  - `UObject*`
  - `AActor*`
  - `FString`
  - `FVector`
  - `FRotator`
  - `FTransform`
  - `TSubclassOf<AActor>`

---

## Installation

You can use either the **source version** or the **prebuilt plugin**.

### Use prebuilt plugin
1. Download the `Zip-Folder` from this repository.
2. Extract it into your project’s `Plugins/` folder.
3. Open your Unreal project.
4. Enable the plugin in `Edit → Plugins`.
5. Restart the editor if prompted.

### Build from source
1. Clone this repositorys `TArrayQueue.h` into your project’s `Source` folder.
2. Regenerate project files.
3. Rebuild your project.

---

## Usage in C++

```cpp
#include "TArrayQueue.h"

void Example()
{
 TArrayQueue<int32> Queue;

 Queue.Enqueue(10);
 Queue.Enqueue(20);
 Queue.Enqueue(30);

 int32 Value;
 if (Queue.Dequeue(Value))
 {
     UE_LOG(LogTemp, Log, TEXT("Dequeued: %d"), Value);
 }

 UE_LOG(LogTemp, Log, TEXT("Remaining elements: %d"), Queue.Num());
}
```

## Usage in Blueprints
Each supported type has its own Blueprint wrapper class:
- U**Int**QueueObject
- U**Float**QueueObject
- U**String**QueueObject
- U**Transform**QueueObject
- U**Vector**QueueObject
- U**Rotator**QueueObject
- U**Object**QueueObject
- U**Actor**QueueObject
- U**Class**QueueObject **(TSubclassOf<AActor>)**

Blueprint nodes include:
- Enqueue
- Dequeue
- Is Empty
- Num
- Clear

These queues **DO NOT** automatically initialize when used in Blueprints.\
You have to construct them using the **Construct Object from Class**

## API Reference

| Function   | Description|
| :----- | :---------------------------------------------------------------------- |
| Enqueue(const T& Item)  | Adds an element to the back of the queue|
| Dequeue(T& OutItem)    | Removes and returns the front element|
| PopLast(T& OutItem) | Removes and returns the last element|
| Front() / Back() | Returns front or back elements directly|
| PeekFront() / PeekBack() | Access front or back elements directly, but safe |
| Clear() | Resets the queue |
| Empty() | Resets the queue and frees memory |
| Num() | Returns the current number of elements |
| IsEmpty() | Checks if the queue is empty |

## Notes
- Works in both Runtime and Editor builds.
- Compatible with Unreal Engine 5.6.1 (And probably older versions)
- Fully usable in both C++ and Blueprints.
- Does not depend on engine internals beyond TArray and standard Unreal headers.

*There might be future updates. Pull requests are welcome.*

License
MIT License © 2025
You may use, modify, and distribute freely with attribution.

