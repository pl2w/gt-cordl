#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ControllerState6.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState6_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState5_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_ControllerState6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlugin_ControllerState6::*)(::GlobalNamespace::OVRPlugin_ControllerState5)>(&::GlobalNamespace::OVRPlugin_ControllerState6::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa60e8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_ControllerState6>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_ControllerState5>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_ControllerState6::_ctor(::GlobalNamespace::OVRPlugin_ControllerState5  cs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_ControllerState6>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_ControllerState5>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cs);
}
// Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Touches", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LIndexTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LRecenterCount", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RRecenterCount", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LThumbRestForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RThumbRestForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LStylusForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RStylusForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LIndexTriggerCurl", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RIndexTriggerCurl", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LIndexTriggerSlide", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RIndexTriggerSlide", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LIndexTriggerForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RIndexTriggerForce", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6::OVRPlugin_ControllerState6(uint32_t  ConnectedControllers, uint32_t  Buttons, uint32_t  Touches, uint32_t  NearTouches, float_t  LIndexTrigger, float_t  RIndexTrigger, float_t  LHandTrigger, float_t  RHandTrigger, ::GlobalNamespace::OVRPlugin_Vector2f  LThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  RThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  LTouchpad, ::GlobalNamespace::OVRPlugin_Vector2f  RTouchpad, uint8_t  LBatteryPercentRemaining, uint8_t  RBatteryPercentRemaining, uint8_t  LRecenterCount, uint8_t  RRecenterCount, float_t  LThumbRestForce, float_t  RThumbRestForce, float_t  LStylusForce, float_t  RStylusForce, float_t  LIndexTriggerCurl, float_t  RIndexTriggerCurl, float_t  LIndexTriggerSlide, float_t  RIndexTriggerSlide, float_t  LIndexTriggerForce, float_t  RIndexTriggerForce) noexcept  {
this->ConnectedControllers = ConnectedControllers;
this->Buttons = Buttons;
this->Touches = Touches;
this->NearTouches = NearTouches;
this->LIndexTrigger = LIndexTrigger;
this->RIndexTrigger = RIndexTrigger;
this->LHandTrigger = LHandTrigger;
this->RHandTrigger = RHandTrigger;
this->LThumbstick = LThumbstick;
this->RThumbstick = RThumbstick;
this->LTouchpad = LTouchpad;
this->RTouchpad = RTouchpad;
this->LBatteryPercentRemaining = LBatteryPercentRemaining;
this->RBatteryPercentRemaining = RBatteryPercentRemaining;
this->LRecenterCount = LRecenterCount;
this->RRecenterCount = RRecenterCount;
this->LThumbRestForce = LThumbRestForce;
this->RThumbRestForce = RThumbRestForce;
this->LStylusForce = LStylusForce;
this->RStylusForce = RStylusForce;
this->LIndexTriggerCurl = LIndexTriggerCurl;
this->RIndexTriggerCurl = RIndexTriggerCurl;
this->LIndexTriggerSlide = LIndexTriggerSlide;
this->RIndexTriggerSlide = RIndexTriggerSlide;
this->LIndexTriggerForce = LIndexTriggerForce;
this->RIndexTriggerForce = RIndexTriggerForce;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6::OVRPlugin_ControllerState6()   {
}
