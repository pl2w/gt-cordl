#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent_Type.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PointerEvent_Type::PointerEvent_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointerEvent_Type::PointerEvent_Type()   {
}
constexpr ::GlobalNamespace::PointerEvent_Type  GlobalNamespace::PointerEvent_Type::PointerMoved{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PointerEvent_Type  GlobalNamespace::PointerEvent_Type::Scroll{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PointerEvent_Type  GlobalNamespace::PointerEvent_Type::ButtonPressed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::PointerEvent_Type  GlobalNamespace::PointerEvent_Type::ButtonReleased{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::PointerEvent_Type  GlobalNamespace::PointerEvent_Type::State{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::PointerEvent_Type  GlobalNamespace::PointerEvent_Type::TouchCanceled{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::PointerEvent_Type  GlobalNamespace::PointerEvent_Type::TrackedCanceled{static_cast<int32_t>(0x6)};
