#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DistanceCheckerCosmetic_State.hpp"
#include "GorillaTag/Cosmetics/zzzz__DistanceCheckerCosmetic_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DistanceCheckerCosmetic_State::DistanceCheckerCosmetic_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DistanceCheckerCosmetic_State::DistanceCheckerCosmetic_State()   {
}
constexpr ::GlobalNamespace::DistanceCheckerCosmetic_State  GlobalNamespace::DistanceCheckerCosmetic_State::AboveThreshold{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DistanceCheckerCosmetic_State  GlobalNamespace::DistanceCheckerCosmetic_State::BelowThreshold{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DistanceCheckerCosmetic_State  GlobalNamespace::DistanceCheckerCosmetic_State::None{static_cast<int32_t>(0x2)};
