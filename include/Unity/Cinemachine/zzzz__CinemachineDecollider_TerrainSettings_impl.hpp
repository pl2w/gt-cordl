#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDecollider_TerrainSettings.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_TerrainSettings_def.hpp"
// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TerrainLayers", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaximumRaycast", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Damping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineDecollider_TerrainSettings::CinemachineDecollider_TerrainSettings(bool  Enabled, ::UnityEngine::LayerMask  TerrainLayers, float_t  MaximumRaycast, float_t  Damping) noexcept  {
this->Enabled = Enabled;
this->TerrainLayers = TerrainLayers;
this->MaximumRaycast = MaximumRaycast;
this->Damping = Damping;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineDecollider_TerrainSettings::CinemachineDecollider_TerrainSettings()   {
}
