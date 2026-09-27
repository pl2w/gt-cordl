#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorManager)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
template<typename Titem,typename Tenum>
class CallLimitersList_2;
}
namespace GlobalNamespace {
struct GREnemyBossMoon_Behavior;
}
namespace GlobalNamespace {
class GRNoiseEventManager;
}
namespace GlobalNamespace {
struct GRPlayer_GRPlayerState;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GRReviveStation;
}
namespace GlobalNamespace {
struct GRToolProgressionManager_ToolParts;
}
namespace GlobalNamespace {
class GRToolUpgradePurchaseStationFull;
}
namespace GlobalNamespace {
class GRToolUpgradeStation;
}
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class GameAgentManager;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntityManager;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GhostReactorManager_GRPlayerAction;
}
namespace GlobalNamespace {
struct GhostReactorManager_RPC;
}
namespace GlobalNamespace {
struct GhostReactorManager_ToolPurchaseActionV2;
}
namespace GlobalNamespace {
struct GhostReactorManager_ToolPurchaseStationAction;
}
namespace GlobalNamespace {
struct GhostReactorManager_ToolPurchaseStationResponse;
}
namespace GlobalNamespace {
class GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75;
}
namespace GlobalNamespace {
struct GhostReactor_EnemyType;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class GorillaSurfaceOverride;
}
namespace GlobalNamespace {
class IGameEntityZoneComponent;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct ProgressionManager_CoreType;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
struct ZoneClearReason;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorManager*);
MARK_REF_T(::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorManager*, "", "GhostReactorManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75*, "", "GhostReactorManager/<SpawnSectionEntitiesCoroutine>d__75");
// [NetworkBehaviourWeaved(0)]
// Dependencies GTZone, NetworkComponent
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorManager
class CORDL_TYPE GhostReactorManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using GRPlayerAction = ::GlobalNamespace::GhostReactorManager_GRPlayerAction;

using RPC = ::GlobalNamespace::GhostReactorManager_RPC;

using ToolPurchaseActionV2 = ::GlobalNamespace::GhostReactorManager_ToolPurchaseActionV2;

using ToolPurchaseStationAction = ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction;

using ToolPurchaseStationResponse = ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse;

using _SpawnSectionEntitiesCoroutine_d__75 = ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75;

/// @brief Field LastHandprintTime, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastHandprintTime, put=__cordl_internal_set_LastHandprintTime)) float_t  LastHandprintTime;

/// @brief Field activeSpawnSectionEntitiesCoroutine, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeSpawnSectionEntitiesCoroutine, put=__cordl_internal_set_activeSpawnSectionEntitiesCoroutine)) ::UnityEngine::Coroutine*  activeSpawnSectionEntitiesCoroutine;

/// @brief Field bayUnlockEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_bayUnlockEnabled, put=setStaticF_bayUnlockEnabled)) bool  bayUnlockEnabled;

/// @brief Field cachedBossEntity, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedBossEntity, put=__cordl_internal_set_cachedBossEntity)) ::UnityW<::GlobalNamespace::GameEntity>  cachedBossEntity;

/// @brief Field entityDebugEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_entityDebugEnabled, put=setStaticF_entityDebugEnabled)) bool  entityDebugEnabled;

/// @brief Field gameAgentManager, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameAgentManager, put=__cordl_internal_set_gameAgentManager)) ::UnityW<::GlobalNamespace::GameAgentManager>  gameAgentManager;

/// @brief Field gameEntityManager, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntityManager, put=__cordl_internal_set_gameEntityManager)) ::UnityW<::GlobalNamespace::GameEntityManager>  gameEntityManager;

/// @brief Field m_RpcSpamChecks, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RpcSpamChecks, put=__cordl_internal_set_m_RpcSpamChecks)) ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GhostReactorManager_RPC>*  m_RpcSpamChecks;

/// @brief Field noiseDebugEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_noiseDebugEnabled, put=setStaticF_noiseDebugEnabled)) bool  noiseDebugEnabled;

/// @brief Field noiseEventManager, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_noiseEventManager, put=__cordl_internal_set_noiseEventManager)) ::UnityW<::GlobalNamespace::GRNoiseEventManager>  noiseEventManager;

/// @brief Field photonView, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field reactor, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field spawnSectionEntitiesWait, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnSectionEntitiesWait, put=__cordl_internal_set_spawnSectionEntitiesWait)) ::UnityEngine::WaitForSeconds*  spawnSectionEntitiesWait;

/// @brief Field tempEntitiesToDestroy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempEntitiesToDestroy, put=setStaticF_tempEntitiesToDestroy)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  tempEntitiesToDestroy;

/// @brief Field upgradeStation, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeStation, put=__cordl_internal_set_upgradeStation)) ::UnityW<::GlobalNamespace::GRToolUpgradeStation>  upgradeStation;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr operator  ::GlobalNamespace::IGameEntityZoneComponent*() noexcept;

/// [PunRPC]
/// @brief Method ApplyChargeToolRPC, addr 0x5852448, size 0x374, virtual false, abstract: false, final false
inline void ApplyChargeToolRPC(int32_t  collectorEntityNetId, int32_t  targetToolNetId, int32_t  targetEnergyDelta, bool  useCollectorEnergy, ::Photon::Realtime::Player*  collectingPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyCollectItemRPC, addr 0x5850b54, size 0x488, virtual false, abstract: false, final false
inline void ApplyCollectItemRPC(int32_t  collectibleEntityNetId, int32_t  collectorEntityNetId, int32_t  collectingPlayerActorNumber, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyDepositCurrencyRPC, addr 0x5852bb8, size 0x390, virtual false, abstract: false, final false
inline void ApplyDepositCurrencyRPC(int32_t  collectorEntityNetId, int32_t  targetPlayerActorNumber, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyEnemyHitPlayerRPC, addr 0x5853410, size 0x3f4, virtual false, abstract: false, final false
inline void ApplyEnemyHitPlayerRPC(::GlobalNamespace::GhostReactor_EnemyType  type, int32_t  entityNetId, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyGrantPlayerShieldRPC, addr 0x5854898, size 0x19c, virtual false, abstract: false, final false
inline void ApplyGrantPlayerShieldRPC(int32_t  shieldingPlayer, int32_t  playerToGrantShieldActorNumber, int32_t  shieldHp, int32_t  shieldFlags, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyPlayerActionRPC, addr 0x58593bc, size 0x8f4, virtual false, abstract: false, final false
inline void ApplyPlayerActionRPC(int32_t  playerAction, int32_t  param0, int32_t  param1, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyPlayerRevivedRPC, addr 0x5853d34, size 0x198, virtual false, abstract: false, final false
inline void ApplyPlayerRevivedRPC(int32_t  reviveStationIndex, int32_t  playerActorNumber, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyRecycleItemRPC, addr 0x585e278, size 0x210, virtual false, abstract: false, final false
inline void ApplyRecycleItemRPC(int32_t  lastHeldActorNumber, int32_t  toolNetId, ::GlobalNamespace::GRTool_GRToolType  toolType, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyRecycleScanItemRPC, addr 0x585df70, size 0xe8, virtual false, abstract: false, final false
inline void ApplyRecycleScanItemRPC(int32_t  netId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplySeedExtractorStateRPC, addr 0x58518f8, size 0x188, virtual false, abstract: false, final false
inline void ApplySeedExtractorStateRPC(int32_t  playerActorNumber, int32_t  coreCount, int32_t  coresProcessedByOverdrive, int32_t  researchPoints, float_t  coreProcessingPercentage, float_t  overdriveSupply, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyShiftEndRPC, addr 0x585745c, size 0x168, virtual false, abstract: false, final false
inline void ApplyShiftEndRPC(double_t  networkedTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyShiftStartRPC, addr 0x5855884, size 0x33c, virtual false, abstract: false, final false
inline void ApplyShiftStartRPC(double_t  shiftStartTime, int32_t  randomSeed, ::StringW  gameIdGuid, bool  isFirstShift, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Awake, addr 0x584fe24, size 0x64, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BroadcastHandleAndSelectionWheelPosition, addr 0x585b4dc, size 0x2ec, virtual false, abstract: false, final false
inline void BroadcastHandleAndSelectionWheelPosition(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station, int32_t  handlePos, int32_t  wheelPos) ;

/// [PunRPC]
/// @brief Method BroadcastHandprint, addr 0x5855020, size 0x3e0, virtual false, abstract: false, final false
inline void BroadcastHandprint(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  orient, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method BroadcastScoreboardPage, addr 0x58584e4, size 0x168, virtual false, abstract: false, final false
inline void BroadcastScoreboardPage(int32_t  scoreboardPage, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method BroadcastStartingProgression, addr 0x585864c, size 0x1c8, virtual false, abstract: false, final false
inline void BroadcastStartingProgression(int32_t  points, int32_t  redeemedPoints, double_t  shiftJoinedTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ClearCachedBossEntity, addr 0x5857e04, size 0xc, virtual false, abstract: false, final false
inline void ClearCachedBossEntity() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x586050c, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5860514, size 0x8, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method DebugIsToolStationHacked, addr 0x5860388, size 0x8, virtual false, abstract: false, final false
inline bool DebugIsToolStationHacked() ;

/// @brief Method DeserializeZoneData, addr 0x585f850, size 0x68c, virtual true, abstract: false, final true
inline void DeserializeZoneData(::System::IO::BinaryReader*  reader) ;

/// @brief Method DeserializeZoneEntityData, addr 0x585ff0c, size 0x4, virtual true, abstract: false, final true
inline void DeserializeZoneEntityData(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method DeserializeZonePlayerData, addr 0x586030c, size 0x7c, virtual true, abstract: false, final true
inline void DeserializeZonePlayerData(::System::IO::BinaryReader*  reader, int32_t  actorNumber) ;

/// [PunRPC]
/// @brief Method DistillItemRPC, addr 0x5851c58, size 0x28c, virtual false, abstract: false, final false
inline void DistillItemRPC(int32_t  collectibleEntityNetId, int32_t  collectingPlayerActorNumber, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method DoesUserHaveResearchUnlocked, addr 0x585d020, size 0x8, virtual false, abstract: false, final false
inline bool DoesUserHaveResearchUnlocked(int32_t  UserID, ::StringW  ResearchID) ;

/// @brief Method EntityEnteredDropZone, addr 0x585d20c, size 0x3e0, virtual false, abstract: false, final false
inline void EntityEnteredDropZone(::GlobalNamespace::GameEntity*  entity) ;

/// [PunRPC]
/// @brief Method EntityEnteredDropZoneRPC, addr 0x585d5ec, size 0x44c, virtual false, abstract: false, final false
inline void EntityEnteredDropZoneRPC(int32_t  entityNetId, int64_t  position, int32_t  rotation, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Get, addr 0x5850180, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GhostReactorManager> Get(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method GetAuthorityPlayer, addr 0x5850060, size 0x18, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* GetAuthorityPlayer() ;

/// @brief Method GetBossEntity, addr 0x5857c00, size 0x204, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntity> GetBossEntity() ;

/// @brief Method GetIndexForToolUpgradeStationFull, addr 0x585a284, size 0xb8, virtual false, abstract: false, final false
inline int32_t GetIndexForToolUpgradeStationFull(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station) ;

/// @brief Method GetToolUpgradeStationFullForIndex, addr 0x585a1b0, size 0xd4, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull> GetToolUpgradeStationFullForIndex(int32_t  idx) ;

/// @brief Method InstantDeathForCurrentEnemies, addr 0x5857828, size 0x3bc, virtual false, abstract: false, final false
inline void InstantDeathForCurrentEnemies() ;

/// @brief Method IsAuthority, addr 0x584fbe4, size 0x20, virtual false, abstract: false, final false
inline bool IsAuthority() ;

/// @brief Method IsAuthorityPlayer, addr 0x5850030, size 0x18, virtual false, abstract: false, final false
inline bool IsAuthorityPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method IsAuthorityPlayer, addr 0x5850048, size 0x18, virtual false, abstract: false, final false
inline bool IsAuthorityPlayer(::Photon::Realtime::Player*  player) ;

/// @brief Method IsEnemy, addr 0x58575c4, size 0x264, virtual false, abstract: false, final false
inline bool IsEnemy(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method IsPositionInZone, addr 0x5850098, size 0x20, virtual false, abstract: false, final false
inline bool IsPositionInZone(::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidAuthorityRPC, addr 0x5850120, size 0x18, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender) ;

/// @brief Method IsValidAuthorityRPC, addr 0x5850138, size 0x18, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId) ;

/// @brief Method IsValidAuthorityRPC, addr 0x5850150, size 0x18, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidAuthorityRPC, addr 0x5850168, size 0x18, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidClientRPC, addr 0x58500b8, size 0x20, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender) ;

/// @brief Method IsValidClientRPC, addr 0x58500d8, size 0x18, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId) ;

/// @brief Method IsValidClientRPC, addr 0x58500f0, size 0x18, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidClientRPC, addr 0x5850108, size 0x18, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsZoneActive, addr 0x5850078, size 0x20, virtual false, abstract: false, final false
inline bool IsZoneActive() ;

/// @brief Method IsZoneReady, addr 0x585f2f8, size 0x60, virtual true, abstract: false, final true
inline bool IsZoneReady() ;

/// @brief Method LocalEjectToolInUpgradeStation, addr 0x585d208, size 0x4, virtual false, abstract: false, final false
inline void LocalEjectToolInUpgradeStation() ;

/// @brief Method LocalEntityEnteredDropZone, addr 0x585da38, size 0x410, virtual false, abstract: false, final false
inline void LocalEntityEnteredDropZone(::GlobalNamespace::GameEntityId  entityId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

static inline ::GlobalNamespace::GhostReactorManager* New_ctor() ;

/// @brief Method NotifyPurchaseToolOrUpgradeRPCRouted, addr 0x585ac78, size 0x15c, virtual false, abstract: false, final false
inline void NotifyPurchaseToolOrUpgradeRPCRouted(int32_t  actorNumber, int32_t  stationIndex, int32_t  shelf, int32_t  item, bool  success, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnAbilityDie, addr 0x5855400, size 0xac, virtual false, abstract: false, final false
inline void OnAbilityDie(::GlobalNamespace::GameEntity*  entity, float_t  forcedRespawn) ;

/// @brief Method OnCreateGameEntity, addr 0x585f360, size 0x4, virtual true, abstract: false, final true
inline void OnCreateGameEntity(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnDisable, addr 0x584ff5c, size 0xd4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x584fe88, size 0xd4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnemyHitPlayerInternal, addr 0x5853804, size 0x160, virtual false, abstract: false, final false
inline void OnEnemyHitPlayerInternal(::GlobalNamespace::GhostReactor_EnemyType  type, ::GlobalNamespace::GameEntityId  entityId, ::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse) ;

/// @brief Method OnEntityZoneClear, addr 0x585ec78, size 0x4, virtual false, abstract: false, final false
inline void OnEntityZoneClear(::GlobalNamespace::GTZone  zoneId) ;

/// @brief Method OnNewPlayerEnteredGhostReactor, addr 0x585ebf4, size 0x84, virtual false, abstract: false, final false
inline void OnNewPlayerEnteredGhostReactor() ;

/// @brief Method OnRequestFireProjectileInternal, addr 0x5854e78, size 0x1a8, virtual false, abstract: false, final false
inline void OnRequestFireProjectileInternal(::GlobalNamespace::GameEntityId  entityId, ::UnityEngine::Vector3  firingPosition, ::UnityEngine::Vector3  targetPosition, double_t  networkTime) ;

/// @brief Method OnSharedTap, addr 0x586014c, size 0x134, virtual false, abstract: false, final false
inline void OnSharedTap(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  tapPos, float_t  handTapSpeed) ;

/// @brief Method OnTapLocal, addr 0x585ff10, size 0x23c, virtual false, abstract: false, final false
inline void OnTapLocal(bool  isLeftHand, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::GlobalNamespace::GorillaSurfaceOverride*  surfaceOverride, ::UnityEngine::Vector3  handVelocity) ;

/// @brief Method OnZoneClear, addr 0x585f018, size 0x2e0, virtual true, abstract: false, final true
inline void OnZoneClear(::GlobalNamespace::ZoneClearReason  reason) ;

/// @brief Method OnZoneCreate, addr 0x585ec7c, size 0x1c4, virtual true, abstract: false, final true
inline void OnZoneCreate() ;

/// @brief Method OnZoneInit, addr 0x585ee40, size 0x1d8, virtual true, abstract: false, final true
inline void OnZoneInit() ;

/// @brief Method PlacedToolInUpgradeStationRPC, addr 0x585d138, size 0x4, virtual false, abstract: false, final false
inline void PlacedToolInUpgradeStationRPC(int32_t  entityNetId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method PlayerStateChangeRPC, addr 0x585413c, size 0x26c, virtual false, abstract: false, final false
inline void PlayerStateChangeRPC(int32_t  playerResponsibleNumber, int32_t  playerActorNumber, int32_t  newState, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ProcessMigratedGameEntityCreateData, addr 0x585fedc, size 0x8, virtual true, abstract: false, final true
inline int64_t ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity*  entity, int64_t  createData) ;

/// @brief Method PromotionBotActivePlayerRequest, addr 0x5857fcc, size 0x10c, virtual false, abstract: false, final false
inline void PromotionBotActivePlayerRequest(int32_t  state) ;

/// [PunRPC]
/// @brief Method PromotionBotActivePlayerRequestRPC, addr 0x58580d8, size 0x278, virtual false, abstract: false, final false
inline void PromotionBotActivePlayerRequestRPC(int32_t  state, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method PromotionBotActivePlayerResponseRPC, addr 0x5858350, size 0x194, virtual false, abstract: false, final false
inline void PromotionBotActivePlayerResponseRPC(int32_t  actorNumber, int32_t  state, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataFusion, addr 0x585ebe8, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x585ebf0, size 0x4, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RefreshShiftCredit, addr 0x5850230, size 0x4, virtual false, abstract: false, final false
inline void RefreshShiftCredit() ;

/// [PunRPC]
/// @brief Method RefreshShiftCreditRPC, addr 0x5850234, size 0x150, virtual false, abstract: false, final false
inline void RefreshShiftCreditRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReportCoreCollection, addr 0x5850fdc, size 0x3a0, virtual false, abstract: false, final false
inline void ReportCoreCollection(::GlobalNamespace::GRPlayer*  player, ::GlobalNamespace::ProgressionManager_CoreType  type) ;

/// @brief Method ReportEnemyDeath, addr 0x5857e10, size 0xc4, virtual false, abstract: false, final false
inline void ReportEnemyDeath() ;

/// @brief Method ReportLocalPlayerHit, addr 0x5853964, size 0xc8, virtual false, abstract: false, final false
inline void ReportLocalPlayerHit() ;

/// [PunRPC]
/// @brief Method ReportLocalPlayerHitRPC, addr 0x5853a2c, size 0xf4, virtual false, abstract: false, final false
inline void ReportLocalPlayerHitRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReportPlayerDeath, addr 0x5857ed4, size 0xf8, virtual false, abstract: false, final false
inline void ReportPlayerDeath(::GlobalNamespace::GRPlayer*  player) ;

/// @brief Method RequestAdvanceBossPhase, addr 0x5857bf8, size 0x4, virtual false, abstract: false, final false
inline void RequestAdvanceBossPhase() ;

/// @brief Method RequestApplySeedExtractorState, addr 0x585137c, size 0x254, virtual false, abstract: false, final false
inline void RequestApplySeedExtractorState(int32_t  coreCount, int32_t  coresProcessedByOverdrive, int32_t  researchPoints, float_t  coreProcessingPercentage, float_t  overdriveSupply) ;

/// [PunRPC]
/// @brief Method RequestApplySeedExtractorStateRPC, addr 0x58515d0, size 0x328, virtual false, abstract: false, final false
inline void RequestApplySeedExtractorStateRPC(int32_t  coreCount, int32_t  coresProcessedByOverdrive, int32_t  researchPoints, float_t  coreProcessingPercentage, float_t  overdriveSupply, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestBossBehavior, addr 0x5857bfc, size 0x4, virtual false, abstract: false, final false
inline void RequestBossBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  bossBehavior) ;

/// @brief Method RequestChargeTool, addr 0x5851ee4, size 0x240, virtual false, abstract: false, final false
inline void RequestChargeTool(::GlobalNamespace::GameEntityId  collectorEntityId, ::GlobalNamespace::GameEntityId  targetToolId, int32_t  targetEnergyDelta, bool  useCollectorEnergy) ;

/// [PunRPC]
/// @brief Method RequestChargeToolRPC, addr 0x5852124, size 0x324, virtual false, abstract: false, final false
inline void RequestChargeToolRPC(int32_t  collectorEntityNetId, int32_t  targetToolNetId, int32_t  targetEnergyDelta, bool  useCollectorEnergy, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestCollectItem, addr 0x585054c, size 0x19c, virtual false, abstract: false, final false
inline void RequestCollectItem(::GlobalNamespace::GameEntityId  collectibleEntityId, ::GlobalNamespace::GameEntityId  collectorEntityId) ;

/// [PunRPC]
/// @brief Method RequestCollectItemRPC, addr 0x585090c, size 0x248, virtual false, abstract: false, final false
inline void RequestCollectItemRPC(int32_t  collectibleEntityNetId, int32_t  collectorEntityNetId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestDepositCollectible, addr 0x58506e8, size 0x224, virtual false, abstract: false, final false
inline void RequestDepositCollectible(::GlobalNamespace::GameEntityId  collectibleEntityId) ;

/// @brief Method RequestDepositCurrency, addr 0x58527bc, size 0x128, virtual false, abstract: false, final false
inline void RequestDepositCurrency(::GlobalNamespace::GameEntityId  collectorEntityId) ;

/// [PunRPC]
/// @brief Method RequestDepositCurrencyRPC, addr 0x58528e4, size 0x2d4, virtual false, abstract: false, final false
inline void RequestDepositCurrencyRPC(int32_t  collectorEntityNetId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestDistillCollectible, addr 0x5851a80, size 0x1d8, virtual false, abstract: false, final false
inline void RequestDistillCollectible(::GlobalNamespace::GameEntityId  collectibleEntityId, ::Photon::Realtime::Player*  sender) ;

/// @brief Method RequestEnemyHitPlayer, addr 0x5852f48, size 0x270, virtual false, abstract: false, final false
inline void RequestEnemyHitPlayer(::GlobalNamespace::GhostReactor_EnemyType  type, ::GlobalNamespace::GameEntityId  hitByEntityId, ::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition) ;

/// @brief Method RequestEnemyHitPlayer, addr 0x58531b8, size 0x258, virtual false, abstract: false, final false
inline void RequestEnemyHitPlayer(::GlobalNamespace::GhostReactor_EnemyType  type, ::GlobalNamespace::GameEntityId  hitByEntityId, ::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse) ;

/// @brief Method RequestFireProjectile, addr 0x5854a34, size 0x2f0, virtual false, abstract: false, final false
inline void RequestFireProjectile(::GlobalNamespace::GameEntityId  entityId, ::UnityEngine::Vector3  firingPosition, ::UnityEngine::Vector3  targetPosition, double_t  networkTime) ;

/// [PunRPC]
/// @brief Method RequestFireProjectileRPC, addr 0x5854d24, size 0x154, virtual false, abstract: false, final false
inline void RequestFireProjectileRPC(int32_t  entityNetId, ::UnityEngine::Vector3  firingPosition, ::UnityEngine::Vector3  targetPosition, double_t  networkTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestGoBackBossPhase, addr 0x5857bf4, size 0x4, virtual false, abstract: false, final false
inline void RequestGoBackBossPhase() ;

/// @brief Method RequestGrantPlayerShield, addr 0x58543a8, size 0x268, virtual false, abstract: false, final false
inline void RequestGrantPlayerShield(::GlobalNamespace::GRPlayer*  player, int32_t  shieldHp, int32_t  shieldFlags) ;

/// [PunRPC]
/// @brief Method RequestGrantPlayerShieldRPC, addr 0x5854610, size 0x288, virtual false, abstract: false, final false
inline void RequestGrantPlayerShieldRPC(int32_t  shieldingPlayer, int32_t  playerToGrantShieldActorNumber, int32_t  shieldHp, int32_t  shieldFlags, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestHackToolStation, addr 0x585b8a4, size 0x4, virtual false, abstract: false, final false
inline void RequestHackToolStation() ;

/// @brief Method RequestHurtBossHP, addr 0x5857be8, size 0x4, virtual false, abstract: false, final false
inline void RequestHurtBossHP() ;

/// @brief Method RequestKillBossEyes, addr 0x5857bec, size 0x4, virtual false, abstract: false, final false
inline void RequestKillBossEyes() ;

/// @brief Method RequestKillBossSummoned, addr 0x5857bf0, size 0x4, virtual false, abstract: false, final false
inline void RequestKillBossSummoned() ;

/// @brief Method RequestNetworkShelfAndItemChange, addr 0x585a33c, size 0x290, virtual false, abstract: false, final false
inline void RequestNetworkShelfAndItemChange(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station, int32_t  shelf, int32_t  item) ;

/// @brief Method RequestPlayerAction, addr 0x5858814, size 0x1a4, virtual false, abstract: false, final false
inline void RequestPlayerAction(::GlobalNamespace::GhostReactorManager_GRPlayerAction  playerAction) ;

/// @brief Method RequestPlayerAction, addr 0x58589b8, size 0x1b0, virtual false, abstract: false, final false
inline void RequestPlayerAction(::GlobalNamespace::GhostReactorManager_GRPlayerAction  playerAction, int32_t  param0) ;

/// @brief Method RequestPlayerAction, addr 0x5858b68, size 0x1b4, virtual false, abstract: false, final false
inline void RequestPlayerAction(::GlobalNamespace::GhostReactorManager_GRPlayerAction  playerAction, int32_t  param0, int32_t  param1) ;

/// [PunRPC]
/// @brief Method RequestPlayerActionRPC, addr 0x5858e30, size 0x58c, virtual false, abstract: false, final false
inline void RequestPlayerActionRPC(int32_t  playerAction, int32_t  param0, int32_t  param1, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestPlayerRevive, addr 0x5853b20, size 0x214, virtual false, abstract: false, final false
inline void RequestPlayerRevive(::GlobalNamespace::GRReviveStation*  reviveStation, ::GlobalNamespace::GRPlayer*  player) ;

/// @brief Method RequestPlayerStateChange, addr 0x5853ecc, size 0x270, virtual false, abstract: false, final false
inline void RequestPlayerStateChange(::GlobalNamespace::GRPlayer*  player, ::GlobalNamespace::GRPlayer_GRPlayerState  newState) ;

/// @brief Method RequestPurchaseRPCRoutedAuthority, addr 0x585a958, size 0x320, virtual false, abstract: false, final false
inline void RequestPurchaseRPCRoutedAuthority(int32_t  stationIndex, int32_t  shelf, int32_t  item, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestPurchaseToolOrUpgrade, addr 0x585a6ac, size 0x2ac, virtual false, abstract: false, final false
inline void RequestPurchaseToolOrUpgrade(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station, int32_t  shelf, int32_t  item) ;

/// @brief Method RequestRecycleItem, addr 0x585e058, size 0x220, virtual false, abstract: false, final false
inline void RequestRecycleItem(int32_t  lastHeldActorNumber, ::GlobalNamespace::GameEntityId  toolId, ::GlobalNamespace::GRTool_GRToolType  toolType) ;

/// @brief Method RequestRecycleScanItem, addr 0x585de48, size 0x128, virtual false, abstract: false, final false
inline void RequestRecycleScanItem(::GlobalNamespace::GameEntityId  gameEntityId) ;

/// @brief Method RequestRestoreBossHP, addr 0x5857be4, size 0x4, virtual false, abstract: false, final false
inline void RequestRestoreBossHP() ;

/// @brief Method RequestSentientCorePerformJump, addr 0x585e488, size 0x2ec, virtual false, abstract: false, final false
inline void RequestSentientCorePerformJump(::GlobalNamespace::GameEntity*  entity, ::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  direction, float_t  waitTime) ;

/// [PunRPC]
/// @brief Method RequestShiftEnd, addr 0x58562f0, size 0x42c, virtual false, abstract: false, final false
inline void RequestShiftEnd() ;

/// @brief Method RequestShiftStartAuthority, addr 0x58554ac, size 0x378, virtual false, abstract: false, final false
inline void RequestShiftStartAuthority(bool  isFirstShift) ;

/// @brief Method RequestStationExclusivity, addr 0x585add4, size 0x2a0, virtual false, abstract: false, final false
inline void RequestStationExclusivity(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station) ;

/// @brief Method RequestStationExclusivityRPCRoutedAuthority, addr 0x585b334, size 0xd8, virtual false, abstract: false, final false
inline void RequestStationExclusivityRPCRoutedAuthority(int32_t  stationIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SelectToolShelfAndItemRPCRouted, addr 0x585a5cc, size 0xe0, virtual false, abstract: false, final false
inline void SelectToolShelfAndItemRPCRouted(int32_t  stationIndex, int32_t  shelf, int32_t  item, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SendMothershipId, addr 0x5850384, size 0x2c, virtual false, abstract: false, final false
inline void SendMothershipId() ;

/// [PunRPC]
/// @brief Method SendMothershipIdRPC, addr 0x58503b0, size 0x19c, virtual false, abstract: false, final false
inline void SendMothershipIdRPC(::StringW  mothershipId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SendRequestShiftEndRPC, addr 0x5857380, size 0xdc, virtual false, abstract: false, final false
inline void SendRequestShiftEndRPC() ;

/// [PunRPC]
/// @brief Method SentientCorePerformJumpRPC, addr 0x585e774, size 0x470, virtual false, abstract: false, final false
inline void SentientCorePerformJumpRPC(int32_t  entityNetId, ::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  surfaceNormal, ::UnityEngine::Vector3  jumpDirection, double_t  jumpStartTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SerializeZoneData, addr 0x585f364, size 0x4e4, virtual true, abstract: false, final true
inline void SerializeZoneData(::System::IO::BinaryWriter*  writer) ;

/// @brief Method SerializeZoneEntityData, addr 0x585ff08, size 0x4, virtual true, abstract: false, final true
inline void SerializeZoneEntityData(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method SerializeZonePlayerData, addr 0x5860280, size 0x8c, virtual true, abstract: false, final true
inline void SerializeZonePlayerData(::System::IO::BinaryWriter*  writer, int32_t  actorNumber) ;

/// @brief Method SetActivePlayerAuthority, addr 0x585b074, size 0x2c0, virtual false, abstract: false, final false
inline void SetActivePlayerAuthority(::GlobalNamespace::GRToolUpgradePurchaseStationFull*  station, int32_t  actorNumber) ;

/// @brief Method SetHandleAndSelectionWheelPositionRPCRouted, addr 0x585b7c8, size 0xdc, virtual false, abstract: false, final false
inline void SetHandleAndSelectionWheelPositionRPCRouted(int32_t  stationIndex, int32_t  handlePos, int32_t  wheelPos, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetToolStationActivePlayerRPCRouted, addr 0x585b40c, size 0xd0, virtual false, abstract: false, final false
inline void SetToolStationActivePlayerRPCRouted(int32_t  stationIndex, int32_t  activeOwner, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ShouldClearZone, addr 0x585f358, size 0x8, virtual true, abstract: false, final true
inline bool ShouldClearZone() ;

/// @brief Method ShouldEntitySurviveShift, addr 0x585671c, size 0x320, virtual false, abstract: false, final false
inline bool ShouldEntitySurviveShift(::GlobalNamespace::GameEntity*  gameEntity) ;

/// [IteratorStateMachine(typeof(GhostReactorManager::<SpawnSectionEntitiesCoroutine>d__75))]
/// @brief Method SpawnSectionEntitiesCoroutine, addr 0x5855bc0, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpawnSectionEntitiesCoroutine(float_t  respawnCount) ;

/// @brief Method ToolPlacedInUpgradeStation, addr 0x585d028, size 0x110, virtual false, abstract: false, final false
inline void ToolPlacedInUpgradeStation(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method ToolPurchaseResponseLocal, addr 0x585c318, size 0x218, virtual false, abstract: false, final false
inline void ToolPurchaseResponseLocal(int32_t  stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse  responseType, int32_t  dataA, int32_t  dataB) ;

/// @brief Method ToolPurchaseStationRequest, addr 0x585bab4, size 0x174, virtual false, abstract: false, final false
inline void ToolPurchaseStationRequest(int32_t  stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction  action) ;

/// [PunRPC]
/// @brief Method ToolPurchaseStationRequestRPC, addr 0x585bc28, size 0x6f0, virtual false, abstract: false, final false
inline void ToolPurchaseStationRequestRPC(int32_t  stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction  action, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ToolPurchaseStationResponseRPC, addr 0x585c530, size 0x13c, virtual false, abstract: false, final false
inline void ToolPurchaseStationResponseRPC(int32_t  stationIndex, ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse  responseType, int32_t  dataA, int32_t  dataB, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ToolPurchaseV2_RPC, addr 0x585b8a8, size 0x20c, virtual false, abstract: false, final false
inline void ToolPurchaseV2_RPC(::GlobalNamespace::GhostReactorManager_ToolPurchaseActionV2  command, int32_t  initiatorID, int32_t  stationIndex, int32_t  param1, int32_t  param2, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ToolSnapRequestUpgrade, addr 0x585c7e0, size 0x1d0, virtual false, abstract: false, final false
inline void ToolSnapRequestUpgrade(int32_t  upgradeNetID, ::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId) ;

/// [PunRPC]
/// @brief Method ToolSnapRequestUpgradeRPC, addr 0x585c9b0, size 0x480, virtual false, abstract: false, final false
inline void ToolSnapRequestUpgradeRPC(int32_t  upgradeNetID, ::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ToolUpgradeStationRequestUpgrade, addr 0x585c66c, size 0x174, virtual false, abstract: false, final false
inline void ToolUpgradeStationRequestUpgrade(::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId) ;

/// @brief Method ToolUpgradeStationRequestUpgradeRPC, addr 0x585ce30, size 0x4, virtual false, abstract: false, final false
inline void ToolUpgradeStationRequestUpgradeRPC(::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method UpgradeToolAtToolStation, addr 0x585d13c, size 0xc8, virtual false, abstract: false, final false
inline void UpgradeToolAtToolStation() ;

/// @brief Method UpgradeToolAtToolStationRPC, addr 0x585d204, size 0x4, virtual false, abstract: false, final false
inline void UpgradeToolAtToolStationRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method UpgradeToolRemoteRPC, addr 0x585ce34, size 0x1ec, virtual false, abstract: false, final false
inline void UpgradeToolRemoteRPC(::GlobalNamespace::GRToolProgressionManager_ToolParts  UpgradeID, int32_t  entityNetId, bool  applyCost, int32_t  playerNetId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ValidateCreateItem, addr 0x585fef8, size 0x8, virtual true, abstract: false, final true
inline bool ValidateCreateItem(int32_t  nedId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId) ;

/// @brief Method ValidateCreateItemBatchSize, addr 0x585ff00, size 0x8, virtual true, abstract: false, final true
inline bool ValidateCreateItemBatchSize(int32_t  size) ;

/// @brief Method ValidateCreateMultipleItems, addr 0x585feec, size 0xc, virtual true, abstract: false, final true
inline bool ValidateCreateMultipleItems(int32_t  zoneId, ::ArrayW<uint8_t>  compressedStateData, int32_t  EntityCount) ;

/// @brief Method ValidateMigratedGameEntity, addr 0x585fee4, size 0x8, virtual true, abstract: false, final true
inline bool ValidateMigratedGameEntity(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  actorNr) ;

/// @brief Method VerifyShuttleInteractability, addr 0x5858d1c, size 0x114, virtual false, abstract: false, final false
inline bool VerifyShuttleInteractability(::GlobalNamespace::GRPlayer*  player, int32_t  shuttleIdx, bool  ignoreOwnership) ;

/// @brief Method WriteDataFusion, addr 0x585ebe4, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x585ebec, size 0x4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr float_t const& __cordl_internal_get_LastHandprintTime() const;

constexpr float_t& __cordl_internal_get_LastHandprintTime() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_activeSpawnSectionEntitiesCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_activeSpawnSectionEntitiesCoroutine() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_cachedBossEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_cachedBossEntity() ;

constexpr ::UnityW<::GlobalNamespace::GameAgentManager> const& __cordl_internal_get_gameAgentManager() const;

constexpr ::UnityW<::GlobalNamespace::GameAgentManager>& __cordl_internal_get_gameAgentManager() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get_gameEntityManager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get_gameEntityManager() ;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GhostReactorManager_RPC>* const& __cordl_internal_get_m_RpcSpamChecks() const;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GhostReactorManager_RPC>*& __cordl_internal_get_m_RpcSpamChecks() ;

constexpr ::UnityW<::GlobalNamespace::GRNoiseEventManager> const& __cordl_internal_get_noiseEventManager() const;

constexpr ::UnityW<::GlobalNamespace::GRNoiseEventManager>& __cordl_internal_get_noiseEventManager() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get_spawnSectionEntitiesWait() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get_spawnSectionEntitiesWait() ;

constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation> const& __cordl_internal_get_upgradeStation() const;

constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation>& __cordl_internal_get_upgradeStation() ;

constexpr void __cordl_internal_set_LastHandprintTime(float_t  value) ;

constexpr void __cordl_internal_set_activeSpawnSectionEntitiesCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_cachedBossEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_gameAgentManager(::UnityW<::GlobalNamespace::GameAgentManager>  value) ;

constexpr void __cordl_internal_set_gameEntityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

constexpr void __cordl_internal_set_m_RpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GhostReactorManager_RPC>*  value) ;

constexpr void __cordl_internal_set_noiseEventManager(::UnityW<::GlobalNamespace::GRNoiseEventManager>  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_spawnSectionEntitiesWait(::UnityEngine::WaitForSeconds*  value) ;

constexpr void __cordl_internal_set_upgradeStation(::UnityW<::GlobalNamespace::GRToolUpgradeStation>  value) ;

/// @brief Method .ctor, addr 0x5860398, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_bayUnlockEnabled() ;

static inline bool getStaticF_entityDebugEnabled() ;

static inline bool getStaticF_noiseDebugEnabled() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* getStaticF_tempEntitiesToDestroy() ;

/// @brief Method get_AggroDisabled, addr 0x5860390, size 0x8, virtual false, abstract: false, final false
static inline bool get_AggroDisabled() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityZoneComponent"
constexpr ::GlobalNamespace::IGameEntityZoneComponent* i___GlobalNamespace__IGameEntityZoneComponent() noexcept;

static inline void setStaticF_bayUnlockEnabled(bool  value) ;

static inline void setStaticF_entityDebugEnabled(bool  value) ;

static inline void setStaticF_noiseDebugEnabled(bool  value) ;

static inline void setStaticF_tempEntitiesToDestroy(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorManager(GhostReactorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorManager(GhostReactorManager const& ) = delete;

/// @brief Field EVENT_BREAKABLE_BROKEN offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_BREAKABLE_BROKEN{u"GRSmashBreakable"};

/// @brief Field EVENT_CORE_COLLECTED offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_CORE_COLLECTED{u"GRCollectCore"};

/// @brief Field EVENT_ENEMY_ARMOR_BREAK offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_ENEMY_ARMOR_BREAK{u"GRArmorBreak"};

/// @brief Field EVENT_ENEMY_KILLED offset 0xffffffff size 0x8
static constexpr ::ConstString  EVENT_ENEMY_KILLED{u"GRKillEnemy"};

/// @brief Field GHOSTREACTOR_ZONE_ID offset 0xffffffff size 0x4
static constexpr int32_t  GHOSTREACTOR_ZONE_ID{static_cast<int32_t>(0x5)};

/// @brief Field GT_ZONE_GHOSTREACTOR value: I32(24)
static ::GlobalNamespace::GTZone const GT_ZONE_GHOSTREACTOR;

/// @brief Field HandprintThrottleTime offset 0xffffffff size 0x4
static constexpr float_t  HandprintThrottleTime{static_cast<float_t>(0.25f)};

/// @brief Field NETWORK_ROOM_GR_DEPTH offset 0xffffffff size 0x8
static constexpr ::ConstString  NETWORK_ROOM_GR_DEPTH{u"ghostReactorDepth"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1826};

/// @brief Field gameEntityManager, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  ___gameEntityManager;

/// @brief Field gameAgentManager, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameAgentManager>  ___gameAgentManager;

/// @brief Field noiseEventManager, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRNoiseEventManager>  ___noiseEventManager;

/// @brief Field photonView, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field reactor, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field m_RpcSpamChecks, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GhostReactorManager_RPC>*  ___m_RpcSpamChecks;

/// @brief Field LastHandprintTime, offset: 0xd0, size: 0x4, def value: None
 float_t  ___LastHandprintTime;

/// @brief Field activeSpawnSectionEntitiesCoroutine, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___activeSpawnSectionEntitiesCoroutine;

/// @brief Field spawnSectionEntitiesWait, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ___spawnSectionEntitiesWait;

/// @brief Field cachedBossEntity, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___cachedBossEntity;

/// @brief Field upgradeStation, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolUpgradeStation>  ___upgradeStation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___gameEntityManager) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___gameAgentManager) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___noiseEventManager) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___photonView) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___reactor) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___m_RpcSpamChecks) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___LastHandprintTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___activeSpawnSectionEntitiesCoroutine) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___spawnSectionEntitiesWait) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___cachedBossEntity) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager, ___upgradeStation) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorManager) == 0xf8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorManager/<SpawnSectionEntitiesCoroutine>d__75
class CORDL_TYPE GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GhostReactorManager>  __4__this;

/// @brief Field <initialFrameCount>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialFrameCount_5__2, put=__cordl_internal_set__initialFrameCount_5__2)) int32_t  _initialFrameCount_5__2;

/// @brief Field respawnCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnCount, put=__cordl_internal_set_respawnCount)) float_t  respawnCount;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5860520, size 0xc8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58605e8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x58605f0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5860628, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x586051c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__initialFrameCount_5__2() const;

constexpr int32_t& __cordl_internal_get__initialFrameCount_5__2() ;

constexpr float_t const& __cordl_internal_get_respawnCount() const;

constexpr float_t& __cordl_internal_get_respawnCount() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set__initialFrameCount_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_respawnCount(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x58562c8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75(GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75(GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1825};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  _____4__this;

/// @brief Field respawnCount, offset: 0x28, size: 0x4, def value: None
 float_t  ___respawnCount;

/// @brief Field <initialFrameCount>5__2, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____initialFrameCount_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75, ___respawnCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75, ____initialFrameCount_5__2) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorManager__SpawnSectionEntitiesCoroutine_d__75) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
