#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ConstraintModeCheck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConstraintModeCheck)
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct ConstraintModeCheck;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck, "Meta.XR.MRUtilityKit.SceneDecorator", "ConstraintModeCheck");
// Dependencies 
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.ConstraintModeCheck
struct CORDL_TYPE ConstraintModeCheck {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConstraintModeCheck_Unwrapped
enum struct __ConstraintModeCheck_Unwrapped : int32_t {
__E_Value = static_cast<int32_t>(0x0),
__E_Bool = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConstraintModeCheck_Unwrapped () const noexcept {
return static_cast<__ConstraintModeCheck_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConstraintModeCheck() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ConstraintModeCheck(int32_t  value__) noexcept;

/// @brief Field Bool value: I32(1)
static ::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck const Bool;

/// @brief Field Value value: I32(0)
static ::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck const Value;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25971};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::ConstraintModeCheck) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
