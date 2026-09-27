#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_StatusEffects.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_StatusEffects_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RoomSystem_StatusEffects::RoomSystem_StatusEffects(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomSystem_StatusEffects::RoomSystem_StatusEffects()   {
}
constexpr ::GlobalNamespace::RoomSystem_StatusEffects  GlobalNamespace::RoomSystem_StatusEffects::TaggedTime{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RoomSystem_StatusEffects  GlobalNamespace::RoomSystem_StatusEffects::JoinedTaggedTime{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RoomSystem_StatusEffects  GlobalNamespace::RoomSystem_StatusEffects::SetSlowedTime{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RoomSystem_StatusEffects  GlobalNamespace::RoomSystem_StatusEffects::UnTagged{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::RoomSystem_StatusEffects  GlobalNamespace::RoomSystem_StatusEffects::FrozenTime{static_cast<int32_t>(0x4)};
