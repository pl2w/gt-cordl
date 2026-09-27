#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/MedusaEyeLantern_State.hpp"
#include "GorillaTag/Cosmetics/zzzz__MedusaEyeLantern_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MedusaEyeLantern_State::MedusaEyeLantern_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MedusaEyeLantern_State::MedusaEyeLantern_State()   {
}
constexpr ::GlobalNamespace::MedusaEyeLantern_State  GlobalNamespace::MedusaEyeLantern_State::SLOSHING{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MedusaEyeLantern_State  GlobalNamespace::MedusaEyeLantern_State::DORMANT{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MedusaEyeLantern_State  GlobalNamespace::MedusaEyeLantern_State::TRACKING{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MedusaEyeLantern_State  GlobalNamespace::MedusaEyeLantern_State::WARMUP{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MedusaEyeLantern_State  GlobalNamespace::MedusaEyeLantern_State::PRIMING{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MedusaEyeLantern_State  GlobalNamespace::MedusaEyeLantern_State::PETRIFICATION{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::MedusaEyeLantern_State  GlobalNamespace::MedusaEyeLantern_State::COOLDOWN{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::MedusaEyeLantern_State  GlobalNamespace::MedusaEyeLantern_State::RESET{static_cast<int32_t>(0x7)};
