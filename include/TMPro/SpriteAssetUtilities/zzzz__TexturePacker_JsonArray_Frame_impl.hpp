#pragma once
// IWYU pragma private; include "TMPro/SpriteAssetUtilities/TexturePacker_JsonArray_Frame.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_SpriteFrame_impl.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_SpriteSize_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/SpriteAssetUtilities/zzzz__TexturePacker_JsonArray_Frame_def.hpp"
// Ctor Parameters [CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "frame", ty: "::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotated", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "trimmed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spriteSourceSize", ty: "::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceSize", ty: "::GlobalNamespace::TexturePacker_JsonArray_SpriteSize", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pivot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TexturePacker_JsonArray_Frame::TexturePacker_JsonArray_Frame(::StringW  filename, ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame  frame, bool  rotated, bool  trimmed, ::GlobalNamespace::TexturePacker_JsonArray_SpriteFrame  spriteSourceSize, ::GlobalNamespace::TexturePacker_JsonArray_SpriteSize  sourceSize, ::UnityEngine::Vector2  pivot) noexcept  {
this->filename = filename;
this->frame = frame;
this->rotated = rotated;
this->trimmed = trimmed;
this->spriteSourceSize = spriteSourceSize;
this->sourceSize = sourceSize;
this->pivot = pivot;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TexturePacker_JsonArray_Frame::TexturePacker_JsonArray_Frame()   {
}
