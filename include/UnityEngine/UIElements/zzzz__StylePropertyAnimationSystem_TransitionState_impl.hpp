#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_TransitionState.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_TransitionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState::StylePropertyAnimationSystem_TransitionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState::StylePropertyAnimationSystem_TransitionState()   {
}
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState  GlobalNamespace::StylePropertyAnimationSystem_TransitionState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState  GlobalNamespace::StylePropertyAnimationSystem_TransitionState::Running{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState  GlobalNamespace::StylePropertyAnimationSystem_TransitionState::Started{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState  GlobalNamespace::StylePropertyAnimationSystem_TransitionState::Ended{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::StylePropertyAnimationSystem_TransitionState  GlobalNamespace::StylePropertyAnimationSystem_TransitionState::Canceled{static_cast<int32_t>(0x8)};
