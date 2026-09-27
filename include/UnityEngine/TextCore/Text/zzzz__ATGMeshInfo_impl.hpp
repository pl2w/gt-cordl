#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ATGMeshInfo.hpp"
#include "UnityEngine/TextCore/Text/zzzz__NativeTextElementInfo_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ATGMeshInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__NativeTextElementInfo_def.hpp"
// Ctor Parameters [CppParam { name: "textElementInfos", ty: "::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontAssetId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textElementCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textElementInfoIndicesByAtlas", ty: "::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasMultipleColors", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::Text::ATGMeshInfo::ATGMeshInfo(::ArrayW<::UnityEngine::TextCore::Text::NativeTextElementInfo>  textElementInfos, int32_t  fontAssetId, int32_t  textElementCount, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>  fontAsset, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*  textElementInfoIndicesByAtlas, bool  hasMultipleColors) noexcept  {
this->textElementInfos = textElementInfos;
this->fontAssetId = fontAssetId;
this->textElementCount = textElementCount;
this->fontAsset = fontAsset;
this->textElementInfoIndicesByAtlas = textElementInfoIndicesByAtlas;
this->hasMultipleColors = hasMultipleColors;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::ATGMeshInfo::ATGMeshInfo()   {
}
