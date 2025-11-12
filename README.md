# UnrealTArrayQueue

A lightweight, header-only circular queue implementation for Unreal Engine based on `TArray`.  
Provides efficient O(1) enqueue/dequeue operations and includes Blueprint-accessible wrappers for common Unreal types.

---

## Features

- Header-only `TArrayQueue<T>` template for C++
- Efficient circular buffer with automatic growth
- Supports range-based iteration
- Minimal memory overhead
- Blueprint wrappers included for:
  - `int32`, `float`
  - `UObject*`, `AActor*`, `TSubclassOf<AActor>`
  - `FString`, `FVector`, `FRotator`, `FTransform`

## Installation

You can use the **prebuilt plugin** or **build from source**:

### Prebuilt Plugin

1. Download the zip from this repository.  
2. Extract it into your project’s `Plugins/` folder.  
3. Open your Unreal project and enable the plugin via **Edit → Plugins**.  
4. Restart the editor if prompted.

### Build from Source

1. Copy `TArrayQueue.h` into your project’s `Source` folder.  
2. Regenerate project files and rebuild your project.  

## Documentation

- Wiki **Home**: [Wiki]([https://github.com/LukasRuee/UE-Queue-Lite-Plugin/wiki/C++-Usage](https://github.com/LukasRuee/UE-Queue-Lite-Plugin/wiki))
- Full **C++ usage guide**: [C++ Usage](https://github.com/LukasRuee/UE-Queue-Lite-Plugin/wiki/C++-Usage)
- Full **Blueprint usage guide**: [Blueprint Usage](https://github.com/LukasRuee/UE-Queue-Lite-Plugin/wiki/Blueprint-Usage)
- API reference, examples, and advanced tips are available in the wiki.

## Quick Example (C++)

```cpp
#include "TArrayQueue.h"

TArrayQueue<int32> Queue;
Queue.Enqueue(10);
Queue.Enqueue(20);

int32 Value;
if (Queue.Dequeue(Value))
{
    UE_LOG(LogTemp, Log, TEXT("Dequeued: %d"), Value);
}
```
For more examples and usage patterns, see the C++ Usage guide.

License
MIT License © 2025 LukasRuee
You may use, modify, and distribute freely with attribution.
