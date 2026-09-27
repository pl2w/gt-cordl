#pragma once
// IWYU pragma private; include "GlobalNamespace/HeadModel__CosmeticPartLoadInfo.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAttachInfo_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "GlobalNamespace/zzzz__HeadModel__CosmeticPartLoadInfo_def.hpp"
#include "GorillaTag/zzzz__GTAssetRef_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "playFabId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefabAssetRef", ty: "::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachInfo", ty: "::GorillaTag::CosmeticSystem::CosmeticAttachInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "loadOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "xform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HeadModel__CosmeticPartLoadInfo::HeadModel__CosmeticPartLoadInfo(::StringW  playFabId, ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  prefabAssetRef, ::GorillaTag::CosmeticSystem::CosmeticAttachInfo  attachInfo, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp, ::UnityW<::UnityEngine::Transform>  xform) noexcept  {
this->playFabId = playFabId;
this->prefabAssetRef = prefabAssetRef;
this->attachInfo = attachInfo;
this->loadOp = loadOp;
this->xform = xform;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadModel__CosmeticPartLoadInfo::HeadModel__CosmeticPartLoadInfo()   {
}
