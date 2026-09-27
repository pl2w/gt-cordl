#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_SlotData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GamePlayer)
namespace GlobalNamespace {
class CallLimiter;
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
struct GamePlayer_SlotData;
}
namespace GlobalNamespace {
class GamePlayer__IterateHeldAndSnappedEntities_d__65;
}
namespace GlobalNamespace {
class GamePlayer__IterateHeldAndSnappedItems_d__63;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SuperInfectionSnapPointManager;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
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
class IEnumerable;
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
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GamePlayer;
}
namespace GlobalNamespace {
class GamePlayer__IterateHeldAndSnappedEntities_d__65;
}
namespace GlobalNamespace {
class GamePlayer__IterateHeldAndSnappedItems_d__63;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GamePlayer*);
MARK_REF_T(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*);
MARK_REF_T(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePlayer*, "", "GamePlayer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65*, "", "GamePlayer/<IterateHeldAndSnappedEntities>d__65");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63*, "", "GamePlayer/<IterateHeldAndSnappedItems>d__63");
// Dependencies GamePlayer::SlotData, System.ValueTuple`2<T1, T2>, UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: GamePlayer
class CORDL_TYPE GamePlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SlotData = ::GlobalNamespace::GamePlayer_SlotData;

using _IterateHeldAndSnappedEntities_d__65 = ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65;

using _IterateHeldAndSnappedItems_d__63 = ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63;

 __declspec(property(get=get_AdditionalDataInitialized, put=set_AdditionalDataInitialized)) bool  AdditionalDataInitialized;

 __declspec(property(get=get_DidJoinWithItems, put=set_DidJoinWithItems)) bool  DidJoinWithItems;

 __declspec(property(get=get_IsSubscribed)) bool  IsSubscribed;

/// @brief Field OnPlayerInitialized, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerInitialized, put=__cordl_internal_set_OnPlayerInitialized)) ::System::Action*  OnPlayerInitialized;

/// @brief Field OnPlayerLeftZone, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlayerLeftZone, put=__cordl_internal_set_OnPlayerLeftZone)) ::System::Action*  OnPlayerLeftZone;

/// @brief Field <AdditionalDataInitialized>k__BackingField, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__AdditionalDataInitialized_k__BackingField, put=__cordl_internal_set__AdditionalDataInitialized_k__BackingField)) bool  _AdditionalDataInitialized_k__BackingField;

/// @brief Field <DidJoinWithItems>k__BackingField, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__DidJoinWithItems_k__BackingField, put=__cordl_internal_set__DidJoinWithItems_k__BackingField)) bool  _DidJoinWithItems_k__BackingField;

/// @brief Field _isSubscribed, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSubscribed, put=__cordl_internal_set__isSubscribed)) bool  _isSubscribed;

/// @brief Field _lastSubscriptionCheck, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSubscriptionCheck, put=__cordl_internal_set__lastSubscriptionCheck)) int32_t  _lastSubscriptionCheck;

/// @brief Field grabbingDisabled, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_grabbingDisabled, put=__cordl_internal_set_grabbingDisabled)) bool  grabbingDisabled;

/// @brief Field handTransforms, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTransforms, put=__cordl_internal_set_handTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  handTransforms;

/// @brief Field leftHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::UnityW<::UnityEngine::Transform>  leftHand;

/// @brief Field lookupCache_actorNum_to_gamePlayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lookupCache_actorNum_to_gamePlayer, put=setStaticF_lookupCache_actorNum_to_gamePlayer)) ::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>  lookupCache_actorNum_to_gamePlayer;

/// @brief Field lookupCache_rigInstanceId_to_gamePlayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lookupCache_rigInstanceId_to_gamePlayer, put=setStaticF_lookupCache_rigInstanceId_to_gamePlayer)) ::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>  lookupCache_rigInstanceId_to_gamePlayer;

/// @brief Field netGrabLimiter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_netGrabLimiter, put=__cordl_internal_set_netGrabLimiter)) ::GlobalNamespace::CallLimiter*  netGrabLimiter;

/// @brief Field netImpulseLimiter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_netImpulseLimiter, put=__cordl_internal_set_netImpulseLimiter)) ::GlobalNamespace::CallLimiter*  netImpulseLimiter;

/// @brief Field netSnapLimiter, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_netSnapLimiter, put=__cordl_internal_set_netSnapLimiter)) ::GlobalNamespace::CallLimiter*  netSnapLimiter;

/// @brief Field netStateLimiter, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_netStateLimiter, put=__cordl_internal_set_netStateLimiter)) ::GlobalNamespace::CallLimiter*  netStateLimiter;

/// @brief Field netThrowLimiter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_netThrowLimiter, put=__cordl_internal_set_netThrowLimiter)) ::GlobalNamespace::CallLimiter*  netThrowLimiter;

/// @brief Field newJoinZoneLimiter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_newJoinZoneLimiter, put=__cordl_internal_set_newJoinZoneLimiter)) ::GlobalNamespace::CallLimiter*  newJoinZoneLimiter;

/// @brief Field rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field rightHand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::UnityW<::UnityEngine::Transform>  rightHand;

/// @brief Field slots, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_slots, put=__cordl_internal_set_slots)) ::ArrayW<::GlobalNamespace::GamePlayer_SlotData>  slots;

/// @brief Field snapPointManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapPointManager, put=__cordl_internal_set_snapPointManager)) ::UnityW<::GlobalNamespace::SuperInfectionSnapPointManager>  snapPointManager;

/// @brief Field staticLookupCachesCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_staticLookupCachesCount, put=setStaticF_staticLookupCachesCount)) int32_t  staticLookupCachesCount;

/// @brief Method AuthorityMigrateToEntityManager, addr 0x5839db0, size 0x23c, virtual false, abstract: false, final false
inline int32_t AuthorityMigrateToEntityManager(::GlobalNamespace::GameEntityManager*  newEntityManager) ;

/// @brief Method Awake, addr 0x58383c0, size 0x360, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clear, addr 0x5838720, size 0x428, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearGrabbed, addr 0x5838b48, size 0x8c, virtual false, abstract: false, final false
inline void ClearGrabbed(int32_t  handIndex) ;

/// @brief Method ClearGrabbedIfHeld, addr 0x5839208, size 0x114, virtual false, abstract: false, final false
inline void ClearGrabbedIfHeld(::GlobalNamespace::GameEntityId  gameBallId, ::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method ClearSlot, addr 0x5838bd4, size 0x74, virtual false, abstract: false, final false
inline void ClearSlot(int32_t  slotIndex) ;

/// @brief Method ClearSnappedIfSnapped, addr 0x58390f4, size 0x114, virtual false, abstract: false, final false
inline void ClearSnappedIfSnapped(::GlobalNamespace::GameEntityId  gameBallId, ::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method ClearZone, addr 0x583931c, size 0x1b0, virtual false, abstract: false, final false
inline void ClearZone(::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method DeleteGrabbedEntityLocal, addr 0x5839c00, size 0x1b0, virtual false, abstract: false, final false
inline void DeleteGrabbedEntityLocal(int32_t  handIndex) ;

/// @brief Method DeserializeNetworkState, addr 0x583af4c, size 0x2a8, virtual false, abstract: false, final false
static inline void DeserializeNetworkState(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GamePlayer*  gamePlayer, ::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method DisableGrabbing, addr 0x58394d4, size 0x8, virtual false, abstract: false, final false
inline void DisableGrabbing(bool  disable) ;

/// @brief Method FindHandIndex, addr 0x5834ed4, size 0xb0, virtual false, abstract: false, final false
inline int32_t FindHandIndex(::GlobalNamespace::GameEntityId  entityId) ;

/// @brief Method FindSlotIndex, addr 0x583a3a4, size 0xb0, virtual false, abstract: false, final false
inline int32_t FindSlotIndex(::GlobalNamespace::GameEntityId  entityId) ;

/// @brief Method FindSnapIndex, addr 0x583a454, size 0xac, virtual false, abstract: false, final false
inline int32_t FindSnapIndex(::GlobalNamespace::GameEntityId  entityId) ;

/// @brief Method GetGameEntityId, addr 0x583a1d4, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId GetGameEntityId(bool  isLeftHand) ;

/// [Obsolete("Method `GamePlayer.GetGamePlayer(actorNum)` is obsolete, use `TryGetGamePlayer(actorNum, out GamePlayer)` instead.")]
/// @brief Method GetGamePlayer, addr 0x5834ebc, size 0x18, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GamePlayer> GetGamePlayer(int32_t  actorNumber) ;

/// @brief Method GetGamePlayer, addr 0x583a958, size 0xfc, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GamePlayer> GetGamePlayer(::UnityEngine::Collider*  collider, bool  bodyOnly) ;

/// @brief Method GetGamePlayer, addr 0x583a678, size 0x18, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GamePlayer> GetGamePlayer(::Photon::Realtime::Player*  player) ;

/// @brief Method GetGrabbedGameEntity, addr 0x583a2b8, size 0xec, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GameEntity> GetGrabbedGameEntity(int32_t  handIndex) ;

/// @brief Method GetGrabbedGameEntityId, addr 0x5839594, size 0x90, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId GetGrabbedGameEntityId(int32_t  handIndex) ;

/// @brief Method GetGrabbedGameEntityIdAndManager, addr 0x583a1e0, size 0xd8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId GetGrabbedGameEntityIdAndManager(int32_t  handIndex, ::by_ref<::GlobalNamespace::GameEntityManager*>  manager) ;

/// @brief Method GetHandIndex, addr 0x583a50c, size 0xc, virtual false, abstract: false, final false
static inline int32_t GetHandIndex(bool  leftHand) ;

/// @brief Method GetHandTransform, addr 0x583aa54, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetHandTransform(int32_t  handIndex) ;

/// [Obsolete("Method `GamePlayer.TryGetGamePlayer(Player)` is obsolete, use `TryGetGamePlayer(Player, out GamePlayer)` instead.")]
/// @brief Method GetRig, addr 0x583a518, size 0x160, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRig> GetRig(int32_t  actorNumber) ;

/// @brief Method HeldAndSnappedEntities, addr 0x5839ad4, size 0x5c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* HeldAndSnappedEntities(::GlobalNamespace::GameEntityManager*  ignoreEntitiesInManager) ;

/// @brief Method HeldAndSnappedItems, addr 0x58399a8, size 0x5c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* HeldAndSnappedItems(::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method InitializeStaticLookupCaches, addr 0x5838cb4, size 0x118, virtual false, abstract: false, final false
static inline void InitializeStaticLookupCaches() ;

/// @brief Method IsGrabSlot, addr 0x583b200, size 0xc, virtual false, abstract: false, final false
static inline bool IsGrabSlot(int32_t  i) ;

/// @brief Method IsGrabbingDisabled, addr 0x58394cc, size 0x8, virtual false, abstract: false, final false
inline bool IsGrabbingDisabled() ;

/// @brief Method IsHoldingEntity, addr 0x58396c0, size 0xac, virtual false, abstract: false, final false
inline bool IsHoldingEntity(::GlobalNamespace::GameEntityId  gameEntityId) ;

/// @brief Method IsHoldingEntity, addr 0x5839514, size 0x80, virtual false, abstract: false, final false
inline bool IsHoldingEntity(::GlobalNamespace::GameEntityId  gameEntityId, bool  isLeftHand) ;

/// @brief Method IsHoldingEntity, addr 0x5839624, size 0x9c, virtual false, abstract: false, final false
inline bool IsHoldingEntity(::GlobalNamespace::GameEntityManager*  gameEntityManager, bool  isLeftHand) ;

/// @brief Method IsInSlot, addr 0x5839fec, size 0xc0, virtual false, abstract: false, final false
inline bool IsInSlot(int32_t  slotIndex, int32_t  entityIndex, ::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method IsLeftHand, addr 0x583a500, size 0xc, virtual false, abstract: false, final false
static inline bool IsLeftHand(int32_t  handIndex) ;

/// @brief Method IsLocal, addr 0x583ab2c, size 0xfc, virtual false, abstract: false, final false
inline bool IsLocal() ;

/// @brief Method IsSlot, addr 0x583b1f4, size 0xc, virtual false, abstract: false, final false
static inline bool IsSlot(int32_t  i) ;

/// @brief Method IsSlotOccupied, addr 0x58394dc, size 0x38, virtual false, abstract: false, final false
inline bool IsSlotOccupied(int32_t  slotIndex) ;

/// @brief Method IsSnapSlot, addr 0x583b20c, size 0x10, virtual false, abstract: false, final false
static inline bool IsSnapSlot(int32_t  i) ;

/// [IteratorStateMachine(typeof(GamePlayer::<IterateHeldAndSnappedEntities>d__65))]
/// @brief Method IterateHeldAndSnappedEntities, addr 0x5839b30, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* IterateHeldAndSnappedEntities(::GlobalNamespace::GameEntityManager*  ignoreEntitiesInManager) ;

/// [IteratorStateMachine(typeof(GamePlayer::<IterateHeldAndSnappedItems>d__63))]
/// @brief Method IterateHeldAndSnappedItems, addr 0x5839a04, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>* IterateHeldAndSnappedItems(::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method MigrateHeldActorNumbers, addr 0x5838dcc, size 0x15c, virtual false, abstract: false, final false
inline void MigrateHeldActorNumbers() ;

static inline ::GlobalNamespace::GamePlayer* New_ctor() ;

/// @brief Method OnEnable, addr 0x5838cac, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RequestDropAllSnapped, addr 0x583976c, size 0x20, virtual false, abstract: false, final false
inline void RequestDropAllSnapped() ;

/// @brief Method ResetData, addr 0x5838c48, size 0x38, virtual false, abstract: false, final false
inline void ResetData() ;

/// @brief Method SerializeNetworkState, addr 0x583ac28, size 0x324, virtual false, abstract: false, final false
inline void SerializeNetworkState(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method SetGrabbed, addr 0x5838f28, size 0x1c, virtual false, abstract: false, final false
inline void SetGrabbed(::GlobalNamespace::GameEntityId  gameBallId, int32_t  handIndex, ::GlobalNamespace::GameEntityManager*  gameEntityManager) ;

/// @brief Method SetInitializePlayer, addr 0x5838c80, size 0x2c, virtual false, abstract: false, final false
inline void SetInitializePlayer(bool  initialized) ;

/// @brief Method SetSlot, addr 0x5838f44, size 0x104, virtual false, abstract: false, final false
inline void SetSlot(int32_t  slotIndex, ::GlobalNamespace::GameEntityId  entityId, ::GlobalNamespace::GameEntityManager*  manager) ;

/// @brief Method SetSnapped, addr 0x5839048, size 0xac, virtual false, abstract: false, final false
inline void SetSnapped(::GlobalNamespace::GameEntityId  entityId, int32_t  slotIndex, ::GlobalNamespace::GameEntityManager*  gameEntityManager) ;

/// @brief Method Start, addr 0x5838cb0, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetGamePlayer, addr 0x583a6bc, size 0x1c4, virtual false, abstract: false, final false
static inline bool TryGetGamePlayer(int32_t  actorNumber, ::by_ref<::GlobalNamespace::GamePlayer*>  out_gamePlayer) ;

/// @brief Method TryGetGamePlayer, addr 0x583a690, size 0x2c, virtual false, abstract: false, final false
static inline bool TryGetGamePlayer(::Photon::Realtime::Player*  player, ::by_ref<::GlobalNamespace::GamePlayer*>  gamePlayer) ;

/// @brief Method TryGetGamePlayer, addr 0x583a880, size 0xd8, virtual false, abstract: false, final false
static inline bool TryGetGamePlayer(::GlobalNamespace::VRRig*  rig, ::by_ref<::GlobalNamespace::GamePlayer*>  out_gamePlayer) ;

/// @brief Method TryGetSlotData, addr 0x583a0ac, size 0x50, virtual false, abstract: false, final false
inline bool TryGetSlotData(int32_t  slotIndex, ::by_ref<::GlobalNamespace::GamePlayer_SlotData>  out_slotData) ;

/// @brief Method TryGetSlotEntity, addr 0x583a0fc, size 0xd8, virtual false, abstract: false, final false
inline bool TryGetSlotEntity(int32_t  slotIndex, ::by_ref<::GlobalNamespace::GameEntity*>  out_entity) ;

/// @brief Method TryGetSlotXform, addr 0x5833624, size 0x150, virtual false, abstract: false, final false
inline bool TryGetSlotXform(int32_t  slotIndex, ::by_ref<::UnityEngine::Transform*>  slotXform) ;

/// @brief Method UpdateStaticLookupCaches, addr 0x583b21c, size 0x838, virtual false, abstract: false, final false
static inline void UpdateStaticLookupCaches() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPlayerInitialized() const;

constexpr ::System::Action*& __cordl_internal_get_OnPlayerInitialized() ;

constexpr ::System::Action* const& __cordl_internal_get_OnPlayerLeftZone() const;

constexpr ::System::Action*& __cordl_internal_get_OnPlayerLeftZone() ;

constexpr bool const& __cordl_internal_get__AdditionalDataInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__AdditionalDataInitialized_k__BackingField() ;

constexpr bool const& __cordl_internal_get__DidJoinWithItems_k__BackingField() const;

constexpr bool& __cordl_internal_get__DidJoinWithItems_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isSubscribed() const;

constexpr bool& __cordl_internal_get__isSubscribed() ;

constexpr int32_t const& __cordl_internal_get__lastSubscriptionCheck() const;

constexpr int32_t& __cordl_internal_get__lastSubscriptionCheck() ;

constexpr bool const& __cordl_internal_get_grabbingDisabled() const;

constexpr bool& __cordl_internal_get_grabbingDisabled() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_handTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_handTransforms() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHand() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_netGrabLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_netGrabLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_netImpulseLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_netImpulseLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_netSnapLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_netSnapLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_netStateLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_netStateLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_netThrowLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_netThrowLimiter() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_newJoinZoneLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_newJoinZoneLimiter() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHand() ;

constexpr ::ArrayW<::GlobalNamespace::GamePlayer_SlotData> const& __cordl_internal_get_slots() const;

constexpr ::ArrayW<::GlobalNamespace::GamePlayer_SlotData>& __cordl_internal_get_slots() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPointManager> const& __cordl_internal_get_snapPointManager() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfectionSnapPointManager>& __cordl_internal_get_snapPointManager() ;

constexpr void __cordl_internal_set_OnPlayerInitialized(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnPlayerLeftZone(::System::Action*  value) ;

constexpr void __cordl_internal_set__AdditionalDataInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DidJoinWithItems_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isSubscribed(bool  value) ;

constexpr void __cordl_internal_set__lastSubscriptionCheck(int32_t  value) ;

constexpr void __cordl_internal_set_grabbingDisabled(bool  value) ;

constexpr void __cordl_internal_set_handTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_netGrabLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_netImpulseLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_netSnapLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_netStateLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_netThrowLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_newJoinZoneLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_slots(::ArrayW<::GlobalNamespace::GamePlayer_SlotData>  value) ;

constexpr void __cordl_internal_set_snapPointManager(::UnityW<::GlobalNamespace::SuperInfectionSnapPointManager>  value) ;

/// @brief Method .ctor, addr 0x583ba54, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>> getStaticF_lookupCache_actorNum_to_gamePlayer() ;

static inline ::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>> getStaticF_lookupCache_rigInstanceId_to_gamePlayer() ;

static inline int32_t getStaticF_staticLookupCachesCount() ;

/// [CompilerGenerated]
/// @brief Method get_AdditionalDataInitialized, addr 0x5838324, size 0x8, virtual false, abstract: false, final false
inline bool get_AdditionalDataInitialized() ;

/// [CompilerGenerated]
/// @brief Method get_DidJoinWithItems, addr 0x5838314, size 0x8, virtual false, abstract: false, final false
inline bool get_DidJoinWithItems() ;

/// @brief Method get_IsSubscribed, addr 0x5838334, size 0x8c, virtual false, abstract: false, final false
inline bool get_IsSubscribed() ;

static inline void setStaticF_lookupCache_actorNum_to_gamePlayer(::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>  value) ;

static inline void setStaticF_lookupCache_rigInstanceId_to_gamePlayer(::ArrayW<::System::ValueTuple_2<int32_t,::UnityW<::GlobalNamespace::GamePlayer>>>  value) ;

static inline void setStaticF_staticLookupCachesCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_AdditionalDataInitialized, addr 0x583832c, size 0x8, virtual false, abstract: false, final false
inline void set_AdditionalDataInitialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DidJoinWithItems, addr 0x583831c, size 0x8, virtual false, abstract: false, final false
inline void set_DidJoinWithItems(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamePlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GamePlayer(GamePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamePlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamePlayer(GamePlayer const& ) = delete;

/// @brief Field GRAB_SLOT_FIRST offset 0xffffffff size 0x4
static constexpr int32_t  GRAB_SLOT_FIRST{static_cast<int32_t>(0x0)};

/// @brief Field GRAB_SLOT_LAST offset 0xffffffff size 0x4
static constexpr int32_t  GRAB_SLOT_LAST{static_cast<int32_t>(0x1)};

/// @brief Field INVALID_ACTOR_NUMBER offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_ACTOR_NUMBER{static_cast<int32_t>(0x80000000)};

/// @brief Field LEFT_HAND offset 0xffffffff size 0x4
static constexpr int32_t  LEFT_HAND{static_cast<int32_t>(0x0)};

/// @brief Field MAX_HANDS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_HANDS{static_cast<int32_t>(0x2)};

/// @brief Field RIGHT_HAND offset 0xffffffff size 0x4
static constexpr int32_t  RIGHT_HAND{static_cast<int32_t>(0x1)};

/// @brief Field SLOTS_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  SLOTS_COUNT{static_cast<int32_t>(0x4)};

/// @brief Field SNAP_SLOTS_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  SNAP_SLOTS_COUNT{static_cast<int32_t>(0x2)};

/// @brief Field SNAP_SLOTS_FIRST offset 0xffffffff size 0x4
static constexpr int32_t  SNAP_SLOTS_FIRST{static_cast<int32_t>(0x2)};

/// @brief Field SNAP_SLOTS_LAST offset 0xffffffff size 0x4
static constexpr int32_t  SNAP_SLOTS_LAST{static_cast<int32_t>(0x3)};

/// @brief Field SNAP_SLOT_HAND_L offset 0xffffffff size 0x4
static constexpr int32_t  SNAP_SLOT_HAND_L{static_cast<int32_t>(0x2)};

/// @brief Field SNAP_SLOT_HAND_R offset 0xffffffff size 0x4
static constexpr int32_t  SNAP_SLOT_HAND_R{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1783};

/// @brief Field _k_MATTO__USE_STATIC_CACHE offset 0xffffffff size 0x1
static constexpr bool  _k_MATTO__USE_STATIC_CACHE{false};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"[GamePlayer]  ERROR!!!  "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"[GamePlayer]  "};

/// @brief Field rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field leftHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHand;

/// @brief Field rightHand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHand;

/// @brief Field snapPointManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfectionSnapPointManager>  ___snapPointManager;

/// @brief Field handTransforms, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___handTransforms;

/// @brief Field slots, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GamePlayer_SlotData>  ___slots;

/// @brief Field newJoinZoneLimiter, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___newJoinZoneLimiter;

/// @brief Field netImpulseLimiter, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___netImpulseLimiter;

/// @brief Field netGrabLimiter, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___netGrabLimiter;

/// @brief Field netThrowLimiter, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___netThrowLimiter;

/// @brief Field netStateLimiter, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___netStateLimiter;

/// @brief Field netSnapLimiter, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___netSnapLimiter;

/// [CompilerGenerated]
/// @brief Field <DidJoinWithItems>k__BackingField, offset: 0x80, size: 0x1, def value: None
 bool  ____DidJoinWithItems_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AdditionalDataInitialized>k__BackingField, offset: 0x81, size: 0x1, def value: None
 bool  ____AdditionalDataInitialized_k__BackingField;

/// @brief Field _lastSubscriptionCheck, offset: 0x84, size: 0x4, def value: None
 int32_t  ____lastSubscriptionCheck;

/// @brief Field _isSubscribed, offset: 0x88, size: 0x1, def value: None
 bool  ____isSubscribed;

/// @brief Field OnPlayerInitialized, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___OnPlayerInitialized;

/// @brief Field OnPlayerLeftZone, offset: 0x98, size: 0x8, def value: None
 ::System::Action*  ___OnPlayerLeftZone;

/// @brief Field grabbingDisabled, offset: 0xa0, size: 0x1, def value: None
 bool  ___grabbingDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePlayer, ___rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___leftHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___rightHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___snapPointManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___handTransforms) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___slots) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___newJoinZoneLimiter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___netImpulseLimiter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___netGrabLimiter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___netThrowLimiter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___netStateLimiter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___netSnapLimiter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ____DidJoinWithItems_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ____AdditionalDataInitialized_k__BackingField) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ____lastSubscriptionCheck) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ____isSubscribed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___OnPlayerInitialized) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___OnPlayerLeftZone) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer, ___grabbingDisabled) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePlayer) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies GameEntityId, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GamePlayer/<IterateHeldAndSnappedItems>d__63
class CORDL_TYPE GamePlayer__IterateHeldAndSnappedItems_d__63 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_GameEntityId__get_Current)) ::GlobalNamespace::GameEntityId  System_Collections_Generic_IEnumerator_GameEntityId__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::GlobalNamespace::GameEntityId  __2__current;

/// @brief Field <>3__manager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__manager, put=__cordl_internal_set___3__manager)) ::UnityW<::GlobalNamespace::GameEntityManager>  __3__manager;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GamePlayer>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <i>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field manager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::GlobalNamespace::GameEntityManager>  manager;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x583be04, size 0x16c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<GameEntityId>.GetEnumerator, addr 0x583c00c, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>* System_Collections_Generic_IEnumerable_GameEntityId__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<GameEntityId>.get_Current, addr 0x583bf70, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::GameEntityId System_Collections_Generic_IEnumerator_GameEntityId__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x583c0c0, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x583bf78, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x583bfb0, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x583be00, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::GlobalNamespace::GameEntityId const& __cordl_internal_get___2__current() const;

constexpr ::GlobalNamespace::GameEntityId& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get___3__manager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get___3__manager() ;

constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GamePlayer>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get_manager() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::GlobalNamespace::GameEntityId  value) ;

constexpr void __cordl_internal_set___3__manager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GamePlayer>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_manager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5839aa0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GameEntityId>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GameEntityId_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GameEntityId>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GameEntityId_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayer__IterateHeldAndSnappedItems_d__63() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamePlayer__IterateHeldAndSnappedItems_d__63", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GamePlayer__IterateHeldAndSnappedItems_d__63(GamePlayer__IterateHeldAndSnappedItems_d__63 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamePlayer__IterateHeldAndSnappedItems_d__63", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamePlayer__IterateHeldAndSnappedItems_d__63(GamePlayer__IterateHeldAndSnappedItems_d__63 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1782};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityId  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x18, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GamePlayer>  _____4__this;

/// @brief Field manager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  ___manager;

/// @brief Field <>3__manager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  _____3__manager;

/// @brief Field <i>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63, _____l__initialThreadId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63, ___manager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63, _____3__manager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63, ____i_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedItems_d__63) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GamePlayer/<IterateHeldAndSnappedEntities>d__65
class CORDL_TYPE GamePlayer__IterateHeldAndSnappedEntities_d__65 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_GameEntity__get_Current)) ::UnityW<::GlobalNamespace::GameEntity>  System_Collections_Generic_IEnumerator_GameEntity__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::UnityW<::GlobalNamespace::GameEntity>  __2__current;

/// @brief Field <>3__ignoreEntitiesInManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__ignoreEntitiesInManager, put=__cordl_internal_set___3__ignoreEntitiesInManager)) ::UnityW<::GlobalNamespace::GameEntityManager>  __3__ignoreEntitiesInManager;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GamePlayer>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <i>5__2, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field ignoreEntitiesInManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ignoreEntitiesInManager, put=__cordl_internal_set_ignoreEntitiesInManager)) ::UnityW<::GlobalNamespace::GameEntityManager>  ignoreEntitiesInManager;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x583baf4, size 0x20c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<GameEntity>.GetEnumerator, addr 0x583bd48, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>* System_Collections_Generic_IEnumerable_GameEntity__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<GameEntity>.get_Current, addr 0x583bd00, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::GameEntity> System_Collections_Generic_IEnumerator_GameEntity__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x583bdfc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x583bd08, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x583bd40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x583baf0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get___3__ignoreEntitiesInManager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get___3__ignoreEntitiesInManager() ;

constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GamePlayer>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get_ignoreEntitiesInManager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get_ignoreEntitiesInManager() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set___3__ignoreEntitiesInManager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GamePlayer>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_ignoreEntitiesInManager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5839bcc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::GameEntity>>* i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__GameEntity__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::GameEntity>>* i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__GameEntity__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GamePlayer__IterateHeldAndSnappedEntities_d__65() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GamePlayer__IterateHeldAndSnappedEntities_d__65", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GamePlayer__IterateHeldAndSnappedEntities_d__65(GamePlayer__IterateHeldAndSnappedEntities_d__65 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GamePlayer__IterateHeldAndSnappedEntities_d__65", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GamePlayer__IterateHeldAndSnappedEntities_d__65(GamePlayer__IterateHeldAndSnappedEntities_d__65 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1781};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GamePlayer>  _____4__this;

/// @brief Field ignoreEntitiesInManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  ___ignoreEntitiesInManager;

/// @brief Field <>3__ignoreEntitiesInManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  _____3__ignoreEntitiesInManager;

/// @brief Field <i>5__2, offset: 0x40, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65, ___ignoreEntitiesInManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65, _____3__ignoreEntitiesInManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65, ____i_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GamePlayer__IterateHeldAndSnappedEntities_d__65) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
