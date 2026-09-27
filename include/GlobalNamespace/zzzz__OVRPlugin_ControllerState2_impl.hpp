#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ControllerState2.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_ControllerState2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlugin_ControllerState2::*)(::GlobalNamespace::OVRPlugin_ControllerState)>(&::GlobalNamespace::OVRPlugin_ControllerState2::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa60ea84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_ControllerState2>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_ControllerState>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_ControllerState2::_ctor(::GlobalNamespace::OVRPlugin_ControllerState  cs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_ControllerState2>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_ControllerState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cs);
}
// Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Touches", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LIndexTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_ControllerState2::OVRPlugin_ControllerState2(uint32_t  ConnectedControllers, uint32_t  Buttons, uint32_t  Touches, uint32_t  NearTouches, float_t  LIndexTrigger, float_t  RIndexTrigger, float_t  LHandTrigger, float_t  RHandTrigger, ::GlobalNamespace::OVRPlugin_Vector2f  LThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  RThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  LTouchpad, ::GlobalNamespace::OVRPlugin_Vector2f  RTouchpad) noexcept  {
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
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_ControllerState2::OVRPlugin_ControllerState2()   {
}
