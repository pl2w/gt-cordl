#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextureRegistry_TextureInfo.hpp"
#include "UnityEngine/UIElements/zzzz__TextureRegistry_TextureInfo_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dynamic", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TextureRegistry_TextureInfo::TextureRegistry_TextureInfo(::UnityW<::UnityEngine::Texture>  texture, bool  dynamic, int32_t  refCount) noexcept  {
this->texture = texture;
this->dynamic = dynamic;
this->refCount = refCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureRegistry_TextureInfo::TextureRegistry_TextureInfo()   {
}
