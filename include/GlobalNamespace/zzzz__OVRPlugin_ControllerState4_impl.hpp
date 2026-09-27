#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ControllerState4.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState4_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_ControllerState4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlugin_ControllerState4::*)(::GlobalNamespace::OVRPlugin_ControllerState2)>(&::GlobalNamespace::OVRPlugin_ControllerState4::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa60ea18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_ControllerState4>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_ControllerState2>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPlugin_ControllerState4::_ctor(::GlobalNamespace::OVRPlugin_ControllerState2  cs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_ControllerState4>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_ControllerState2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cs);
}
// Ctor Parameters [CppParam { name: "ConnectedControllers", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buttons", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Touches", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NearTouches", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LIndexTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RIndexTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LHandTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RHandTrigger", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RThumbstick", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RTouchpad", ty: "::GlobalNamespace::OVRPlugin_Vector2f", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RBatteryPercentRemaining", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LRecenterCount", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RRecenterCount", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_27", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_26", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_25", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_24", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_23", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_22", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_21", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_20", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_19", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_18", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_17", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_16", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_15", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_14", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_13", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_12", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_11", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_10", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_09", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_08", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_07", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_06", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_05", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_04", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_03", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_02", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_01", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reserved_00", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_ControllerState4::OVRPlugin_ControllerState4(uint32_t  ConnectedControllers, uint32_t  Buttons, uint32_t  Touches, uint32_t  NearTouches, float_t  LIndexTrigger, float_t  RIndexTrigger, float_t  LHandTrigger, float_t  RHandTrigger, ::GlobalNamespace::OVRPlugin_Vector2f  LThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  RThumbstick, ::GlobalNamespace::OVRPlugin_Vector2f  LTouchpad, ::GlobalNamespace::OVRPlugin_Vector2f  RTouchpad, uint8_t  LBatteryPercentRemaining, uint8_t  RBatteryPercentRemaining, uint8_t  LRecenterCount, uint8_t  RRecenterCount, uint8_t  Reserved_27, uint8_t  Reserved_26, uint8_t  Reserved_25, uint8_t  Reserved_24, uint8_t  Reserved_23, uint8_t  Reserved_22, uint8_t  Reserved_21, uint8_t  Reserved_20, uint8_t  Reserved_19, uint8_t  Reserved_18, uint8_t  Reserved_17, uint8_t  Reserved_16, uint8_t  Reserved_15, uint8_t  Reserved_14, uint8_t  Reserved_13, uint8_t  Reserved_12, uint8_t  Reserved_11, uint8_t  Reserved_10, uint8_t  Reserved_09, uint8_t  Reserved_08, uint8_t  Reserved_07, uint8_t  Reserved_06, uint8_t  Reserved_05, uint8_t  Reserved_04, uint8_t  Reserved_03, uint8_t  Reserved_02, uint8_t  Reserved_01, uint8_t  Reserved_00) noexcept  {
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
this->Reserved_27 = Reserved_27;
this->Reserved_26 = Reserved_26;
this->Reserved_25 = Reserved_25;
this->Reserved_24 = Reserved_24;
this->Reserved_23 = Reserved_23;
this->Reserved_22 = Reserved_22;
this->Reserved_21 = Reserved_21;
this->Reserved_20 = Reserved_20;
this->Reserved_19 = Reserved_19;
this->Reserved_18 = Reserved_18;
this->Reserved_17 = Reserved_17;
this->Reserved_16 = Reserved_16;
this->Reserved_15 = Reserved_15;
this->Reserved_14 = Reserved_14;
this->Reserved_13 = Reserved_13;
this->Reserved_12 = Reserved_12;
this->Reserved_11 = Reserved_11;
this->Reserved_10 = Reserved_10;
this->Reserved_09 = Reserved_09;
this->Reserved_08 = Reserved_08;
this->Reserved_07 = Reserved_07;
this->Reserved_06 = Reserved_06;
this->Reserved_05 = Reserved_05;
this->Reserved_04 = Reserved_04;
this->Reserved_03 = Reserved_03;
this->Reserved_02 = Reserved_02;
this->Reserved_01 = Reserved_01;
this->Reserved_00 = Reserved_00;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_ControllerState4::OVRPlugin_ControllerState4()   {
}
