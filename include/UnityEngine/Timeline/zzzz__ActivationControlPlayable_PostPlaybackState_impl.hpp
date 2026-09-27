#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationControlPlayable_PostPlaybackState.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_PostPlaybackState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState::ActivationControlPlayable_PostPlaybackState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState::ActivationControlPlayable_PostPlaybackState()   {
}
constexpr ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState  GlobalNamespace::ActivationControlPlayable_PostPlaybackState::Active{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState  GlobalNamespace::ActivationControlPlayable_PostPlaybackState::Inactive{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ActivationControlPlayable_PostPlaybackState  GlobalNamespace::ActivationControlPlayable_PostPlaybackState::Revert{static_cast<int32_t>(0x2)};
