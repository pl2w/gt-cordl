#pragma once
// IWYU pragma private; include "GlobalNamespace/FreeHoverboardManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkSceneObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FreeHoverboardManager)
namespace GlobalNamespace {
class FreeHoverboardInstance;
}
namespace GlobalNamespace {
struct FreeHoverboardManager_DataPerPlayer;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FreeHoverboardManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FreeHoverboardManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FreeHoverboardManager*, "", "FreeHoverboardManager");
// Dependencies NetworkSceneObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: FreeHoverboardManager
class CORDL_TYPE FreeHoverboardManager : public ::GlobalNamespace::NetworkSceneObject {
public:
// Declarations
using DataPerPlayer = ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::FreeHoverboardManager>  _instance_k__BackingField;

/// @brief Field freeBoardPool, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_freeBoardPool, put=__cordl_internal_set_freeBoardPool)) ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*  freeBoardPool;

/// @brief Field freeHoverboardPrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_freeHoverboardPrefab, put=__cordl_internal_set_freeHoverboardPrefab)) ::UnityW<::GlobalNamespace::FreeHoverboardInstance>  freeHoverboardPrefab;

/// @brief Field localPlayerLastSpawnedBoardIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_localPlayerLastSpawnedBoardIndex, put=__cordl_internal_set_localPlayerLastSpawnedBoardIndex)) int32_t  localPlayerLastSpawnedBoardIndex;

/// @brief Field perPlayerData, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_perPlayerData, put=__cordl_internal_set_perPlayerData)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>*  perPlayerData;

/// @brief Method Awake, addr 0x5954594, size 0x268, virtual false, abstract: false, final false
inline void Awake() ;

/// [PunRPC]
/// @brief Method DropBoard_RPC, addr 0x59551e0, size 0x300, virtual false, abstract: false, final false
inline void DropBoard_RPC(bool  boardIndex1, int64_t  positionPacked, int32_t  rotationPacked, int64_t  velocityPacked, int64_t  avelocityPacked, int16_t  colorPacked, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method GetOrCreatePlayerData, addr 0x59543c0, size 0xe4, virtual false, abstract: false, final false
inline ::GlobalNamespace::FreeHoverboardManager_DataPerPlayer GetOrCreatePlayerData(int32_t  actorNumber) ;

/// [PunRPC]
/// @brief Method GrabBoard_RPC, addr 0x59554e0, size 0x2a0, virtual false, abstract: false, final false
inline void GrabBoard_RPC(int32_t  ownerActorNumber, bool  boardIndex1, ::Photon::Pun::PhotonMessageInfo  info) ;

static inline ::GlobalNamespace::FreeHoverboardManager* New_ctor() ;

/// @brief Method OnLeftRoom, addr 0x5954978, size 0x198, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerLeftRoom, addr 0x59547fc, size 0xd4, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method PreserveMaxHoverboardsConstraint, addr 0x5955790, size 0xd4, virtual false, abstract: false, final false
inline void PreserveMaxHoverboardsConstraint(int32_t  actorNumber) ;

/// @brief Method SendDropBoardRPC, addr 0x5954d08, size 0x4d8, virtual false, abstract: false, final false
inline void SendDropBoardRPC(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  avelocity, ::UnityEngine::Color  boardColor) ;

/// @brief Method SendGrabBoardRPC, addr 0x595393c, size 0x1d4, virtual false, abstract: false, final false
inline void SendGrabBoardRPC(::GlobalNamespace::FreeHoverboardInstance*  board) ;

/// @brief Method SpawnBoard, addr 0x5954b10, size 0x1f8, virtual false, abstract: false, final false
inline void SpawnBoard(::GlobalNamespace::FreeHoverboardManager_DataPerPlayer  playerData, int32_t  boardIndex, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  avelocity, ::UnityEngine::Color  boardColor) ;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>* const& __cordl_internal_get_freeBoardPool() const;

constexpr ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*& __cordl_internal_get_freeBoardPool() ;

constexpr ::UnityW<::GlobalNamespace::FreeHoverboardInstance> const& __cordl_internal_get_freeHoverboardPrefab() const;

constexpr ::UnityW<::GlobalNamespace::FreeHoverboardInstance>& __cordl_internal_get_freeHoverboardPrefab() ;

constexpr int32_t const& __cordl_internal_get_localPlayerLastSpawnedBoardIndex() const;

constexpr int32_t& __cordl_internal_get_localPlayerLastSpawnedBoardIndex() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>* const& __cordl_internal_get_perPlayerData() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>*& __cordl_internal_get_perPlayerData() ;

constexpr void __cordl_internal_set_freeBoardPool(::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*  value) ;

constexpr void __cordl_internal_set_freeHoverboardPrefab(::UnityW<::GlobalNamespace::FreeHoverboardInstance>  value) ;

constexpr void __cordl_internal_set_localPlayerLastSpawnedBoardIndex(int32_t  value) ;

constexpr void __cordl_internal_set_perPlayerData(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>*  value) ;

/// @brief Method .ctor, addr 0x5955864, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::FreeHoverboardManager> getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5954320, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::FreeHoverboardManager> get_instance() ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::FreeHoverboardManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5954368, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::FreeHoverboardManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FreeHoverboardManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FreeHoverboardManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeHoverboardManager(FreeHoverboardManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeHoverboardManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeHoverboardManager(FreeHoverboardManager const& ) = delete;

/// @brief Field NumFreeBoardsPerPlayer offset 0xffffffff size 0x4
static constexpr int32_t  NumFreeBoardsPerPlayer{static_cast<int32_t>(0x2)};

/// @brief Field NumPlayers offset 0xffffffff size 0x4
static constexpr int32_t  NumPlayers{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2311};

/// [SerializeField]
/// @brief Field freeHoverboardPrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FreeHoverboardInstance>  ___freeHoverboardPrefab;

/// @brief Field freeBoardPool, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::FreeHoverboardInstance>>*  ___freeBoardPool;

/// @brief Field localPlayerLastSpawnedBoardIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___localPlayerLastSpawnedBoardIndex;

/// @brief Field perPlayerData, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::FreeHoverboardManager_DataPerPlayer>*  ___perPlayerData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FreeHoverboardManager, ___freeHoverboardPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardManager, ___freeBoardPool) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardManager, ___localPlayerLastSpawnedBoardIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FreeHoverboardManager, ___perPlayerData) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FreeHoverboardManager) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
