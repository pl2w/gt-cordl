#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManager_LightDataPacked.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightDataPacked_def.hpp"
// Ctor Parameters [CppParam { name: "posXY", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "posZW", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colorRG", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colorBA", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameLightingManager_LightDataPacked::GameLightingManager_LightDataPacked(uint32_t  posXY, uint32_t  posZW, uint32_t  colorRG, uint32_t  colorBA, float_t  range) noexcept  {
this->posXY = posXY;
this->posZW = posZW;
this->colorRG = colorRG;
this->colorBA = colorBA;
this->range = range;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLightingManager_LightDataPacked::GameLightingManager_LightDataPacked()   {
}
