#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ControllerState5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_ControllerState5)
namespace GlobalNamespace {
struct OVRPlugin_ControllerState4;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ControllerState5;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ControllerState5);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ControllerState5, "", "OVRPlugin/ControllerState5");
// Dependencies OVRPlugin::Vector2f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ControllerState5
struct CORDL_TYPE OVRPlugin_ControllerState5 {
public:
// Declarations
/// @brief Method .ctor, addr 0xa60e988, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRPlugin_ControllerState4  cs) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ControllerState5() ;

// Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Touches", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LIndexTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "LTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "LBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LRecenterCount", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RRecenterCount", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LThumbRestForce", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RThumbRestForce", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LStylusForce", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RStylusForce", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LIndexTriggerCurl", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RIndexTriggerCurl", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LIndexTriggerSlide", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RIndexTriggerSlide", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_ControllerState5(uint32_t  ConnectedControllers, uint32_t  Buttons, uint32_t  Touches, uint32_t  NearTouches, float_t  LIndexTrigger, float_t  RIndexTrigger, float_t  LHandTrigger, float_t  RHandTrigger, ::GlobalNamespace::OVRPlugin_Vector2f  LThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  RThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  LTouchpad, ::GlobalNamespace::OVRPlugin_Vector2f  RTouchpad, uint8_t  LBatteryPercentRemaining, uint8_t  RBatteryPercentRemaining, uint8_t  LRecenterCount, uint8_t  RRecenterCount, float_t  LThumbRestForce, float_t  RThumbRestForce, float_t  LStylusForce, float_t  RStylusForce, float_t  LIndexTriggerCurl, float_t  RIndexTriggerCurl, float_t  LIndexTriggerSlide, float_t  RIndexTriggerSlide) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12093};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x64};

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

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Field LBatteryPercentRemaining, offset: 0x40, size: 0x1, def value: None
 uint8_t  LBatteryPercentRemaining;

/// [Obsolete("Deprecated. The controller battery percentage data is no longer supported in OpenXR", false)]
/// @brief Field RBatteryPercentRemaining, offset: 0x41, size: 0x1, def value: None
 uint8_t  RBatteryPercentRemaining;

/// @brief Field LRecenterCount, offset: 0x42, size: 0x1, def value: None
 uint8_t  LRecenterCount;

/// @brief Field RRecenterCount, offset: 0x43, size: 0x1, def value: None
 uint8_t  RRecenterCount;

/// @brief Field LThumbRestForce, offset: 0x44, size: 0x4, def value: None
 float_t  LThumbRestForce;

/// @brief Field RThumbRestForce, offset: 0x48, size: 0x4, def value: None
 float_t  RThumbRestForce;

/// @brief Field LStylusForce, offset: 0x4c, size: 0x4, def value: None
 float_t  LStylusForce;

/// @brief Field RStylusForce, offset: 0x50, size: 0x4, def value: None
 float_t  RStylusForce;

/// @brief Field LIndexTriggerCurl, offset: 0x54, size: 0x4, def value: None
 float_t  LIndexTriggerCurl;

/// @brief Field RIndexTriggerCurl, offset: 0x58, size: 0x4, def value: None
 float_t  RIndexTriggerCurl;

/// @brief Field LIndexTriggerSlide, offset: 0x5c, size: 0x4, def value: None
 float_t  LIndexTriggerSlide;

/// @brief Field RIndexTriggerSlide, offset: 0x60, size: 0x4, def value: None
 float_t  RIndexTriggerSlide;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, ConnectedControllers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, Buttons) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, Touches) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, NearTouches) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LIndexTrigger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LHandTrigger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RHandTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LThumbstick) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RThumbstick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LTouchpad) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RTouchpad) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LBatteryPercentRemaining) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RBatteryPercentRemaining) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LRecenterCount) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RRecenterCount) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LThumbRestForce) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RThumbRestForce) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LStylusForce) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RStylusForce) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LIndexTriggerCurl) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RIndexTriggerCurl) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, LIndexTriggerSlide) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState5, RIndexTriggerSlide) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_ControllerState5) == 0x64, "Size mismatch!");

} // namespace end def GlobalNamespace
