#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManager_LightInput.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightInput_def.hpp"
// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "intensity", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "intensityMult", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameLightingManager_LightInput::GameLightingManager_LightInput(::UnityEngine::Color  color, float_t  intensity, float_t  intensityMult) noexcept  {
this->color = color;
this->intensity = intensity;
this->intensityMult = intensityMult;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLightingManager_LightInput::GameLightingManager_LightInput()   {
}
