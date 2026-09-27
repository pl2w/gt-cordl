#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRSimulatedControllerState.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__ControllerButton_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState.get_formatId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::get_formatId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4c8010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"get_formatId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState.get_format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::get_format)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4c8040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"get_format", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState.WithButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::WithButton)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb4c6c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"WithButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState.ToggleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::ToggleButton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4c73a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"ToggleButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState.HasButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::HasButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4c6f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"HasButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::Reset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4c4488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_primary2DAxis()  {
return this->___primary2DAxis;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_primary2DAxis() const {
return this->___primary2DAxis;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_primary2DAxis(::UnityEngine::Vector2  value)  {
this->___primary2DAxis = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_trigger()  {
return this->___trigger;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_trigger() const {
return this->___trigger;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_trigger(float_t  value)  {
this->___trigger = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_grip()  {
return this->___grip;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_grip() const {
return this->___grip;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_grip(float_t  value)  {
this->___grip = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_secondary2DAxis()  {
return this->___secondary2DAxis;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_secondary2DAxis() const {
return this->___secondary2DAxis;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_secondary2DAxis(::UnityEngine::Vector2  value)  {
this->___secondary2DAxis = value;
}
constexpr uint16_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_buttons()  {
return this->___buttons;
}
constexpr uint16_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_buttons() const {
return this->___buttons;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_buttons(uint16_t  value)  {
this->___buttons = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_batteryLevel()  {
return this->___batteryLevel;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_batteryLevel() const {
return this->___batteryLevel;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_batteryLevel(float_t  value)  {
this->___batteryLevel = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_trackingState()  {
return this->___trackingState;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_trackingState() const {
return this->___trackingState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_trackingState(int32_t  value)  {
this->___trackingState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_isTracked()  {
return this->___isTracked;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_isTracked() const {
return this->___isTracked;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_isTracked(bool  value)  {
this->___isTracked = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_devicePosition()  {
return this->___devicePosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_devicePosition() const {
return this->___devicePosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_devicePosition(::UnityEngine::Vector3  value)  {
this->___devicePosition = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_deviceRotation()  {
return this->___deviceRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_get_deviceRotation() const {
return this->___deviceRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::__cordl_internal_set_deviceRotation(::UnityEngine::Quaternion  value)  {
this->___deviceRotation = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::get_formatId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"get_formatId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::get_format()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"get_format", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::WithButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton  button, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"WithButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(*this, ___internal_method, button, state);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::ToggleButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"ToggleButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(*this, ___internal_method, button);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::HasButton(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"HasButton", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerButton>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, button);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr  UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*()  {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo()  {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "primary2DAxis", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "trigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "grip", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "secondary2DAxis", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "batteryLevel", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "trackingState", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isTracked", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "devicePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::XRSimulatedControllerState(::UnityEngine::Vector2  primary2DAxis, float_t  trigger, float_t  grip, ::UnityEngine::Vector2  secondary2DAxis, uint16_t  buttons, float_t  batteryLevel, int32_t  trackingState, bool  isTracked, ::UnityEngine::Vector3  devicePosition, ::UnityEngine::Quaternion  deviceRotation) noexcept  {
this->primary2DAxis = primary2DAxis;
this->trigger = trigger;
this->grip = grip;
this->secondary2DAxis = secondary2DAxis;
this->buttons = buttons;
this->batteryLevel = batteryLevel;
this->trackingState = trackingState;
this->isTracked = isTracked;
this->devicePosition = devicePosition;
this->deviceRotation = deviceRotation;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState::XRSimulatedControllerState()   {
}
