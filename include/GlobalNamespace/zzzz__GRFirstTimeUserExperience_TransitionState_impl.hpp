#pragma once
// IWYU pragma private; include "GlobalNamespace/GRFirstTimeUserExperience_TransitionState.hpp"
#include "GlobalNamespace/zzzz__GRFirstTimeUserExperience_TransitionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState::GRFirstTimeUserExperience_TransitionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState::GRFirstTimeUserExperience_TransitionState()   {
}
constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  GlobalNamespace::GRFirstTimeUserExperience_TransitionState::Waiting{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  GlobalNamespace::GRFirstTimeUserExperience_TransitionState::Flicker{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  GlobalNamespace::GRFirstTimeUserExperience_TransitionState::Logo{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  GlobalNamespace::GRFirstTimeUserExperience_TransitionState::ZoneLoad{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  GlobalNamespace::GRFirstTimeUserExperience_TransitionState::Teleport{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GRFirstTimeUserExperience_TransitionState  GlobalNamespace::GRFirstTimeUserExperience_TransitionState::Exit{static_cast<int32_t>(0x5)};
