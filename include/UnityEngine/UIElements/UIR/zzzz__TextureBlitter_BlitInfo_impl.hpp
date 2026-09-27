#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TextureBlitter_BlitInfo.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__RectInt_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextureBlitter_BlitInfo_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "src", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "srcRect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dstPos", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "border", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tint", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TextureBlitter_BlitInfo::TextureBlitter_BlitInfo(::UnityW<::UnityEngine::Texture>  src, ::UnityEngine::RectInt  srcRect, ::UnityEngine::Vector2Int  dstPos, int32_t  border, ::UnityEngine::Color  tint) noexcept  {
this->src = src;
this->srcRect = srcRect;
this->dstPos = dstPos;
this->border = border;
this->tint = tint;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureBlitter_BlitInfo::TextureBlitter_BlitInfo()   {
}
