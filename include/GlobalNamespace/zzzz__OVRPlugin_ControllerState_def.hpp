#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ControllerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_ControllerState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ControllerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ControllerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ControllerState, "", "OVRPlugin/ControllerState");
// Dependencies OVRPlugin::Vector2f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ControllerState
struct CORDL_TYPE OVRPlugin_ControllerState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ControllerState() ;

// Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Touches", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LIndexTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_ControllerState(uint32_t  ConnectedControllers, uint32_t  Buttons, uint32_t  Touches, uint32_t  NearTouches, float_t  LIndexTrigger, float_t  RIndexTrigger, float_t  LHandTrigger, float_t  RHandTrigger, ::GlobalNamespace::OVRPlugin_Vector2f  LThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  RThumbstick) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12096};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field ConnectedControllers, offset: 0x0, size: 0x4, def value: None
 uint32_t  ConnectedControllers;

/// @brief Field Buttons, offset: 0x4, size: 0x4, def value: None
 uint32_t  Buttons;

/// @brief Field Touches, offset: 0x8, size: 0x4, def value: None
 uint32_t  Touches;

/// @brief Field NearTouches, offset: 0xc, size: 0x4, def value: None
 uint32_t  NearTouches;

/// @brief Field LIndexTrigger, offset: 0x10, size: 0x4, def value: None
 float_t  LIndexTrigger;

/// @brief Field RIndexTrigger, offset: 0x14, size: 0x4, def value: None
 float_t  RIndexTrigger;

/// @brief Field LHandTrigger, offset: 0x18, size: 0x4, def value: None
 float_t  LHandTrigger;

/// @brief Field RHandTrigger, offset: 0x1c, size: 0x4, def value: None
 float_t  RHandTrigger;

/// @brief Field LThumbstick, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Vector2f  LThumbstick;

/// @brief Field RThumbstick, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Vector2f  RThumbstick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, ConnectedControllers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, Buttons) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, Touches) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, NearTouches) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, LIndexTrigger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, RIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, LHandTrigger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, RHandTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, LThumbstick) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState, RThumbstick) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_ControllerState) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
