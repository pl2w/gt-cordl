#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeProfile_DirtyState.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_DirtyState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VolumeProfile_DirtyState::VolumeProfile_DirtyState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VolumeProfile_DirtyState::VolumeProfile_DirtyState()   {
}
constexpr ::GlobalNamespace::VolumeProfile_DirtyState  GlobalNamespace::VolumeProfile_DirtyState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VolumeProfile_DirtyState  GlobalNamespace::VolumeProfile_DirtyState::DirtyByComponentChange{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VolumeProfile_DirtyState  GlobalNamespace::VolumeProfile_DirtyState::DirtyByProfileReset{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::VolumeProfile_DirtyState  GlobalNamespace::VolumeProfile_DirtyState::Other{static_cast<int32_t>(0x4)};
