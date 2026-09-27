#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRSimulatedControllerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSimulatedControllerState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct ControllerButton;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct XRSimulatedControllerState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRSimulatedControllerState");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState
#pragma pack(push, 0)
struct CORDL_TYPE XRSimulatedControllerState {
public:
// Declarations
/// @brief Field batteryLevel, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_batteryLevel, put=__cordl_internal_set_batteryLevel)) float_t  batteryLevel;

/// @brief Field buttons, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) uint16_t  buttons;

/// @brief Field devicePosition, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_devicePosition, put=__cordl_internal_set_devicePosition)) ::UnityEngine::Vector3  devicePosition;

/// @brief Field deviceRotation, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_deviceRotation, put=__cordl_internal_set_deviceRotation)) ::UnityEngine::Quaternion  deviceRotation;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Field grip, offset 0xc, size 0x4 
 __declspec(property(get=__cordl_internal_get_grip, put=__cordl_internal_set_grip)) float_t  grip;

/// @brief Field isTracked, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTracked, put=__cordl_internal_set_isTracked)) bool  isTracked;

/// @brief Field primary2DAxis, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_primary2DAxis, put=__cordl_internal_set_primary2DAxis)) ::UnityEngine::Vector2  primary2DAxis;

/// @brief Field secondary2DAxis, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_secondary2DAxis, put=__cordl_internal_set_secondary2DAxis)) ::UnityEngine::Vector2  secondary2DAxis;

/// @brief Field trackingState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_trackingState, put=__cordl_internal_set_trackingState)) int32_t  trackingState;

/// @brief Field trigger, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_trigger, put=__cordl_internal_set_trigger)) float_t  trigger;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

/// @brief Method HasButton, addr 0xb4c6f50, size 0x10, virtual false, abstract: false, final false
inline bool HasButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton  button) ;

/// @brief Method Reset, addr 0xb4c4488, size 0x5c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToggleButton, addr 0xb4c73a0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState ToggleButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton  button) ;

/// @brief Method WithButton, addr 0xb4c6c94, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState WithButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton  button, bool  state) ;

constexpr float_t const& __cordl_internal_get_batteryLevel() const;

constexpr float_t& __cordl_internal_get_batteryLevel() ;

constexpr uint16_t const& __cordl_internal_get_buttons() const;

constexpr uint16_t& __cordl_internal_get_buttons() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_devicePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_devicePosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_deviceRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_deviceRotation() ;

constexpr float_t const& __cordl_internal_get_grip() const;

constexpr float_t& __cordl_internal_get_grip() ;

constexpr bool const& __cordl_internal_get_isTracked() const;

constexpr bool& __cordl_internal_get_isTracked() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_primary2DAxis() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_primary2DAxis() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_secondary2DAxis() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_secondary2DAxis() ;

constexpr int32_t const& __cordl_internal_get_trackingState() const;

constexpr int32_t& __cordl_internal_get_trackingState() ;

constexpr float_t const& __cordl_internal_get_trigger() const;

constexpr float_t& __cordl_internal_get_trigger() ;

constexpr void __cordl_internal_set_batteryLevel(float_t  value) ;

constexpr void __cordl_internal_set_buttons(uint16_t  value) ;

constexpr void __cordl_internal_set_devicePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_deviceRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_grip(float_t  value) ;

constexpr void __cordl_internal_set_isTracked(bool  value) ;

constexpr void __cordl_internal_set_primary2DAxis(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_secondary2DAxis(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_trackingState(int32_t  value) ;

constexpr void __cordl_internal_set_trigger(float_t  value) ;

/// @brief Method get_format, addr 0xb4c8040, size 0x30, virtual true, abstract: false, final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method get_formatId, addr 0xb4c8010, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_formatId() ;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo() ;

// Ctor Parameters []
// @brief default ctor
constexpr XRSimulatedControllerState() ;

// Ctor Parameters [CppParam { name: "primary2DAxis", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "trigger", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "grip", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "secondary2DAxis", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "batteryLevel", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "trackingState", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isTracked", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "devicePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "deviceRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr XRSimulatedControllerState(::UnityEngine::Vector2  primary2DAxis, float_t  trigger, float_t  grip, ::UnityEngine::Vector2  secondary2DAxis, uint16_t  buttons, float_t  batteryLevel, int32_t  trackingState, bool  isTracked, ::UnityEngine::Vector3  devicePosition, ::UnityEngine::Quaternion  deviceRotation) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___primary2DAxis_padding[0x0];
/// [InputControl(usage = "Primary2DAxis", aliases = new[] { "thumbstick", "joystick" }, offset = 0)]
/// @brief Field primary2DAxis, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___primary2DAxis;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___primary2DAxis_padding_forAlignment[0x0];
/// [InputControl(usage = "Primary2DAxis", aliases = new[] { "thumbstick", "joystick" }, offset = 0)]
/// @brief Field primary2DAxis, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___primary2DAxis_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___trigger_padding[0x8];
/// [InputControl(usage = "Trigger", layout = "Axis", offset = 8)]
/// @brief Field trigger, offset: 0x8, size: 0x4, def value: None
 float_t  ___trigger;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___trigger_padding_forAlignment[0x8];
/// [InputControl(usage = "Trigger", layout = "Axis", offset = 8)]
/// @brief Field trigger, offset: 0x8, size: 0x4, def value: None
 float_t  ___trigger_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___grip_padding[0xc];
/// [InputControl(usage = "Grip", layout = "Axis", offset = 12)]
/// @brief Field grip, offset: 0xc, size: 0x4, def value: None
 float_t  ___grip;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___grip_padding_forAlignment[0xc];
/// [InputControl(usage = "Grip", layout = "Axis", offset = 12)]
/// @brief Field grip, offset: 0xc, size: 0x4, def value: None
 float_t  ___grip_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___secondary2DAxis_padding[0x10];
/// [InputControl(usage = "Secondary2DAxis", offset = 16)]
/// @brief Field secondary2DAxis, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___secondary2DAxis;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___secondary2DAxis_padding_forAlignment[0x10];
/// [InputControl(usage = "Secondary2DAxis", offset = 16)]
/// @brief Field secondary2DAxis, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___secondary2DAxis_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___buttons_padding[0x18];
/// [InputControl(name = "primaryButton", usage = "PrimaryButton", layout = "Button", bit = 0, offset = 24)]
/// [InputControl(name = "primaryTouch", usage = "PrimaryTouch", layout = "Button", bit = 1, offset = 24)]
/// [InputControl(name = "secondaryButton", usage = "SecondaryButton", layout = "Button", bit = 2, offset = 24)]
/// [InputControl(name = "secondaryTouch", usage = "SecondaryTouch", layout = "Button", bit = 3, offset = 24)]
/// [InputControl(name = "gripButton", usage = "GripButton", layout = "Button", bit = 4, offset = 24, alias = "gripPressed")]
/// [InputControl(name = "triggerButton", usage = "TriggerButton", layout = "Button", bit = 5, offset = 24, alias = "triggerPressed")]
/// [InputControl(name = "menuButton", usage = "MenuButton", layout = "Button", bit = 6, offset = 24)]
/// [InputControl(name = "primary2DAxisClick", usage = "Primary2DAxisClick", layout = "Button", bit = 7, offset = 24)]
/// [InputControl(name = "primary2DAxisTouch", usage = "Primary2DAxisTouch", layout = "Button", bit = 8, offset = 24)]
/// [InputControl(name = "secondary2DAxisClick", usage = "Secondary2DAxisClick", layout = "Button", bit = 9, offset = 24)]
/// [InputControl(name = "secondary2DAxisTouch", usage = "Secondary2DAxisTouch", layout = "Button", bit = 10, offset = 24)]
/// [InputControl(name = "userPresence", usage = "UserPresence", layout = "Button", bit = 11, offset = 24)]
/// @brief Field buttons, offset: 0x18, size: 0x2, def value: None
 uint16_t  ___buttons;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___buttons_padding_forAlignment[0x18];
/// [InputControl(name = "primaryButton", usage = "PrimaryButton", layout = "Button", bit = 0, offset = 24)]
/// [InputControl(name = "primaryTouch", usage = "PrimaryTouch", layout = "Button", bit = 1, offset = 24)]
/// [InputControl(name = "secondaryButton", usage = "SecondaryButton", layout = "Button", bit = 2, offset = 24)]
/// [InputControl(name = "secondaryTouch", usage = "SecondaryTouch", layout = "Button", bit = 3, offset = 24)]
/// [InputControl(name = "gripButton", usage = "GripButton", layout = "Button", bit = 4, offset = 24, alias = "gripPressed")]
/// [InputControl(name = "triggerButton", usage = "TriggerButton", layout = "Button", bit = 5, offset = 24, alias = "triggerPressed")]
/// [InputControl(name = "menuButton", usage = "MenuButton", layout = "Button", bit = 6, offset = 24)]
/// [InputControl(name = "primary2DAxisClick", usage = "Primary2DAxisClick", layout = "Button", bit = 7, offset = 24)]
/// [InputControl(name = "primary2DAxisTouch", usage = "Primary2DAxisTouch", layout = "Button", bit = 8, offset = 24)]
/// [InputControl(name = "secondary2DAxisClick", usage = "Secondary2DAxisClick", layout = "Button", bit = 9, offset = 24)]
/// [InputControl(name = "secondary2DAxisTouch", usage = "Secondary2DAxisTouch", layout = "Button", bit = 10, offset = 24)]
/// [InputControl(name = "userPresence", usage = "UserPresence", layout = "Button", bit = 11, offset = 24)]
/// @brief Field buttons, offset: 0x18, size: 0x2, def value: None
 uint16_t  ___buttons_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___batteryLevel_padding[0x1c];
/// [InputControl(usage = "BatteryLevel", layout = "Axis", offset = 26)]
/// @brief Field batteryLevel, offset: 0x1c, size: 0x4, def value: None
 float_t  ___batteryLevel;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___batteryLevel_padding_forAlignment[0x1c];
/// [InputControl(usage = "BatteryLevel", layout = "Axis", offset = 26)]
/// @brief Field batteryLevel, offset: 0x1c, size: 0x4, def value: None
 float_t  ___batteryLevel_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___trackingState_padding[0x20];
/// [InputControl(usage = "TrackingState", layout = "Integer", offset = 30)]
/// @brief Field trackingState, offset: 0x20, size: 0x4, def value: None
 int32_t  ___trackingState;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___trackingState_padding_forAlignment[0x20];
/// [InputControl(usage = "TrackingState", layout = "Integer", offset = 30)]
/// @brief Field trackingState, offset: 0x20, size: 0x4, def value: None
 int32_t  ___trackingState_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x22
 uint8_t  ___isTracked_padding[0x22];
/// [InputControl(usage = "IsTracked", layout = "Button", offset = 34)]
/// @brief Field isTracked, offset: 0x22, size: 0x1, def value: None
 bool  ___isTracked;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x22 for alignment
 uint8_t  ___isTracked_padding_forAlignment[0x22];
/// [InputControl(usage = "IsTracked", layout = "Button", offset = 34)]
/// @brief Field isTracked, offset: 0x22, size: 0x1, def value: None
 bool  ___isTracked_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ___devicePosition_padding[0x24];
/// [InputControl(usage = "DevicePosition", offset = 35)]
/// @brief Field devicePosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___devicePosition;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ___devicePosition_padding_forAlignment[0x24];
/// [InputControl(usage = "DevicePosition", offset = 35)]
/// @brief Field devicePosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___devicePosition_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___deviceRotation_padding[0x30];
/// [InputControl(usage = "DeviceRotation", offset = 47)]
/// @brief Field deviceRotation, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___deviceRotation;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___deviceRotation_padding_forAlignment[0x30];
/// [InputControl(usage = "DeviceRotation", offset = 47)]
/// @brief Field deviceRotation, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___deviceRotation_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11631};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3f};

/// @brief Size padding 0x3f - 0x40 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState) == 0x3f, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
