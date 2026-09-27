#pragma once
// IWYU pragma private; include "GlobalNamespace/ForceVolume_AudioState.hpp"
#include "GlobalNamespace/zzzz__ForceVolume_AudioState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ForceVolume_AudioState::ForceVolume_AudioState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ForceVolume_AudioState::ForceVolume_AudioState()   {
}
constexpr ::GlobalNamespace::ForceVolume_AudioState  GlobalNamespace::ForceVolume_AudioState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ForceVolume_AudioState  GlobalNamespace::ForceVolume_AudioState::Enter{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ForceVolume_AudioState  GlobalNamespace::ForceVolume_AudioState::Crescendo{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ForceVolume_AudioState  GlobalNamespace::ForceVolume_AudioState::Loop{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ForceVolume_AudioState  GlobalNamespace::ForceVolume_AudioState::Exit{static_cast<int32_t>(0x4)};
