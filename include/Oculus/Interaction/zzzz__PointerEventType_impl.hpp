#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointerEventType.hpp"
#include "Oculus/Interaction/zzzz__PointerEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::PointerEventType::PointerEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointerEventType::PointerEventType()   {
}
constexpr ::Oculus::Interaction::PointerEventType  Oculus::Interaction::PointerEventType::Hover{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::PointerEventType  Oculus::Interaction::PointerEventType::Unhover{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::PointerEventType  Oculus::Interaction::PointerEventType::Select{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::PointerEventType  Oculus::Interaction::PointerEventType::Unselect{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Interaction::PointerEventType  Oculus::Interaction::PointerEventType::Move{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Interaction::PointerEventType  Oculus::Interaction::PointerEventType::Cancel{static_cast<int32_t>(0x5)};
