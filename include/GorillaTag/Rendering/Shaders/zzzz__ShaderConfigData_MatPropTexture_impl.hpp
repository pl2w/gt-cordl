#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_MatPropTexture.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "textureName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textureVal", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ShaderConfigData_MatPropTexture::ShaderConfigData_MatPropTexture(::StringW  textureName, ::UnityW<::UnityEngine::Texture>  textureVal) noexcept  {
this->textureName = textureName;
this->textureVal = textureVal;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShaderConfigData_MatPropTexture::ShaderConfigData_MatPropTexture()   {
}
