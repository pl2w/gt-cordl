#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemStopAction.hpp"
#include "UnityEngine/zzzz__ParticleSystemStopAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ParticleSystemStopAction::ParticleSystemStopAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemStopAction::ParticleSystemStopAction()   {
}
constexpr ::UnityEngine::ParticleSystemStopAction  UnityEngine::ParticleSystemStopAction::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ParticleSystemStopAction  UnityEngine::ParticleSystemStopAction::Disable{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ParticleSystemStopAction  UnityEngine::ParticleSystemStopAction::Destroy{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ParticleSystemStopAction  UnityEngine::ParticleSystemStopAction::Callback{static_cast<int32_t>(0x3)};
