#pragma once
// IWYU pragma private; include "Unity/Collections/SortJob`2_SegmentSort.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortJob`2_SegmentSort)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T,typename U>
struct SortJob_2_SegmentSort;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::SortJob_2_SegmentSort);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::SortJob_2_SegmentSort, "Unity.Collections", "SortJob`2/SegmentSort");
// [BurstCompile]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T,typename U>
// Is value type: true
// CS Name: Unity.Collections.SortJob`2/SegmentSort<T,U>
struct CORDL_TYPE SortJob_2_SegmentSort {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr SortJob_2_SegmentSort() ;

// Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: None, comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SegmentWidth", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SortJob_2_SegmentSort(T*  Data, U  Comp, int32_t  Length, int32_t  SegmentWidth) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 T*  Data;

/// @brief Field Comp, offset: 0x8, size: 0x8, def value: None
 U  Comp;

/// @brief Field Length, offset: 0x10, size: 0x4, def value: None
 int32_t  Length;

/// @brief Field SegmentWidth, offset: 0x14, size: 0x4, def value: None
 int32_t  SegmentWidth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
