#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/OnTriggerEventsCosmetic_EventType.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnTriggerEventsCosmetic_EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_EventType::OnTriggerEventsCosmetic_EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_EventType::OnTriggerEventsCosmetic_EventType()   {
}
constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_EventType  GlobalNamespace::OnTriggerEventsCosmetic_EventType::TriggerEnter{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_EventType  GlobalNamespace::OnTriggerEventsCosmetic_EventType::TriggerStay{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OnTriggerEventsCosmetic_EventType  GlobalNamespace::OnTriggerEventsCosmetic_EventType::TriggerExit{static_cast<int32_t>(0x2)};
