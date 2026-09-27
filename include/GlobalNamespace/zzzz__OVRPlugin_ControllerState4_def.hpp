#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ControllerState4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_ControllerState4)
namespace GlobalNamespace {
struct OVRPlugin_ControllerState2;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_ControllerState4;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_ControllerState4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_ControllerState4, "", "OVRPlugin/ControllerState4");
// Dependencies OVRPlugin::Vector2f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/ControllerState4
struct CORDL_TYPE OVRPlugin_ControllerState4 {
public:
// Declarations
/// @brief Method .ctor, addr 0xa60ea18, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRPlugin_ControllerState2  cs) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_ControllerState4() ;

// Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Touches", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LIndexTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "LTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: None, comment: None }, CppParam { name: "LBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "LRecenterCount", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "RRecenterCount", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_27", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_26", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_25", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_24", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_23", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_22", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_21", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_20", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_19", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_18", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_17", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_16", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_15", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_14", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_13", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_12", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_11", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_10", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_09", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_08", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_07", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_06", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_05", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_04", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_03", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_02", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_01", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reserved_00", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_ControllerState4(uint32_t  ConnectedControllers, uint32_t  Buttons, uint32_t  Touches, uint32_t  NearTouches, float_t  LIndexTrigger, float_t  RIndexTrigger, float_t  LHandTrigger, float_t  RHandTrigger, ::GlobalNamespace::OVRPlugin_Vector2f  LThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  RThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  LTouchpad, ::GlobalNamespace::OVRPlugin_Vector2f  RTouchpad, uint8_t  LBatteryPercentRemaining, uint8_t  RBatteryPercentRemaining, uint8_t  LRecenterCount, uint8_t  RRecenterCount, uint8_t  Reserved_27, uint8_t  Reserved_26, uint8_t  Reserved_25, uint8_t  Reserved_24, uint8_t  Reserved_23, uint8_t  Reserved_22, uint8_t  Reserved_21, uint8_t  Reserved_20, uint8_t  Reserved_19, uint8_t  Reserved_18, uint8_t  Reserved_17, uint8_t  Reserved_16, uint8_t  Reserved_15, uint8_t  Reserved_14, uint8_t  Reserved_13, uint8_t  Reserved_12, uint8_t  Reserved_11, uint8_t  Reserved_10, uint8_t  Reserved_09, uint8_t  Reserved_08, uint8_t  Reserved_07, uint8_t  Reserved_06, uint8_t  Reserved_05, uint8_t  Reserved_04, uint8_t  Reserved_03, uint8_t  Reserved_02, uint8_t  Reserved_01, uint8_t  Reserved_00) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12094};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

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

/// @brief Field Reserved_27, offset: 0x44, size: 0x1, def value: None
 uint8_t  Reserved_27;

/// @brief Field Reserved_26, offset: 0x45, size: 0x1, def value: None
 uint8_t  Reserved_26;

/// @brief Field Reserved_25, offset: 0x46, size: 0x1, def value: None
 uint8_t  Reserved_25;

/// @brief Field Reserved_24, offset: 0x47, size: 0x1, def value: None
 uint8_t  Reserved_24;

/// @brief Field Reserved_23, offset: 0x48, size: 0x1, def value: None
 uint8_t  Reserved_23;

/// @brief Field Reserved_22, offset: 0x49, size: 0x1, def value: None
 uint8_t  Reserved_22;

/// @brief Field Reserved_21, offset: 0x4a, size: 0x1, def value: None
 uint8_t  Reserved_21;

/// @brief Field Reserved_20, offset: 0x4b, size: 0x1, def value: None
 uint8_t  Reserved_20;

/// @brief Field Reserved_19, offset: 0x4c, size: 0x1, def value: None
 uint8_t  Reserved_19;

/// @brief Field Reserved_18, offset: 0x4d, size: 0x1, def value: None
 uint8_t  Reserved_18;

/// @brief Field Reserved_17, offset: 0x4e, size: 0x1, def value: None
 uint8_t  Reserved_17;

/// @brief Field Reserved_16, offset: 0x4f, size: 0x1, def value: None
 uint8_t  Reserved_16;

/// @brief Field Reserved_15, offset: 0x50, size: 0x1, def value: None
 uint8_t  Reserved_15;

/// @brief Field Reserved_14, offset: 0x51, size: 0x1, def value: None
 uint8_t  Reserved_14;

/// @brief Field Reserved_13, offset: 0x52, size: 0x1, def value: None
 uint8_t  Reserved_13;

/// @brief Field Reserved_12, offset: 0x53, size: 0x1, def value: None
 uint8_t  Reserved_12;

/// @brief Field Reserved_11, offset: 0x54, size: 0x1, def value: None
 uint8_t  Reserved_11;

/// @brief Field Reserved_10, offset: 0x55, size: 0x1, def value: None
 uint8_t  Reserved_10;

/// @brief Field Reserved_09, offset: 0x56, size: 0x1, def value: None
 uint8_t  Reserved_09;

/// @brief Field Reserved_08, offset: 0x57, size: 0x1, def value: None
 uint8_t  Reserved_08;

/// @brief Field Reserved_07, offset: 0x58, size: 0x1, def value: None
 uint8_t  Reserved_07;

/// @brief Field Reserved_06, offset: 0x59, size: 0x1, def value: None
 uint8_t  Reserved_06;

/// @brief Field Reserved_05, offset: 0x5a, size: 0x1, def value: None
 uint8_t  Reserved_05;

/// @brief Field Reserved_04, offset: 0x5b, size: 0x1, def value: None
 uint8_t  Reserved_04;

/// @brief Field Reserved_03, offset: 0x5c, size: 0x1, def value: None
 uint8_t  Reserved_03;

/// @brief Field Reserved_02, offset: 0x5d, size: 0x1, def value: None
 uint8_t  Reserved_02;

/// @brief Field Reserved_01, offset: 0x5e, size: 0x1, def value: None
 uint8_t  Reserved_01;

/// @brief Field Reserved_00, offset: 0x5f, size: 0x1, def value: None
 uint8_t  Reserved_00;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, ConnectedControllers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Buttons) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Touches) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, NearTouches) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, LIndexTrigger) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, RIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, LHandTrigger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, RHandTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, LThumbstick) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, RThumbstick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, LTouchpad) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, RTouchpad) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, LBatteryPercentRemaining) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, RBatteryPercentRemaining) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, LRecenterCount) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, RRecenterCount) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_27) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_26) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_25) == 0x46, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_24) == 0x47, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_23) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_22) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_21) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_20) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_19) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_18) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_17) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_16) == 0x4f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_15) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_14) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_13) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_12) == 0x53, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_11) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_10) == 0x55, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_09) == 0x56, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_08) == 0x57, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_07) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_06) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_05) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_04) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_03) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_02) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_01) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_ControllerState4, Reserved_00) == 0x5f, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_ControllerState4) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
