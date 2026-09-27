#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukLabelFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukLabelFilter)
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukLabelFilter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukLabelFilter");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukLabelFilter
struct CORDL_TYPE MRUKNativeFuncs_MrukLabelFilter {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukLabelFilter() ;

// Ctor Parameters [CppParam { name: "surfaceType", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "includedLabels", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "includedLabelsSet", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukLabelFilter(uint32_t  surfaceType, uint32_t  includedLabels, bool  includedLabelsSet) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25799};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field surfaceType, offset: 0x0, size: 0x4, def value: None
 uint32_t  surfaceType;

/// @brief Field includedLabels, offset: 0x4, size: 0x4, def value: None
 uint32_t  includedLabels;

/// @brief Field includedLabelsSet, offset: 0x8, size: 0x1, def value: None
 bool  includedLabelsSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter, surfaceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter, includedLabels) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter, includedLabelsSet) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukLabelFilter) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
