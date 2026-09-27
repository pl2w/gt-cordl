#pragma once
// IWYU pragma private; include "Fusion/Allocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Allocator_BlockList_def.hpp"
#include "Fusion/zzzz__Allocator_Block_def.hpp"
#include "Fusion/zzzz__Allocator_Bucket_def.hpp"
#include "Fusion/zzzz__Allocator_Config_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator)
namespace Fusion::Statistics {
struct MemoryStatisticsSnapshot;
}
namespace Fusion {
class Allocator_AllocatorBucketSize;
}
namespace Fusion {
struct Ptr;
}
namespace GlobalNamespace {
struct Allocator_BlockList;
}
namespace GlobalNamespace {
struct Allocator_Block;
}
namespace GlobalNamespace {
struct Allocator_Bucket;
}
namespace GlobalNamespace {
struct Allocator_Config;
}
namespace GlobalNamespace {
struct Allocator_Segment;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Fusion {
class Allocator;
}
namespace Fusion {
class Allocator_AllocatorBucketSize;
}
// Write type traits
MARK_REF_T(::Fusion::Allocator*);
MARK_REF_T(::Fusion::Allocator_AllocatorBucketSize*);
DEFINE_IL2CPP_CLASS(::Fusion::Allocator*, "Fusion", "Allocator");
DEFINE_IL2CPP_CLASS(::Fusion::Allocator_AllocatorBucketSize*, "Fusion", "Allocator/AllocatorBucketSize");
// Dependencies Fusion.Allocator::Block, Fusion.Allocator::BlockList, Fusion.Allocator::Bucket, Fusion.Allocator::Config, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Allocator
class CORDL_TYPE Allocator : public ::System::Object {
public:
// Declarations
using AllocatorBucketSize = ::Fusion::Allocator_AllocatorBucketSize;

using Block = ::GlobalNamespace::Allocator_Block;

using BlockList = ::GlobalNamespace::Allocator_BlockList;

using Bucket = ::GlobalNamespace::Allocator_Bucket;

using Config = ::GlobalNamespace::Allocator_Config;

using Segment = ::GlobalNamespace::Allocator_Segment;

 __declspec(property(get=get_Configuration)) ::GlobalNamespace::Allocator_Config  Configuration;

/// @brief Field _allocated, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__allocated, put=__cordl_internal_set__allocated)) ::System::Collections::Generic::HashSet_1<::System::IntPtr>*  _allocated;

/// @brief Field _blocks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__blocks, put=__cordl_internal_set__blocks)) ::ArrayW<::GlobalNamespace::Allocator_Block>  _blocks;

/// @brief Field _blocksFreeList, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__blocksFreeList, put=__cordl_internal_set__blocksFreeList)) ::GlobalNamespace::Allocator_BlockList  _blocksFreeList;

/// @brief Field _buckets, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__buckets, put=__cordl_internal_set__buckets)) ::ArrayW<::GlobalNamespace::Allocator_Bucket>  _buckets;

/// @brief Field _bucketsLists, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__bucketsLists, put=__cordl_internal_set__bucketsLists)) ::ArrayW<::GlobalNamespace::Allocator_BlockList>  _bucketsLists;

/// @brief Field _bucketsMap, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__bucketsMap, put=__cordl_internal_set__bucketsMap)) ::ArrayW<uint8_t>  _bucketsMap;

/// @brief Field _config, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::GlobalNamespace::Allocator_Config  _config;

/// @brief Field _heap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__heap, put=__cordl_internal_set__heap)) uint8_t*  _heap;

/// @brief Field _root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) uint8_t*  _root;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Alloc() ;

/// @brief Method Alloc, addr 0x5f6c450, size 0x500, virtual false, abstract: false, final false
inline void* Alloc(int32_t  size) ;

/// @brief Method AllocAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* AllocAndClear() ;

/// @brief Method AllocAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* AllocAndClear(::Fusion::Allocator*  allocator) ;

/// @brief Method AllocAndClear, addr 0x5f6bb18, size 0x38, virtual false, abstract: false, final false
static inline void* AllocAndClear(::Fusion::Allocator*  allocator, int32_t  size) ;

/// @brief Method AllocAndClear, addr 0x5f6bb50, size 0x30, virtual false, abstract: false, final false
inline void* AllocAndClear(int32_t  size) ;

/// @brief Method AllocAndClearArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* AllocAndClearArray(::Fusion::Allocator*  allocator, int32_t  length) ;

/// @brief Method AllocAndClearArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* AllocAndClearArray(int32_t  length) ;

/// @brief Method AllocArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* AllocArray(int32_t  length) ;

/// @brief Method CanAllocSize, addr 0x5f6cd64, size 0x28, virtual false, abstract: false, final false
inline bool CanAllocSize(int32_t  size) ;

/// @brief Method Create, addr 0x5f6ef44, size 0x68, virtual false, abstract: false, final false
static inline ::Fusion::Allocator* Create(::GlobalNamespace::Allocator_Config  config) ;

/// [Conditional("DEBUG")]
/// @brief Method DebugVerifyBucketIntegrity, addr 0x5f6d224, size 0x1a0, virtual false, abstract: false, final false
inline void DebugVerifyBucketIntegrity(int32_t  index) ;

/// @brief Method Dispose, addr 0x5f6bb90, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x5f6bb80, size 0x10, virtual false, abstract: false, final false
static inline void Dispose(::Fusion::Allocator*  allocator) ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Free(::Fusion::Allocator*  allocator, ::by_ref<T*>  ptr) ;

/// @brief Method FreeInternal, addr 0x5f6de2c, size 0x8a4, virtual false, abstract: false, final false
inline void FreeInternal(void*  ptr) ;

/// @brief Method GetBlock, addr 0x5f6bf28, size 0x64, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::Allocator_Block> GetBlock(int32_t  index) ;

/// @brief Method GetBlock, addr 0x5f6bf8c, size 0x80, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::Allocator_Block> GetBlock(int64_t  index) ;

/// @brief Method GetBlockBucket, addr 0x5f6c00c, size 0x80, virtual false, abstract: false, final false
inline int32_t GetBlockBucket(int64_t  index) ;

/// @brief Method GetBlockForPointer, addr 0x5f6c08c, size 0xdc, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::Allocator_Block> GetBlockForPointer(void*  ptr) ;

/// @brief Method GetBlockIndexForPointer, addr 0x5f6c168, size 0x98, virtual false, abstract: false, final false
inline int32_t GetBlockIndexForPointer(void*  ptr) ;

/// @brief Method GetBlockMemory, addr 0x5f6c200, size 0x18, virtual false, abstract: false, final false
inline uint8_t* GetBlockMemory(::by_ref<::GlobalNamespace::Allocator_Block>  block) ;

/// @brief Method GetBlockMemory, addr 0x5f6c228, size 0x54, virtual false, abstract: false, final false
inline uint8_t* GetBlockMemory(int64_t  blockIndex) ;

/// @brief Method GetBucket, addr 0x5f6be38, size 0x50, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::Allocator_Bucket> GetBucket(int32_t  index) ;

/// @brief Method GetBucketForBlock, addr 0x5f6be88, size 0x50, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::Allocator_Bucket> GetBucketForBlock(::by_ref<::GlobalNamespace::Allocator_Block>  block) ;

/// @brief Method GetBucketList, addr 0x5f6bed8, size 0x50, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::Allocator_BlockList> GetBucketList(int32_t  index) ;

/// @brief Method GetFreeSegmentsInBytes, addr 0x5f6cd44, size 0x20, virtual false, abstract: false, final false
inline int32_t GetFreeSegmentsInBytes() ;

/// @brief Method GetMemorySnapshot, addr 0x5f6ca20, size 0x264, virtual false, abstract: false, final false
inline void GetMemorySnapshot(::by_ref<::Fusion::Statistics::MemoryStatisticsSnapshot>  snapshot) ;

/// @brief Method GetSegmentRoot, addr 0x5f6c3d0, size 0x80, virtual false, abstract: false, final false
inline void* GetSegmentRoot(void*  ptr) ;

/// @brief Method GetTotalSegmentsUsedInBytes, addr 0x5f6c950, size 0xd0, virtual false, abstract: false, final false
inline int32_t GetTotalSegmentsUsedInBytes() ;

/// [Conditional("ENABLE_ALLOCATOR_SENTINELS")]
/// @brief Method InitSegmentSentinels, addr 0x5f6efac, size 0xdc, virtual false, abstract: false, final false
static inline void InitSegmentSentinels(void*  memory, int32_t  size) ;

/// @brief Method IsPointerInHeap, addr 0x5f6bd40, size 0x2c, virtual false, abstract: false, final false
inline bool IsPointerInHeap(void*  p) ;

/// @brief Method LogPointerInfo, addr 0x5f6bbf0, size 0xf0, virtual false, abstract: false, final false
inline ::StringW LogPointerInfo(void*  p) ;

static inline ::Fusion::Allocator* New_ctor(::GlobalNamespace::Allocator_Config  config) ;

/// @brief Method Ptr, addr 0x5f6bcec, size 0x54, virtual false, abstract: false, final false
inline ::Fusion::Ptr Ptr(void*  p) ;

/// @brief Method Ptr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* Ptr(::Fusion::Ptr  ptr) ;

/// @brief Method Ptr, addr 0x5f6bd6c, size 0x98, virtual false, abstract: false, final false
inline void* Ptr(::Fusion::Ptr  ptr) ;

/// @brief Method TryAllocateSegmentFromBlock, addr 0x5f6d3c4, size 0x668, virtual false, abstract: false, final false
inline void* TryAllocateSegmentFromBlock(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Allocator_Bucket>  bucket, ::by_ref<::GlobalNamespace::Allocator_Block>  block, int32_t  size) ;

/// @brief Method TryGetSegmentRoot, addr 0x5f6c27c, size 0x154, virtual false, abstract: false, final false
inline bool TryGetSegmentRoot(void*  ptr, ::by_ref<void*>  root, ::by_ref<int64_t>  segmentIndex) ;

/// @brief Method ValidatePointer, addr 0x5f6cd90, size 0x1e4, virtual false, abstract: false, final false
inline bool ValidatePointer(void*  ptr, ::by_ref<::StringW>  error) ;

/// [Conditional("ENABLE_ALLOCATOR_SENTINELS")]
/// @brief Method ValidateSegmentSentinels, addr 0x5f6f088, size 0x514, virtual false, abstract: false, final false
inline void ValidateSegmentSentinels(void*  memory, int32_t  size) ;

/// @brief Method ValidateSegmentSentinels, addr 0x5f6cf74, size 0x2b0, virtual false, abstract: false, final false
static inline void ValidateSegmentSentinels(void*  memory, int32_t  size, ::by_ref<::StringW>  error) ;

/// @brief Method ValidateSentinels, addr 0x5f6cd8c, size 0x4, virtual false, abstract: false, final false
inline void ValidateSentinels() ;

/// @brief Method WordCount, addr 0x5f6be10, size 0x28, virtual false, abstract: false, final false
static inline int32_t WordCount(int32_t  size) ;

constexpr ::System::Collections::Generic::HashSet_1<::System::IntPtr>* const& __cordl_internal_get__allocated() const;

constexpr ::System::Collections::Generic::HashSet_1<::System::IntPtr>*& __cordl_internal_get__allocated() ;

constexpr ::ArrayW<::GlobalNamespace::Allocator_Block> const& __cordl_internal_get__blocks() const;

constexpr ::ArrayW<::GlobalNamespace::Allocator_Block>& __cordl_internal_get__blocks() ;

constexpr ::GlobalNamespace::Allocator_BlockList const& __cordl_internal_get__blocksFreeList() const;

constexpr ::GlobalNamespace::Allocator_BlockList& __cordl_internal_get__blocksFreeList() ;

constexpr ::ArrayW<::GlobalNamespace::Allocator_Bucket> const& __cordl_internal_get__buckets() const;

constexpr ::ArrayW<::GlobalNamespace::Allocator_Bucket>& __cordl_internal_get__buckets() ;

constexpr ::ArrayW<::GlobalNamespace::Allocator_BlockList> const& __cordl_internal_get__bucketsLists() const;

constexpr ::ArrayW<::GlobalNamespace::Allocator_BlockList>& __cordl_internal_get__bucketsLists() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__bucketsMap() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__bucketsMap() ;

constexpr ::GlobalNamespace::Allocator_Config const& __cordl_internal_get__config() const;

constexpr ::GlobalNamespace::Allocator_Config& __cordl_internal_get__config() ;

constexpr uint8_t* const& __cordl_internal_get__heap() const;

constexpr uint8_t*& __cordl_internal_get__heap() ;

constexpr uint8_t* const& __cordl_internal_get__root() const;

constexpr uint8_t*& __cordl_internal_get__root() ;

constexpr void __cordl_internal_set__allocated(::System::Collections::Generic::HashSet_1<::System::IntPtr>*  value) ;

constexpr void __cordl_internal_set__blocks(::ArrayW<::GlobalNamespace::Allocator_Block>  value) ;

constexpr void __cordl_internal_set__blocksFreeList(::GlobalNamespace::Allocator_BlockList  value) ;

constexpr void __cordl_internal_set__buckets(::ArrayW<::GlobalNamespace::Allocator_Bucket>  value) ;

constexpr void __cordl_internal_set__bucketsLists(::ArrayW<::GlobalNamespace::Allocator_BlockList>  value) ;

constexpr void __cordl_internal_set__bucketsMap(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__config(::GlobalNamespace::Allocator_Config  value) ;

constexpr void __cordl_internal_set__heap(uint8_t*  value) ;

constexpr void __cordl_internal_set__root(uint8_t*  value) ;

/// @brief Method .ctor, addr 0x5f6e918, size 0x47c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Allocator_Config  config) ;

/// @brief Method get_Configuration, addr 0x5f6bbe0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::Allocator_Config get_Configuration() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Allocator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Allocator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Allocator(Allocator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Allocator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Allocator(Allocator const& ) = delete;

/// @brief Field BLOCK_INVALID offset 0xffffffff size 0x4
static constexpr int32_t  BLOCK_INVALID{static_cast<int32_t>(0xffffffff)};

/// @brief Field BUCKET_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  BUCKET_COUNT{static_cast<int32_t>(0x39)};

/// @brief Field BUCKET_INVALID offset 0xffffffff size 0x1
static constexpr uint8_t  BUCKET_INVALID{static_cast<uint8_t>(0xffu)};

/// @brief Field HEAP_ALIGNMENT offset 0xffffffff size 0x4
static constexpr int32_t  HEAP_ALIGNMENT{static_cast<int32_t>(0x8)};

/// @brief Field PATTERN offset 0xffffffff size 0x1
static constexpr uint8_t  PATTERN{static_cast<uint8_t>(0xaau)};

/// @brief Field PTR_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  PTR_SIZE{static_cast<int32_t>(0x8)};

/// @brief Field REPLICATE_WORD_ALIGN offset 0xffffffff size 0x4
static constexpr int32_t  REPLICATE_WORD_ALIGN{static_cast<int32_t>(0x4)};

/// @brief Field REPLICATE_WORD_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  REPLICATE_WORD_SHIFT{static_cast<int32_t>(0x2)};

/// @brief Field REPLICATE_WORD_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  REPLICATE_WORD_SIZE{static_cast<int32_t>(0x4)};

/// @brief Field SentinelLeadingPattern offset 0xffffffff size 0x8
static constexpr uint64_t  SentinelLeadingPattern{static_cast<uint64_t>(0x5476c7fa68f1974bu)};

/// @brief Field SentinelLeadingSize offset 0xffffffff size 0x4
static constexpr int32_t  SentinelLeadingSize{static_cast<int32_t>(0x0)};

/// @brief Field SentinelTrailingPattern offset 0xffffffff size 0x8
static constexpr uint64_t  SentinelTrailingPattern{static_cast<uint64_t>(0xc7437b2e7d87108du)};

/// @brief Field SentinelTrailingSize offset 0xffffffff size 0x4
static constexpr int32_t  SentinelTrailingSize{static_cast<int32_t>(0x0)};

/// @brief Field WORD_BYTE_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  WORD_BYTE_SIZE{static_cast<int32_t>(0x8)};

/// @brief Field WORD_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  WORD_SHIFT{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18793};

/// @brief Field _root, offset: 0x10, size: 0x8, def value: None
 uint8_t*  ____root;

/// @brief Field _heap, offset: 0x18, size: 0x8, def value: None
 uint8_t*  ____heap;

/// @brief Field _blocks, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Allocator_Block>  ____blocks;

/// @brief Field _blocksFreeList, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::Allocator_BlockList  ____blocksFreeList;

/// @brief Field _buckets, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Allocator_Bucket>  ____buckets;

/// @brief Field _bucketsMap, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____bucketsMap;

/// @brief Field _bucketsLists, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Allocator_BlockList>  ____bucketsLists;

/// @brief Field _config, offset: 0x48, size: 0xc, def value: None
 ::GlobalNamespace::Allocator_Config  ____config;

/// @brief Field _allocated, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::IntPtr>*  ____allocated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Allocator, ____root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Allocator, ____heap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Allocator, ____blocks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Allocator, ____blocksFreeList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Allocator, ____buckets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Allocator, ____bucketsMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Allocator, ____bucketsLists) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Allocator, ____config) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Allocator, ____allocated) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Fusion::Allocator) == 0x60, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Allocator/AllocatorBucketSize
class CORDL_TYPE Allocator_AllocatorBucketSize : public ::System::Object {
public:
// Declarations
/// @brief Field Sizes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Sizes, put=setStaticF_Sizes)) ::ArrayW<int32_t>  Sizes;

static inline ::ArrayW<int32_t> getStaticF_Sizes() ;

static inline void setStaticF_Sizes(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Allocator_AllocatorBucketSize() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Allocator_AllocatorBucketSize", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Allocator_AllocatorBucketSize(Allocator_AllocatorBucketSize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Allocator_AllocatorBucketSize", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Allocator_AllocatorBucketSize(Allocator_AllocatorBucketSize const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18790};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Allocator_AllocatorBucketSize) == 0x10, "Size mismatch!");

} // namespace end def Fusion
