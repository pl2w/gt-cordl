#pragma once
// IWYU pragma private; include "GlobalNamespace/SynchedMusicController_AudioSourcePickMode.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_AudioSourcePickMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode::SynchedMusicController_AudioSourcePickMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode::SynchedMusicController_AudioSourcePickMode()   {
}
constexpr ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode  GlobalNamespace::SynchedMusicController_AudioSourcePickMode::All{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode  GlobalNamespace::SynchedMusicController_AudioSourcePickMode::Shuffle{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode  GlobalNamespace::SynchedMusicController_AudioSourcePickMode::Specific{static_cast<int32_t>(0x2)};
