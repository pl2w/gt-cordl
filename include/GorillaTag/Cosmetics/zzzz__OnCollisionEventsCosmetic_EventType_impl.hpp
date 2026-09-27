#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/OnCollisionEventsCosmetic_EventType.hpp"
#include "GorillaTag/Cosmetics/zzzz__OnCollisionEventsCosmetic_EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_EventType::OnCollisionEventsCosmetic_EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_EventType::OnCollisionEventsCosmetic_EventType()   {
}
constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_EventType  GlobalNamespace::OnCollisionEventsCosmetic_EventType::CollisionEnter{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_EventType  GlobalNamespace::OnCollisionEventsCosmetic_EventType::CollisionStay{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OnCollisionEventsCosmetic_EventType  GlobalNamespace::OnCollisionEventsCosmetic_EventType::CollisionExit{static_cast<int32_t>(0x2)};
