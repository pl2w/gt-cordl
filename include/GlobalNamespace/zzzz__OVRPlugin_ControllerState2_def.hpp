#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ControllerState2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_ControllerState2)
namespace GlobalNamespace {
struct OVRPlugin_ControllerState;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ControllerState2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ControllerState2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ControllerState2, "", "OVRPlugin/ControllerState2");
// Dependencies OVRPlugin::Vector2f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ControllerState2
struct CORDL_TYPE OVRPlugin_ControllerState2 {
public:
// Declarations
/// @brief Method .ctor, addr 0xa60ea84, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRPlugin_ControllerState  cs) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ControllerState2() ;

// Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Touches", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LIndexTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "LTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_ControllerState2(uint32_t  ConnectedControllers, uint32_t  Buttons, uint32_t  Touches, uint32_t  NearTouches, float_t  LIndexTrigger, float_t  RIndexTrigger, float_t  LHandTrigger, float_t  RHandTrigger, ::GlobalNamespace::OVRPlugin_Vector2f  LThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  RThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  LTouchpad, ::GlobalNamespace::OVRPlugin_Vector2f  RTouchpad) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12095};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

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

/// @brief Field LTouchpad, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Vector2f  LTouchpad;

/// @brief Field RTouchpad, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Vector2f  RTouchpad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, ConnectedControllers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, Buttons) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, Touches) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, NearTouches) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, LIndexTrigger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, RIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, LHandTrigger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, RHandTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, LThumbstick) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, RThumbstick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, LTouchpad) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState2, RTouchpad) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_ControllerState2) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
