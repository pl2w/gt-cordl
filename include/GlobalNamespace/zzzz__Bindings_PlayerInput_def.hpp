#pragma once
// IWYU pragma private; include "GlobalNamespace/Bindings_PlayerInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Bindings_PlayerInput)
// Forward declare root types
namespace GlobalNamespace {
struct Bindings_PlayerInput;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Bindings_PlayerInput);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Bindings_PlayerInput, "", "Bindings/PlayerInput");
// [BurstCompile]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Bindings/PlayerInput
struct CORDL_TYPE Bindings_PlayerInput {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Bindings_PlayerInput() ;

// Ctor Parameters [CppParam { name: "leftXAxis", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftPrimaryButton", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightXAxis", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightPrimaryButton", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftYAxis", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftSecondaryButton", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightYAxis", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightSecondaryButton", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftGrip", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightGrip", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Bindings_PlayerInput(float_t  leftXAxis, bool  leftPrimaryButton, float_t  rightXAxis, bool  rightPrimaryButton, float_t  leftYAxis, bool  leftSecondaryButton, float_t  rightYAxis, bool  rightSecondaryButton, float_t  leftTrigger, float_t  rightTrigger, float_t  leftGrip, float_t  rightGrip) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field leftXAxis, offset: 0x0, size: 0x4, def value: None
 float_t  leftXAxis;

/// @brief Field leftPrimaryButton, offset: 0x4, size: 0x1, def value: None
 bool  leftPrimaryButton;

/// @brief Field rightXAxis, offset: 0x8, size: 0x4, def value: None
 float_t  rightXAxis;

/// @brief Field rightPrimaryButton, offset: 0xc, size: 0x1, def value: None
 bool  rightPrimaryButton;

/// @brief Field leftYAxis, offset: 0x10, size: 0x4, def value: None
 float_t  leftYAxis;

/// @brief Field leftSecondaryButton, offset: 0x14, size: 0x1, def value: None
 bool  leftSecondaryButton;

/// @brief Field rightYAxis, offset: 0x18, size: 0x4, def value: None
 float_t  rightYAxis;

/// @brief Field rightSecondaryButton, offset: 0x1c, size: 0x1, def value: None
 bool  rightSecondaryButton;

/// @brief Field leftTrigger, offset: 0x20, size: 0x4, def value: None
 float_t  leftTrigger;

/// @brief Field rightTrigger, offset: 0x24, size: 0x4, def value: None
 float_t  rightTrigger;

/// @brief Field leftGrip, offset: 0x28, size: 0x4, def value: None
 float_t  leftGrip;

/// @brief Field rightGrip, offset: 0x2c, size: 0x4, def value: None
 float_t  rightGrip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, leftXAxis) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, leftPrimaryButton) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, rightXAxis) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, rightPrimaryButton) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, leftYAxis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, leftSecondaryButton) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, rightYAxis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, rightSecondaryButton) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, leftTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, rightTrigger) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, leftGrip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Bindings_PlayerInput, rightGrip) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Bindings_PlayerInput) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
