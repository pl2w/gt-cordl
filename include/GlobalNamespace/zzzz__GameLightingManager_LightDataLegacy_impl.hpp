#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManager_LightDataLegacy.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightDataLegacy_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "direction", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameLightingManager_LightDataLegacy::GameLightingManager_LightDataLegacy(::Unity::Mathematics::float4  position, ::Unity::Mathematics::float4  color, ::Unity::Mathematics::float4  direction) noexcept  {
this->position = position;
this->color = color;
this->direction = direction;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLightingManager_LightDataLegacy::GameLightingManager_LightDataLegacy()   {
}
