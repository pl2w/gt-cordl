#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationTrack_PostPlaybackState.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_PostPlaybackState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ActivationTrack_PostPlaybackState::ActivationTrack_PostPlaybackState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ActivationTrack_PostPlaybackState::ActivationTrack_PostPlaybackState()   {
}
constexpr ::GlobalNamespace::ActivationTrack_PostPlaybackState  GlobalNamespace::ActivationTrack_PostPlaybackState::Active{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ActivationTrack_PostPlaybackState  GlobalNamespace::ActivationTrack_PostPlaybackState::Inactive{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ActivationTrack_PostPlaybackState  GlobalNamespace::ActivationTrack_PostPlaybackState::Revert{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ActivationTrack_PostPlaybackState  GlobalNamespace::ActivationTrack_PostPlaybackState::LeaveAsIs{static_cast<int32_t>(0x3)};
