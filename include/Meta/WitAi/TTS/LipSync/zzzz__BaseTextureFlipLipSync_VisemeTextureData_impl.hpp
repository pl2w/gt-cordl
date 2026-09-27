#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/LipSync/BaseTextureFlipLipSync_VisemeTextureData.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "Meta/WitAi/TTS/LipSync/zzzz__BaseTextureFlipLipSync_VisemeTextureData_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "viseme", ty: "::Meta::WitAi::TTS::Data::Viseme", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textures", ty: "::ArrayW<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData::BaseTextureFlipLipSync_VisemeTextureData(::Meta::WitAi::TTS::Data::Viseme  viseme, ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  textures) noexcept  {
this->viseme = viseme;
this->textures = textures;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseTextureFlipLipSync_VisemeTextureData::BaseTextureFlipLipSync_VisemeTextureData()   {
}
