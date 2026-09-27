#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent_Button.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PointerEvent_Button::PointerEvent_Button(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointerEvent_Button::PointerEvent_Button()   {
}
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::None{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::Primary{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::FingerInTouch{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::PenTipInTouch{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::PenEraserInTouch{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::PenBarrelButton{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::MouseLeft{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::MouseRight{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::MouseMiddle{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::MouseForward{static_cast<uint32_t>(0x8u)};
constexpr ::GlobalNamespace::PointerEvent_Button  GlobalNamespace::PointerEvent_Button::MouseBack{static_cast<uint32_t>(0x10u)};
