#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/Event_Type.hpp"
#include "UnityEngine/InputForUI/zzzz__Event_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Event_Type::Event_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Event_Type::Event_Type()   {
}
constexpr ::GlobalNamespace::Event_Type  GlobalNamespace::Event_Type::Invalid{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Event_Type  GlobalNamespace::Event_Type::KeyEvent{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Event_Type  GlobalNamespace::Event_Type::PointerEvent{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Event_Type  GlobalNamespace::Event_Type::TextInputEvent{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Event_Type  GlobalNamespace::Event_Type::IMECompositionEvent{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Event_Type  GlobalNamespace::Event_Type::CommandEvent{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::Event_Type  GlobalNamespace::Event_Type::NavigationEvent{static_cast<int32_t>(0x6)};
