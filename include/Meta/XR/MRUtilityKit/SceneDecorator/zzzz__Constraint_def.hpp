#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Constraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ConstraintModeCheck_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Constraint)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class Mask;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Constraint;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::SceneDecorator::Constraint);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::Constraint, "Meta.XR.MRUtilityKit.SceneDecorator", "Constraint");
// Dependencies Meta.XR.MRUtilityKit.SceneDecorator.ConstraintModeCheck
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Constraint
struct CORDL_TYPE Constraint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Constraint() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "mask", ty: "::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>", modifiers: "", def_value: None, comment: None }, CppParam { name: "modeCheck", ty: "::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck", modifiers: "", def_value: None, comment: None }, CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Constraint(::StringW  name, bool  enabled, ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask, ::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck  modeCheck, float_t  min, float_t  max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25972};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [SerializeField]
/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// [SerializeField]
/// @brief Field enabled, offset: 0x8, size: 0x1, def value: None
 bool  enabled;

/// [SerializeField]
/// @brief Field mask, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask;

/// [SerializeField]
/// @brief Field modeCheck, offset: 0x18, size: 0x4, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck  modeCheck;

/// [SerializeField]
/// @brief Field min, offset: 0x1c, size: 0x4, def value: None
 float_t  min;

/// [SerializeField]
/// @brief Field max, offset: 0x20, size: 0x4, def value: None
 float_t  max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Constraint, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Constraint, enabled) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Constraint, mask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Constraint, modeCheck) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Constraint, min) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Constraint, max) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::Constraint) == 0x28, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
