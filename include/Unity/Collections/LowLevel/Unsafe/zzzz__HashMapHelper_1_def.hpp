#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/HashMapHelper_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashMapHelper_1)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
template<typename TKey>
struct HashMapHelper_1_Enumerator;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template<typename TKey>
struct HashMapHelper_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1, "Unity.Collections.LowLevel.Unsafe", "HashMapHelper`1");
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template<typename TKey>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.HashMapHelper`1<TKey>
struct CORDL_TYPE HashMapHelper_1 {
public:
// Declarations
using Enumerator = ::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* Alloc(int32_t  capacity, int32_t  sizeOfValueT, int32_t  minGrowth, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method CalcCapacityCeilPow2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t CalcCapacityCeilPow2(int32_t  capacity) ;

/// @brief Method CalculateDataSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t CalculateDataSize(int32_t  capacity, int32_t  bucketCapacity, int32_t  sizeOfTValue, ::by_ref<int32_t>  outKeyOffset, ::by_ref<int32_t>  outNextOffset, ::by_ref<int32_t>  outBucketOffset) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Find(TKey  key) ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Free(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  data) ;

/// @brief Method GetBucket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetBucket(/* [IsReadOnly] */ ::by_ref<TKey>  key) ;

/// @brief Method GetBucketSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline int32_t GetBucketSize(int32_t  capacity) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(int32_t  capacity, int32_t  sizeOfValueT, int32_t  minGrowth, ::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool MoveNext(::by_ref<int32_t>  bucketIndex, ::by_ref<int32_t>  nextIndex, ::by_ref<int32_t>  index) ;

/// @brief Method MoveNextSearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool MoveNextSearch(::by_ref<int32_t>  bucketIndex, ::by_ref<int32_t>  nextIndex, ::by_ref<int32_t>  index) ;

/// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Resize(int32_t  newCapacity) ;

/// @brief Method ResizeExact, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ResizeExact(int32_t  newCapacity, int32_t  newBucketCapacity) ;

/// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t TryAdd(/* [IsReadOnly] */ ::by_ref<TKey>  key) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  item) ;

/// @brief Method TryRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t TryRemove(TKey  key) ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

// Ctor Parameters []
// @brief default ctor
constexpr HashMapHelper_1() ;

// Ctor Parameters [CppParam { name: "Ptr", ty: "uint8_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Keys", ty: "TKey*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buckets", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Log2MinGrowth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BucketCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllocatedIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FirstFreeIdx", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SizeOfTValue", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None, comment: None }]
constexpr HashMapHelper_1(uint8_t*  Ptr, TKey*  Keys, int32_t*  Next, int32_t*  Buckets, int32_t  Count, int32_t  Capacity, int32_t  Log2MinGrowth, int32_t  BucketCapacity, int32_t  AllocatedIndex, int32_t  FirstFreeIdx, int32_t  SizeOfTValue, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field kMinimumCapacity offset 0xffffffff size 0x4
static constexpr int32_t  kMinimumCapacity{static_cast<int32_t>(0x100)};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
 uint8_t*  Ptr;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Keys, offset: 0x8, size: 0x8, def value: None
 TKey*  Keys;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Next, offset: 0x10, size: 0x8, def value: None
 int32_t*  Next;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Buckets, offset: 0x18, size: 0x8, def value: None
 int32_t*  Buckets;

/// @brief Field Count, offset: 0x20, size: 0x4, def value: None
 int32_t  Count;

/// @brief Field Capacity, offset: 0x24, size: 0x4, def value: None
 int32_t  Capacity;

/// @brief Field Log2MinGrowth, offset: 0x28, size: 0x4, def value: None
 int32_t  Log2MinGrowth;

/// @brief Field BucketCapacity, offset: 0x2c, size: 0x4, def value: None
 int32_t  BucketCapacity;

/// @brief Field AllocatedIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  AllocatedIndex;

/// @brief Field FirstFreeIdx, offset: 0x34, size: 0x4, def value: None
 int32_t  FirstFreeIdx;

/// @brief Field SizeOfTValue, offset: 0x38, size: 0x4, def value: None
 int32_t  SizeOfTValue;

/// @brief Field Allocator, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
