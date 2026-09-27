#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_ZoneState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityManager)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
template<typename Titem,typename Tenum>
class CallLimitersList_2;
}
namespace GlobalNamespace {
class CustomMapsGameManager;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class GameAgentManager;
}
namespace GlobalNamespace {
struct GameEntityCreateData;
}
namespace GlobalNamespace {
struct GameEntityData;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
struct GameEntityManager_AttachmentData;
}
namespace GlobalNamespace {
class GameEntityManager_AuthorityChangeEvent;
}
namespace GlobalNamespace {
struct GameEntityManager_RPC;
}
namespace GlobalNamespace {
struct GameEntityManager_ScenePlacedRecord;
}
namespace GlobalNamespace {
class GameEntityManager_ZoneActiveChangeEvent;
}
namespace GlobalNamespace {
class GameEntityManager_ZoneClearEvent;
}
namespace GlobalNamespace {
class GameEntityManager_ZoneStartEvent;
}
namespace GlobalNamespace {
class GameEntityManager_ZoneStateData;
}
namespace GlobalNamespace {
struct GameEntityManager_ZoneStateRequest;
}
namespace GlobalNamespace {
struct GameEntityManager_ZoneState;
}
namespace GlobalNamespace {
class GameEntityManager___c__DisplayClass159_0;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
class GamePlayer;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class IGameEntityZoneComponent;
}
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
struct SnapJointType;
}
namespace GlobalNamespace {
class SuperInfectionManager;
}
namespace GlobalNamespace {
class VRRig;
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
namespace Photon::Pun {
struct RpcTarget;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
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
class GameEntityManager;
}
namespace GlobalNamespace {
class GameEntityManager_AuthorityChangeEvent;
}
namespace GlobalNamespace {
class GameEntityManager_ZoneActiveChangeEvent;
}
namespace GlobalNamespace {
class GameEntityManager_ZoneClearEvent;
}
namespace GlobalNamespace {
class GameEntityManager_ZoneStartEvent;
}
namespace GlobalNamespace {
class GameEntityManager_ZoneStateData;
}
namespace GlobalNamespace {
class GameEntityManager___c__DisplayClass159_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameEntityManager*);
MARK_REF_T(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*);
MARK_REF_T(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*);
MARK_REF_T(::GlobalNamespace::GameEntityManager_ZoneClearEvent*);
MARK_REF_T(::GlobalNamespace::GameEntityManager_ZoneStartEvent*);
MARK_REF_T(::GlobalNamespace::GameEntityManager_ZoneStateData*);
MARK_REF_T(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager*, "", "GameEntityManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*, "", "GameEntityManager/AuthorityChangeEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*, "", "GameEntityManager/ZoneActiveChangeEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_ZoneClearEvent*, "", "GameEntityManager/ZoneClearEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_ZoneStartEvent*, "", "GameEntityManager/ZoneStartEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager_ZoneStateData*, "", "GameEntityManager/ZoneStateData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0*, "", "GameEntityManager/<>c__DisplayClass159_0");
// [NetworkBehaviourWeaved(0)]
// Dependencies GTZone, NetworkComponent, Unity.Collections.NativeArray`1<T>, UnityEngine.Component, UnityEngine.MonoBehaviour, ZoneClearReason
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityManager
class CORDL_TYPE GameEntityManager : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using AttachmentData = ::GlobalNamespace::GameEntityManager_AttachmentData;

using AuthorityChangeEvent = ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent;

using RPC = ::GlobalNamespace::GameEntityManager_RPC;

using ScenePlacedRecord = ::GlobalNamespace::GameEntityManager_ScenePlacedRecord;

using ZoneActiveChangeEvent = ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent;

using ZoneClearEvent = ::GlobalNamespace::GameEntityManager_ZoneClearEvent;

using ZoneStartEvent = ::GlobalNamespace::GameEntityManager_ZoneStartEvent;

using ZoneState = ::GlobalNamespace::GameEntityManager_ZoneState;

using ZoneStateData = ::GlobalNamespace::GameEntityManager_ZoneStateData;

using ZoneStateRequest = ::GlobalNamespace::GameEntityManager_ZoneStateRequest;

using __c__DisplayClass159_0 = ::GlobalNamespace::GameEntityManager___c__DisplayClass159_0;

/// @brief Field OnAuthorityChanged, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAuthorityChanged, put=__cordl_internal_set_OnAuthorityChanged)) ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*  OnAuthorityChanged;

/// @brief Field OnEntityAdded, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEntityAdded, put=__cordl_internal_set_OnEntityAdded)) ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*  OnEntityAdded;

/// @brief Field OnEntityRemoved, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEntityRemoved, put=__cordl_internal_set_OnEntityRemoved)) ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*  OnEntityRemoved;

/// @brief Field OnZoneActiveChanged, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnZoneActiveChanged, put=__cordl_internal_set_OnZoneActiveChanged)) ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*  OnZoneActiveChanged;

 __declspec(property(get=get_PendingTableData, put=set_PendingTableData)) bool  PendingTableData;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <PendingTableData>k__BackingField, offset 0x1e9, size 0x1 
 __declspec(property(get=__cordl_internal_get__PendingTableData_k__BackingField, put=__cordl_internal_set__PendingTableData_k__BackingField)) bool  _PendingTableData_k__BackingField;

/// @brief Field <TickRunning>k__BackingField, offset 0x1e8, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field <activeManager>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeManager_k__BackingField, put=setStaticF__activeManager_k__BackingField)) ::UnityW<::GlobalNamespace::GameEntityManager>  _activeManager_k__BackingField;

/// @brief Field _collidersList, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get__collidersList, put=__cordl_internal_set__collidersList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  _collidersList;

/// @brief Field _lastUpdateZoneStateAuthLogSig, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateZoneStateAuthLogSig, put=__cordl_internal_set__lastUpdateZoneStateAuthLogSig)) int32_t  _lastUpdateZoneStateAuthLogSig;

/// @brief Field _leavingItemScratch, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get__leavingItemScratch, put=__cordl_internal_set__leavingItemScratch)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  _leavingItemScratch;

/// @brief Field allManagers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allManagers, put=setStaticF_allManagers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntityManager>>*  allManagers;

/// @brief Field boundsBoxCollider, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_boundsBoxCollider, put=__cordl_internal_set_boundsBoxCollider)) ::UnityW<::UnityEngine::BoxCollider>  boundsBoxCollider;

/// @brief Field cachedZoneSceneName, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedZoneSceneName, put=__cordl_internal_set_cachedZoneSceneName)) ::StringW  cachedZoneSceneName;

/// @brief Field createCooldown, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_createCooldown, put=__cordl_internal_set_createCooldown)) float_t  createCooldown;

/// @brief Field createDataForCreate, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_createDataForCreate, put=__cordl_internal_set_createDataForCreate)) ::System::Collections::Generic::List_1<int64_t>*  createDataForCreate;

/// @brief Field createdByEntityNetIdForCreate, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_createdByEntityNetIdForCreate, put=__cordl_internal_set_createdByEntityNetIdForCreate)) ::System::Collections::Generic::List_1<int32_t>*  createdByEntityNetIdForCreate;

/// @brief Field createdItemTypeCount, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_createdItemTypeCount, put=__cordl_internal_set_createdItemTypeCount)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  createdItemTypeCount;

/// @brief Field customMapsManager, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMapsManager, put=__cordl_internal_set_customMapsManager)) ::UnityW<::GlobalNamespace::CustomMapsGameManager>  customMapsManager;

/// @brief Field destroyCooldown, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroyCooldown, put=__cordl_internal_set_destroyCooldown)) float_t  destroyCooldown;

/// @brief Field entities, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_entities, put=__cordl_internal_set_entities)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  entities;

/// @brief Field entitiesActiveCount, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_entitiesActiveCount, put=__cordl_internal_set_entitiesActiveCount)) int32_t  entitiesActiveCount;

/// @brief Field entityTypeIdsForCreate, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityTypeIdsForCreate, put=__cordl_internal_set_entityTypeIdsForCreate)) ::System::Collections::Generic::List_1<int32_t>*  entityTypeIdsForCreate;

/// @brief Field gameAgentManager, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameAgentManager, put=__cordl_internal_set_gameAgentManager)) ::UnityW<::GlobalNamespace::GameAgentManager>  gameAgentManager;

/// @brief Field gameEntityData, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntityData, put=__cordl_internal_set_gameEntityData)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityData>*  gameEntityData;

/// @brief Field ghostReactorManager, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostReactorManager, put=__cordl_internal_set_ghostReactorManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  ghostReactorManager;

/// @brief Field guard, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_guard, put=__cordl_internal_set_guard)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  guard;

/// @brief Field itemPrefabFactory, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_itemPrefabFactory, put=__cordl_internal_set_itemPrefabFactory)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  itemPrefabFactory;

/// @brief Field lastCreateSent, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCreateSent, put=__cordl_internal_set_lastCreateSent)) float_t  lastCreateSent;

/// @brief Field lastDestroySent, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastDestroySent, put=__cordl_internal_set_lastDestroySent)) float_t  lastDestroySent;

/// @brief Field lastStateSent, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStateSent, put=__cordl_internal_set_lastStateSent)) float_t  lastStateSent;

/// @brief Field m_RpcSpamChecks, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RpcSpamChecks, put=__cordl_internal_set_m_RpcSpamChecks)) ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameEntityManager_RPC>*  m_RpcSpamChecks;

/// @brief Field managersByZone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_managersByZone, put=setStaticF_managersByZone)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GameEntityManager>>*  managersByZone;

/// @brief Field netIdToIndex, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_netIdToIndex, put=__cordl_internal_set_netIdToIndex)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  netIdToIndex;

/// @brief Field netIds, offset 0x1b0, size 0x10 
 __declspec(property(get=__cordl_internal_get_netIds, put=__cordl_internal_set_netIds)) ::Unity::Collections::NativeArray_1<int32_t>  netIds;

/// @brief Field netIdsForCreate, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_netIdsForCreate, put=__cordl_internal_set_netIdsForCreate)) ::System::Collections::Generic::List_1<int32_t>*  netIdsForCreate;

/// @brief Field netIdsForDelete, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_netIdsForDelete, put=__cordl_internal_set_netIdsForDelete)) ::System::Collections::Generic::List_1<int32_t>*  netIdsForDelete;

/// @brief Field netIdsForState, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_netIdsForState, put=__cordl_internal_set_netIdsForState)) ::System::Collections::Generic::List_1<int32_t>*  netIdsForState;

/// @brief Field nextNetId, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextNetId, put=__cordl_internal_set_nextNetId)) int32_t  nextNetId;

/// @brief Field onZoneClear, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_onZoneClear, put=__cordl_internal_set_onZoneClear)) ::GlobalNamespace::GameEntityManager_ZoneClearEvent*  onZoneClear;

/// @brief Field onZoneStart, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_onZoneStart, put=__cordl_internal_set_onZoneStart)) ::GlobalNamespace::GameEntityManager_ZoneStartEvent*  onZoneStart;

/// @brief Field packedPositionsForCreate, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_packedPositionsForCreate, put=__cordl_internal_set_packedPositionsForCreate)) ::System::Collections::Generic::List_1<int64_t>*  packedPositionsForCreate;

/// @brief Field packedRotationsForCreate, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_packedRotationsForCreate, put=__cordl_internal_set_packedRotationsForCreate)) ::System::Collections::Generic::List_1<int32_t>*  packedRotationsForCreate;

/// @brief Field pendingTableDataSetFrame, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_pendingTableDataSetFrame, put=__cordl_internal_set_pendingTableDataSetFrame)) int32_t  pendingTableDataSetFrame;

/// @brief Field photonView, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field playerZoneJoinTimes, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZoneJoinTimes, put=__cordl_internal_set_playerZoneJoinTimes)) ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  playerZoneJoinTimes;

/// @brief Field prevAuthorityPlayer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevAuthorityPlayer, put=__cordl_internal_set_prevAuthorityPlayer)) ::Photon::Realtime::Player*  prevAuthorityPlayer;

/// @brief Field priceLookupByEntityId, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_priceLookupByEntityId, put=__cordl_internal_set_priceLookupByEntityId)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  priceLookupByEntityId;

/// @brief Field s_scenePlacedEntities, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_scenePlacedEntities, put=setStaticF_s_scenePlacedEntities)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>*  s_scenePlacedEntities;

/// @brief Field s_scenePlacedHomeScenes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_scenePlacedHomeScenes, put=setStaticF_s_scenePlacedHomeScenes)) ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  s_scenePlacedHomeScenes;

/// @brief Field scenePlacedBoundsCheckTimer, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_scenePlacedBoundsCheckTimer, put=__cordl_internal_set_scenePlacedBoundsCheckTimer)) float_t  scenePlacedBoundsCheckTimer;

/// @brief Field scenePlacedEntities, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_scenePlacedEntities, put=__cordl_internal_set_scenePlacedEntities)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>*  scenePlacedEntities;

/// @brief Field scenePlacedEntitiesRegistered, offset 0x210, size 0x1 
 __declspec(property(get=__cordl_internal_get_scenePlacedEntitiesRegistered, put=__cordl_internal_set_scenePlacedEntitiesRegistered)) bool  scenePlacedEntitiesRegistered;

/// @brief Field stateCooldown, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_stateCooldown, put=__cordl_internal_set_stateCooldown)) float_t  stateCooldown;

/// @brief Field statesForState, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_statesForState, put=__cordl_internal_set_statesForState)) ::System::Collections::Generic::List_1<int64_t>*  statesForState;

/// @brief Field superInfectionManager, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_superInfectionManager, put=__cordl_internal_set_superInfectionManager)) ::UnityW<::GlobalNamespace::SuperInfectionManager>  superInfectionManager;

/// @brief Field tempAttachments, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempAttachments, put=setStaticF_tempAttachments)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_AttachmentData>*  tempAttachments;

/// @brief Field tempEntities, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempEntities, put=__cordl_internal_set_tempEntities)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  tempEntities;

/// @brief Field tempEntitiesToSerialize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempEntitiesToSerialize, put=setStaticF_tempEntitiesToSerialize)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  tempEntitiesToSerialize;

/// @brief Field tempFactoryItems, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempFactoryItems, put=__cordl_internal_set_tempFactoryItems)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  tempFactoryItems;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field tempSerializeGameState, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempSerializeGameState, put=__cordl_internal_set_tempSerializeGameState)) ::ArrayW<uint8_t>  tempSerializeGameState;

/// @brief Field useRandomCheckForAuthority, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRandomCheckForAuthority, put=__cordl_internal_set_useRandomCheckForAuthority)) bool  useRandomCheckForAuthority;

/// @brief Field zone, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Field zoneClearReason, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneClearReason, put=__cordl_internal_set_zoneClearReason)) ::GlobalNamespace::ZoneClearReason  zoneClearReason;

/// @brief Field zoneComponents, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneComponents, put=__cordl_internal_set_zoneComponents)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityZoneComponent*>*  zoneComponents;

/// @brief Field zoneStateData, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneStateData, put=__cordl_internal_set_zoneStateData)) ::GlobalNamespace::GameEntityManager_ZoneStateData*  zoneStateData;

/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr operator  ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AddGameEntity, addr 0x581b12c, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId AddGameEntity(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method AddGameEntity, addr 0x5818840, size 0x4f8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId AddGameEntity(int32_t  netId, ::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method AddToFactory, addr 0x581c954, size 0x354, virtual false, abstract: false, final false
inline void AddToFactory(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*  items) ;

/// [PunRPC]
/// @brief Method ApplyHitRPC, addr 0x582a2e0, size 0x4e8, virtual false, abstract: false, final false
inline void ApplyHitRPC(int32_t  hittableNetId, int32_t  hitByNetId, int32_t  hitTypeId, ::UnityEngine::Vector3  entityPosition, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, int32_t  hittablePoint, ::Photon::Realtime::Player*  player, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method ApplyStateRPC, addr 0x5821960, size 0x1ac, virtual false, abstract: false, final false
inline void ApplyStateRPC(::ArrayW<int32_t>  netId, ::ArrayW<int64_t>  newState, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method AttachEntityLocal, addr 0x5828260, size 0x3cc, virtual false, abstract: false, final false
inline void AttachEntityLocal(::GlobalNamespace::GameEntityId  gameEntityId, ::GlobalNamespace::GameEntityId  attachToEntityId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method AttachEntityOnCreate, addr 0x58297f8, size 0xc, virtual false, abstract: false, final false
inline void AttachEntityOnCreate(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, int32_t  jointType, ::GlobalNamespace::NetPlayer*  grabbedByPlayer) ;

/// [PunRPC]
/// @brief Method AttachEntityRPC, addr 0x5829168, size 0x298, virtual false, abstract: false, final false
inline void AttachEntityRPC(int32_t  entityNetId, int32_t  attachToEntityNetId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::Photon::Realtime::Player*  attachedByPlayer, double_t  snapTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Awake, addr 0x5816874, size 0x8bc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildFactory, addr 0x5817130, size 0xb50, virtual false, abstract: false, final false
inline void BuildFactory() ;

/// @brief Method ClearByteBuffer, addr 0x581e014, size 0x48, virtual false, abstract: false, final false
static inline void ClearByteBuffer(::ArrayW<uint8_t>  buffer) ;

/// @brief Method ClearPendingRPCBatches, addr 0x581ad00, size 0xfc, virtual false, abstract: false, final false
inline void ClearPendingRPCBatches() ;

/// @brief Method ClearZone, addr 0x582a8cc, size 0xc24, virtual false, abstract: false, final false
inline void ClearZone(bool  ignoreHeldGadgets) ;

/// @brief Method ComputeNetIdFromHierarchyForCustomMaps, addr 0x5818500, size 0x16c, virtual false, abstract: false, final false
static inline int32_t ComputeNetIdFromHierarchyForCustomMaps(::UnityEngine::Transform*  t) ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5831658, size 0x8, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5831660, size 0xb8c, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method CreateAndInitItemLocal, addr 0x581d4cc, size 0x148, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId CreateAndInitItemLocal(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId) ;

/// @brief Method CreateItemLocal, addr 0x58205ac, size 0x248, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntity> CreateItemLocal(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// [PunRPC]
/// @brief Method CreateItemRPC, addr 0x581d614, size 0x450, virtual false, abstract: false, final false
inline void CreateItemRPC(::ArrayW<int32_t>  netId, ::ArrayW<int32_t>  entityTypeId, ::ArrayW<int64_t>  packedPos, ::ArrayW<int32_t>  packedRot, ::ArrayW<int64_t>  createData, ::ArrayW<int32_t>  createdByEntityNetId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method CreateItemsRPC, addr 0x581e05c, size 0x964, virtual false, abstract: false, final false
inline void CreateItemsRPC(int32_t  zoneId, ::ArrayW<uint8_t>  stateData, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method CreateNetId, addr 0x581b194, size 0x14, virtual false, abstract: false, final false
inline int32_t CreateNetId(int32_t  numToCreate) ;

/// @brief Method DebugSendState, addr 0x582f790, size 0x8, virtual false, abstract: false, final false
inline void DebugSendState() ;

/// @brief Method DeserializeTableState, addr 0x582c220, size 0x1348, virtual false, abstract: false, final false
inline void DeserializeTableState(::ArrayW<uint8_t>  bytes, int32_t  numBytes) ;

/// @brief Method DestroyItemLocal, addr 0x581b22c, size 0x260, virtual false, abstract: false, final false
inline void DestroyItemLocal(::GlobalNamespace::GameEntityId  entityId) ;

/// [PunRPC]
/// @brief Method DestroyItemRPC, addr 0x5820da0, size 0x150, virtual false, abstract: false, final false
inline void DestroyItemRPC(::ArrayW<int32_t>  entityNetId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method DetachScenePlacedFromRig, addr 0x58193dc, size 0x104, virtual false, abstract: false, final false
static inline void DetachScenePlacedFromRig(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method DrawDebugStar, addr 0x58245a8, size 0xec, virtual false, abstract: false, final false
inline void DrawDebugStar(::UnityEngine::Vector3  position, float_t  radius) ;

/// @brief Method EnsureScenePlacedRecord, addr 0x581866c, size 0x1d4, virtual false, abstract: false, final false
inline void EnsureScenePlacedRecord(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method FactoryEntityById, addr 0x58203a4, size 0x9c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntity> FactoryEntityById(int32_t  entityTypeId) ;

/// @brief Method FactoryGetBuiltInEntityCountById, addr 0x581d420, size 0xac, virtual false, abstract: false, final false
inline int32_t FactoryGetBuiltInEntityCountById(int32_t  entityTypeId) ;

/// @brief Method FactoryHasEntity, addr 0x581da7c, size 0x70, virtual false, abstract: false, final false
inline bool FactoryHasEntity(int32_t  entityTypeId) ;

/// @brief Method FactoryPrefabById, addr 0x581c608, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> FactoryPrefabById(int32_t  entityTypeId) ;

/// @brief Method FindNewEntityIndex, addr 0x581b48c, size 0x150, virtual false, abstract: false, final false
inline int32_t FindNewEntityIndex() ;

/// @brief Method FindOpenIndex, addr 0x581b684, size 0x34, virtual false, abstract: false, final false
inline int32_t FindOpenIndex() ;

/// @brief Method GetAuthorityPlayer, addr 0x581b930, size 0x24, virtual false, abstract: false, final false
inline ::Photon::Realtime::Player* GetAuthorityPlayer() ;

/// @brief Method GetBoundsThicknessAlongDirection, addr 0x5823e84, size 0x10c, virtual false, abstract: false, final false
static inline float_t GetBoundsThicknessAlongDirection(::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  localDirection) ;

/// @brief Method GetEntitiesWithComponentInRadius, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool GetEntitiesWithComponentInRadius(::UnityEngine::Vector3  center, float_t  radius, bool  checkRootOnly, ::System::Collections::Generic::List_1<T>*  nearbyEntities) ;

/// @brief Method GetEntityIdFromNetId, addr 0x581b6b8, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId GetEntityIdFromNetId(int32_t  netId) ;

/// @brief Method GetGameComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T GetGameComponent(::GlobalNamespace::GameEntityId  id) ;

/// @brief Method GetGameEntities, addr 0x581b5dc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* GetGameEntities() ;

/// @brief Method GetGameEntity, addr 0x581c184, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntity> GetGameEntity(::GlobalNamespace::GameEntityId  id) ;

/// @brief Method GetGameEntity, addr 0x581b1a8, size 0x84, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntity> GetGameEntity(int32_t  index) ;

/// @brief Method GetGameEntityFromNetId, addr 0x581c204, size 0x84, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntity> GetGameEntityFromNetId(int32_t  netId) ;

/// @brief Method GetManagerForZone, addr 0x581a1ac, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GameEntityManager> GetManagerForZone(::GlobalNamespace::GTZone  zone) ;

/// @brief Method GetNetIdFromEntityId, addr 0x581b75c, size 0x24, virtual false, abstract: false, final false
inline int32_t GetNetIdFromEntityId(::GlobalNamespace::GameEntityId  id) ;

/// @brief Method GetParentEntity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::MonoBehaviour*>)
inline T GetParentEntity(::UnityEngine::Transform*  transform) ;

/// @brief Method GetZoneSceneName, addr 0x5817d90, size 0x124, virtual false, abstract: false, final false
inline ::StringW GetZoneSceneName() ;

/// @brief Method GrabEntityLocal, addr 0x5821e08, size 0x608, virtual false, abstract: false, final false
inline void GrabEntityLocal(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer) ;

/// @brief Method GrabEntityOnCreate, addr 0x5823060, size 0x154, virtual false, abstract: false, final false
inline void GrabEntityOnCreate(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer) ;

/// [PunRPC]
/// @brief Method GrabEntityRPC, addr 0x5822cc0, size 0x3a0, virtual false, abstract: false, final false
inline void GrabEntityRPC(int32_t  entityNetId, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Realtime::Player*  grabbedByPlayer, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method HasAnyScenePlacedInScene, addr 0x582f330, size 0xc0, virtual false, abstract: false, final false
static inline bool HasAnyScenePlacedInScene(::StringW  sceneName) ;

/// @brief Method HasAuthority, addr 0x581b918, size 0x18, virtual false, abstract: false, final false
inline bool HasAuthority() ;

/// @brief Method InitItemLocal, addr 0x58207f4, size 0x130, virtual false, abstract: false, final false
inline void InitItemLocal(::GlobalNamespace::GameEntity*  entity, int64_t  createData, int32_t  createdByEntityNetId) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method InitSceneUnloadHandler, addr 0x5830850, size 0xa0, virtual false, abstract: false, final false
static inline void InitSceneUnloadHandler() ;

/// @brief Method IsAuthority, addr 0x581b780, size 0x94, virtual true, abstract: false, final false
inline bool IsAuthority() ;

/// @brief Method IsAuthorityPlayer, addr 0x581b814, size 0x30, virtual false, abstract: false, final false
inline bool IsAuthorityPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method IsAuthorityPlayer, addr 0x581b844, size 0xc4, virtual false, abstract: false, final false
inline bool IsAuthorityPlayer(::Photon::Realtime::Player*  player) ;

/// @brief Method IsEntityNearEntity, addr 0x5829084, size 0xe4, virtual false, abstract: false, final false
inline bool IsEntityNearEntity(int32_t  entityNetId, int32_t  otherEntityNetId, float_t  acceptableRadius) ;

/// @brief Method IsEntityNearPosition, addr 0x582a7c8, size 0x104, virtual false, abstract: false, final false
inline bool IsEntityNearPosition(int32_t  entityNetId, ::UnityEngine::Vector3  position, float_t  acceptableRadius) ;

/// @brief Method IsEntityValidToMigrate, addr 0x581c680, size 0x2d4, virtual false, abstract: false, final false
inline bool IsEntityValidToMigrate(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method IsInZone, addr 0x582f3f0, size 0x3a0, virtual true, abstract: false, final false
inline bool IsInZone() ;

/// @brief Method IsPlayerHandNearEntity, addr 0x5822954, size 0x144, virtual false, abstract: false, final false
inline bool IsPlayerHandNearEntity(::GlobalNamespace::GamePlayer*  player, int32_t  entityNetId, bool  isLeftHand, bool  checkBothHands, float_t  acceptableRadius) ;

/// @brief Method IsPlayerHandNearPosition, addr 0x582652c, size 0x178, virtual false, abstract: false, final false
static inline bool IsPlayerHandNearPosition(::GlobalNamespace::GamePlayer*  player, ::UnityEngine::Vector3  worldPosition, bool  isLeftHand, bool  checkBothHands, float_t  acceptableRadius) ;

/// @brief Method IsPositionInManagerBounds, addr 0x581bb80, size 0x1b0, virtual true, abstract: false, final false
inline bool IsPositionInManagerBounds(::UnityEngine::Vector3  pos) ;

/// @brief Method IsScenePlacedNetId, addr 0x581da64, size 0x18, virtual false, abstract: false, final false
static inline bool IsScenePlacedNetId(int32_t  netId) ;

/// @brief Method IsSuppressZonesInVStumpEnabled, addr 0x581badc, size 0xa4, virtual false, abstract: false, final false
static inline bool IsSuppressZonesInVStumpEnabled() ;

/// @brief Method IsThinAlongDirection, addr 0x5823da0, size 0xe4, virtual false, abstract: false, final false
static inline bool IsThinAlongDirection(::UnityEngine::Transform*  transform, ::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  direction, float_t  thinThreshold) ;

/// @brief Method IsValidAuthorityRPC, addr 0x581bf2c, size 0xb8, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender) ;

/// @brief Method IsValidAuthorityRPC, addr 0x581bfe4, size 0x3c, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId) ;

/// @brief Method IsValidAuthorityRPC, addr 0x581c020, size 0x84, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidAuthorityRPC, addr 0x581c0a4, size 0x64, virtual false, abstract: false, final false
inline bool IsValidAuthorityRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidClientRPC, addr 0x581bd30, size 0xb4, virtual true, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender) ;

/// @brief Method IsValidClientRPC, addr 0x581bde4, size 0x48, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId) ;

/// @brief Method IsValidClientRPC, addr 0x581be2c, size 0x90, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender, int32_t  entityNetId, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidClientRPC, addr 0x581bebc, size 0x70, virtual false, abstract: false, final false
inline bool IsValidClientRPC(::Photon::Realtime::Player*  sender, ::UnityEngine::Vector3  pos) ;

/// @brief Method IsValidEntity, addr 0x581c108, size 0x7c, virtual false, abstract: false, final false
inline bool IsValidEntity(::GlobalNamespace::GameEntityId  id) ;

/// @brief Method IsValidNetId, addr 0x581b5e4, size 0xa0, virtual false, abstract: false, final false
inline bool IsValidNetId(int32_t  netId) ;

/// @brief Method IsZoneActive, addr 0x581b954, size 0x188, virtual true, abstract: false, final false
inline bool IsZoneActive() ;

/// @brief Method IsZoneAuthority, addr 0x581b908, size 0x10, virtual false, abstract: false, final false
inline bool IsZoneAuthority() ;

/// @brief Method JoinWithItems, addr 0x581f10c, size 0x61c, virtual false, abstract: false, final false
inline void JoinWithItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  entities) ;

/// [PunRPC]
/// @brief Method JoinWithItemsRPC, addr 0x581fed8, size 0x38c, virtual false, abstract: false, final false
inline void JoinWithItemsRPC(::ArrayW<uint8_t>  stateData, ::ArrayW<int32_t>  netIds, int32_t  joiningActorNum, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method LocalValidateMigrationRecoveryItem, addr 0x581c288, size 0x380, virtual false, abstract: false, final false
inline bool LocalValidateMigrationRecoveryItem(int32_t  entityTypeId, ::by_ref<int64_t>  createData) ;

/// @brief Method LogGrabDiagnostics, addr 0x5824694, size 0x1e8, virtual false, abstract: false, final false
inline void LogGrabDiagnostics(::UnityEngine::Vector3  handPosition, bool  isLeftHand, int32_t  handIndex) ;

/// @brief Method MoveScenePlacedToHomeScene, addr 0x58194e0, size 0x1d4, virtual false, abstract: false, final false
static inline void MoveScenePlacedToHomeScene(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method NetIdFromXSceneRefId, addr 0x58184f0, size 0x10, virtual false, abstract: false, final false
static inline int32_t NetIdFromXSceneRefId(int32_t  uniqueId) ;

static inline ::GlobalNamespace::GameEntityManager* New_ctor() ;

/// @brief Method NotifyManagersOfLateScenePlacedEntity, addr 0x5830cd8, size 0x200, virtual false, abstract: false, final false
static inline void NotifyManagersOfLateScenePlacedEntity(::GlobalNamespace::GameEntity*  entity, ::StringW  sceneName) ;

/// @brief Method OnDestroy, addr 0x5819fac, size 0x200, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5819c24, size 0x388, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58196b4, size 0x38c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMasterClientAssistedTakeoverRequest, addr 0x5830844, size 0x8, virtual true, abstract: false, final true
inline bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method OnMyCreatorLeft, addr 0x583084c, size 0x4, virtual true, abstract: false, final true
inline void OnMyCreatorLeft() ;

/// @brief Method OnMyOwnerLeft, addr 0x5830840, size 0x4, virtual true, abstract: false, final true
inline void OnMyOwnerLeft() ;

/// @brief Method OnNetworkJoinedRoom, addr 0x582fab0, size 0x20, virtual false, abstract: false, final false
inline void OnNetworkJoinedRoom() ;

/// @brief Method OnNetworkLeftRoom, addr 0x582fad0, size 0x1bc, virtual false, abstract: false, final false
inline void OnNetworkLeftRoom() ;

/// @brief Method OnNetworkPlayerLeft, addr 0x582fc8c, size 0x1cc, virtual false, abstract: false, final false
inline void OnNetworkPlayerLeft(::GlobalNamespace::NetPlayer*  leavingPlayer) ;

/// @brief Method OnOwnershipRequest, addr 0x5830838, size 0x8, virtual true, abstract: false, final true
inline bool OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnOwnershipTransferred, addr 0x5830304, size 0x534, virtual true, abstract: false, final true
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnRigDeactivated, addr 0x582fe58, size 0x4ac, virtual false, abstract: false, final false
inline void OnRigDeactivated(::GlobalNamespace::RigContainer*  container) ;

/// @brief Method OnZoneSceneUnloaded, addr 0x58308f0, size 0x1c8, virtual false, abstract: false, final false
static inline void OnZoneSceneUnloaded(::UnityEngine::SceneManagement::Scene  scene) ;

/// [PunRPC]
/// @brief Method PlayerLeftZoneRPC, addr 0x581f728, size 0x678, virtual false, abstract: false, final false
inline void PlayerLeftZoneRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PriceLookup, addr 0x5820440, size 0x7c, virtual false, abstract: false, final false
inline bool PriceLookup(int32_t  entityTypeId, ::by_ref<int32_t>  price) ;

/// @brief Method ReadDataFusion, addr 0x582f954, size 0x4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x582fa04, size 0xac, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RecalculateNextNetId, addr 0x581cca8, size 0x118, virtual false, abstract: false, final false
inline void RecalculateNextNetId() ;

/// @brief Method RefreshRigList, addr 0x5819a40, size 0x1e4, virtual false, abstract: false, final false
inline void RefreshRigList() ;

/// @brief Method RegisterScenePlacedEntities, addr 0x5817c80, size 0x110, virtual false, abstract: false, final false
inline void RegisterScenePlacedEntities() ;

/// @brief Method RegisterScenePlacedEntity, addr 0x5830ab8, size 0x220, virtual false, abstract: false, final false
static inline void RegisterScenePlacedEntity(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method RegisterSingleScenePlacedEntity, addr 0x5817eb4, size 0x63c, virtual false, abstract: false, final false
inline void RegisterSingleScenePlacedEntity(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method ReleaseScenePlacedHold, addr 0x581919c, size 0x240, virtual false, abstract: false, final false
inline void ReleaseScenePlacedHold(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method RemoveGameEntity, addr 0x5818d38, size 0x1d4, virtual false, abstract: false, final false
inline void RemoveGameEntity(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method RequestAttachEntity, addr 0x5827edc, size 0x384, virtual false, abstract: false, final false
inline void RequestAttachEntity(::GlobalNamespace::GameEntityId  entityId, ::GlobalNamespace::GameEntityId  attachToEntityId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method RequestAttachEntityAuthority, addr 0x582862c, size 0x3b4, virtual false, abstract: false, final false
inline void RequestAttachEntityAuthority(::GlobalNamespace::GameEntityId  entityId, ::GlobalNamespace::GameEntityId  attachToEntityId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// [PunRPC]
/// @brief Method RequestAttachEntityRPC, addr 0x58289e0, size 0x6a4, virtual false, abstract: false, final false
inline void RequestAttachEntityRPC(int32_t  entityNetId, int32_t  attachToEntityNetId, int32_t  slotId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestCreateItem, addr 0x581cdc0, size 0xd0, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId RequestCreateItem(int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData) ;

/// @brief Method RequestCreateItem, addr 0x581ce90, size 0x590, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId RequestCreateItem(int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, ::GlobalNamespace::GameEntityId  createdByEntityId) ;

/// @brief Method RequestCreateItems, addr 0x581daec, size 0x528, virtual false, abstract: false, final false
inline void RequestCreateItems(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  entityData) ;

/// @brief Method RequestDestroyItem, addr 0x5820924, size 0x200, virtual false, abstract: false, final false
inline void RequestDestroyItem(::GlobalNamespace::GameEntityId  entityId) ;

/// @brief Method RequestDestroyItems, addr 0x5820b24, size 0x27c, virtual false, abstract: false, final false
inline void RequestDestroyItems(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  entityIds) ;

/// @brief Method RequestGrabEntity, addr 0x5821b0c, size 0x2fc, virtual false, abstract: false, final false
inline void RequestGrabEntity(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// [PunRPC]
/// @brief Method RequestGrabEntityRPC, addr 0x5822410, size 0x544, virtual false, abstract: false, final false
inline void RequestGrabEntityRPC(int32_t  entityNetId, bool  isLeftHand, int64_t  packedPosRot, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestHit, addr 0x5829804, size 0x430, virtual false, abstract: false, final false
inline void RequestHit(::GlobalNamespace::GameHitData  hit) ;

/// [PunRPC]
/// @brief Method RequestHitRPC, addr 0x5829c34, size 0x6ac, virtual false, abstract: false, final false
inline void RequestHitRPC(int32_t  hittableNetId, int32_t  hitByNetId, int32_t  hitTypeId, ::UnityEngine::Vector3  entityPosition, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, int32_t  hittablePoint, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestMigrationRecovery, addr 0x581e9c0, size 0x5e4, virtual false, abstract: false, final false
inline void RequestMigrationRecovery(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  entityData) ;

/// @brief Method RequestSnapEntity, addr 0x5826a90, size 0x3d8, virtual false, abstract: false, final false
inline void RequestSnapEntity(::GlobalNamespace::GameEntityId  entityId, bool  isLeftHand, ::GlobalNamespace::SnapJointType  jointType) ;

/// [PunRPC]
/// @brief Method RequestSnapEntityRPC, addr 0x5827468, size 0x57c, virtual false, abstract: false, final false
inline void RequestSnapEntityRPC(int32_t  entityNetId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  jointType, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestState, addr 0x5820ef0, size 0x1bc, virtual false, abstract: false, final false
inline void RequestState(::GlobalNamespace::GameEntityId  entityId, int64_t  newState) ;

/// @brief Method RequestStateAuthority, addr 0x58210ac, size 0x1f8, virtual false, abstract: false, final false
inline void RequestStateAuthority(::GlobalNamespace::GameEntityId  entityId, int64_t  newState) ;

/// [PunRPC]
/// @brief Method RequestStateRPC, addr 0x58212a4, size 0x6bc, virtual false, abstract: false, final false
inline void RequestStateRPC(int32_t  entityNetId, int64_t  newState, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RequestThrowEntity, addr 0x5824d4c, size 0xa10, virtual false, abstract: false, final false
inline void RequestThrowEntity(::GlobalNamespace::GameEntityId  entityId, bool  isLeftHand, ::UnityEngine::Vector3  headPosition, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity) ;

/// [PunRPC]
/// @brief Method RequestThrowEntityRPC, addr 0x5825e28, size 0x704, virtual false, abstract: false, final false
inline void RequestThrowEntityRPC(int32_t  entityNetId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [PunRPC]
/// @brief Method RequestZoneStateRPC, addr 0x582f798, size 0x1b8, virtual false, abstract: false, final false
inline void RequestZoneStateRPC(int32_t  zoneId, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ResetScenePlacedTransform, addr 0x5818f0c, size 0x290, virtual false, abstract: false, final false
static inline void ResetScenePlacedTransform(::GlobalNamespace::GameEntity*  entity, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>  record) ;

/// @brief Method ResolveTableData, addr 0x581adfc, size 0x330, virtual false, abstract: false, final false
inline void ResolveTableData() ;

/// @brief Method SegmentHitsBounds, addr 0x582435c, size 0x24c, virtual false, abstract: false, final false
static inline bool SegmentHitsBounds(::UnityEngine::Bounds  bounds, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<float_t>  distance) ;

/// [PunRPC]
/// @brief Method SendTableDataRPC, addr 0x582e748, size 0x1d4, virtual false, abstract: false, final false
inline void SendTableDataRPC(int32_t  packetNum, int32_t  totalBytes, ::ArrayW<uint8_t>  bytes, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SendZoneStateToPlayerOrTarget, addr 0x582e1a4, size 0x38c, virtual false, abstract: false, final false
inline void SendZoneStateToPlayerOrTarget(::GlobalNamespace::GTZone  zone, ::Photon::Realtime::Player*  player, ::Photon::Pun::RpcTarget  target) ;

/// @brief Method SerializeGameState, addr 0x582b4f0, size 0xd30, virtual false, abstract: false, final false
inline int32_t SerializeGameState(int32_t  zoneId, ::ArrayW<uint8_t>  bytes, int32_t  maxBytes) ;

/// @brief Method SetZoneState, addr 0x582e91c, size 0x8fc, virtual false, abstract: false, final false
inline void SetZoneState(::GlobalNamespace::GameEntityManager_ZoneState  newState) ;

/// @brief Method ShouldClearZone, addr 0x582f218, size 0x118, virtual false, abstract: false, final false
inline bool ShouldClearZone() ;

/// @brief Method SnapEntityLocal, addr 0x5826e68, size 0x600, virtual false, abstract: false, final false
inline void SnapEntityLocal(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  jointType, ::GlobalNamespace::NetPlayer*  snappedByPlayer) ;

/// @brief Method SnapEntityOnCreate, addr 0x5827d50, size 0xc, virtual false, abstract: false, final false
inline void SnapEntityOnCreate(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, int32_t  jointType, ::GlobalNamespace::NetPlayer*  grabbedByPlayer) ;

/// [PunRPC]
/// @brief Method SnapEntityRPC, addr 0x58279e4, size 0x36c, virtual false, abstract: false, final false
inline void SnapEntityRPC(int32_t  entityNetId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  jointType, ::Photon::Realtime::Player*  thrownByPlayer, double_t  snapTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method TestSerializeTableState, addr 0x582e530, size 0x218, virtual false, abstract: false, final false
inline void TestSerializeTableState() ;

/// @brief Method ThrowEntityLocal, addr 0x582575c, size 0x6cc, virtual false, abstract: false, final false
inline void ThrowEntityLocal(::GlobalNamespace::GameEntityId  entityId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  thrownByPlayer) ;

/// [PunRPC]
/// @brief Method ThrowEntityRPC, addr 0x58266a4, size 0x3ec, virtual false, abstract: false, final false
inline void ThrowEntityRPC(int32_t  entityNetId, bool  isLeftHand, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  thrownByPlayer, double_t  throwTime, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method Tick, addr 0x581a2c8, size 0x8ec, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TryDetachCompletely, addr 0x5829624, size 0xb4, virtual false, abstract: false, final false
static inline void TryDetachCompletely(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method TryDetachLocal, addr 0x5829400, size 0x224, virtual false, abstract: false, final false
static inline void TryDetachLocal(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method TryGetScenePlacedRecord, addr 0x581fda0, size 0x138, virtual false, abstract: false, final false
inline bool TryGetScenePlacedRecord(::GlobalNamespace::GameEntity*  entity, ::by_ref<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>  record) ;

/// @brief Method TryGrabLocal, addr 0x58231b4, size 0xbec, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId TryGrabLocal(::UnityEngine::Vector3  handPosition, ::UnityEngine::Vector3  fingerPosition, bool  isLeftHand, ::by_ref<::UnityEngine::Vector3>  closestPointOnBoundingBox, ::by_ref<bool>  fingerPositionUsed) ;

/// @brief Method TryRemoveFromHandLocal, addr 0x58296d8, size 0x120, virtual false, abstract: false, final false
static inline void TryRemoveFromHandLocal(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method TryUnsnapLocal, addr 0x5827d5c, size 0x180, virtual false, abstract: false, final false
static inline void TryUnsnapLocal(::GlobalNamespace::GameEntity*  gameEntity) ;

/// @brief Method UnregisterScenePlacedEntity, addr 0x5830ed8, size 0x23c, virtual false, abstract: false, final false
static inline void UnregisterScenePlacedEntity(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method UpdateAuthority, addr 0x582d568, size 0x458, virtual false, abstract: false, final false
inline void UpdateAuthority(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  allRigs) ;

/// @brief Method UpdateClientsFromAuthority, addr 0x582d9c0, size 0x15c, virtual false, abstract: false, final false
inline void UpdateClientsFromAuthority(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  allRigs) ;

/// @brief Method UpdateZoneState, addr 0x581abb4, size 0x14c, virtual false, abstract: false, final false
inline void UpdateZoneState() ;

/// @brief Method UpdateZoneStateAuthority, addr 0x582db1c, size 0x348, virtual false, abstract: false, final false
inline void UpdateZoneStateAuthority() ;

/// @brief Method UpdateZoneStateClient, addr 0x582de64, size 0x340, virtual false, abstract: false, final false
inline void UpdateZoneStateClient() ;

/// @brief Method ValidateDataType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool ValidateDataType(::System::Object*  obj, ::by_ref<T>  dataAsType) ;

/// @brief Method ValidateGrab, addr 0x5822a98, size 0x228, virtual false, abstract: false, final false
inline bool ValidateGrab(::GlobalNamespace::GameEntity*  gameEntity, int32_t  playerActorNumber, bool  isLeftHand) ;

/// @brief Method ValidateThatNetIdIsNotAlreadyUsed, addr 0x58204bc, size 0xf0, virtual false, abstract: false, final false
inline void ValidateThatNetIdIsNotAlreadyUsed(int32_t  netId, int32_t  newTypeId) ;

/// @brief Method WhyGrabRejected, addr 0x582487c, size 0x4d0, virtual false, abstract: false, final false
inline ::StringW WhyGrabRejected(::GlobalNamespace::GameEntity*  gameEntity, int32_t  playerActorNumber, bool  isLeftHand) ;

/// @brief Method WriteDataFusion, addr 0x582f950, size 0x4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x582f958, size 0xac, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method _JoinWithItems_ReadOne, addr 0x5820264, size 0x140, virtual false, abstract: false, final false
static inline void _JoinWithItems_ReadOne(::System::IO::BinaryReader*  reader, ::by_ref<int32_t>  entityTypeId, ::by_ref<::UnityEngine::Vector3>  localPos, ::by_ref<::UnityEngine::Quaternion>  localRot, ::by_ref<int64_t>  createData, ::by_ref<int32_t>  createdByEntityNetId, ::by_ref<int32_t>  slotIndex) ;

/// @brief Method _JoinWithItems_WriteOne, addr 0x581efa4, size 0x168, virtual false, abstract: false, final false
static inline void _JoinWithItems_WriteOne(::System::IO::BinaryWriter*  writer, int32_t  typeId, ::UnityEngine::Vector3  localPos, ::UnityEngine::Quaternion  localRot, int64_t  createData, int32_t  createdByEntityId, int32_t  slotIndex) ;

/// @brief Method _TryGrabLocal_TestBounds, addr 0x5823f90, size 0x3cc, virtual false, abstract: false, final false
static inline void _TryGrabLocal_TestBounds(::UnityEngine::Vector3  handPosition, ::UnityEngine::Transform*  t, ::UnityEngine::Vector3  slopProjection, ::UnityEngine::Bounds  bounds, float_t  slopForSpeed, float_t  maxAdjustedGrabDistance, ::GlobalNamespace::GameEntity*  entity, bool  isTestingAltPosition, ::by_ref<float_t>  bestDist, ::by_ref<::GlobalNamespace::GameEntity*>  bestEntity, ::by_ref<::UnityEngine::Vector3>  closestPoint, ::by_ref<bool>  usedAltPosition) ;

constexpr ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent* const& __cordl_internal_get_OnAuthorityChanged() const;

constexpr ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*& __cordl_internal_get_OnAuthorityChanged() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_OnEntityAdded() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_OnEntityAdded() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_OnEntityRemoved() const;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_OnEntityRemoved() ;

constexpr ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent* const& __cordl_internal_get_OnZoneActiveChanged() const;

constexpr ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*& __cordl_internal_get_OnZoneActiveChanged() ;

constexpr bool const& __cordl_internal_get__PendingTableData_k__BackingField() const;

constexpr bool& __cordl_internal_get__PendingTableData_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__collidersList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__collidersList() ;

constexpr int32_t const& __cordl_internal_get__lastUpdateZoneStateAuthLogSig() const;

constexpr int32_t& __cordl_internal_get__lastUpdateZoneStateAuthLogSig() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* const& __cordl_internal_get__leavingItemScratch() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*& __cordl_internal_get__leavingItemScratch() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_boundsBoxCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_boundsBoxCollider() ;

constexpr ::StringW const& __cordl_internal_get_cachedZoneSceneName() const;

constexpr ::StringW& __cordl_internal_get_cachedZoneSceneName() ;

constexpr float_t const& __cordl_internal_get_createCooldown() const;

constexpr float_t& __cordl_internal_get_createCooldown() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_createDataForCreate() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_createDataForCreate() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_createdByEntityNetIdForCreate() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_createdByEntityNetIdForCreate() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_createdItemTypeCount() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_createdItemTypeCount() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGameManager> const& __cordl_internal_get_customMapsManager() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsGameManager>& __cordl_internal_get_customMapsManager() ;

constexpr float_t const& __cordl_internal_get_destroyCooldown() const;

constexpr float_t& __cordl_internal_get_destroyCooldown() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_entities() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_entities() ;

constexpr int32_t const& __cordl_internal_get_entitiesActiveCount() const;

constexpr int32_t& __cordl_internal_get_entitiesActiveCount() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_entityTypeIdsForCreate() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_entityTypeIdsForCreate() ;

constexpr ::UnityW<::GlobalNamespace::GameAgentManager> const& __cordl_internal_get_gameAgentManager() const;

constexpr ::UnityW<::GlobalNamespace::GameAgentManager>& __cordl_internal_get_gameAgentManager() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityData>* const& __cordl_internal_get_gameEntityData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityData>*& __cordl_internal_get_gameEntityData() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_ghostReactorManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_ghostReactorManager() ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get_guard() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get_guard() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_itemPrefabFactory() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_itemPrefabFactory() ;

constexpr float_t const& __cordl_internal_get_lastCreateSent() const;

constexpr float_t& __cordl_internal_get_lastCreateSent() ;

constexpr float_t const& __cordl_internal_get_lastDestroySent() const;

constexpr float_t& __cordl_internal_get_lastDestroySent() ;

constexpr float_t const& __cordl_internal_get_lastStateSent() const;

constexpr float_t& __cordl_internal_get_lastStateSent() ;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameEntityManager_RPC>* const& __cordl_internal_get_m_RpcSpamChecks() const;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameEntityManager_RPC>*& __cordl_internal_get_m_RpcSpamChecks() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_netIdToIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_netIdToIndex() ;

constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_netIds() const;

constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_netIds() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_netIdsForCreate() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_netIdsForCreate() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_netIdsForDelete() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_netIdsForDelete() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_netIdsForState() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_netIdsForState() ;

constexpr int32_t const& __cordl_internal_get_nextNetId() const;

constexpr int32_t& __cordl_internal_get_nextNetId() ;

constexpr ::GlobalNamespace::GameEntityManager_ZoneClearEvent* const& __cordl_internal_get_onZoneClear() const;

constexpr ::GlobalNamespace::GameEntityManager_ZoneClearEvent*& __cordl_internal_get_onZoneClear() ;

constexpr ::GlobalNamespace::GameEntityManager_ZoneStartEvent* const& __cordl_internal_get_onZoneStart() const;

constexpr ::GlobalNamespace::GameEntityManager_ZoneStartEvent*& __cordl_internal_get_onZoneStart() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_packedPositionsForCreate() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_packedPositionsForCreate() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_packedRotationsForCreate() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_packedRotationsForCreate() ;

constexpr int32_t const& __cordl_internal_get_pendingTableDataSetFrame() const;

constexpr int32_t& __cordl_internal_get_pendingTableDataSetFrame() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& __cordl_internal_get_playerZoneJoinTimes() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& __cordl_internal_get_playerZoneJoinTimes() ;

constexpr ::Photon::Realtime::Player* const& __cordl_internal_get_prevAuthorityPlayer() const;

constexpr ::Photon::Realtime::Player*& __cordl_internal_get_prevAuthorityPlayer() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_priceLookupByEntityId() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_priceLookupByEntityId() ;

constexpr float_t const& __cordl_internal_get_scenePlacedBoundsCheckTimer() const;

constexpr float_t& __cordl_internal_get_scenePlacedBoundsCheckTimer() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>* const& __cordl_internal_get_scenePlacedEntities() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>*& __cordl_internal_get_scenePlacedEntities() ;

constexpr bool const& __cordl_internal_get_scenePlacedEntitiesRegistered() const;

constexpr bool& __cordl_internal_get_scenePlacedEntitiesRegistered() ;

constexpr float_t const& __cordl_internal_get_stateCooldown() const;

constexpr float_t& __cordl_internal_get_stateCooldown() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_statesForState() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_statesForState() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager> const& __cordl_internal_get_superInfectionManager() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionManager>& __cordl_internal_get_superInfectionManager() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_tempEntities() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_tempEntities() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_tempFactoryItems() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_tempFactoryItems() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_tempSerializeGameState() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_tempSerializeGameState() ;

constexpr bool const& __cordl_internal_get_useRandomCheckForAuthority() const;

constexpr bool& __cordl_internal_get_useRandomCheckForAuthority() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr ::GlobalNamespace::ZoneClearReason const& __cordl_internal_get_zoneClearReason() const;

constexpr ::GlobalNamespace::ZoneClearReason& __cordl_internal_get_zoneClearReason() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityZoneComponent*>* const& __cordl_internal_get_zoneComponents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityZoneComponent*>*& __cordl_internal_get_zoneComponents() ;

constexpr ::GlobalNamespace::GameEntityManager_ZoneStateData* const& __cordl_internal_get_zoneStateData() const;

constexpr ::GlobalNamespace::GameEntityManager_ZoneStateData*& __cordl_internal_get_zoneStateData() ;

constexpr void __cordl_internal_set_OnAuthorityChanged(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*  value) ;

constexpr void __cordl_internal_set_OnEntityAdded(::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_OnEntityRemoved(::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_OnZoneActiveChanged(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*  value) ;

constexpr void __cordl_internal_set__PendingTableData_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__collidersList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set__lastUpdateZoneStateAuthLogSig(int32_t  value) ;

constexpr void __cordl_internal_set__leavingItemScratch(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  value) ;

constexpr void __cordl_internal_set_boundsBoxCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_cachedZoneSceneName(::StringW  value) ;

constexpr void __cordl_internal_set_createCooldown(float_t  value) ;

constexpr void __cordl_internal_set_createDataForCreate(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_createdByEntityNetIdForCreate(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_createdItemTypeCount(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_customMapsManager(::UnityW<::GlobalNamespace::CustomMapsGameManager>  value) ;

constexpr void __cordl_internal_set_destroyCooldown(float_t  value) ;

constexpr void __cordl_internal_set_entities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_entitiesActiveCount(int32_t  value) ;

constexpr void __cordl_internal_set_entityTypeIdsForCreate(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_gameAgentManager(::UnityW<::GlobalNamespace::GameAgentManager>  value) ;

constexpr void __cordl_internal_set_gameEntityData(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityData>*  value) ;

constexpr void __cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_guard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

constexpr void __cordl_internal_set_itemPrefabFactory(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_lastCreateSent(float_t  value) ;

constexpr void __cordl_internal_set_lastDestroySent(float_t  value) ;

constexpr void __cordl_internal_set_lastStateSent(float_t  value) ;

constexpr void __cordl_internal_set_m_RpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameEntityManager_RPC>*  value) ;

constexpr void __cordl_internal_set_netIdToIndex(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_netIds(::Unity::Collections::NativeArray_1<int32_t>  value) ;

constexpr void __cordl_internal_set_netIdsForCreate(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_netIdsForDelete(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_netIdsForState(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_nextNetId(int32_t  value) ;

constexpr void __cordl_internal_set_onZoneClear(::GlobalNamespace::GameEntityManager_ZoneClearEvent*  value) ;

constexpr void __cordl_internal_set_onZoneStart(::GlobalNamespace::GameEntityManager_ZoneStartEvent*  value) ;

constexpr void __cordl_internal_set_packedPositionsForCreate(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_packedRotationsForCreate(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_pendingTableDataSetFrame(int32_t  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_playerZoneJoinTimes(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value) ;

constexpr void __cordl_internal_set_prevAuthorityPlayer(::Photon::Realtime::Player*  value) ;

constexpr void __cordl_internal_set_priceLookupByEntityId(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_scenePlacedBoundsCheckTimer(float_t  value) ;

constexpr void __cordl_internal_set_scenePlacedEntities(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>*  value) ;

constexpr void __cordl_internal_set_scenePlacedEntitiesRegistered(bool  value) ;

constexpr void __cordl_internal_set_stateCooldown(float_t  value) ;

constexpr void __cordl_internal_set_statesForState(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_superInfectionManager(::UnityW<::GlobalNamespace::SuperInfectionManager>  value) ;

constexpr void __cordl_internal_set_tempEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_tempFactoryItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_tempSerializeGameState(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_useRandomCheckForAuthority(bool  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_zoneClearReason(::GlobalNamespace::ZoneClearReason  value) ;

constexpr void __cordl_internal_set_zoneComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityZoneComponent*>*  value) ;

constexpr void __cordl_internal_set_zoneStateData(::GlobalNamespace::GameEntityManager_ZoneStateData*  value) ;

/// @brief Method .ctor, addr 0x5831114, size 0x2a0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnAuthorityChanged, addr 0x581652c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnAuthorityChanged(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnZoneActiveChanged, addr 0x5816664, size 0x9c, virtual false, abstract: false, final false
inline void add_OnZoneActiveChanged(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onZoneClear, addr 0x58163f4, size 0x9c, virtual false, abstract: false, final false
inline void add_onZoneClear(::GlobalNamespace::GameEntityManager_ZoneClearEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onZoneStart, addr 0x58162bc, size 0x9c, virtual false, abstract: false, final false
inline void add_onZoneStart(::GlobalNamespace::GameEntityManager_ZoneStartEvent*  value) ;

static inline ::UnityW<::GlobalNamespace::GameEntityManager> getStaticF__activeManager_k__BackingField() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntityManager>>* getStaticF_allManagers() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GameEntityManager>>* getStaticF_managersByZone() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>* getStaticF_s_scenePlacedEntities() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* getStaticF_s_scenePlacedHomeScenes() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_AttachmentData>* getStaticF_tempAttachments() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* getStaticF_tempEntitiesToSerialize() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

/// [CompilerGenerated]
/// @brief Method get_PendingTableData, addr 0x5816864, size 0x8, virtual false, abstract: false, final false
inline bool get_PendingTableData() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5816854, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method get_activeManager, addr 0x581679c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GameEntityManager> get_activeManager() ;

/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnAuthorityChanged, addr 0x58165c8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnAuthorityChanged(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnZoneActiveChanged, addr 0x5816700, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnZoneActiveChanged(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onZoneClear, addr 0x5816490, size 0x9c, virtual false, abstract: false, final false
inline void remove_onZoneClear(::GlobalNamespace::GameEntityManager_ZoneClearEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onZoneStart, addr 0x5816358, size 0x9c, virtual false, abstract: false, final false
inline void remove_onZoneStart(::GlobalNamespace::GameEntityManager_ZoneStartEvent*  value) ;

static inline void setStaticF__activeManager_k__BackingField(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

static inline void setStaticF_allManagers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntityManager>>*  value) ;

static inline void setStaticF_managersByZone(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::GameEntityManager>>*  value) ;

static inline void setStaticF_s_scenePlacedEntities(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*>*  value) ;

static inline void setStaticF_s_scenePlacedHomeScenes(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value) ;

static inline void setStaticF_tempAttachments(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_AttachmentData>*  value) ;

static inline void setStaticF_tempEntitiesToSerialize(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_PendingTableData, addr 0x581686c, size 0x8, virtual false, abstract: false, final false
inline void set_PendingTableData(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x581685c, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_activeManager, addr 0x58167f4, size 0x60, virtual false, abstract: false, final false
static inline void set_activeManager(::GlobalNamespace::GameEntityManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityManager(GameEntityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityManager(GameEntityManager const& ) = delete;

/// @brief Field INVALID_ID offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_ID{static_cast<int32_t>(0xffffffff)};

/// @brief Field INVALID_INDEX offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_INDEX{static_cast<int32_t>(0xffffffff)};

/// @brief Field MAX_CHUNK_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_CHUNK_BYTES{static_cast<int32_t>(0x200)};

/// @brief Field MAX_DISTANCE_FROM_HAND offset 0xffffffff size 0x4
static constexpr float_t  MAX_DISTANCE_FROM_HAND{static_cast<float_t>(16.0f)};

/// @brief Field MAX_ENTITY_COUNT_PER_TYPE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_ENTITY_COUNT_PER_TYPE{static_cast<int32_t>(0x64)};

/// @brief Field MAX_ENTITY_DIST offset 0xffffffff size 0x4
static constexpr float_t  MAX_ENTITY_DIST{static_cast<float_t>(16.0f)};

/// @brief Field MAX_JOINWITHITEMS_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_JOINWITHITEMS_BYTES{static_cast<int32_t>(0xff)};

/// @brief Field MAX_LOCAL_MAGNITUDE_SQ offset 0xffffffff size 0x4
static constexpr float_t  MAX_LOCAL_MAGNITUDE_SQ{static_cast<float_t>(6400.0f)};

/// @brief Field MAX_STATE_BYTES offset 0xffffffff size 0x4
static constexpr int32_t  MAX_STATE_BYTES{static_cast<int32_t>(0x3c00)};

/// @brief Field MAX_THROW_SPEED_SQ offset 0xffffffff size 0x4
static constexpr float_t  MAX_THROW_SPEED_SQ{static_cast<float_t>(1600.0f)};

/// @brief Field ZONE_MIGRATION_RECOVERY_DURATION offset 0xffffffff size 0x4
static constexpr float_t  ZONE_MIGRATION_RECOVERY_DURATION{static_cast<float_t>(10.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1759};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GT/GameEntityManager]  ERROR!!!  "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"[GT/GameEntityManager]  ERROR!!!  (beta only log) "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GT/GameEntityManager]  "};

/// @brief Field zone, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// @brief Field photonView, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field guard, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  ___guard;

/// @brief Field prevAuthorityPlayer, offset: 0xb0, size: 0x8, def value: None
 ::Photon::Realtime::Player*  ___prevAuthorityPlayer;

/// [FormerlySerializedAs("zoneLimit")]
/// @brief Field boundsBoxCollider, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___boundsBoxCollider;

/// @brief Field useRandomCheckForAuthority, offset: 0xc0, size: 0x1, def value: None
 bool  ___useRandomCheckForAuthority;

/// @brief Field gameAgentManager, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameAgentManager>  ___gameAgentManager;

/// @brief Field ghostReactorManager, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___ghostReactorManager;

/// @brief Field customMapsManager, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsGameManager>  ___customMapsManager;

/// @brief Field superInfectionManager, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfectionManager>  ___superInfectionManager;

/// @brief Field zoneComponents, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityZoneComponent*>*  ___zoneComponents;

/// @brief Field entities, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___entities;

/// @brief Field entitiesActiveCount, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___entitiesActiveCount;

/// @brief Field gameEntityData, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityData>*  ___gameEntityData;

/// @brief Field tempFactoryItems, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___tempFactoryItems;

/// [CompilerGenerated]
/// @brief Field onZoneStart, offset: 0x110, size: 0x8, def value: None
 ::GlobalNamespace::GameEntityManager_ZoneStartEvent*  ___onZoneStart;

/// [CompilerGenerated]
/// @brief Field onZoneClear, offset: 0x118, size: 0x8, def value: None
 ::GlobalNamespace::GameEntityManager_ZoneClearEvent*  ___onZoneClear;

/// [CompilerGenerated]
/// @brief Field OnAuthorityChanged, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent*  ___OnAuthorityChanged;

/// [CompilerGenerated]
/// @brief Field OnZoneActiveChanged, offset: 0x128, size: 0x8, def value: None
 ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent*  ___OnZoneActiveChanged;

/// @brief Field itemPrefabFactory, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  ___itemPrefabFactory;

/// @brief Field priceLookupByEntityId, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___priceLookupByEntityId;

/// @brief Field tempEntities, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___tempEntities;

/// @brief Field netIdsForCreate, offset: 0x148, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___netIdsForCreate;

/// @brief Field entityTypeIdsForCreate, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___entityTypeIdsForCreate;

/// @brief Field packedRotationsForCreate, offset: 0x158, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___packedRotationsForCreate;

/// @brief Field packedPositionsForCreate, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___packedPositionsForCreate;

/// @brief Field createDataForCreate, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___createDataForCreate;

/// @brief Field createdByEntityNetIdForCreate, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___createdByEntityNetIdForCreate;

/// @brief Field createCooldown, offset: 0x178, size: 0x4, def value: None
 float_t  ___createCooldown;

/// @brief Field lastCreateSent, offset: 0x17c, size: 0x4, def value: None
 float_t  ___lastCreateSent;

/// @brief Field netIdsForDelete, offset: 0x180, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___netIdsForDelete;

/// @brief Field destroyCooldown, offset: 0x188, size: 0x4, def value: None
 float_t  ___destroyCooldown;

/// @brief Field lastDestroySent, offset: 0x18c, size: 0x4, def value: None
 float_t  ___lastDestroySent;

/// @brief Field netIdsForState, offset: 0x190, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___netIdsForState;

/// @brief Field statesForState, offset: 0x198, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___statesForState;

/// @brief Field lastStateSent, offset: 0x1a0, size: 0x4, def value: None
 float_t  ___lastStateSent;

/// @brief Field stateCooldown, offset: 0x1a4, size: 0x4, def value: None
 float_t  ___stateCooldown;

/// @brief Field netIdToIndex, offset: 0x1a8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___netIdToIndex;

/// @brief Field netIds, offset: 0x1b0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  ___netIds;

/// @brief Field createdItemTypeCount, offset: 0x1c0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___createdItemTypeCount;

/// @brief Field playerZoneJoinTimes, offset: 0x1c8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  ___playerZoneJoinTimes;

/// @brief Field zoneClearReason, offset: 0x1d0, size: 0x4, def value: None
 ::GlobalNamespace::ZoneClearReason  ___zoneClearReason;

/// @brief Field OnEntityRemoved, offset: 0x1d8, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___OnEntityRemoved;

/// @brief Field OnEntityAdded, offset: 0x1e0, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___OnEntityAdded;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x1e8, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PendingTableData>k__BackingField, offset: 0x1e9, size: 0x1, def value: None
 bool  ____PendingTableData_k__BackingField;

/// @brief Field pendingTableDataSetFrame, offset: 0x1ec, size: 0x4, def value: None
 int32_t  ___pendingTableDataSetFrame;

/// [DebugReadout]
/// @brief Field zoneStateData, offset: 0x1f0, size: 0x8, def value: None
 ::GlobalNamespace::GameEntityManager_ZoneStateData*  ___zoneStateData;

/// @brief Field nextNetId, offset: 0x1f8, size: 0x4, def value: None
 int32_t  ___nextNetId;

/// @brief Field cachedZoneSceneName, offset: 0x200, size: 0x8, def value: None
 ::StringW  ___cachedZoneSceneName;

/// @brief Field m_RpcSpamChecks, offset: 0x208, size: 0x8, def value: None
 ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GameEntityManager_RPC>*  ___m_RpcSpamChecks;

/// @brief Field scenePlacedEntitiesRegistered, offset: 0x210, size: 0x1, def value: None
 bool  ___scenePlacedEntitiesRegistered;

/// @brief Field scenePlacedBoundsCheckTimer, offset: 0x214, size: 0x4, def value: None
 float_t  ___scenePlacedBoundsCheckTimer;

/// @brief Field _lastUpdateZoneStateAuthLogSig, offset: 0x218, size: 0x4, def value: None
 int32_t  ____lastUpdateZoneStateAuthLogSig;

/// @brief Field scenePlacedEntities, offset: 0x220, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ScenePlacedRecord>*  ___scenePlacedEntities;

/// @brief Field _leavingItemScratch, offset: 0x228, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  ____leavingItemScratch;

/// @brief Field _collidersList, offset: 0x230, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ____collidersList;

/// @brief Field tempSerializeGameState, offset: 0x238, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___tempSerializeGameState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___zone) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___photonView) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___guard) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___prevAuthorityPlayer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___boundsBoxCollider) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___useRandomCheckForAuthority) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___gameAgentManager) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___ghostReactorManager) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___customMapsManager) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___superInfectionManager) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___zoneComponents) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___entities) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___entitiesActiveCount) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___gameEntityData) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___tempFactoryItems) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___onZoneStart) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___onZoneClear) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___OnAuthorityChanged) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___OnZoneActiveChanged) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___itemPrefabFactory) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___priceLookupByEntityId) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___tempEntities) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___netIdsForCreate) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___entityTypeIdsForCreate) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___packedRotationsForCreate) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___packedPositionsForCreate) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___createDataForCreate) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___createdByEntityNetIdForCreate) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___createCooldown) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___lastCreateSent) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___netIdsForDelete) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___destroyCooldown) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___lastDestroySent) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___netIdsForState) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___statesForState) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___lastStateSent) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___stateCooldown) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___netIdToIndex) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___netIds) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___createdItemTypeCount) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___playerZoneJoinTimes) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___zoneClearReason) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___OnEntityRemoved) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___OnEntityAdded) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ____TickRunning_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ____PendingTableData_k__BackingField) == 0x1e9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___pendingTableDataSetFrame) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___zoneStateData) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___nextNetId) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___cachedZoneSceneName) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___m_RpcSpamChecks) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___scenePlacedEntitiesRegistered) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___scenePlacedBoundsCheckTimer) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ____lastUpdateZoneStateAuthLogSig) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___scenePlacedEntities) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ____leavingItemScratch) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ____collidersList) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager, ___tempSerializeGameState) == 0x238, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityManager) == 0x240, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityManager/<>c__DisplayClass159_0
class CORDL_TYPE GameEntityManager___c__DisplayClass159_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameEntityManager>  __4__this;

/// @brief Field createItemsCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_createItemsCallback, put=__cordl_internal_set_createItemsCallback)) ::System::Action*  createItemsCallback;

/// @brief Field isAuthority, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAuthority, put=__cordl_internal_set_isAuthority)) bool  isAuthority;

/// @brief Field joiningActorNum, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_joiningActorNum, put=__cordl_internal_set_joiningActorNum)) int32_t  joiningActorNum;

/// @brief Field joiningPlayer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_joiningPlayer, put=__cordl_internal_set_joiningPlayer)) ::UnityW<::GlobalNamespace::GamePlayer>  joiningPlayer;

/// @brief Field netIds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_netIds, put=__cordl_internal_set_netIds)) ::ArrayW<int32_t>  netIds;

/// @brief Field stateData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateData, put=__cordl_internal_set_stateData)) ::ArrayW<uint8_t>  stateData;

static inline ::GlobalNamespace::GameEntityManager___c__DisplayClass159_0* New_ctor() ;

/// @brief Method <JoinWithItemsRPC>b__0, addr 0x58327f8, size 0xe2c, virtual false, abstract: false, final false
inline void _JoinWithItemsRPC_b__0() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get_createItemsCallback() const;

constexpr ::System::Action*& __cordl_internal_get_createItemsCallback() ;

constexpr bool const& __cordl_internal_get_isAuthority() const;

constexpr bool& __cordl_internal_get_isAuthority() ;

constexpr int32_t const& __cordl_internal_get_joiningActorNum() const;

constexpr int32_t& __cordl_internal_get_joiningActorNum() ;

constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& __cordl_internal_get_joiningPlayer() const;

constexpr ::UnityW<::GlobalNamespace::GamePlayer>& __cordl_internal_get_joiningPlayer() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_netIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_netIds() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_stateData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_stateData() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

constexpr void __cordl_internal_set_createItemsCallback(::System::Action*  value) ;

constexpr void __cordl_internal_set_isAuthority(bool  value) ;

constexpr void __cordl_internal_set_joiningActorNum(int32_t  value) ;

constexpr void __cordl_internal_set_joiningPlayer(::UnityW<::GlobalNamespace::GamePlayer>  value) ;

constexpr void __cordl_internal_set_netIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_stateData(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x58327f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager___c__DisplayClass159_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager___c__DisplayClass159_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityManager___c__DisplayClass159_0(GameEntityManager___c__DisplayClass159_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager___c__DisplayClass159_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityManager___c__DisplayClass159_0(GameEntityManager___c__DisplayClass159_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1758};

/// @brief Field joiningPlayer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GamePlayer>  ___joiningPlayer;

/// @brief Field createItemsCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___createItemsCallback;

/// @brief Field stateData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___stateData;

/// @brief Field isAuthority, offset: 0x28, size: 0x1, def value: None
 bool  ___isAuthority;

/// @brief Field netIds, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___netIds;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  _____4__this;

/// @brief Field joiningActorNum, offset: 0x40, size: 0x4, def value: None
 int32_t  ___joiningActorNum;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0, ___joiningPlayer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0, ___createItemsCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0, ___stateData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0, ___isAuthority) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0, ___netIds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0, _____4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0, ___joiningActorNum) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityManager___c__DisplayClass159_0) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GameEntityManager::ZoneState, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityManager/ZoneStateData
class CORDL_TYPE GameEntityManager_ZoneStateData : public ::System::Object {
public:
// Declarations
/// @brief Field numRecievedStateBytes, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_numRecievedStateBytes, put=__cordl_internal_set_numRecievedStateBytes)) int32_t  numRecievedStateBytes;

/// @brief Field recievedStateBytes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_recievedStateBytes, put=__cordl_internal_set_recievedStateBytes)) ::ArrayW<uint8_t>  recievedStateBytes;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GameEntityManager_ZoneState  state;

/// @brief Field stateStartTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) double_t  stateStartTime;

/// @brief Field zonePlayers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_zonePlayers, put=__cordl_internal_set_zonePlayers)) ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*  zonePlayers;

/// @brief Field zoneStateRequests, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneStateRequests, put=__cordl_internal_set_zoneStateRequests)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ZoneStateRequest>*  zoneStateRequests;

static inline ::GlobalNamespace::GameEntityManager_ZoneStateData* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_numRecievedStateBytes() const;

constexpr int32_t& __cordl_internal_get_numRecievedStateBytes() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_recievedStateBytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_recievedStateBytes() ;

constexpr ::GlobalNamespace::GameEntityManager_ZoneState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GameEntityManager_ZoneState& __cordl_internal_get_state() ;

constexpr double_t const& __cordl_internal_get_stateStartTime() const;

constexpr double_t& __cordl_internal_get_stateStartTime() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>* const& __cordl_internal_get_zonePlayers() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*& __cordl_internal_get_zonePlayers() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ZoneStateRequest>* const& __cordl_internal_get_zoneStateRequests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ZoneStateRequest>*& __cordl_internal_get_zoneStateRequests() ;

constexpr void __cordl_internal_set_numRecievedStateBytes(int32_t  value) ;

constexpr void __cordl_internal_set_recievedStateBytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GameEntityManager_ZoneState  value) ;

constexpr void __cordl_internal_set_stateStartTime(double_t  value) ;

constexpr void __cordl_internal_set_zonePlayers(::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*  value) ;

constexpr void __cordl_internal_set_zoneStateRequests(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ZoneStateRequest>*  value) ;

/// @brief Method .ctor, addr 0x58327e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_ZoneStateData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_ZoneStateData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityManager_ZoneStateData(GameEntityManager_ZoneStateData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_ZoneStateData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityManager_ZoneStateData(GameEntityManager_ZoneStateData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1754};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityManager_ZoneState  ___state;

/// @brief Field stateStartTime, offset: 0x18, size: 0x8, def value: None
 double_t  ___stateStartTime;

/// @brief Field zoneStateRequests, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityManager_ZoneStateRequest>*  ___zoneStateRequests;

/// @brief Field zonePlayers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Realtime::Player*>*  ___zonePlayers;

/// [HideInInspector]
/// @brief Field recievedStateBytes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___recievedStateBytes;

/// [HideInInspector]
/// @brief Field numRecievedStateBytes, offset: 0x38, size: 0x4, def value: None
 int32_t  ___numRecievedStateBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneStateData, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneStateData, ___stateStartTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneStateData, ___zoneStateRequests) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneStateData, ___zonePlayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneStateData, ___recievedStateBytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityManager_ZoneStateData, ___numRecievedStateBytes) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityManager_ZoneStateData) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityManager/ZoneActiveChangeEvent
class CORDL_TYPE GameEntityManager_ZoneActiveChangeEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5832780, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  active, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x58327dc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x583276c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(bool  active) ;

static inline ::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x58326cc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_ZoneActiveChangeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_ZoneActiveChangeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityManager_ZoneActiveChangeEvent(GameEntityManager_ZoneActiveChangeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_ZoneActiveChangeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityManager_ZoneActiveChangeEvent(GameEntityManager_ZoneActiveChangeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1751};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameEntityManager_ZoneActiveChangeEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityManager/AuthorityChangeEvent
class CORDL_TYPE GameEntityManager_AuthorityChangeEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5832698, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x58326c0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5832684, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

static inline ::GlobalNamespace::GameEntityManager_AuthorityChangeEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5832578, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_AuthorityChangeEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_AuthorityChangeEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityManager_AuthorityChangeEvent(GameEntityManager_AuthorityChangeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_AuthorityChangeEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityManager_AuthorityChangeEvent(GameEntityManager_AuthorityChangeEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1750};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameEntityManager_AuthorityChangeEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityManager/ZoneClearEvent
class CORDL_TYPE GameEntityManager_ZoneClearEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x58324e8, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GTZone  zoneId, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x583256c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x58324d4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::GTZone  zoneId) ;

static inline ::GlobalNamespace::GameEntityManager_ZoneClearEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5832434, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_ZoneClearEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_ZoneClearEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityManager_ZoneClearEvent(GameEntityManager_ZoneClearEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_ZoneClearEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityManager_ZoneClearEvent(GameEntityManager_ZoneClearEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameEntityManager_ZoneClearEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityManager/ZoneStartEvent
class CORDL_TYPE GameEntityManager_ZoneStartEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x58323a4, size 0x84, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GTZone  zoneId, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5832428, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5832390, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::GTZone  zoneId) ;

static inline ::GlobalNamespace::GameEntityManager_ZoneStartEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x58322f0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityManager_ZoneStartEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_ZoneStartEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityManager_ZoneStartEvent(GameEntityManager_ZoneStartEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityManager_ZoneStartEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityManager_ZoneStartEvent(GameEntityManager_ZoneStartEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1748};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameEntityManager_ZoneStartEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
