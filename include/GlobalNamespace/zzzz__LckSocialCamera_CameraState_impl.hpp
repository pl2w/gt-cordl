#pragma once
// IWYU pragma private; include "GlobalNamespace/LckSocialCamera_CameraState.hpp"
#include "GlobalNamespace/zzzz__LckSocialCamera_CameraState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckSocialCamera_CameraState::LckSocialCamera_CameraState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckSocialCamera_CameraState::LckSocialCamera_CameraState()   {
}
constexpr ::GlobalNamespace::LckSocialCamera_CameraState  GlobalNamespace::LckSocialCamera_CameraState::Empty{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckSocialCamera_CameraState  GlobalNamespace::LckSocialCamera_CameraState::Visible{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckSocialCamera_CameraState  GlobalNamespace::LckSocialCamera_CameraState::Recording{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LckSocialCamera_CameraState  GlobalNamespace::LckSocialCamera_CameraState::OnNeck{static_cast<int32_t>(0x4)};
