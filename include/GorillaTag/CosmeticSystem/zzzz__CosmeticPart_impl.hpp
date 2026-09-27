#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticPart.hpp"
#include "GlobalNamespace/zzzz__ECosmeticPartType_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAttachInfo_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticPart_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAttachInfo_def.hpp"
#include "GorillaTag/zzzz__GTAssetRef_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "prefabAssetRef", ty: "::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachAnchors", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "partType", ty: "::GlobalNamespace::ECosmeticPartType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::CosmeticSystem::CosmeticPart::CosmeticPart(::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  prefabAssetRef, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAttachInfo>  attachAnchors, ::GlobalNamespace::ECosmeticPartType  partType) noexcept  {
this->prefabAssetRef = prefabAssetRef;
this->attachAnchors = attachAnchors;
this->partType = partType;
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::CosmeticPart::CosmeticPart()   {
}
