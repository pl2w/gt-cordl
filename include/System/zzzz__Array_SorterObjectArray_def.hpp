#pragma once
// IWYU pragma private; include "System/Array_SorterObjectArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Array_SorterObjectArray)
namespace System::Collections {
class IComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct Array_SorterObjectArray;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Array_SorterObjectArray);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Array_SorterObjectArray, "System", "Array/SorterObjectArray");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Array/SorterObjectArray
struct CORDL_TYPE Array_SorterObjectArray {
public:
// Declarations
/// @brief Method DownHeap, addr 0xa307500, size 0x398, virtual false, abstract: false, final false
inline void DownHeap(int32_t  i, int32_t  n, int32_t  lo) ;

/// @brief Method Heapsort, addr 0xa307238, size 0x9c, virtual false, abstract: false, final false
inline void Heapsort(int32_t  lo, int32_t  hi) ;

/// @brief Method InsertionSort, addr 0xa306f78, size 0x2c0, virtual false, abstract: false, final false
inline void InsertionSort(int32_t  lo, int32_t  hi) ;

/// @brief Method IntroSort, addr 0xa306e60, size 0x118, virtual false, abstract: false, final false
inline void IntroSort(int32_t  lo, int32_t  hi, int32_t  depthLimit) ;

/// @brief Method IntrospectiveSort, addr 0xa306d14, size 0x14c, virtual false, abstract: false, final false
inline void IntrospectiveSort(int32_t  left, int32_t  length) ;

/// @brief Method PickPivotAndPartition, addr 0xa3072d4, size 0x22c, virtual false, abstract: false, final false
inline int32_t PickPivotAndPartition(int32_t  lo, int32_t  hi) ;

/// @brief Method Sort, addr 0xa306d10, size 0x4, virtual false, abstract: false, final false
inline void Sort(int32_t  left, int32_t  length) ;

/// @brief Method Swap, addr 0xa306b5c, size 0x1b4, virtual false, abstract: false, final false
inline void Swap(int32_t  i, int32_t  j) ;

/// @brief Method SwapIfGreaterWithItems, addr 0xa3068dc, size 0x280, virtual false, abstract: false, final false
inline void SwapIfGreaterWithItems(int32_t  a, int32_t  b) ;

/// @brief Method .ctor, addr 0xa30683c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::Object*>  keys, ::ArrayW<::System::Object*>  items, ::System::Collections::IComparer*  comparer) ;

// Ctor Parameters []
// @brief default ctor
constexpr Array_SorterObjectArray() ;

// Ctor Parameters [CppParam { name: "keys", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "items", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "comparer", ty: "::System::Collections::IComparer*", modifiers: "", def_value: None, comment: None }]
constexpr Array_SorterObjectArray(::ArrayW<::System::Object*>  keys, ::ArrayW<::System::Object*>  items, ::System::Collections::IComparer*  comparer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5655};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field keys, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  keys;

/// @brief Field items, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  items;

/// @brief Field comparer, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::IComparer*  comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Array_SorterObjectArray, keys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Array_SorterObjectArray, items) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Array_SorterObjectArray, comparer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Array_SorterObjectArray) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
