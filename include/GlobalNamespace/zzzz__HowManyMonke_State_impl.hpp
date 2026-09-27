#pragma once
// IWYU pragma private; include "GlobalNamespace/HowManyMonke_State.hpp"
#include "GlobalNamespace/zzzz__HowManyMonke_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HowManyMonke_State::HowManyMonke_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HowManyMonke_State::HowManyMonke_State()   {
}
constexpr ::GlobalNamespace::HowManyMonke_State  GlobalNamespace::HowManyMonke_State::READY{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HowManyMonke_State  GlobalNamespace::HowManyMonke_State::TD_LOOKUP{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HowManyMonke_State  GlobalNamespace::HowManyMonke_State::HMM_LOOKUP{static_cast<int32_t>(0x2)};
