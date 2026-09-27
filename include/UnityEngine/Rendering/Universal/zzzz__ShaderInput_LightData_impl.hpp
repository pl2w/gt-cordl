#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderInput_LightData.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderInput_LightData_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "color", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attenuation", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spotDirection", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "occlusionProbeChannels", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ShaderInput_LightData::ShaderInput_LightData(::UnityEngine::Vector4  position, ::UnityEngine::Vector4  color, ::UnityEngine::Vector4  attenuation, ::UnityEngine::Vector4  spotDirection, ::UnityEngine::Vector4  occlusionProbeChannels, uint32_t  layerMask) noexcept  {
this->position = position;
this->color = color;
this->attenuation = attenuation;
this->spotDirection = spotDirection;
this->occlusionProbeChannels = occlusionProbeChannels;
this->layerMask = layerMask;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderInput_LightData::ShaderInput_LightData()   {
}
