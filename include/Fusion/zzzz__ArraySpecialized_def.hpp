#pragma once
// IWYU pragma private; include "Fusion/ArraySpecialized.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySpecialized)
namespace Fusion {
class SimulationInput;
}
// Forward declare root types
namespace Fusion {
class ArraySpecialized;
}
// Write type traits
MARK_REF_T(::Fusion::ArraySpecialized*);
DEFINE_IL2CPP_CLASS(::Fusion::ArraySpecialized*, "Fusion", "ArraySpecialized");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.ArraySpecialized
class CORDL_TYPE ArraySpecialized : public ::System::Object {
public:
// Declarations
/// @brief Method Compare, addr 0x5f96a10, size 0x50, virtual false, abstract: false, final false
static inline int32_t Compare(::Fusion::SimulationInput*  x, ::Fusion::SimulationInput*  y) ;

/// @brief Method Compare, addr 0x5f96434, size 0x8, virtual false, abstract: false, final false
static inline int32_t Compare(int32_t  x, int32_t  y) ;

/// @brief Method DownHeap, addr 0x5f97120, size 0x20c, virtual false, abstract: false, final false
static inline void DownHeap(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  i, int32_t  n, int32_t  lo) ;

/// @brief Method DownHeap, addr 0x5f967dc, size 0xd0, virtual false, abstract: false, final false
static inline void DownHeap(::ArrayW<int32_t>  array, int32_t  i, int32_t  n, int32_t  lo) ;

/// @brief Method FloorLog2, addr 0x5f962a0, size 0x30, virtual false, abstract: false, final false
static inline int32_t FloorLog2(int32_t  n) ;

/// @brief Method Heapsort, addr 0x5f96d38, size 0x134, virtual false, abstract: false, final false
static inline void Heapsort(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  lo, int32_t  hi) ;

/// @brief Method Heapsort, addr 0x5f9652c, size 0xfc, virtual false, abstract: false, final false
static inline void Heapsort(::ArrayW<int32_t>  array, int32_t  lo, int32_t  hi) ;

/// @brief Method InsertionSort, addr 0x5f96bb4, size 0x184, virtual false, abstract: false, final false
static inline void InsertionSort(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  lo, int32_t  hi) ;

/// @brief Method InsertionSort, addr 0x5f96490, size 0x9c, virtual false, abstract: false, final false
static inline void InsertionSort(::ArrayW<int32_t>  array, int32_t  lo, int32_t  hi) ;

/// @brief Method IntroSort, addr 0x5f968fc, size 0x114, virtual false, abstract: false, final false
static inline void IntroSort(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  lo, int32_t  hi, int32_t  depthLimit) ;

/// @brief Method IntroSort, addr 0x5f96320, size 0x114, virtual false, abstract: false, final false
static inline void IntroSort(::ArrayW<int32_t>  array, int32_t  lo, int32_t  hi, int32_t  depthLimit) ;

/// @brief Method PickPivotAndPartition, addr 0x5f96e6c, size 0x2b4, virtual false, abstract: false, final false
static inline int32_t PickPivotAndPartition(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  lo, int32_t  hi) ;

/// @brief Method PickPivotAndPartition, addr 0x5f96628, size 0x1b4, virtual false, abstract: false, final false
static inline int32_t PickPivotAndPartition(::ArrayW<int32_t>  array, int32_t  lo, int32_t  hi) ;

/// @brief Method Sort, addr 0x5f968ac, size 0x50, virtual false, abstract: false, final false
static inline void Sort(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  index, int32_t  length) ;

/// @brief Method Sort, addr 0x5f962d0, size 0x50, virtual false, abstract: false, final false
static inline void Sort(::ArrayW<int32_t>  array, int32_t  index, int32_t  length) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Swap(::ArrayW<T>  a, int32_t  i, int32_t  j) ;

/// @brief Method SwapIfGreater, addr 0x5f96a60, size 0x154, virtual false, abstract: false, final false
static inline void SwapIfGreater(::ArrayW<::Fusion::SimulationInput*>  array, int32_t  a, int32_t  b) ;

/// @brief Method SwapIfGreater, addr 0x5f9643c, size 0x54, virtual false, abstract: false, final false
static inline void SwapIfGreater(::ArrayW<int32_t>  array, int32_t  a, int32_t  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArraySpecialized() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArraySpecialized", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArraySpecialized(ArraySpecialized && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArraySpecialized", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArraySpecialized(ArraySpecialized const& ) = delete;

/// @brief Field IntrosortSizeThreshold offset 0xffffffff size 0x4
static constexpr int32_t  IntrosortSizeThreshold{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18969};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ArraySpecialized) == 0x10, "Size mismatch!");

} // namespace end def Fusion
