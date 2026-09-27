#pragma once
// IWYU pragma private; include "Voxels/TextureEntry.hpp"
#include "Voxels/zzzz__TextureEntry_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "Diffuse", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Normal", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Voxels::TextureEntry::TextureEntry(::UnityW<::UnityEngine::Texture2D>  Diffuse, ::UnityW<::UnityEngine::Texture2D>  Normal) noexcept  {
this->Diffuse = Diffuse;
this->Normal = Normal;
}
// Ctor Parameters []
constexpr ::Voxels::TextureEntry::TextureEntry()   {
}
