#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsV2Spawner_Dirty_LoadOpInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAttachInfo_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticInfoV2_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticPart_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticsV2Spawner_Dirty_LoadOpInfo)
namespace GorillaTag::CosmeticSystem {
struct CosmeticAttachInfo;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticInfoV2;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticPart;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticsV2Spawner_Dirty_LoadOpInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, "", "CosmeticsV2Spawner_Dirty/LoadOpInfo");
// Dependencies GorillaTag.CosmeticSystem.CosmeticAttachInfo, GorillaTag.CosmeticSystem.CosmeticInfoV2, GorillaTag.CosmeticSystem.CosmeticPart, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace GlobalNamespace {
// Is value type: true
// CS Name: CosmeticsV2Spawner_Dirty/LoadOpInfo
struct CORDL_TYPE CosmeticsV2Spawner_Dirty_LoadOpInfo {
public:
// Declarations
/// @brief Method .ctor, addr 0x5669398, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::GorillaTag::CosmeticSystem::CosmeticAttachInfo  attachInfo, ::GorillaTag::CosmeticSystem::CosmeticPart  part, int32_t  partIndex, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfoV2, int32_t  vrRigIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsV2Spawner_Dirty_LoadOpInfo() ;

// Ctor Parameters [CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "loadOp", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "resultGObj", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachInfo", ty: "::GorillaTag::CosmeticSystem::CosmeticAttachInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "part", ty: "::GorillaTag::CosmeticSystem::CosmeticPart", modifiers: "", def_value: None, comment: None }, CppParam { name: "partIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cosmeticInfoV2", ty: "::GorillaTag::CosmeticSystem::CosmeticInfoV2", modifiers: "", def_value: None, comment: None }, CppParam { name: "vrRigIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticsV2Spawner_Dirty_LoadOpInfo(bool  isStarted, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp, ::UnityW<::UnityEngine::GameObject>  resultGObj, ::GorillaTag::CosmeticSystem::CosmeticAttachInfo  attachInfo, ::GorillaTag::CosmeticSystem::CosmeticPart  part, int32_t  partIndex, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfoV2, int32_t  vrRigIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{778};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x348};

/// @brief Field isStarted, offset: 0x0, size: 0x1, def value: None
 bool  isStarted;

/// @brief Field loadOp, offset: 0x8, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp;

/// @brief Field resultGObj, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  resultGObj;

/// @brief Field attachInfo, offset: 0x28, size: 0x50, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAttachInfo  attachInfo;

/// @brief Field part, offset: 0x78, size: 0x18, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticPart  part;

/// @brief Field partIndex, offset: 0x90, size: 0x4, def value: None
 int32_t  partIndex;

/// @brief Field cosmeticInfoV2, offset: 0x98, size: 0x2b0, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfoV2;

/// @brief Size padding 0x348 - 0x350 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field vrRigIndex, offset: 0x348, size: 0x4, def value: None
 int32_t  vrRigIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, isStarted) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, loadOp) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, resultGObj) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, attachInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, part) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, partIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, cosmeticInfoV2) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo, vrRigIndex) == 0x348, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsV2Spawner_Dirty_LoadOpInfo) == 0x348, "Size mismatch!");

} // namespace end def GlobalNamespace
