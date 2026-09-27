#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CoreUnsafeUtils)
namespace GlobalNamespace {
template<typename T>
struct CoreUnsafeUtils_DefaultKeyGetter_1;
}
namespace GlobalNamespace {
struct CoreUnsafeUtils_FixedBufferStringQueue;
}
namespace GlobalNamespace {
struct CoreUnsafeUtils_UintKeyGetter;
}
namespace GlobalNamespace {
struct CoreUnsafeUtils_UlongKeyGetter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
template<typename TValue,typename TKey>
class CoreUnsafeUtils_IKeyGetter_2;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CoreUnsafeUtils;
}
namespace UnityEngine::Rendering {
template<typename TValue,typename TKey>
class CoreUnsafeUtils_IKeyGetter_2;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::CoreUnsafeUtils*);
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUnsafeUtils*, "UnityEngine.Rendering", "CoreUnsafeUtils");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2, "UnityEngine.Rendering", "CoreUnsafeUtils/IKeyGetter`2");
// [Extension]
// Dependencies System.IComparable`1<T>, System.IEquatable`1<T>, System.Object, UnityEngine.Hash128, UnityEngine.Rendering.CoreUnsafeUtils::IKeyGetter`2<TValue, TKey>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils
class CORDL_TYPE CoreUnsafeUtils : public ::System::Object {
public:
// Declarations
template<typename T>
using DefaultKeyGetter_1 = ::GlobalNamespace::CoreUnsafeUtils_DefaultKeyGetter_1<T>;

using FixedBufferStringQueue = ::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue;

using UintKeyGetter = ::GlobalNamespace::CoreUnsafeUtils_UintKeyGetter;

using UlongKeyGetter = ::GlobalNamespace::CoreUnsafeUtils_UlongKeyGetter;

template<typename TValue,typename TKey>
using IKeyGetter_2 = ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue, TKey>;

/// @brief Method CalculateRadixParams, addr 0xb122658, size 0x10, virtual false, abstract: false, final false
static inline void CalculateRadixParams(int32_t  radixBits, ::by_ref<int32_t>  bitStates) ;

/// @brief Method CalculateRadixSortSupportArrays, addr 0xb122674, size 0x20, virtual false, abstract: false, final false
static inline void CalculateRadixSortSupportArrays(int32_t  bitStates, int32_t  arrayLength, uint32_t*  supportArray, ::by_ref<uint32_t*>  bucketIndices, ::by_ref<uint32_t*>  bucketSizes, ::by_ref<uint32_t*>  bucketPrefix, ::by_ref<uint32_t*>  arrayOutput) ;

/// @brief Method CalculateRadixSupportSize, addr 0xb122668, size 0xc, virtual false, abstract: false, final false
static inline int32_t CalculateRadixSupportSize(int32_t  bitStates, int32_t  arrayLength) ;

/// @brief Method CombineHashes, addr 0xb123150, size 0x60, virtual false, abstract: false, final false
static inline void CombineHashes(int32_t  count, ::UnityEngine::Hash128*  hashes, ::UnityEngine::Hash128*  outHash) ;

/// @brief Method CombineHashes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue,typename TGetter>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,::UnityEngine::Hash128>*> && ::cordl_internals::value_type_constraint<TGetter> && ::cordl_internals::default_constructor_constraint<TGetter>)
static inline void CombineHashes(int32_t  count, void*  hashes, ::UnityEngine::Hash128*  outHash) ;

/// @brief Method CompareHashes, addr 0xb1230ac, size 0xa4, virtual false, abstract: false, final false
static inline int32_t CompareHashes(int32_t  oldHashCount, ::UnityEngine::Hash128*  oldHashes, int32_t  newHashCount, ::UnityEngine::Hash128*  newHashes, int32_t*  addIndices, int32_t*  removeIndices, ::by_ref<int32_t>  addCount, ::by_ref<int32_t>  remCount) ;

/// @brief Method CompareHashes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TOldValue,typename TOldGetter,typename TNewValue,typename TNewGetter>
requires(::cordl_internals::value_type_constraint<TOldValue> && ::cordl_internals::default_constructor_constraint<TOldValue> && ::cordl_internals::type_constraint<TOldGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TOldValue,::UnityEngine::Hash128>*> && ::cordl_internals::value_type_constraint<TOldGetter> && ::cordl_internals::default_constructor_constraint<TOldGetter> && ::cordl_internals::value_type_constraint<TNewValue> && ::cordl_internals::default_constructor_constraint<TNewValue> && ::cordl_internals::type_constraint<TNewGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TNewValue,::UnityEngine::Hash128>*> && ::cordl_internals::value_type_constraint<TNewGetter> && ::cordl_internals::default_constructor_constraint<TNewGetter>)
static inline int32_t CompareHashes(int32_t  oldHashCount, void*  oldHashes, int32_t  newHashCount, void*  newHashes, int32_t*  addIndices, int32_t*  removeIndices, ::by_ref<int32_t>  addCount, ::by_ref<int32_t>  remCount) ;

/// [Extension]
/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void CopyTo(::ArrayW<T>  list, void*  dest, int32_t  count) ;

/// [Extension]
/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void CopyTo(::System::Collections::Generic::List_1<T>*  list, void*  dest, int32_t  count) ;

/// @brief Method HaveDuplicates, addr 0xb1231b0, size 0x164, virtual false, abstract: false, final false
static inline bool HaveDuplicates(::ArrayW<int32_t>  arr) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IEquatable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t IndexOf(void*  data, int32_t  count, T  v) ;

/// @brief Method InsertionSort, addr 0xb122a48, size 0x90, virtual false, abstract: false, final false
static inline void InsertionSort(::ArrayW<uint32_t>  arr, int32_t  sortSize) ;

/// @brief Method InsertionSort, addr 0xb122ad8, size 0xc0, virtual false, abstract: false, final false
static inline void InsertionSort(::Unity::Collections::NativeArray_1<uint32_t>  arr, int32_t  sortSize) ;

/// @brief Method InsertionSort, addr 0xb1229e8, size 0x60, virtual false, abstract: false, final false
static inline void InsertionSort(uint32_t*  arr, int32_t  length) ;

/// @brief Method MergeSort, addr 0xb1227bc, size 0x108, virtual false, abstract: false, final false
static inline void MergeSort(::ArrayW<uint32_t>  arr, int32_t  sortSize, ::by_ref<::ArrayW<uint32_t>>  supportArray) ;

/// @brief Method MergeSort, addr 0xb1228c4, size 0x124, virtual false, abstract: false, final false
static inline void MergeSort(::Unity::Collections::NativeArray_1<uint32_t>  arr, int32_t  sortSize, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>  supportArray) ;

/// @brief Method MergeSort, addr 0xb122694, size 0x128, virtual false, abstract: false, final false
static inline void MergeSort(uint32_t*  array, uint32_t*  support, int32_t  length) ;

/// @brief Method Partition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue,typename TKey,typename TGetter>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TKey, ::System::IComparable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> && ::cordl_internals::type_constraint<TGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,TKey>*> && ::cordl_internals::value_type_constraint<TGetter> && ::cordl_internals::default_constructor_constraint<TGetter>)
static inline int32_t Partition(void*  data, int32_t  left, int32_t  right) ;

/// @brief Method QuickSort, addr 0xb122fbc, size 0x78, virtual false, abstract: false, final false
static inline void QuickSort(::ArrayW<uint32_t>  arr, int32_t  left, int32_t  right) ;

/// @brief Method QuickSort, addr 0xb123034, size 0x78, virtual false, abstract: false, final false
static inline void QuickSort(::ArrayW<uint64_t>  arr, int32_t  left, int32_t  right) ;

/// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void QuickSort(int32_t  count, void*  data) ;

/// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue,typename TKey,typename TGetter>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TKey, ::System::IComparable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> && ::cordl_internals::type_constraint<TGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,TKey>*> && ::cordl_internals::value_type_constraint<TGetter> && ::cordl_internals::default_constructor_constraint<TGetter>)
static inline void QuickSort(int32_t  count, void*  data) ;

/// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue,typename TKey,typename TGetter>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TKey, ::System::IComparable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> && ::cordl_internals::type_constraint<TGetter, ::UnityEngine::Rendering::CoreUnsafeUtils_IKeyGetter_2<TValue,TKey>*> && ::cordl_internals::value_type_constraint<TGetter> && ::cordl_internals::default_constructor_constraint<TGetter>)
static inline void QuickSort(void*  data, int32_t  left, int32_t  right) ;

/// @brief Method RadixSort, addr 0xb122d50, size 0x128, virtual false, abstract: false, final false
static inline void RadixSort(::ArrayW<uint32_t>  arr, int32_t  sortSize, ::by_ref<::ArrayW<uint32_t>>  supportArray, int32_t  radixBits) ;

/// @brief Method RadixSort, addr 0xb122e78, size 0x144, virtual false, abstract: false, final false
static inline void RadixSort(::Unity::Collections::NativeArray_1<uint32_t>  array, int32_t  sortSize, ::by_ref<::Unity::Collections::NativeArray_1<uint32_t>>  supportArray, int32_t  radixBits) ;

/// @brief Method RadixSort, addr 0xb122b98, size 0x1b8, virtual false, abstract: false, final false
static inline void RadixSort(uint32_t*  array, uint32_t*  support, int32_t  radixBits, int32_t  bitStates, int32_t  length) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreUnsafeUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreUnsafeUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreUnsafeUtils(CoreUnsafeUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreUnsafeUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreUnsafeUtils(CoreUnsafeUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16615};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUnsafeUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies 
namespace UnityEngine::Rendering {
// cpp template
template<typename TValue,typename TKey>
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUnsafeUtils/IKeyGetter`2<TValue,TKey>
class CORDL_TYPE CoreUnsafeUtils_IKeyGetter_2 {
public:
// Declarations
/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TKey Get(::by_ref<TValue>  v) ;

// Ctor Parameters [CppParam { name: "", ty: "CoreUnsafeUtils_IKeyGetter_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreUnsafeUtils_IKeyGetter_2(CoreUnsafeUtils_IKeyGetter_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16611};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
