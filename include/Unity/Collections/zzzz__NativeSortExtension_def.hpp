#pragma once
// IWYU pragma private; include "Unity/Collections/NativeSortExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeSortExtension)
namespace GlobalNamespace {
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace GlobalNamespace {
template<typename T>
struct NativeSortExtension_DefaultComparer_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T,typename U>
struct SortJob_2;
}
// Forward declare root types
namespace Unity::Collections {
class NativeSortExtension;
}
// Write type traits
MARK_REF_T(::Unity::Collections::NativeSortExtension*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::NativeSortExtension*, "Unity.Collections", "NativeSortExtension");
// [Extension]
// [GenerateTestsForBurstCompatibility]
// Dependencies System.Collections.Generic.IComparer`1<T>, System.IComparable`1<T>, System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeSortExtension
class CORDL_TYPE NativeSortExtension : public ::System::Object {
public:
// Declarations
template<typename T>
using DefaultComparer_1 = ::GlobalNamespace::NativeSortExtension_DefaultComparer_1<T>;

/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t BinarySearch(::GlobalNamespace::NativeArray_1_ReadOnly<T>  array, T  value) ;

/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
/// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline int32_t BinarySearch(::GlobalNamespace::NativeArray_1_ReadOnly<T>  array, T  value, U  comp) ;

/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t BinarySearch(::Unity::Collections::NativeArray_1<T>  array, T  value) ;

/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
/// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline int32_t BinarySearch(::Unity::Collections::NativeArray_1<T>  array, T  value, U  comp) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
/// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline int32_t BinarySearch(T*  ptr, int32_t  length, T  value, U  comp) ;

/// @brief Method HeapSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void HeapSort(void*  array, int32_t  lo, int32_t  hi, U  comp) ;

/// @brief Method HeapSortStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void HeapSortStruct(void*  array, /* [IsReadOnly] */ ::by_ref<int32_t>  lo, /* [IsReadOnly] */ ::by_ref<int32_t>  hi, U  comp) ;

/// @brief Method Heapify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void Heapify(void*  array, int32_t  i, int32_t  n, int32_t  lo, U  comp) ;

/// @brief Method HeapifyStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void HeapifyStruct(void*  array, int32_t  i, int32_t  n, /* [IsReadOnly] */ ::by_ref<int32_t>  lo, U  comp) ;

/// @brief Method InsertionSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void InsertionSort(void*  array, int32_t  lo, int32_t  hi, U  comp) ;

/// @brief Method InsertionSortStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void InsertionSortStruct(void*  array, /* [IsReadOnly] */ ::by_ref<int32_t>  lo, /* [IsReadOnly] */ ::by_ref<int32_t>  hi, U  comp) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
/// @brief Method IntroSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void IntroSort(void*  array, int32_t  length, U  comp) ;

/// @brief Method IntroSortStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void IntroSortStruct(void*  array, int32_t  length, U  comp) ;

/// @brief Method IntroSortStruct_R, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void IntroSortStruct_R(void*  array, /* [IsReadOnly] */ ::by_ref<int32_t>  lo, /* [IsReadOnly] */ ::by_ref<int32_t>  _hi, int32_t  depth, U  comp) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
/// @brief Method IntroSort_R, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void IntroSort_R(void*  array, int32_t  lo, int32_t  hi, int32_t  depth, U  comp) ;

/// @brief Method Partition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline int32_t Partition(void*  array, int32_t  lo, int32_t  hi, U  comp) ;

/// @brief Method PartitionStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline int32_t PartitionStruct(void*  array, /* [IsReadOnly] */ ::by_ref<int32_t>  lo, /* [IsReadOnly] */ ::by_ref<int32_t>  hi, U  comp) ;

/// [Extension]
/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Sort(::Unity::Collections::NativeArray_1<T>  array) ;

/// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
/// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void Sort(T*  array, int32_t  length, U  comp) ;

/// [Extension]
/// [GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new[] { typeof(System.Int32) })]
/// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IComparable_1<T>*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::SortJob_2<T,::GlobalNamespace::NativeSortExtension_DefaultComparer_1<T>> SortJob(::Unity::Collections::NativeArray_1<T>  array) ;

/// [GenerateTestsForBurstCompatibility(RequiredUnityDefine = "UNITY_2020_2_OR_NEWER", GenericTypeArguments = new[] { typeof(System.Int32), typeof(Unity.Collections.NativeSortExtension::DefaultComparer`1<T>) })]
/// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline ::Unity::Collections::SortJob_2<T,U> SortJob(T*  array, int32_t  length, U  comp) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Swap(void*  array, int32_t  lhs, int32_t  rhs) ;

/// @brief Method SwapIfGreaterWithItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void SwapIfGreaterWithItems(void*  array, int32_t  lhs, int32_t  rhs, U  comp) ;

/// @brief Method SwapIfGreaterWithItemsStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::type_constraint<U, ::System::Collections::Generic::IComparer_1<T>*>)
static inline void SwapIfGreaterWithItemsStruct(void*  array, int32_t  lhs, int32_t  rhs, U  comp) ;

/// @brief Method SwapStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void SwapStruct(void*  array, int32_t  lhs, int32_t  rhs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeSortExtension() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeSortExtension", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeSortExtension(NativeSortExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeSortExtension", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeSortExtension(NativeSortExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30196};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::NativeSortExtension) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
