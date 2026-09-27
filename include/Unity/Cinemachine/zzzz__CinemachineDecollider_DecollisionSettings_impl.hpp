#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDecollider_DecollisionSettings.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_DecollisionSettings_FollowTargetSettings_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_DecollisionSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_DecollisionSettings_FollowTargetSettings_def.hpp"
// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObstacleLayers", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UseFollowTarget", ty: "::GlobalNamespace::DecollisionSettings_CinemachineDecollider_FollowTargetSettings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Damping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SmoothingTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineDecollider_DecollisionSettings::CinemachineDecollider_DecollisionSettings(bool  Enabled, ::UnityEngine::LayerMask  ObstacleLayers, ::GlobalNamespace::DecollisionSettings_CinemachineDecollider_FollowTargetSettings  UseFollowTarget, float_t  Damping, float_t  SmoothingTime) noexcept  {
this->Enabled = Enabled;
this->ObstacleLayers = ObstacleLayers;
this->UseFollowTarget = UseFollowTarget;
this->Damping = Damping;
this->SmoothingTime = SmoothingTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineDecollider_DecollisionSettings::CinemachineDecollider_DecollisionSettings()   {
}
