#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__DynamicHeap_BlockList_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Config_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Phase_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap)
namespace Fusion {
class DynamicHeap_BinSizes;
}
namespace Fusion {
class DynamicHeap_CollectGarbageDelegate;
}
namespace Fusion {
class DynamicHeap_Ignore;
}
namespace Fusion {
class DynamicHeap_TypeData;
}
namespace Fusion {
class DynamicHeap___c;
}
namespace Fusion {
class DynamicHeap___c__DisplayClass44_0;
}
namespace GlobalNamespace {
struct DynamicHeap_Bin;
}
namespace GlobalNamespace {
struct DynamicHeap_BlockList;
}
namespace GlobalNamespace {
struct DynamicHeap_Block;
}
namespace GlobalNamespace {
struct DynamicHeap_Config;
}
namespace GlobalNamespace {
struct DynamicHeap_ObjectFlags;
}
namespace GlobalNamespace {
struct DynamicHeap_ObjectFree;
}
namespace GlobalNamespace {
struct DynamicHeap_Object;
}
namespace GlobalNamespace {
struct DynamicHeap_PageList;
}
namespace GlobalNamespace {
struct DynamicHeap_Page;
}
namespace GlobalNamespace {
struct DynamicHeap_Phase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class DynamicHeap_BinSizes;
}
namespace Fusion {
class DynamicHeap_CollectGarbageDelegate;
}
namespace Fusion {
class DynamicHeap_Ignore;
}
namespace Fusion {
class DynamicHeap_TypeData;
}
namespace Fusion {
class DynamicHeap___c;
}
namespace Fusion {
class DynamicHeap___c__DisplayClass44_0;
}
namespace Fusion {
struct DynamicHeap;
}
// Write type traits
MARK_REF_T(::Fusion::DynamicHeap_BinSizes*);
MARK_REF_T(::Fusion::DynamicHeap_CollectGarbageDelegate*);
MARK_REF_T(::Fusion::DynamicHeap_Ignore*);
MARK_REF_T(::Fusion::DynamicHeap_TypeData*);
MARK_REF_T(::Fusion::DynamicHeap___c*);
MARK_REF_T(::Fusion::DynamicHeap___c__DisplayClass44_0*);
MARK_VAL_T(::Fusion::DynamicHeap);
DEFINE_IL2CPP_CLASS(::Fusion::DynamicHeap_BinSizes*, "Fusion", "DynamicHeap/BinSizes");
DEFINE_IL2CPP_CLASS(::Fusion::DynamicHeap_CollectGarbageDelegate*, "Fusion", "DynamicHeap/CollectGarbageDelegate");
DEFINE_IL2CPP_CLASS(::Fusion::DynamicHeap_Ignore*, "Fusion", "DynamicHeap/Ignore");
DEFINE_IL2CPP_CLASS(::Fusion::DynamicHeap_TypeData*, "Fusion", "DynamicHeap/TypeData");
DEFINE_IL2CPP_CLASS(::Fusion::DynamicHeap___c*, "Fusion", "DynamicHeap/<>c");
DEFINE_IL2CPP_CLASS(::Fusion::DynamicHeap___c__DisplayClass44_0*, "Fusion", "DynamicHeap/<>c__DisplayClass44_0");
DEFINE_IL2CPP_CLASS(::Fusion::DynamicHeap, "Fusion", "DynamicHeap");
// Dependencies Fusion.DynamicHeap::BlockList, Fusion.DynamicHeap::Config, Fusion.DynamicHeap::Phase
namespace Fusion {
// Is value type: true
// CS Name: Fusion.DynamicHeap
struct CORDL_TYPE DynamicHeap {
public:
// Declarations
using BinSizes = ::Fusion::DynamicHeap_BinSizes;

using CollectGarbageDelegate = ::Fusion::DynamicHeap_CollectGarbageDelegate;

using Ignore = ::Fusion::DynamicHeap_Ignore;

using TypeData = ::Fusion::DynamicHeap_TypeData;

using __c = ::Fusion::DynamicHeap___c;

using __c__DisplayClass44_0 = ::Fusion::DynamicHeap___c__DisplayClass44_0;

using Bin = ::GlobalNamespace::DynamicHeap_Bin;

using Block = ::GlobalNamespace::DynamicHeap_Block;

using BlockList = ::GlobalNamespace::DynamicHeap_BlockList;

using Config = ::GlobalNamespace::DynamicHeap_Config;

using Object = ::GlobalNamespace::DynamicHeap_Object;

using ObjectFlags = ::GlobalNamespace::DynamicHeap_ObjectFlags;

using ObjectFree = ::GlobalNamespace::DynamicHeap_ObjectFree;

using Page = ::GlobalNamespace::DynamicHeap_Page;

using PageList = ::GlobalNamespace::DynamicHeap_PageList;

using Phase = ::GlobalNamespace::DynamicHeap_Phase;

 __declspec(property(get=get_GCPhase)) ::GlobalNamespace::DynamicHeap_Phase  GCPhase;

 __declspec(property(get=get_GCRoots)) int32_t  GCRoots;

 __declspec(property(get=get_MemoryAllocated)) double_t  MemoryAllocated;

 __declspec(property(get=get_MemoryReserved)) int32_t  MemoryReserved;

 __declspec(property(get=get_ObjectsAllocated)) int32_t  ObjectsAllocated;

/// @brief Field _debruijnTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__debruijnTable, put=setStaticF__debruijnTable)) ::ArrayW<uint8_t>  _debruijnTable;

/// @brief Field _types, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__types, put=setStaticF__types)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>*  _types;

/// @brief Field _typesByOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__typesByOffset, put=setStaticF__typesByOffset)) ::System::Collections::Generic::Dictionary_2<uint16_t,::Fusion::DynamicHeap_TypeData*>*  _typesByOffset;

/// @brief Method Allocate, addr 0x5f8f888, size 0xcc, virtual false, abstract: false, final false
static inline void* Allocate(::Fusion::DynamicHeap*  heap, int32_t  size) ;

/// @brief Method AllocateBlock, addr 0x5f8f1a4, size 0x198, virtual false, abstract: false, final false
static inline void AllocateBlock(::Fusion::DynamicHeap*  heap) ;

/// @brief Method AllocateInternal, addr 0x5f8e8ec, size 0x378, virtual false, abstract: false, final false
static inline uint8_t* AllocateInternal(::Fusion::DynamicHeap*  heap, int32_t  size, ::by_ref<uint8_t>  block) ;

/// @brief Method AllocatePage, addr 0x5f8efb8, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DynamicHeap_Page* AllocatePage(::Fusion::DynamicHeap*  heap) ;

/// @brief Method AllocatePage_Internal, addr 0x5f8f05c, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DynamicHeap_Page* AllocatePage_Internal(::Fusion::DynamicHeap*  heap, bool  mustSucceed) ;

/// @brief Method AllocateTracked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* AllocateTracked(::Fusion::DynamicHeap*  heap, uint16_t  array, bool  root) ;

/// @brief Method AllocateTrackedPointerArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* AllocateTrackedPointerArray(::Fusion::DynamicHeap*  heap, uint16_t  array, bool  root) ;

/// @brief Method BitScan, addr 0x5f8fac4, size 0xa0, virtual false, abstract: false, final false
static inline int32_t BitScan(uint32_t  v) ;

/// @brief Method BlocksWithAvailablePages, addr 0x5f8f148, size 0x5c, virtual false, abstract: false, final false
static inline int32_t BlocksWithAvailablePages(::Fusion::DynamicHeap*  heap) ;

/// [MonoPInvokeCallback(typeof(Fusion.DynamicHeap::CollectGarbageDelegate))]
/// @brief Method CollectGarbage, addr 0x5f8cbe8, size 0x5ac, virtual false, abstract: false, final false
static inline void CollectGarbage(::Fusion::DynamicHeap*  heap, void*  dynamicRoots, int32_t  dynamicRootsLength) ;

/// @brief Method Create, addr 0x5f8d4d4, size 0x8d8, virtual false, abstract: false, final false
static inline ::Fusion::DynamicHeap* Create(::GlobalNamespace::DynamicHeap_Config  config, /* [ParamArray] */ ::ArrayW<::System::Type*>  types) ;

/// @brief Method Create, addr 0x5f8d46c, size 0x68, virtual false, abstract: false, final false
static inline ::Fusion::DynamicHeap* Create(/* [ParamArray] */ ::ArrayW<::System::Type*>  types) ;

/// @brief Method Destroy, addr 0x5f8d3cc, size 0xa0, virtual false, abstract: false, final false
static inline void Destroy(::GlobalNamespace::DynamicHeap_Block*  block) ;

/// @brief Method Destroy, addr 0x5f8d264, size 0x168, virtual false, abstract: false, final false
static inline void Destroy(::Fusion::DynamicHeap*  heap) ;

/// @brief Method ExpandStack, addr 0x5f8fa5c, size 0x68, virtual false, abstract: false, final false
static inline void ExpandStack(::Fusion::DynamicHeap*  heap) ;

/// @brief Method Free, addr 0x5f8f740, size 0x148, virtual false, abstract: false, final false
static inline void Free(::Fusion::DynamicHeap*  heap, void*  ptr) ;

/// @brief Method FreeInternal, addr 0x5f8f53c, size 0x204, virtual false, abstract: false, final false
static inline void FreeInternal(::Fusion::DynamicHeap*  heap, void*  ptr, ::GlobalNamespace::DynamicHeap_Object  objData) ;

/// @brief Method GetArrayLength, addr 0x5f8f954, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetArrayLength(void*  ptr) ;

/// @brief Method GetBin, addr 0x5f8e7ec, size 0xcc, virtual false, abstract: false, final false
static inline int32_t GetBin(int32_t  size) ;

/// @brief Method GetBinByIndex, addr 0x5f8e654, size 0x48, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DynamicHeap_Bin* GetBinByIndex(::Fusion::DynamicHeap*  heap, int32_t  binIndex) ;

/// @brief Method GetBinIndexForSize, addr 0x5f8e69c, size 0x150, virtual false, abstract: false, final false
static inline int32_t GetBinIndexForSize(::Fusion::DynamicHeap*  heap, int32_t  size) ;

/// @brief Method GetPageForPtr, addr 0x5f8f43c, size 0xa0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DynamicHeap_Page* GetPageForPtr(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Block*  block, void*  ptr) ;

/// @brief Method GetPageOffset, addr 0x5f8f4dc, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetPageOffset(::GlobalNamespace::DynamicHeap_Page*  page, ::GlobalNamespace::DynamicHeap_ObjectFree*  obj) ;

/// @brief Method GetTypeOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline uint16_t GetTypeOffset() ;

/// @brief Method InitObj, addr 0x5f8f998, size 0x38, virtual false, abstract: false, final false
static inline void InitObj(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Object*  obj, uint16_t  type, uint16_t  array, uint8_t  block) ;

/// @brief Method InitRoot, addr 0x5f8f9d0, size 0x8c, virtual false, abstract: false, final false
static inline void InitRoot(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Object*  obj) ;

/// @brief Method IsPtrInBlock, addr 0x5f8f3fc, size 0x40, virtual false, abstract: false, final false
static inline bool IsPtrInBlock(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Block*  block, void*  p) ;

/// @brief Method NextGen, addr 0x5f8e614, size 0x40, virtual false, abstract: false, final false
static inline uint16_t NextGen(::Fusion::DynamicHeap*  heap) ;

/// @brief Method ObjectsFreeCount, addr 0x5f8f33c, size 0x98, virtual false, abstract: false, final false
static inline int32_t ObjectsFreeCount(::GlobalNamespace::DynamicHeap_Page*  p) ;

/// @brief Method PagesWithAvailableObjectsInBin, addr 0x5f8ef78, size 0x40, virtual false, abstract: false, final false
static inline int32_t PagesWithAvailableObjectsInBin(::GlobalNamespace::DynamicHeap_Bin*  bin) ;

/// @brief Method RegisterTypes, addr 0x5f8ddac, size 0x868, virtual false, abstract: false, final false
static inline void RegisterTypes(/* [ParamArray] */ ::ArrayW<::System::Type*>  types) ;

/// @brief Method ResolvePageOffset, addr 0x5f8f3d4, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::DynamicHeap_ObjectFree* ResolvePageOffset(::GlobalNamespace::DynamicHeap_Page*  page, int32_t  offset) ;

/// @brief Method SetForcedAlive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* SetForcedAlive(T*  ptr) ;

/// @brief Method ThrowHeapCorrupted, addr 0x5f8f010, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowHeapCorrupted() ;

/// @brief Method TryAllocateFromPage, addr 0x5f8ec64, size 0x314, virtual false, abstract: false, final false
static inline uint8_t* TryAllocateFromPage(::Fusion::DynamicHeap*  heap, ::GlobalNamespace::DynamicHeap_Page*  page, int32_t  size, ::by_ref<uint8_t>  block) ;

/// @brief Method WordCount, addr 0x5f8e8b8, size 0x34, virtual false, abstract: false, final false
static inline int32_t WordCount(int32_t  size) ;

static inline ::ArrayW<uint8_t> getStaticF__debruijnTable() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>* getStaticF__types() ;

static inline ::System::Collections::Generic::Dictionary_2<uint16_t,::Fusion::DynamicHeap_TypeData*>* getStaticF__typesByOffset() ;

/// @brief Method get_GCPhase, addr 0x5f8d25c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::DynamicHeap_Phase get_GCPhase() ;

/// @brief Method get_GCRoots, addr 0x5f8d254, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GCRoots() ;

/// @brief Method get_MemoryAllocated, addr 0x5f8d1ac, size 0xa0, virtual false, abstract: false, final false
inline double_t get_MemoryAllocated() ;

/// @brief Method get_MemoryReserved, addr 0x5f8d194, size 0x18, virtual false, abstract: false, final false
inline int32_t get_MemoryReserved() ;

/// @brief Method get_ObjectsAllocated, addr 0x5f8d24c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ObjectsAllocated() ;

static inline void setStaticF__debruijnTable(::ArrayW<uint8_t>  value) ;

static inline void setStaticF__types(::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>*  value) ;

static inline void setStaticF__typesByOffset(::System::Collections::Generic::Dictionary_2<uint16_t,::Fusion::DynamicHeap_TypeData*>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap() ;

// Ctor Parameters [CppParam { name: "_blocksFreePages", ty: "::GlobalNamespace::DynamicHeap_BlockList", modifiers: "", def_value: None, comment: None }, CppParam { name: "_blocks", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_blocksUsed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bins", ty: "::GlobalNamespace::DynamicHeap_Bin*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_typeMap", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_typeMapLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_typeMapStrides", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_gcGen", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_gcBlock", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_gcBlockPage", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_gcPhase", ty: "::GlobalNamespace::DynamicHeap_Phase", modifiers: "", def_value: None, comment: None }, CppParam { name: "_gcStack", ty: "::GlobalNamespace::DynamicHeap_Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_gcStackCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_gcStackCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_config", ty: "::GlobalNamespace::DynamicHeap_Config", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rootList", ty: "::GlobalNamespace::DynamicHeap_Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rootListCapacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rootListCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_objectsAllocated", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_memoryAllocated", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap(::GlobalNamespace::DynamicHeap_BlockList  _blocksFreePages, ::GlobalNamespace::DynamicHeap_Block*  _blocks, int32_t  _blocksUsed, ::GlobalNamespace::DynamicHeap_Bin*  _bins, int32_t*  _typeMap, int32_t  _typeMapLength, int32_t*  _typeMapStrides, uint16_t  _gcGen, int32_t  _gcBlock, int32_t  _gcBlockPage, ::GlobalNamespace::DynamicHeap_Phase  _gcPhase, ::GlobalNamespace::DynamicHeap_Object*  _gcStack, int32_t  _gcStackCount, int32_t  _gcStackCapacity, ::GlobalNamespace::DynamicHeap_Config  _config, ::GlobalNamespace::DynamicHeap_Object*  _rootList, int32_t  _rootListCapacity, int32_t  _rootListCount, int32_t  _objectsAllocated, int32_t  _memoryAllocated) noexcept;

/// @brief Field BIN_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  BIN_COUNT{static_cast<int32_t>(0x31)};

/// @brief Field MAX_BLOCK_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  MAX_BLOCK_COUNT{static_cast<int32_t>(0xff)};

/// @brief Field PAGE_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  PAGE_SHIFT{static_cast<int32_t>(0xf)};

/// @brief Field PAGE_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  PAGE_SIZE{static_cast<int32_t>(0x8000)};

/// @brief Field PAGE_WORD_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  PAGE_WORD_COUNT{static_cast<int32_t>(0x1000)};

/// @brief Field WORD_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  WORD_SHIFT{static_cast<int32_t>(0x3)};

/// @brief Field WORD_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  WORD_SIZE{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field _blocksFreePages, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::DynamicHeap_BlockList  _blocksFreePages;

/// @brief Field _blocks, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Block*  _blocks;

/// @brief Field _blocksUsed, offset: 0x20, size: 0x4, def value: None
 int32_t  _blocksUsed;

/// @brief Field _bins, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Bin*  _bins;

/// @brief Field _typeMap, offset: 0x30, size: 0x8, def value: None
 int32_t*  _typeMap;

/// @brief Field _typeMapLength, offset: 0x38, size: 0x4, def value: None
 int32_t  _typeMapLength;

/// @brief Field _typeMapStrides, offset: 0x40, size: 0x8, def value: None
 int32_t*  _typeMapStrides;

/// @brief Field _gcGen, offset: 0x48, size: 0x2, def value: None
 uint16_t  _gcGen;

/// @brief Field _gcBlock, offset: 0x4c, size: 0x4, def value: None
 int32_t  _gcBlock;

/// @brief Field _gcBlockPage, offset: 0x50, size: 0x4, def value: None
 int32_t  _gcBlockPage;

/// @brief Field _gcPhase, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::DynamicHeap_Phase  _gcPhase;

/// @brief Field _gcStack, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Object*  _gcStack;

/// @brief Field _gcStackCount, offset: 0x60, size: 0x4, def value: None
 int32_t  _gcStackCount;

/// @brief Field _gcStackCapacity, offset: 0x64, size: 0x4, def value: None
 int32_t  _gcStackCapacity;

/// @brief Field _config, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::DynamicHeap_Config  _config;

/// @brief Field _rootList, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::DynamicHeap_Object*  _rootList;

/// @brief Field _rootListCapacity, offset: 0x78, size: 0x4, def value: None
 int32_t  _rootListCapacity;

/// @brief Field _rootListCount, offset: 0x7c, size: 0x4, def value: None
 int32_t  _rootListCount;

/// @brief Field _objectsAllocated, offset: 0x80, size: 0x4, def value: None
 int32_t  _objectsAllocated;

/// @brief Field _memoryAllocated, offset: 0x84, size: 0x4, def value: None
 int32_t  _memoryAllocated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::DynamicHeap, _blocksFreePages) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _blocks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _blocksUsed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _bins) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _typeMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _typeMapLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _typeMapStrides) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _gcGen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _gcBlock) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _gcBlockPage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _gcPhase) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _gcStack) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _gcStackCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _gcStackCapacity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _config) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _rootList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _rootListCapacity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _rootListCount) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _objectsAllocated) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap, _memoryAllocated) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Fusion::DynamicHeap) == 0x88, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DynamicHeap/<>c__DisplayClass44_0
class CORDL_TYPE DynamicHeap___c__DisplayClass44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field maxOffset, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_maxOffset, put=__cordl_internal_set_maxOffset)) uint16_t  maxOffset;

static inline ::Fusion::DynamicHeap___c__DisplayClass44_0* New_ctor() ;

/// @brief Method <Create>b__1, addr 0x5f90d04, size 0x54, virtual false, abstract: false, final false
inline bool _Create_b__1(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>  x) ;

constexpr uint16_t const& __cordl_internal_get_maxOffset() const;

constexpr uint16_t& __cordl_internal_get_maxOffset() ;

constexpr void __cordl_internal_set_maxOffset(uint16_t  value) ;

/// @brief Method .ctor, addr 0x5f90cfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap___c__DisplayClass44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap___c__DisplayClass44_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicHeap___c__DisplayClass44_0(DynamicHeap___c__DisplayClass44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap___c__DisplayClass44_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicHeap___c__DisplayClass44_0(DynamicHeap___c__DisplayClass44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18954};

/// @brief Field maxOffset, offset: 0x10, size: 0x2, def value: None
 uint16_t  ___maxOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::DynamicHeap___c__DisplayClass44_0, ___maxOffset) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::DynamicHeap___c__DisplayClass44_0) == 0x18, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DynamicHeap/<>c
class CORDL_TYPE DynamicHeap___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::DynamicHeap___c*  __9;

/// @brief Field <>9__44_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_0, put=setStaticF___9__44_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,uint16_t>*  __9__44_0;

/// @brief Field <>9__44_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_2, put=setStaticF___9__44_2)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,::Fusion::DynamicHeap_TypeData*>*  __9__44_2;

/// @brief Field <>9__44_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_3, put=setStaticF___9__44_3)) ::System::Func_2<::Fusion::DynamicHeap_TypeData*,uint16_t>*  __9__44_3;

static inline ::Fusion::DynamicHeap___c* New_ctor() ;

/// @brief Method <Create>b__44_0, addr 0x5f90c68, size 0x44, virtual false, abstract: false, final false
inline uint16_t _Create_b__44_0(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>  x) ;

/// @brief Method <Create>b__44_2, addr 0x5f90cac, size 0x3c, virtual false, abstract: false, final false
inline ::Fusion::DynamicHeap_TypeData* _Create_b__44_2(::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>  x) ;

/// @brief Method <Create>b__44_3, addr 0x5f90ce8, size 0x14, virtual false, abstract: false, final false
inline uint16_t _Create_b__44_3(::Fusion::DynamicHeap_TypeData*  x) ;

/// @brief Method .ctor, addr 0x5f90c60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::DynamicHeap___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,uint16_t>* getStaticF___9__44_0() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,::Fusion::DynamicHeap_TypeData*>* getStaticF___9__44_2() ;

static inline ::System::Func_2<::Fusion::DynamicHeap_TypeData*,uint16_t>* getStaticF___9__44_3() ;

static inline void setStaticF___9(::Fusion::DynamicHeap___c*  value) ;

static inline void setStaticF___9__44_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,uint16_t>*  value) ;

static inline void setStaticF___9__44_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Type*,::Fusion::DynamicHeap_TypeData*>,::Fusion::DynamicHeap_TypeData*>*  value) ;

static inline void setStaticF___9__44_3(::System::Func_2<::Fusion::DynamicHeap_TypeData*,uint16_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicHeap___c(DynamicHeap___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicHeap___c(DynamicHeap___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18953};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::DynamicHeap___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DynamicHeap/BinSizes
class CORDL_TYPE DynamicHeap_BinSizes : public ::System::Object {
public:
// Declarations
/// @brief Field Sizes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Sizes, put=setStaticF_Sizes)) ::ArrayW<int32_t>  Sizes;

static inline ::ArrayW<int32_t> getStaticF_Sizes() ;

static inline void setStaticF_Sizes(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_BinSizes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap_BinSizes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicHeap_BinSizes(DynamicHeap_BinSizes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap_BinSizes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicHeap_BinSizes(DynamicHeap_BinSizes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18952};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::DynamicHeap_BinSizes) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies System.Attribute
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DynamicHeap/Ignore
class CORDL_TYPE DynamicHeap_Ignore : public ::System::Attribute {
public:
// Declarations
static inline ::Fusion::DynamicHeap_Ignore* New_ctor() ;

/// @brief Method .ctor, addr 0x5f90b50, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_Ignore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap_Ignore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicHeap_Ignore(DynamicHeap_Ignore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap_Ignore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicHeap_Ignore(DynamicHeap_Ignore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18946};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::DynamicHeap_Ignore) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DynamicHeap/CollectGarbageDelegate
class CORDL_TYPE DynamicHeap_CollectGarbageDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5f905c0, size 0x64, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::DynamicHeap*  heap, void*  dynamicRoots, int32_t  dynamicRootsLength, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5f90624, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5f905ac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::DynamicHeap*  heap, void*  dynamicRoots, int32_t  dynamicRootsLength) ;

static inline ::Fusion::DynamicHeap_CollectGarbageDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f904f8, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_CollectGarbageDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap_CollectGarbageDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicHeap_CollectGarbageDelegate(DynamicHeap_CollectGarbageDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap_CollectGarbageDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicHeap_CollectGarbageDelegate(DynamicHeap_CollectGarbageDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18943};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::DynamicHeap_CollectGarbageDelegate) == 0x80, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.DynamicHeap/TypeData
class CORDL_TYPE DynamicHeap_TypeData : public ::System::Object {
public:
// Declarations
/// @brief Field Offset, offset 0x14, size 0x2 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) uint16_t  Offset;

/// @brief Field Pointers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Pointers, put=__cordl_internal_set_Pointers)) ::ArrayW<int32_t>  Pointers;

/// @brief Field Stride, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Stride, put=__cordl_internal_set_Stride)) int32_t  Stride;

/// @brief Field Type, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::System::Type*  Type;

static inline ::Fusion::DynamicHeap_TypeData* New_ctor() ;

static inline ::Fusion::DynamicHeap_TypeData* New_ctor(int32_t  stride, uint16_t  offset, ::ArrayW<int32_t>  pointers, ::System::Type*  type) ;

constexpr uint16_t const& __cordl_internal_get_Offset() const;

constexpr uint16_t& __cordl_internal_get_Offset() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_Pointers() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_Pointers() ;

constexpr int32_t const& __cordl_internal_get_Stride() const;

constexpr int32_t& __cordl_internal_get_Stride() ;

constexpr ::System::Type* const& __cordl_internal_get_Type() const;

constexpr ::System::Type*& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Offset(uint16_t  value) ;

constexpr void __cordl_internal_set_Pointers(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_Stride(int32_t  value) ;

constexpr void __cordl_internal_set_Type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x5f90494, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f9049c, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(int32_t  stride, uint16_t  offset, ::ArrayW<int32_t>  pointers, ::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_TypeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap_TypeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicHeap_TypeData(DynamicHeap_TypeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicHeap_TypeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicHeap_TypeData(DynamicHeap_TypeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18942};

/// @brief Field Stride, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Stride;

/// @brief Field Offset, offset: 0x14, size: 0x2, def value: None
 uint16_t  ___Offset;

/// @brief Field Pointers, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___Pointers;

/// @brief Field Type, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ___Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::DynamicHeap_TypeData, ___Stride) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap_TypeData, ___Offset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap_TypeData, ___Pointers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::DynamicHeap_TypeData, ___Type) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::DynamicHeap_TypeData) == 0x28, "Size mismatch!");

} // namespace end def Fusion
