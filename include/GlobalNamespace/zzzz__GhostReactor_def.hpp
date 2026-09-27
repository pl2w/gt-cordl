#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactor)
namespace GlobalNamespace {
class GRBay;
}
namespace GlobalNamespace {
class GRCollectibleDispenser;
}
namespace GlobalNamespace {
class GRCurrencyDepositor;
}
namespace GlobalNamespace {
class GRDebugUpgradeKiosk;
}
namespace GlobalNamespace {
class GRDistillery;
}
namespace GlobalNamespace {
class GRDropZone;
}
namespace GlobalNamespace {
class GRPatrolPath;
}
namespace GlobalNamespace {
class GRRecycler;
}
namespace GlobalNamespace {
class GRReviveStation;
}
namespace GlobalNamespace {
class GRSeedExtractor;
}
namespace GlobalNamespace {
class GRToolProgressionManager;
}
namespace GlobalNamespace {
class GRToolPurchaseStation;
}
namespace GlobalNamespace {
class GRToolUpgradePurchaseStationFull;
}
namespace GlobalNamespace {
class GRToolUpgradeStation;
}
namespace GlobalNamespace {
class GRUIBuyItem;
}
namespace GlobalNamespace {
class GRUIEmployeeTerminal;
}
namespace GlobalNamespace {
class GRUIPromotionBot;
}
namespace GlobalNamespace {
struct GRUIScoreboard_ScoreboardScreen;
}
namespace GlobalNamespace {
class GRUIScoreboard;
}
namespace GlobalNamespace {
class GRUIStationEmployeeBadges;
}
namespace GlobalNamespace {
class GRUIStoreDisplay;
}
namespace GlobalNamespace {
class GRVendingMachine;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GhostReactorLevelDepthConfig;
}
namespace GlobalNamespace {
class GhostReactorLevelGenConfig;
}
namespace GlobalNamespace {
class GhostReactorLevelGenerator;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class GhostReactorShiftManager;
}
namespace GlobalNamespace {
struct GhostReactor_EnemyEntityCreateData;
}
namespace GlobalNamespace {
struct GhostReactor_EnemyType;
}
namespace GlobalNamespace {
struct GhostReactor_EntityGroupTypes;
}
namespace GlobalNamespace {
class GhostReactor_EntityTypeRespawnTracker;
}
namespace GlobalNamespace {
class GhostReactor_TempEnemySpawnInfo;
}
namespace GlobalNamespace {
struct GhostReactor_ToolEntityCreateData;
}
namespace GlobalNamespace {
class GhostReactor___c;
}
namespace GlobalNamespace {
class GorillaSurfaceOverride;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IGRSleepableEntity;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Rendering {
class ZoneShaderSettings;
}
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class GhostReactor_EntityTypeRespawnTracker;
}
namespace GlobalNamespace {
class GhostReactor_TempEnemySpawnInfo;
}
namespace GlobalNamespace {
class GhostReactor___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactor*);
MARK_REF_T(::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*);
MARK_REF_T(::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*);
MARK_REF_T(::GlobalNamespace::GhostReactor___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactor*, "", "GhostReactor");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*, "", "GhostReactor/EntityTypeRespawnTracker");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*, "", "GhostReactor/TempEnemySpawnInfo");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactor___c*, "", "GhostReactor/<>c");
// Dependencies GTZone, MonoBehaviourTick, SRand, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactor
class CORDL_TYPE GhostReactor : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using EnemyEntityCreateData = ::GlobalNamespace::GhostReactor_EnemyEntityCreateData;

using EnemyType = ::GlobalNamespace::GhostReactor_EnemyType;

using EntityGroupTypes = ::GlobalNamespace::GhostReactor_EntityGroupTypes;

using EntityTypeRespawnTracker = ::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker;

using TempEnemySpawnInfo = ::GlobalNamespace::GhostReactor_TempEnemySpawnInfo;

using ToolEntityCreateData = ::GlobalNamespace::GhostReactor_ToolEntityCreateData;

using __c = ::GlobalNamespace::GhostReactor___c;

/// @brief Field DROP_ZONE_REPEL, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DROP_ZONE_REPEL, put=setStaticF_DROP_ZONE_REPEL)) float_t  DROP_ZONE_REPEL;

 __declspec(property(get=get_NumActivePlayers)) int32_t  NumActivePlayers;

/// @brief Field bays, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bays, put=__cordl_internal_set_bays)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBay>>*  bays;

/// @brief Field boundsBoxCollider, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_boundsBoxCollider, put=__cordl_internal_set_boundsBoxCollider)) ::UnityW<::UnityEngine::BoxCollider>  boundsBoxCollider;

/// @brief Field broadcastHandTapDelay, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_broadcastHandTapDelay, put=__cordl_internal_set_broadcastHandTapDelay)) float_t  broadcastHandTapDelay;

/// @brief Field collectibleDispenserUpdateFrequency, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_collectibleDispenserUpdateFrequency, put=__cordl_internal_set_collectibleDispenserUpdateFrequency)) float_t  collectibleDispenserUpdateFrequency;

/// @brief Field collectibleDispensers, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectibleDispensers, put=__cordl_internal_set_collectibleDispensers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRCollectibleDispenser>>*  collectibleDispensers;

/// @brief Field currencyDepositor, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currencyDepositor, put=__cordl_internal_set_currencyDepositor)) ::UnityW<::GlobalNamespace::GRCurrencyDepositor>  currencyDepositor;

/// @brief Field debugUpgradeKiosk, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugUpgradeKiosk, put=__cordl_internal_set_debugUpgradeKiosk)) ::UnityW<::GlobalNamespace::GRDebugUpgradeKiosk>  debugUpgradeKiosk;

/// @brief Field depthConfigIndex, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthConfigIndex, put=__cordl_internal_set_depthConfigIndex)) int32_t  depthConfigIndex;

/// @brief Field depthLevel, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_depthLevel, put=__cordl_internal_set_depthLevel)) int32_t  depthLevel;

/// @brief Field difficultyScalingForCurrentFloor, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_difficultyScalingForCurrentFloor, put=__cordl_internal_set_difficultyScalingForCurrentFloor)) float_t  difficultyScalingForCurrentFloor;

/// @brief Field difficultyScalingPerPlayer, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_difficultyScalingPerPlayer, put=__cordl_internal_set_difficultyScalingPerPlayer)) ::System::Collections::Generic::List_1<float_t>*  difficultyScalingPerPlayer;

/// @brief Field distillery, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_distillery, put=__cordl_internal_set_distillery)) ::UnityW<::GlobalNamespace::GRDistillery>  distillery;

/// @brief Field dropZone, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dropZone, put=__cordl_internal_set_dropZone)) ::UnityW<::GlobalNamespace::GRDropZone>  dropZone;

/// @brief Field employeeBadges, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_employeeBadges, put=__cordl_internal_set_employeeBadges)) ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>  employeeBadges;

/// @brief Field employeeTerminal, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_employeeTerminal, put=__cordl_internal_set_employeeTerminal)) ::UnityW<::GlobalNamespace::GRUIEmployeeTerminal>  employeeTerminal;

/// @brief Field entryRoomAudio, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryRoomAudio, put=__cordl_internal_set_entryRoomAudio)) ::UnityW<::UnityEngine::AudioSource>  entryRoomAudio;

/// @brief Field entryRoomDeathSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_entryRoomDeathSound, put=__cordl_internal_set_entryRoomDeathSound)) ::UnityW<::UnityEngine::AudioClip>  entryRoomDeathSound;

/// @brief Field envLayerMask, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_envLayerMask, put=__cordl_internal_set_envLayerMask)) ::UnityEngine::LayerMask  envLayerMask;

/// @brief Field grManager, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_grManager, put=__cordl_internal_set_grManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  grManager;

/// @brief Field handPrintCombineTestDelta, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_handPrintCombineTestDelta, put=__cordl_internal_set_handPrintCombineTestDelta)) int32_t  handPrintCombineTestDelta;

/// @brief Field handPrintData, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_handPrintData, put=__cordl_internal_set_handPrintData)) ::System::Collections::Generic::List_1<float_t>*  handPrintData;

/// @brief Field handPrintFadeTime, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_handPrintFadeTime, put=__cordl_internal_set_handPrintFadeTime)) float_t  handPrintFadeTime;

/// @brief Field handPrintInkTime, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_handPrintInkTime, put=__cordl_internal_set_handPrintInkTime)) float_t  handPrintInkTime;

/// @brief Field handPrintLocations, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_handPrintLocations, put=__cordl_internal_set_handPrintLocations)) ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  handPrintLocations;

/// @brief Field handPrintMPB, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_handPrintMPB, put=__cordl_internal_set_handPrintMPB)) ::UnityEngine::MaterialPropertyBlock*  handPrintMPB;

/// @brief Field handPrintMaterial, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_handPrintMaterial, put=__cordl_internal_set_handPrintMaterial)) ::UnityW<::UnityEngine::Material>  handPrintMaterial;

/// @brief Field handPrintMesh, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_handPrintMesh, put=__cordl_internal_set_handPrintMesh)) ::UnityW<::UnityEngine::Mesh>  handPrintMesh;

/// @brief Field handPrintScale, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_handPrintScale, put=__cordl_internal_set_handPrintScale)) float_t  handPrintScale;

/// @brief Field handPrintTimeLeft, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_handPrintTimeLeft, put=__cordl_internal_set_handPrintTimeLeft)) float_t  handPrintTimeLeft;

/// @brief Field handPrintTimeRight, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_handPrintTimeRight, put=__cordl_internal_set_handPrintTimeRight)) float_t  handPrintTimeRight;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GhostReactor>  instance;

/// @brief Field isRefreshing, offset 0x1c8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRefreshing, put=__cordl_internal_set_isRefreshing)) bool  isRefreshing;

/// @brief Field itemPurchaseStands, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemPurchaseStands, put=__cordl_internal_set_itemPurchaseStands)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIBuyItem>>*  itemPurchaseStands;

/// @brief Field lastBroadcastHandTapTime, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastBroadcastHandTapTime, put=__cordl_internal_set_lastBroadcastHandTapTime)) float_t  lastBroadcastHandTapTime;

/// @brief Field lastCollectibleDispenserUpdateTime, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastCollectibleDispenserUpdateTime, put=__cordl_internal_set_lastCollectibleDispenserUpdateTime)) double_t  lastCollectibleDispenserUpdateTime;

/// @brief Field levelGenerator, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelGenerator, put=__cordl_internal_set_levelGenerator)) ::UnityW<::GlobalNamespace::GhostReactorLevelGenerator>  levelGenerator;

/// @brief Field overrideEnemySpawn, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideEnemySpawn, put=__cordl_internal_set_overrideEnemySpawn)) ::UnityW<::GlobalNamespace::GameEntity>  overrideEnemySpawn;

/// @brief Field photonView, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field playerProgressionData, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerProgressionData, put=__cordl_internal_set_playerProgressionData)) ::System::Collections::Generic::Dictionary_2<int32_t,double_t>*  playerProgressionData;

/// @brief Field promotionBot, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_promotionBot, put=__cordl_internal_set_promotionBot)) ::UnityW<::GlobalNamespace::GRUIPromotionBot>  promotionBot;

/// @brief Field randomGenerator, offset 0x194, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomGenerator, put=__cordl_internal_set_randomGenerator)) ::GlobalNamespace::SRand  randomGenerator;

/// @brief Field recycler, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_recycler, put=__cordl_internal_set_recycler)) ::UnityW<::GlobalNamespace::GRRecycler>  recycler;

/// @brief Field respawnMinDistToPlayer, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnMinDistToPlayer, put=__cordl_internal_set_respawnMinDistToPlayer)) float_t  respawnMinDistToPlayer;

/// @brief Field respawnQueue, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_respawnQueue, put=__cordl_internal_set_respawnQueue)) ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*  respawnQueue;

/// @brief Field respawnTime, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnTime, put=__cordl_internal_set_respawnTime)) float_t  respawnTime;

/// @brief Field restartMarker, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_restartMarker, put=__cordl_internal_set_restartMarker)) ::UnityW<::UnityEngine::Transform>  restartMarker;

/// @brief Field reviveStations, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_reviveStations, put=__cordl_internal_set_reviveStations)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRReviveStation>>*  reviveStations;

/// @brief Field safeZoneLimit, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_safeZoneLimit, put=__cordl_internal_set_safeZoneLimit)) ::UnityW<::UnityEngine::BoxCollider>  safeZoneLimit;

/// @brief Field scoreboards, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreboards, put=__cordl_internal_set_scoreboards)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboard>>*  scoreboards;

/// @brief Field seedExtractor, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_seedExtractor, put=__cordl_internal_set_seedExtractor)) ::UnityW<::GlobalNamespace::GRSeedExtractor>  seedExtractor;

/// @brief Field sentientCoreUpdateIndex, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_sentientCoreUpdateIndex, put=__cordl_internal_set_sentientCoreUpdateIndex)) int32_t  sentientCoreUpdateIndex;

/// @brief Field shiftManager, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shiftManager, put=__cordl_internal_set_shiftManager)) ::UnityW<::GlobalNamespace::GhostReactorShiftManager>  shiftManager;

/// @brief Field sleepableEntities, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleepableEntities, put=__cordl_internal_set_sleepableEntities)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGRSleepableEntity*>*  sleepableEntities;

/// @brief Field storeDisplays, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeDisplays, put=__cordl_internal_set_storeDisplays)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIStoreDisplay>>*  storeDisplays;

/// @brief Field tempSpawnEnemies, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempSpawnEnemies, put=__cordl_internal_set_tempSpawnEnemies)) ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>*  tempSpawnEnemies;

/// @brief Field tempSpawnItems, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempSpawnItems, put=__cordl_internal_set_tempSpawnItems)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  tempSpawnItems;

/// @brief Field tempSpawnItemsMarker, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempSpawnItemsMarker, put=__cordl_internal_set_tempSpawnItemsMarker)) ::UnityW<::UnityEngine::Transform>  tempSpawnItemsMarker;

/// @brief Field toolProgression, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolProgression, put=__cordl_internal_set_toolProgression)) ::UnityW<::GlobalNamespace::GRToolProgressionManager>  toolProgression;

/// @brief Field toolPurchasingStations, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolPurchasingStations, put=__cordl_internal_set_toolPurchasingStations)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolPurchaseStation>>*  toolPurchasingStations;

/// @brief Field toolUpgradePurchaseStationsFull, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolUpgradePurchaseStationsFull, put=__cordl_internal_set_toolUpgradePurchaseStationsFull)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull>>*  toolUpgradePurchaseStationsFull;

/// @brief Field upgradeStation, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeStation, put=__cordl_internal_set_upgradeStation)) ::UnityW<::GlobalNamespace::GRToolUpgradeStation>  upgradeStation;

/// @brief Field vendingMachines, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_vendingMachines, put=__cordl_internal_set_vendingMachines)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRVendingMachine>>*  vendingMachines;

/// @brief Field vrRigs, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrRigs, put=__cordl_internal_set_vrRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  vrRigs;

/// @brief Field zone, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Field zoneShaderSettings, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneShaderSettings, put=__cordl_internal_set_zoneShaderSettings)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  zoneShaderSettings;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method AddHandprint, addr 0x58472c8, size 0x288, virtual false, abstract: false, final false
inline void AddHandprint(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  orient) ;

/// @brief Method Awake, addr 0x5842f28, size 0x654, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearAllHandprints, addr 0x5847550, size 0x70, virtual false, abstract: false, final false
inline void ClearAllHandprints() ;

/// @brief Method ClearAllRespawns, addr 0x584785c, size 0x70, virtual false, abstract: false, final false
inline void ClearAllRespawns() ;

/// @brief Method DelveToNextDepth, addr 0x5846a58, size 0x7c, virtual false, abstract: false, final false
inline void DelveToNextDepth() ;

/// @brief Method EnableGhostReactorForVirtualStump, addr 0x5844004, size 0x7c, virtual false, abstract: false, final false
inline void EnableGhostReactorForVirtualStump() ;

/// @brief Method Get, addr 0x5842e78, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GhostReactor> Get(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method GetCurrLevelGenConfig, addr 0x5846d88, size 0x15c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig> GetCurrLevelGenConfig() ;

/// @brief Method GetDepthConfigIndex, addr 0x5846d80, size 0x8, virtual false, abstract: false, final false
inline int32_t GetDepthConfigIndex() ;

/// @brief Method GetDepthLevel, addr 0x5846d78, size 0x8, virtual false, abstract: false, final false
inline int32_t GetDepthLevel() ;

/// @brief Method GetDepthLevelConfig, addr 0x5846c14, size 0xd8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig> GetDepthLevelConfig(int32_t  level) ;

/// @brief Method GetItemCost, addr 0x58464e4, size 0x40, virtual false, abstract: false, final false
inline int32_t GetItemCost(int32_t  entityTypeId) ;

/// @brief Method GetJoinDepthSectionFromLevel, addr 0x5846a08, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetJoinDepthSectionFromLevel(int32_t  depthLevel) ;

/// @brief Method GetPatrolPath, addr 0x5844ad8, size 0x98, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRPatrolPath> GetPatrolPath(int64_t  createData) ;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x58478cc, size 0x8, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

static inline ::GlobalNamespace::GhostReactor* New_ctor() ;

/// @brief Method OnAbilityDie, addr 0x5847608, size 0x204, virtual false, abstract: false, final false
inline void OnAbilityDie(::GlobalNamespace::GameEntity*  entity, float_t  forcedRespawn) ;

/// @brief Method OnDisable, addr 0x5844210, size 0x2e4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x584357c, size 0xa08, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLocalPlayerConnectedToRoom, addr 0x5845cf0, size 0x16c, virtual false, abstract: false, final false
inline void OnLocalPlayerConnectedToRoom() ;

/// @brief Method OnProgressionUpdated, addr 0x58444f4, size 0x78, virtual false, abstract: false, final false
inline void OnProgressionUpdated() ;

/// @brief Method OnTapLocal, addr 0x5846ee4, size 0x3e4, virtual false, abstract: false, final false
inline void OnTapLocal(bool  isLeftHand, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  orient, ::GlobalNamespace::GorillaSurfaceOverride*  surfaceOverride) ;

/// @brief Method OnVRRigsChanged, addr 0x5845e5c, size 0x4, virtual false, abstract: false, final false
inline void OnVRRigsChanged(::GlobalNamespace::RigContainer*  container) ;

/// @brief Method PickLevelConfigForDepth, addr 0x5846ad4, size 0x140, virtual false, abstract: false, final false
inline int32_t PickLevelConfigForDepth(int32_t  depthLevel) ;

/// @brief Method RefreshBays, addr 0x5846cec, size 0x8c, virtual false, abstract: false, final false
inline void RefreshBays() ;

/// @brief Method RefreshDepth, addr 0x5843f84, size 0x80, virtual false, abstract: false, final false
inline void RefreshDepth() ;

/// @brief Method RefreshReviveStations, addr 0x5844080, size 0x190, virtual false, abstract: false, final false
inline void RefreshReviveStations(bool  searchScene) ;

/// @brief Method RefreshScoreboards, addr 0x5846234, size 0x210, virtual false, abstract: false, final false
inline void RefreshScoreboards() ;

/// @brief Method RefreshStore, addr 0x5844a00, size 0xd8, virtual false, abstract: false, final false
inline void RefreshStore() ;

/// @brief Method SetNextDelveDepth, addr 0x58466cc, size 0x33c, virtual false, abstract: false, final false
inline void SetNextDelveDepth(int32_t  newLevel, int32_t  newDepthConfigIndex) ;

/// @brief Method Tick, addr 0x5844c08, size 0x8e4, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpdateHandprints, addr 0x58455b4, size 0x73c, virtual false, abstract: false, final false
inline void UpdateHandprints(float_t  deltaTime) ;

/// @brief Method UpdateLocalPlayerFromProgression, addr 0x584456c, size 0x494, virtual false, abstract: false, final false
inline void UpdateLocalPlayerFromProgression() ;

/// @brief Method UpdateRemoteScoreboardScreen, addr 0x5846524, size 0x1a8, virtual false, abstract: false, final false
inline void UpdateRemoteScoreboardScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  scoreboardPage) ;

/// @brief Method UpdateScoreboardScreen, addr 0x5846444, size 0xa0, virtual false, abstract: false, final false
inline void UpdateScoreboardScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  newScreen) ;

/// @brief Method VRRigRefresh, addr 0x5845e60, size 0x3d4, virtual false, abstract: false, final false
inline void VRRigRefresh() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBay>>* const& __cordl_internal_get_bays() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBay>>*& __cordl_internal_get_bays() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_boundsBoxCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_boundsBoxCollider() ;

constexpr float_t const& __cordl_internal_get_broadcastHandTapDelay() const;

constexpr float_t& __cordl_internal_get_broadcastHandTapDelay() ;

constexpr float_t const& __cordl_internal_get_collectibleDispenserUpdateFrequency() const;

constexpr float_t& __cordl_internal_get_collectibleDispenserUpdateFrequency() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRCollectibleDispenser>>* const& __cordl_internal_get_collectibleDispensers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRCollectibleDispenser>>*& __cordl_internal_get_collectibleDispensers() ;

constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor> const& __cordl_internal_get_currencyDepositor() const;

constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor>& __cordl_internal_get_currencyDepositor() ;

constexpr ::UnityW<::GlobalNamespace::GRDebugUpgradeKiosk> const& __cordl_internal_get_debugUpgradeKiosk() const;

constexpr ::UnityW<::GlobalNamespace::GRDebugUpgradeKiosk>& __cordl_internal_get_debugUpgradeKiosk() ;

constexpr int32_t const& __cordl_internal_get_depthConfigIndex() const;

constexpr int32_t& __cordl_internal_get_depthConfigIndex() ;

constexpr int32_t const& __cordl_internal_get_depthLevel() const;

constexpr int32_t& __cordl_internal_get_depthLevel() ;

constexpr float_t const& __cordl_internal_get_difficultyScalingForCurrentFloor() const;

constexpr float_t& __cordl_internal_get_difficultyScalingForCurrentFloor() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_difficultyScalingPerPlayer() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_difficultyScalingPerPlayer() ;

constexpr ::UnityW<::GlobalNamespace::GRDistillery> const& __cordl_internal_get_distillery() const;

constexpr ::UnityW<::GlobalNamespace::GRDistillery>& __cordl_internal_get_distillery() ;

constexpr ::UnityW<::GlobalNamespace::GRDropZone> const& __cordl_internal_get_dropZone() const;

constexpr ::UnityW<::GlobalNamespace::GRDropZone>& __cordl_internal_get_dropZone() ;

constexpr ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges> const& __cordl_internal_get_employeeBadges() const;

constexpr ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>& __cordl_internal_get_employeeBadges() ;

constexpr ::UnityW<::GlobalNamespace::GRUIEmployeeTerminal> const& __cordl_internal_get_employeeTerminal() const;

constexpr ::UnityW<::GlobalNamespace::GRUIEmployeeTerminal>& __cordl_internal_get_employeeTerminal() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_entryRoomAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_entryRoomAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_entryRoomDeathSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_entryRoomDeathSound() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_envLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_envLayerMask() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_grManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_grManager() ;

constexpr int32_t const& __cordl_internal_get_handPrintCombineTestDelta() const;

constexpr int32_t& __cordl_internal_get_handPrintCombineTestDelta() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_handPrintData() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_handPrintData() ;

constexpr float_t const& __cordl_internal_get_handPrintFadeTime() const;

constexpr float_t& __cordl_internal_get_handPrintFadeTime() ;

constexpr float_t const& __cordl_internal_get_handPrintInkTime() const;

constexpr float_t& __cordl_internal_get_handPrintInkTime() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& __cordl_internal_get_handPrintLocations() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& __cordl_internal_get_handPrintLocations() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_handPrintMPB() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_handPrintMPB() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_handPrintMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_handPrintMaterial() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_handPrintMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_handPrintMesh() ;

constexpr float_t const& __cordl_internal_get_handPrintScale() const;

constexpr float_t& __cordl_internal_get_handPrintScale() ;

constexpr float_t const& __cordl_internal_get_handPrintTimeLeft() const;

constexpr float_t& __cordl_internal_get_handPrintTimeLeft() ;

constexpr float_t const& __cordl_internal_get_handPrintTimeRight() const;

constexpr float_t& __cordl_internal_get_handPrintTimeRight() ;

constexpr bool const& __cordl_internal_get_isRefreshing() const;

constexpr bool& __cordl_internal_get_isRefreshing() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIBuyItem>>* const& __cordl_internal_get_itemPurchaseStands() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIBuyItem>>*& __cordl_internal_get_itemPurchaseStands() ;

constexpr float_t const& __cordl_internal_get_lastBroadcastHandTapTime() const;

constexpr float_t& __cordl_internal_get_lastBroadcastHandTapTime() ;

constexpr double_t const& __cordl_internal_get_lastCollectibleDispenserUpdateTime() const;

constexpr double_t& __cordl_internal_get_lastCollectibleDispenserUpdateTime() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelGenerator> const& __cordl_internal_get_levelGenerator() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelGenerator>& __cordl_internal_get_levelGenerator() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_overrideEnemySpawn() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_overrideEnemySpawn() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,double_t>* const& __cordl_internal_get_playerProgressionData() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,double_t>*& __cordl_internal_get_playerProgressionData() ;

constexpr ::UnityW<::GlobalNamespace::GRUIPromotionBot> const& __cordl_internal_get_promotionBot() const;

constexpr ::UnityW<::GlobalNamespace::GRUIPromotionBot>& __cordl_internal_get_promotionBot() ;

constexpr ::GlobalNamespace::SRand const& __cordl_internal_get_randomGenerator() const;

constexpr ::GlobalNamespace::SRand& __cordl_internal_get_randomGenerator() ;

constexpr ::UnityW<::GlobalNamespace::GRRecycler> const& __cordl_internal_get_recycler() const;

constexpr ::UnityW<::GlobalNamespace::GRRecycler>& __cordl_internal_get_recycler() ;

constexpr float_t const& __cordl_internal_get_respawnMinDistToPlayer() const;

constexpr float_t& __cordl_internal_get_respawnMinDistToPlayer() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>* const& __cordl_internal_get_respawnQueue() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*& __cordl_internal_get_respawnQueue() ;

constexpr float_t const& __cordl_internal_get_respawnTime() const;

constexpr float_t& __cordl_internal_get_respawnTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_restartMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_restartMarker() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRReviveStation>>* const& __cordl_internal_get_reviveStations() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRReviveStation>>*& __cordl_internal_get_reviveStations() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_safeZoneLimit() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_safeZoneLimit() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboard>>* const& __cordl_internal_get_scoreboards() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboard>>*& __cordl_internal_get_scoreboards() ;

constexpr ::UnityW<::GlobalNamespace::GRSeedExtractor> const& __cordl_internal_get_seedExtractor() const;

constexpr ::UnityW<::GlobalNamespace::GRSeedExtractor>& __cordl_internal_get_seedExtractor() ;

constexpr int32_t const& __cordl_internal_get_sentientCoreUpdateIndex() const;

constexpr int32_t& __cordl_internal_get_sentientCoreUpdateIndex() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager> const& __cordl_internal_get_shiftManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager>& __cordl_internal_get_shiftManager() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGRSleepableEntity*>* const& __cordl_internal_get_sleepableEntities() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGRSleepableEntity*>*& __cordl_internal_get_sleepableEntities() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIStoreDisplay>>* const& __cordl_internal_get_storeDisplays() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIStoreDisplay>>*& __cordl_internal_get_storeDisplays() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>* const& __cordl_internal_get_tempSpawnEnemies() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>*& __cordl_internal_get_tempSpawnEnemies() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_tempSpawnItems() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_tempSpawnItems() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tempSpawnItemsMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tempSpawnItemsMarker() ;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& __cordl_internal_get_toolProgression() const;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& __cordl_internal_get_toolProgression() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolPurchaseStation>>* const& __cordl_internal_get_toolPurchasingStations() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolPurchaseStation>>*& __cordl_internal_get_toolPurchasingStations() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull>>* const& __cordl_internal_get_toolUpgradePurchaseStationsFull() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull>>*& __cordl_internal_get_toolUpgradePurchaseStationsFull() ;

constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation> const& __cordl_internal_get_upgradeStation() const;

constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation>& __cordl_internal_get_upgradeStation() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRVendingMachine>>* const& __cordl_internal_get_vendingMachines() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRVendingMachine>>*& __cordl_internal_get_vendingMachines() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_vrRigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_vrRigs() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& __cordl_internal_get_zoneShaderSettings() const;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& __cordl_internal_get_zoneShaderSettings() ;

constexpr void __cordl_internal_set_bays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBay>>*  value) ;

constexpr void __cordl_internal_set_boundsBoxCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_broadcastHandTapDelay(float_t  value) ;

constexpr void __cordl_internal_set_collectibleDispenserUpdateFrequency(float_t  value) ;

constexpr void __cordl_internal_set_collectibleDispensers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRCollectibleDispenser>>*  value) ;

constexpr void __cordl_internal_set_currencyDepositor(::UnityW<::GlobalNamespace::GRCurrencyDepositor>  value) ;

constexpr void __cordl_internal_set_debugUpgradeKiosk(::UnityW<::GlobalNamespace::GRDebugUpgradeKiosk>  value) ;

constexpr void __cordl_internal_set_depthConfigIndex(int32_t  value) ;

constexpr void __cordl_internal_set_depthLevel(int32_t  value) ;

constexpr void __cordl_internal_set_difficultyScalingForCurrentFloor(float_t  value) ;

constexpr void __cordl_internal_set_difficultyScalingPerPlayer(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_distillery(::UnityW<::GlobalNamespace::GRDistillery>  value) ;

constexpr void __cordl_internal_set_dropZone(::UnityW<::GlobalNamespace::GRDropZone>  value) ;

constexpr void __cordl_internal_set_employeeBadges(::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>  value) ;

constexpr void __cordl_internal_set_employeeTerminal(::UnityW<::GlobalNamespace::GRUIEmployeeTerminal>  value) ;

constexpr void __cordl_internal_set_entryRoomAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_entryRoomDeathSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_envLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_handPrintCombineTestDelta(int32_t  value) ;

constexpr void __cordl_internal_set_handPrintData(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_handPrintFadeTime(float_t  value) ;

constexpr void __cordl_internal_set_handPrintInkTime(float_t  value) ;

constexpr void __cordl_internal_set_handPrintLocations(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value) ;

constexpr void __cordl_internal_set_handPrintMPB(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_handPrintMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_handPrintMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_handPrintScale(float_t  value) ;

constexpr void __cordl_internal_set_handPrintTimeLeft(float_t  value) ;

constexpr void __cordl_internal_set_handPrintTimeRight(float_t  value) ;

constexpr void __cordl_internal_set_isRefreshing(bool  value) ;

constexpr void __cordl_internal_set_itemPurchaseStands(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIBuyItem>>*  value) ;

constexpr void __cordl_internal_set_lastBroadcastHandTapTime(float_t  value) ;

constexpr void __cordl_internal_set_lastCollectibleDispenserUpdateTime(double_t  value) ;

constexpr void __cordl_internal_set_levelGenerator(::UnityW<::GlobalNamespace::GhostReactorLevelGenerator>  value) ;

constexpr void __cordl_internal_set_overrideEnemySpawn(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_playerProgressionData(::System::Collections::Generic::Dictionary_2<int32_t,double_t>*  value) ;

constexpr void __cordl_internal_set_promotionBot(::UnityW<::GlobalNamespace::GRUIPromotionBot>  value) ;

constexpr void __cordl_internal_set_randomGenerator(::GlobalNamespace::SRand  value) ;

constexpr void __cordl_internal_set_recycler(::UnityW<::GlobalNamespace::GRRecycler>  value) ;

constexpr void __cordl_internal_set_respawnMinDistToPlayer(float_t  value) ;

constexpr void __cordl_internal_set_respawnQueue(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*  value) ;

constexpr void __cordl_internal_set_respawnTime(float_t  value) ;

constexpr void __cordl_internal_set_restartMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reviveStations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRReviveStation>>*  value) ;

constexpr void __cordl_internal_set_safeZoneLimit(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_scoreboards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboard>>*  value) ;

constexpr void __cordl_internal_set_seedExtractor(::UnityW<::GlobalNamespace::GRSeedExtractor>  value) ;

constexpr void __cordl_internal_set_sentientCoreUpdateIndex(int32_t  value) ;

constexpr void __cordl_internal_set_shiftManager(::UnityW<::GlobalNamespace::GhostReactorShiftManager>  value) ;

constexpr void __cordl_internal_set_sleepableEntities(::System::Collections::Generic::List_1<::GlobalNamespace::IGRSleepableEntity*>*  value) ;

constexpr void __cordl_internal_set_storeDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIStoreDisplay>>*  value) ;

constexpr void __cordl_internal_set_tempSpawnEnemies(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>*  value) ;

constexpr void __cordl_internal_set_tempSpawnItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_tempSpawnItemsMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_toolProgression(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value) ;

constexpr void __cordl_internal_set_toolPurchasingStations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolPurchaseStation>>*  value) ;

constexpr void __cordl_internal_set_toolUpgradePurchaseStationsFull(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull>>*  value) ;

constexpr void __cordl_internal_set_upgradeStation(::UnityW<::GlobalNamespace::GRToolUpgradeStation>  value) ;

constexpr void __cordl_internal_set_vendingMachines(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRVendingMachine>>*  value) ;

constexpr void __cordl_internal_set_vrRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_zoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

/// @brief Method .ctor, addr 0x58478d4, size 0x254, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_DROP_ZONE_REPEL() ;

static inline ::UnityW<::GlobalNamespace::GhostReactor> getStaticF_instance() ;

/// @brief Method get_NumActivePlayers, addr 0x58475c0, size 0x48, virtual false, abstract: false, final false
inline int32_t get_NumActivePlayers() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

static inline void setStaticF_DROP_ZONE_REPEL(float_t  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactor(GhostReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactor(GhostReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1806};

/// @brief Field handPrintMaxCount offset 0xffffffff size 0x4
static constexpr int32_t  handPrintMaxCount{static_cast<int32_t>(0x3e8)};

/// @brief Field zone, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// @brief Field restartMarker, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___restartMarker;

/// @brief Field photonView, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field entryRoomAudio, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___entryRoomAudio;

/// @brief Field entryRoomDeathSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___entryRoomDeathSound;

/// [FormerlySerializedAs("zoneLimit")]
/// @brief Field boundsBoxCollider, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___boundsBoxCollider;

/// @brief Field safeZoneLimit, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___safeZoneLimit;

/// @brief Field tempSpawnEnemies, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>*  ___tempSpawnEnemies;

/// @brief Field overrideEnemySpawn, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___overrideEnemySpawn;

/// @brief Field tempSpawnItems, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___tempSpawnItems;

/// @brief Field tempSpawnItemsMarker, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tempSpawnItemsMarker;

/// @brief Field itemPurchaseStands, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIBuyItem>>*  ___itemPurchaseStands;

/// @brief Field toolPurchasingStations, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolPurchaseStation>>*  ___toolPurchasingStations;

/// @brief Field debugUpgradeKiosk, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRDebugUpgradeKiosk>  ___debugUpgradeKiosk;

/// @brief Field scoreboards, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboard>>*  ___scoreboards;

/// @brief Field collectibleDispensers, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRCollectibleDispenser>>*  ___collectibleDispensers;

/// @brief Field sleepableEntities, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGRSleepableEntity*>*  ___sleepableEntities;

/// @brief Field bays, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBay>>*  ___bays;

/// @brief Field storeDisplays, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIStoreDisplay>>*  ___storeDisplays;

/// @brief Field employeeBadges, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>  ___employeeBadges;

/// @brief Field employeeTerminal, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRUIEmployeeTerminal>  ___employeeTerminal;

/// @brief Field shiftManager, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorShiftManager>  ___shiftManager;

/// @brief Field levelGenerator, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorLevelGenerator>  ___levelGenerator;

/// @brief Field currencyDepositor, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRCurrencyDepositor>  ___currencyDepositor;

/// @brief Field seedExtractor, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRSeedExtractor>  ___seedExtractor;

/// @brief Field distillery, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRDistillery>  ___distillery;

/// @brief Field toolProgression, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolProgressionManager>  ___toolProgression;

/// @brief Field upgradeStation, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolUpgradeStation>  ___upgradeStation;

/// @brief Field toolUpgradePurchaseStationsFull, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull>>*  ___toolUpgradePurchaseStationsFull;

/// @brief Field recycler, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRRecycler>  ___recycler;

/// @brief Field respawnQueue, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*  ___respawnQueue;

/// @brief Field difficultyScalingPerPlayer, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___difficultyScalingPerPlayer;

/// @brief Field respawnTime, offset: 0x120, size: 0x4, def value: None
 float_t  ___respawnTime;

/// @brief Field respawnMinDistToPlayer, offset: 0x124, size: 0x4, def value: None
 float_t  ___respawnMinDistToPlayer;

/// @brief Field difficultyScalingForCurrentFloor, offset: 0x128, size: 0x4, def value: None
 float_t  ___difficultyScalingForCurrentFloor;

/// @brief Field envLayerMask, offset: 0x12c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___envLayerMask;

/// @brief Field handPrintMaterial, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___handPrintMaterial;

/// @brief Field handPrintMesh, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___handPrintMesh;

/// @brief Field handPrintScale, offset: 0x140, size: 0x4, def value: None
 float_t  ___handPrintScale;

/// @brief Field handPrintInkTime, offset: 0x144, size: 0x4, def value: None
 float_t  ___handPrintInkTime;

/// @brief Field handPrintFadeTime, offset: 0x148, size: 0x4, def value: None
 float_t  ___handPrintFadeTime;

/// @brief Field handPrintLocations, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  ___handPrintLocations;

/// @brief Field handPrintData, offset: 0x158, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___handPrintData;

/// @brief Field handPrintMPB, offset: 0x160, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___handPrintMPB;

/// [ReadOnly]
/// @brief Field reviveStations, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRReviveStation>>*  ___reviveStations;

/// @brief Field vendingMachines, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRVendingMachine>>*  ___vendingMachines;

/// @brief Field vrRigs, offset: 0x178, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___vrRigs;

/// @brief Field collectibleDispenserUpdateFrequency, offset: 0x180, size: 0x4, def value: None
 float_t  ___collectibleDispenserUpdateFrequency;

/// @brief Field lastCollectibleDispenserUpdateTime, offset: 0x188, size: 0x8, def value: None
 double_t  ___lastCollectibleDispenserUpdateTime;

/// @brief Field sentientCoreUpdateIndex, offset: 0x190, size: 0x4, def value: None
 int32_t  ___sentientCoreUpdateIndex;

/// @brief Field randomGenerator, offset: 0x194, size: 0x8, def value: None
 ::GlobalNamespace::SRand  ___randomGenerator;

/// [ReadOnly]
/// @brief Field depthLevel, offset: 0x19c, size: 0x4, def value: None
 int32_t  ___depthLevel;

/// [ReadOnly]
/// @brief Field depthConfigIndex, offset: 0x1a0, size: 0x4, def value: None
 int32_t  ___depthConfigIndex;

/// @brief Field playerProgressionData, offset: 0x1a8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,double_t>*  ___playerProgressionData;

/// @brief Field dropZone, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRDropZone>  ___dropZone;

/// @brief Field zoneShaderSettings, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  ___zoneShaderSettings;

/// @brief Field promotionBot, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRUIPromotionBot>  ___promotionBot;

/// @brief Field isRefreshing, offset: 0x1c8, size: 0x1, def value: None
 bool  ___isRefreshing;

/// @brief Field grManager, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___grManager;

/// @brief Field handPrintTimeLeft, offset: 0x1d8, size: 0x4, def value: None
 float_t  ___handPrintTimeLeft;

/// @brief Field handPrintTimeRight, offset: 0x1dc, size: 0x4, def value: None
 float_t  ___handPrintTimeRight;

/// @brief Field handPrintCombineTestDelta, offset: 0x1e0, size: 0x4, def value: None
 int32_t  ___handPrintCombineTestDelta;

/// @brief Field lastBroadcastHandTapTime, offset: 0x1e4, size: 0x4, def value: None
 float_t  ___lastBroadcastHandTapTime;

/// @brief Field broadcastHandTapDelay, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___broadcastHandTapDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactor, ___zone) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___restartMarker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___photonView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___entryRoomAudio) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___entryRoomDeathSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___boundsBoxCollider) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___safeZoneLimit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___tempSpawnEnemies) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___overrideEnemySpawn) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___tempSpawnItems) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___tempSpawnItemsMarker) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___itemPurchaseStands) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___toolPurchasingStations) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___debugUpgradeKiosk) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___scoreboards) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___collectibleDispensers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___sleepableEntities) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___bays) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___storeDisplays) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___employeeBadges) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___employeeTerminal) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___shiftManager) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___levelGenerator) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___currencyDepositor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___seedExtractor) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___distillery) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___toolProgression) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___upgradeStation) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___toolUpgradePurchaseStationsFull) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___recycler) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___respawnQueue) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___difficultyScalingPerPlayer) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___respawnTime) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___respawnMinDistToPlayer) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___difficultyScalingForCurrentFloor) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___envLayerMask) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintMaterial) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintMesh) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintScale) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintInkTime) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintFadeTime) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintLocations) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintData) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintMPB) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___reviveStations) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___vendingMachines) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___vrRigs) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___collectibleDispenserUpdateFrequency) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___lastCollectibleDispenserUpdateTime) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___sentientCoreUpdateIndex) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___randomGenerator) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___depthLevel) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___depthConfigIndex) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___playerProgressionData) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___dropZone) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___zoneShaderSettings) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___promotionBot) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___isRefreshing) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___grManager) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintTimeLeft) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintTimeRight) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___handPrintCombineTestDelta) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___lastBroadcastHandTapTime) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor, ___broadcastHandTapDelay) == 0x1e8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactor) == 0x1f0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactor/<>c
class CORDL_TYPE GhostReactor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GhostReactor___c*  __9;

/// @brief Field <>9__75_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__75_0, put=setStaticF___9__75_0)) ::System::Predicate_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*  __9__75_0;

/// @brief Field <>9__78_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__78_0, put=setStaticF___9__78_0)) ::System::Comparison_1<::UnityW<::GlobalNamespace::VRRig>>*  __9__78_0;

static inline ::GlobalNamespace::GhostReactor___c* New_ctor() ;

/// @brief Method <Tick>b__75_0, addr 0x5847c70, size 0x1c, virtual false, abstract: false, final false
inline bool _Tick_b__75_0(::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*  e) ;

/// @brief Method <VRRigRefresh>b__78_0, addr 0x5847c8c, size 0x104, virtual false, abstract: false, final false
inline int32_t _VRRigRefresh_b__78_0(::GlobalNamespace::VRRig*  a, ::GlobalNamespace::VRRig*  b) ;

/// @brief Method .ctor, addr 0x5847c68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GhostReactor___c* getStaticF___9() ;

static inline ::System::Predicate_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>* getStaticF___9__75_0() ;

static inline ::System::Comparison_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF___9__78_0() ;

static inline void setStaticF___9(::GlobalNamespace::GhostReactor___c*  value) ;

static inline void setStaticF___9__75_0(::System::Predicate_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*  value) ;

static inline void setStaticF___9__78_0(::System::Comparison_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactor___c(GhostReactor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactor___c(GhostReactor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1805};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GhostReactor___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactor/EntityTypeRespawnTracker
class CORDL_TYPE GhostReactor_EntityTypeRespawnTracker : public ::System::Object {
public:
// Declarations
/// @brief Field entityCreateData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityCreateData, put=__cordl_internal_set_entityCreateData)) int64_t  entityCreateData;

/// @brief Field entityNextRespawnTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_entityNextRespawnTime, put=__cordl_internal_set_entityNextRespawnTime)) float_t  entityNextRespawnTime;

/// @brief Field entityTypeID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_entityTypeID, put=__cordl_internal_set_entityTypeID)) int32_t  entityTypeID;

static inline ::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker* New_ctor() ;

constexpr int64_t const& __cordl_internal_get_entityCreateData() const;

constexpr int64_t& __cordl_internal_get_entityCreateData() ;

constexpr float_t const& __cordl_internal_get_entityNextRespawnTime() const;

constexpr float_t& __cordl_internal_get_entityNextRespawnTime() ;

constexpr int32_t const& __cordl_internal_get_entityTypeID() const;

constexpr int32_t& __cordl_internal_get_entityTypeID() ;

constexpr void __cordl_internal_set_entityCreateData(int64_t  value) ;

constexpr void __cordl_internal_set_entityNextRespawnTime(float_t  value) ;

constexpr void __cordl_internal_set_entityTypeID(int32_t  value) ;

/// @brief Method .ctor, addr 0x5847824, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactor_EntityTypeRespawnTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactor_EntityTypeRespawnTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactor_EntityTypeRespawnTracker(GhostReactor_EntityTypeRespawnTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactor_EntityTypeRespawnTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactor_EntityTypeRespawnTracker(GhostReactor_EntityTypeRespawnTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1800};

/// @brief Field entityTypeID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___entityTypeID;

/// @brief Field entityCreateData, offset: 0x18, size: 0x8, def value: None
 int64_t  ___entityCreateData;

/// @brief Field entityNextRespawnTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___entityNextRespawnTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker, ___entityTypeID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker, ___entityCreateData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker, ___entityNextRespawnTime) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactor/TempEnemySpawnInfo
class CORDL_TYPE GhostReactor_TempEnemySpawnInfo : public ::System::Object {
public:
// Declarations
/// @brief Field patrolPath, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolPath, put=__cordl_internal_set_patrolPath)) int32_t  patrolPath;

/// @brief Field prefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::GlobalNamespace::GameEntity>  prefab;

/// @brief Field spawnMarker, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnMarker, put=__cordl_internal_set_spawnMarker)) ::UnityW<::UnityEngine::Transform>  spawnMarker;

static inline ::GlobalNamespace::GhostReactor_TempEnemySpawnInfo* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_patrolPath() const;

constexpr int32_t& __cordl_internal_get_patrolPath() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_prefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnMarker() ;

constexpr void __cordl_internal_set_patrolPath(int32_t  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_spawnMarker(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5847b74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactor_TempEnemySpawnInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactor_TempEnemySpawnInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactor_TempEnemySpawnInfo(GhostReactor_TempEnemySpawnInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactor_TempEnemySpawnInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactor_TempEnemySpawnInfo(GhostReactor_TempEnemySpawnInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1799};

/// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___prefab;

/// @brief Field spawnMarker, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnMarker;

/// @brief Field patrolPath, offset: 0x20, size: 0x4, def value: None
 int32_t  ___patrolPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactor_TempEnemySpawnInfo, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor_TempEnemySpawnInfo, ___spawnMarker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactor_TempEnemySpawnInfo, ___patrolPath) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactor_TempEnemySpawnInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
