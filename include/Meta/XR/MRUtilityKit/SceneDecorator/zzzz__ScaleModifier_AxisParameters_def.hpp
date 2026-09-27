#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ScaleModifier_AxisParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ScaleModifier_AxisParameters)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class Mask;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScaleModifier_AxisParameters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScaleModifier_AxisParameters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScaleModifier_AxisParameters, "Meta.XR.MRUtilityKit.SceneDecorator", "ScaleModifier/AxisParameters");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.ScaleModifier/AxisParameters
struct CORDL_TYPE ScaleModifier_AxisParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScaleModifier_AxisParameters() ;

// Ctor Parameters [CppParam { name: "mask", ty: "::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>", modifiers: "", def_value: None, comment: None }, CppParam { name: "limitMin", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "limitMax", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ScaleModifier_AxisParameters(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask, float_t  limitMin, float_t  limitMax, float_t  scale, float_t  offset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25949};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [SerializeField]
/// @brief Field mask, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask;

/// [SerializeField]
/// @brief Field limitMin, offset: 0x8, size: 0x4, def value: None
 float_t  limitMin;

/// [SerializeField]
/// @brief Field limitMax, offset: 0xc, size: 0x4, def value: None
 float_t  limitMax;

/// [SerializeField]
/// @brief Field scale, offset: 0x10, size: 0x4, def value: None
 float_t  scale;

/// [SerializeField]
/// @brief Field offset, offset: 0x14, size: 0x4, def value: None
 float_t  offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScaleModifier_AxisParameters, mask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleModifier_AxisParameters, limitMin) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleModifier_AxisParameters, limitMax) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleModifier_AxisParameters, scale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScaleModifier_AxisParameters, offset) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScaleModifier_AxisParameters) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
