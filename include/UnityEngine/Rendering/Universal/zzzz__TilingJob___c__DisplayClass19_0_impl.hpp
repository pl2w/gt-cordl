#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TilingJob___c__DisplayClass19_0.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TilingJob___c__DisplayClass19_0_def.hpp"
// Ctor Parameters [CppParam { name: "light", ty: "::UnityEngine::Rendering::VisibleLight", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightPositionVS", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightDirectionVS", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cosHalfAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "coneHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TilingJob___c__DisplayClass19_0::TilingJob___c__DisplayClass19_0(::UnityEngine::Rendering::VisibleLight  light, ::Unity::Mathematics::float3  lightPositionVS, ::Unity::Mathematics::float3  lightDirectionVS, float_t  cosHalfAngle, float_t  coneHeight) noexcept  {
this->light = light;
this->lightPositionVS = lightPositionVS;
this->lightDirectionVS = lightDirectionVS;
this->cosHalfAngle = cosHalfAngle;
this->coneHeight = coneHeight;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TilingJob___c__DisplayClass19_0::TilingJob___c__DisplayClass19_0()   {
}
