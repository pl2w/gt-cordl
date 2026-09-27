#pragma once
// IWYU pragma private; include "GlobalNamespace/HeadModel__CosmeticPartLoadInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAttachInfo_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HeadModel__CosmeticPartLoadInfo)
namespace GorillaTag {
template<typename TObject>
class GTAssetRef_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct HeadModel__CosmeticPartLoadInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo, "", "HeadModel/_CosmeticPartLoadInfo");
// Dependencies GorillaTag.CosmeticSystem.CosmeticAttachInfo, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace GlobalNamespace {
// Is value type: true
// CS Name: HeadModel/_CosmeticPartLoadInfo
struct CORDL_TYPE HeadModel__CosmeticPartLoadInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HeadModel__CosmeticPartLoadInfo() ;

// Ctor Parameters [CppParam { name: "playFabId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefabAssetRef", ty: "::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachInfo", ty: "::GorillaTag::CosmeticSystem::CosmeticAttachInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "loadOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "xform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }]
constexpr HeadModel__CosmeticPartLoadInfo(::StringW  playFabId, ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  prefabAssetRef, ::GorillaTag::CosmeticSystem::CosmeticAttachInfo  attachInfo, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp, ::UnityW<::UnityEngine::Transform>  xform) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1310};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field playFabId, offset: 0x0, size: 0x8, def value: None
 ::StringW  playFabId;

/// @brief Field prefabAssetRef, offset: 0x8, size: 0x8, def value: None
 ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  prefabAssetRef;

/// @brief Field attachInfo, offset: 0x10, size: 0x50, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAttachInfo  attachInfo;

/// @brief Field loadOp, offset: 0x60, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp;

/// @brief Field xform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  xform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo, playFabId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo, prefabAssetRef) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo, attachInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo, loadOp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo, xform) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
