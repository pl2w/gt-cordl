#pragma once
// IWYU pragma private; include "GorillaNetworking/Store/HeadModel_CosmeticStand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HeadModel_def.hpp"
#include "GorillaNetworking/Store/zzzz__HeadModel_CosmeticStand_BustType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeadModel_CosmeticStand)
namespace GlobalNamespace {
struct HeadModel_CosmeticStand_BustType;
}
namespace GlobalNamespace {
struct HeadModel__CosmeticPartLoadInfo;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticInfoV2;
}
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace GorillaTag {
template<typename TObject>
class GTAssetRef_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaNetworking::Store {
class HeadModel_CosmeticStand;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::Store::HeadModel_CosmeticStand*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::Store::HeadModel_CosmeticStand*, "GorillaNetworking.Store", "HeadModel_CosmeticStand");
// Dependencies GorillaNetworking.Store.HeadModel_CosmeticStand::BustType, HeadModel
namespace GorillaNetworking::Store {
// Is value type: false
// CS Name: GorillaNetworking.Store.HeadModel_CosmeticStand
class CORDL_TYPE HeadModel_CosmeticStand : public ::GlobalNamespace::HeadModel {
public:
// Declarations
using BustType = ::GlobalNamespace::HeadModel_CosmeticStand_BustType;

/// @brief Field _loadOp_to_partInfoIndex, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadOp_to_partInfoIndex, put=__cordl_internal_set__loadOp_to_partInfoIndex)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*  _loadOp_to_partInfoIndex;

/// @brief Field _manuallySpawnedCosmeticParts, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__manuallySpawnedCosmeticParts, put=__cordl_internal_set__manuallySpawnedCosmeticParts)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _manuallySpawnedCosmeticParts;

/// @brief Field bustType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_bustType, put=__cordl_internal_set_bustType)) ::GlobalNamespace::HeadModel_CosmeticStand_BustType  bustType;

/// @brief Field defaultMannequinBody, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMannequinBody, put=__cordl_internal_set_defaultMannequinBody)) ::UnityW<::UnityEngine::Material>  defaultMannequinBody;

/// @brief Field defaultMannequinChest, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMannequinChest, put=__cordl_internal_set_defaultMannequinChest)) ::UnityW<::UnityEngine::Material>  defaultMannequinChest;

/// @brief Field defaultMannequinFace, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultMannequinFace, put=__cordl_internal_set_defaultMannequinFace)) ::UnityW<::UnityEngine::Material>  defaultMannequinFace;

/// @brief Field mannequin, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mannequin, put=__cordl_internal_set_mannequin)) ::UnityW<::UnityEngine::GameObject>  mannequin;

 __declspec(property(get=get_mountID)) ::StringW  mountID;

/// @brief Method ClearCosmetics, addr 0x5cabec4, size 0xd0, virtual false, abstract: false, final false
inline void ClearCosmetics() ;

/// @brief Method ClearManuallySpawnedCosmeticParts, addr 0x5cabd38, size 0x18c, virtual false, abstract: false, final false
inline void ClearManuallySpawnedCosmeticParts() ;

/// @brief Method HandleLoadCosmeticParts, addr 0x5cad6c0, size 0x380, virtual false, abstract: false, final false
inline void HandleLoadCosmeticParts(::GorillaTag::CosmeticSystem::CosmeticSO*  cosmeticInfo, bool  forRightSide) ;

/// @brief Method HandleLoadingAllPieces, addr 0x5cae388, size 0x5a0, virtual false, abstract: false, final false
inline void HandleLoadingAllPieces(::StringW  playFabId, bool  forRightSide, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfo) ;

/// @brief Method HandleLoadingFur, addr 0x5cae928, size 0x464, virtual false, abstract: false, final false
inline void HandleLoadingFur(::StringW  playFabId, bool  forRightSide, ::GorillaTag::CosmeticSystem::CosmeticInfoV2  cosmeticInfo) ;

/// @brief Method LoadAndInstantiatePrefab, addr 0x5cadfbc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> LoadAndInstantiatePrefab(::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  prefabAssetRef, ::UnityEngine::Transform*  parent) ;

/// @brief Method LoadCosmeticParts, addr 0x5cabc08, size 0x130, virtual false, abstract: false, final false
inline void LoadCosmeticParts(::GorillaTag::CosmeticSystem::CosmeticSO*  cosmeticInfo, bool  forRightSide) ;

/// @brief Method LoadCosmeticPartsV2, addr 0x5cab928, size 0x1d8, virtual false, abstract: false, final false
inline void LoadCosmeticPartsV2(::StringW  playFabId, bool  forRightSide) ;

static inline ::GorillaNetworking::Store::HeadModel_CosmeticStand* New_ctor() ;

/// @brief Method PositionWardRobeItems, addr 0x5cadfc4, size 0x2b4, virtual false, abstract: false, final false
inline void PositionWardRobeItems(::UnityEngine::GameObject*  instantiateEdObject, ::GlobalNamespace::HeadModel__CosmeticPartLoadInfo  partLoadInfo) ;

/// @brief Method PositionWardRobeItems, addr 0x5caf2f4, size 0x258, virtual false, abstract: false, final false
inline void PositionWardRobeItems(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo  partLoadInfo) ;

/// @brief Method PositionWithWardRobeOffsets, addr 0x5cae278, size 0x110, virtual false, abstract: false, final false
inline void PositionWithWardRobeOffsets(::GlobalNamespace::HeadModel__CosmeticPartLoadInfo  partLoadInfo) ;

/// @brief Method ResetMannequinSkin, addr 0x5cada40, size 0x57c, virtual false, abstract: false, final false
inline void ResetMannequinSkin() ;

/// @brief Method SetStandType, addr 0x5caf890, size 0x8, virtual false, abstract: false, final false
inline void SetStandType(::GlobalNamespace::HeadModel_CosmeticStand_BustType  newBustType) ;

/// @brief Method UpdateCosmeticsMountPositions, addr 0x5caccf4, size 0x4, virtual false, abstract: false, final false
inline void UpdateCosmeticsMountPositions(::GorillaTag::CosmeticSystem::CosmeticSO*  findCosmeticInAllCosmeticsArraySO) ;

/// @brief Method _HandleLoadCosmeticPartsV2, addr 0x5caed8c, size 0x568, virtual false, abstract: false, final false
inline void _HandleLoadCosmeticPartsV2(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp) ;

/// @brief Method _HandleLoadCosmeticPartsV2Fur, addr 0x5caf54c, size 0x344, virtual false, abstract: false, final false
inline void _HandleLoadCosmeticPartsV2Fur(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>* const& __cordl_internal_get__loadOp_to_partInfoIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*& __cordl_internal_get__loadOp_to_partInfoIndex() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__manuallySpawnedCosmeticParts() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__manuallySpawnedCosmeticParts() ;

constexpr ::GlobalNamespace::HeadModel_CosmeticStand_BustType const& __cordl_internal_get_bustType() const;

constexpr ::GlobalNamespace::HeadModel_CosmeticStand_BustType& __cordl_internal_get_bustType() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMannequinBody() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMannequinBody() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMannequinChest() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMannequinChest() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_defaultMannequinFace() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_defaultMannequinFace() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mannequin() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mannequin() ;

constexpr void __cordl_internal_set__loadOp_to_partInfoIndex(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*  value) ;

constexpr void __cordl_internal_set__manuallySpawnedCosmeticParts(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_bustType(::GlobalNamespace::HeadModel_CosmeticStand_BustType  value) ;

constexpr void __cordl_internal_set_defaultMannequinBody(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_defaultMannequinChest(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_defaultMannequinFace(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_mannequin(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5caf898, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_mountID, addr 0x5cad628, size 0x98, virtual false, abstract: false, final false
inline ::StringW get_mountID() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeadModel_CosmeticStand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeadModel_CosmeticStand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HeadModel_CosmeticStand(HeadModel_CosmeticStand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeadModel_CosmeticStand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeadModel_CosmeticStand(HeadModel_CosmeticStand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4436};

/// [ReadOnly]
/// @brief Field bustType, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::HeadModel_CosmeticStand_BustType  ___bustType;

/// [SerializeField]
/// [ReadOnly]
/// @brief Field _manuallySpawnedCosmeticParts, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____manuallySpawnedCosmeticParts;

/// @brief Field mannequin, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___mannequin;

/// @brief Field defaultMannequinFace, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMannequinFace;

/// @brief Field defaultMannequinChest, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMannequinChest;

/// @brief Field defaultMannequinBody, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___defaultMannequinBody;

/// [DebugReadout]
/// @brief Field _loadOp_to_partInfoIndex, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*  ____loadOp_to_partInfoIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::Store::HeadModel_CosmeticStand, ___bustType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::HeadModel_CosmeticStand, ____manuallySpawnedCosmeticParts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::HeadModel_CosmeticStand, ___mannequin) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::HeadModel_CosmeticStand, ___defaultMannequinFace) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::HeadModel_CosmeticStand, ___defaultMannequinChest) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::HeadModel_CosmeticStand, ___defaultMannequinBody) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::Store::HeadModel_CosmeticStand, ____loadOp_to_partInfoIndex) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::Store::HeadModel_CosmeticStand) == 0x78, "Size mismatch!");

} // namespace end def GorillaNetworking::Store
