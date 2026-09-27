#pragma once
// IWYU pragma private; include "System/Array_SorterGenericArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Array_SorterGenericArray)
namespace System::Collections {
class IComparer;
}
namespace System {
class Array;
}
// Forward declare root types
namespace GlobalNamespace {
struct Array_SorterGenericArray;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Array_SorterGenericArray);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Array_SorterGenericArray, "System", "Array/SorterGenericArray");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Array/SorterGenericArray
struct CORDL_TYPE Array_SorterGenericArray {
public:
// Declarations
/// @brief Method DownHeap, addr 0xa3082fc, size 0x2c0, virtual false, abstract: false, final false
inline void DownHeap(int32_t  i, int32_t  n, int32_t  lo) ;

/// @brief Method Heapsort, addr 0xa308044, size 0x9c, virtual false, abstract: false, final false
inline void Heapsort(int32_t  lo, int32_t  hi) ;

/// @brief Method InsertionSort, addr 0xa307e64, size 0x1e0, virtual false, abstract: false, final false
inline void InsertionSort(int32_t  lo, int32_t  hi) ;

/// @brief Method IntroSort, addr 0xa307d4c, size 0x118, virtual false, abstract: false, final false
inline void IntroSort(int32_t  lo, int32_t  hi, int32_t  depthLimit) ;

/// @brief Method IntrospectiveSort, addr 0xa307bf8, size 0x154, virtual false, abstract: false, final false
inline void IntrospectiveSort(int32_t  left, int32_t  length) ;

/// @brief Method PickPivotAndPartition, addr 0xa3080e0, size 0x21c, virtual false, abstract: false, final false
inline int32_t PickPivotAndPartition(int32_t  lo, int32_t  hi) ;

/// @brief Method Sort, addr 0xa307bf4, size 0x4, virtual false, abstract: false, final false
inline void Sort(int32_t  left, int32_t  length) ;

/// @brief Method Swap, addr 0xa307b08, size 0xec, virtual false, abstract: false, final false
inline void Swap(int32_t  i, int32_t  j) ;

/// @brief Method SwapIfGreaterWithItems, addr 0xa307938, size 0x1d0, virtual false, abstract: false, final false
inline void SwapIfGreaterWithItems(int32_t  a, int32_t  b) ;

/// @brief Method .ctor, addr 0xa307898, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Array*  keys, ::System::Array*  items, ::System::Collections::IComparer*  comparer) ;

// Ctor Parameters []
// @brief default ctor
constexpr Array_SorterGenericArray() ;

// Ctor Parameters [CppParam { name: "keys", ty: "::System::Array*", modifiers: "", def_value: None, comment: None }, CppParam { name: "items", ty: "::System::Array*", modifiers: "", def_value: None, comment: None }, CppParam { name: "comparer", ty: "::System::Collections::IComparer*", modifiers: "", def_value: None, comment: None }]
constexpr Array_SorterGenericArray(::System::Array*  keys, ::System::Array*  items, ::System::Collections::IComparer*  comparer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5656};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field keys, offset: 0x0, size: 0x8, def value: None
 ::System::Array*  keys;

/// @brief Field items, offset: 0x8, size: 0x8, def value: None
 ::System::Array*  items;

/// @brief Field comparer, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::IComparer*  comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Array_SorterGenericArray, keys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Array_SorterGenericArray, items) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Array_SorterGenericArray, comparer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Array_SorterGenericArray) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
