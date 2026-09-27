#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntity)
namespace GlobalNamespace {
struct EHandedness;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntityManager;
}
namespace GlobalNamespace {
class GameEntity_EntityDestroyedEvent;
}
namespace GlobalNamespace {
class GameEntity_RendererSet;
}
namespace GlobalNamespace {
class GameEntity_StateChangedEvent;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameEntitySerialize;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct SnapJointType;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GameEntity_EntityDestroyedEvent;
}
namespace GlobalNamespace {
class GameEntity_RendererSet;
}
namespace GlobalNamespace {
class GameEntity_StateChangedEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameEntity*);
MARK_REF_T(::GlobalNamespace::GameEntity_EntityDestroyedEvent*);
MARK_REF_T(::GlobalNamespace::GameEntity_RendererSet*);
MARK_REF_T(::GlobalNamespace::GameEntity_StateChangedEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntity*, "", "GameEntity");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntity_EntityDestroyedEvent*, "", "GameEntity/EntityDestroyedEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntity_RendererSet*, "", "GameEntity/RendererSet");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntity_StateChangedEvent*, "", "GameEntity/StateChangedEvent");
// Dependencies GameEntityId, SnapJointType, UnityEngine.Component, UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntity
class CORDL_TYPE GameEntity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EntityDestroyedEvent = ::GlobalNamespace::GameEntity_EntityDestroyedEvent;

using RendererSet = ::GlobalNamespace::GameEntity_RendererSet;

using StateChangedEvent = ::GlobalNamespace::GameEntity_StateChangedEvent;

 __declspec(property(get=get_AttachedPlayerActorNr)) int32_t  AttachedPlayerActorNr;

 __declspec(property(get=get_EquippedHandXRNode)) ::UnityEngine::XR::XRNode  EquippedHandXRNode;

 __declspec(property(get=get_EquippedHandedness)) ::GlobalNamespace::EHandedness  EquippedHandedness;

 __declspec(property(get=get_EquippedSlotIndex)) int32_t  EquippedSlotIndex;

 __declspec(property(get=get_IsHeldOrSnappedByLocalPlayer)) bool  IsHeldOrSnappedByLocalPlayer;

 __declspec(property(get=get_IsScenePlaced, put=set_IsScenePlaced)) bool  IsScenePlaced;

 __declspec(property(get=get_IsSnappedToHand)) bool  IsSnappedToHand;

/// @brief Field LastTickTime, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastTickTime, put=__cordl_internal_set_LastTickTime)) float_t  LastTickTime;

/// @brief Field MinTimeBetweenTicks, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinTimeBetweenTicks, put=__cordl_internal_set_MinTimeBetweenTicks)) float_t  MinTimeBetweenTicks;

/// @brief Field OnAttached, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnAttached, put=__cordl_internal_set_OnAttached)) ::System::Action*  OnAttached;

/// @brief Field OnDetached, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDetached, put=__cordl_internal_set_OnDetached)) ::System::Action*  OnDetached;

/// @brief Field OnGrabbed, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabbed, put=__cordl_internal_set_OnGrabbed)) ::System::Action*  OnGrabbed;

/// @brief Field OnReleased, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReleased, put=__cordl_internal_set_OnReleased)) ::System::Action*  OnReleased;

/// @brief Field OnSnapped, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSnapped, put=__cordl_internal_set_OnSnapped)) ::System::Action*  OnSnapped;

/// @brief Field OnStateChanged, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStateChanged, put=__cordl_internal_set_OnStateChanged)) ::GlobalNamespace::GameEntity_StateChangedEvent*  OnStateChanged;

/// @brief Field OnTick, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTick, put=__cordl_internal_set_OnTick)) ::System::Action*  OnTick;

/// @brief Field OnUnsnapped, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUnsnapped, put=__cordl_internal_set_OnUnsnapped)) ::System::Action*  OnUnsnapped;

/// @brief Field <IsScenePlaced>k__BackingField, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsScenePlaced_k__BackingField, put=__cordl_internal_set__IsScenePlaced_k__BackingField)) bool  _IsScenePlaced_k__BackingField;

/// @brief Field <attachedToEntityId>k__BackingField, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__attachedToEntityId_k__BackingField, put=__cordl_internal_set__attachedToEntityId_k__BackingField)) ::GlobalNamespace::GameEntityId  _attachedToEntityId_k__BackingField;

/// @brief Field <createData>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__createData_k__BackingField, put=__cordl_internal_set__createData_k__BackingField)) int64_t  _createData_k__BackingField;

/// @brief Field <createdByEntityId>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__createdByEntityId_k__BackingField, put=__cordl_internal_set__createdByEntityId_k__BackingField)) ::GlobalNamespace::GameEntityId  _createdByEntityId_k__BackingField;

/// @brief Field _grabbableRenderers, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbableRenderers, put=__cordl_internal_set__grabbableRenderers)) ::GlobalNamespace::GameEntity_RendererSet*  _grabbableRenderers;

/// @brief Field <heldByActorNumber>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__heldByActorNumber_k__BackingField, put=__cordl_internal_set__heldByActorNumber_k__BackingField)) int32_t  _heldByActorNumber_k__BackingField;

/// @brief Field <heldByHandIndex>k__BackingField, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__heldByHandIndex_k__BackingField, put=__cordl_internal_set__heldByHandIndex_k__BackingField)) int32_t  _heldByHandIndex_k__BackingField;

/// @brief Field <id>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__id_k__BackingField, put=__cordl_internal_set__id_k__BackingField)) ::GlobalNamespace::GameEntityId  _id_k__BackingField;

/// @brief Field <lastHeldByActorNumber>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHeldByActorNumber_k__BackingField, put=__cordl_internal_set__lastHeldByActorNumber_k__BackingField)) int32_t  _lastHeldByActorNumber_k__BackingField;

/// @brief Field _meshFilters, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshFilters, put=__cordl_internal_set__meshFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  _meshFilters;

/// @brief Field <onlyGrabActorNumber>k__BackingField, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__onlyGrabActorNumber_k__BackingField, put=__cordl_internal_set__onlyGrabActorNumber_k__BackingField)) int32_t  _onlyGrabActorNumber_k__BackingField;

/// @brief Field <snappedByActorNumber>k__BackingField, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__snappedByActorNumber_k__BackingField, put=__cordl_internal_set__snappedByActorNumber_k__BackingField)) int32_t  _snappedByActorNumber_k__BackingField;

/// @brief Field <snappedJoint>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__snappedJoint_k__BackingField, put=__cordl_internal_set__snappedJoint_k__BackingField)) ::GlobalNamespace::SnapJointType  _snappedJoint_k__BackingField;

/// @brief Field <typeId>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__typeId_k__BackingField, put=__cordl_internal_set__typeId_k__BackingField)) int32_t  _typeId_k__BackingField;

/// @brief [DebugReadout]
 __declspec(property(get=get_attachedToEntityId, put=set_attachedToEntityId)) ::GlobalNamespace::GameEntityId  attachedToEntityId;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field builtInEntities, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_builtInEntities, put=__cordl_internal_set_builtInEntities)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  builtInEntities;

/// @brief Field canHoldingPlayerUpdateState, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_canHoldingPlayerUpdateState, put=__cordl_internal_set_canHoldingPlayerUpdateState)) bool  canHoldingPlayerUpdateState;

/// @brief Field canLastHoldingPlayerUpdateState, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_canLastHoldingPlayerUpdateState, put=__cordl_internal_set_canLastHoldingPlayerUpdateState)) bool  canLastHoldingPlayerUpdateState;

/// @brief Field canSnapPlayerUpdateState, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get_canSnapPlayerUpdateState, put=__cordl_internal_set_canSnapPlayerUpdateState)) bool  canSnapPlayerUpdateState;

/// @brief Field catchSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_catchSound, put=__cordl_internal_set_catchSound)) ::UnityW<::UnityEngine::AudioClip>  catchSound;

/// @brief Field catchSoundVolume, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchSoundVolume, put=__cordl_internal_set_catchSoundVolume)) float_t  catchSoundVolume;

/// @brief [DebugReadout]
 __declspec(property(get=get_createData, put=set_createData)) int64_t  createData;

/// @brief [DebugReadout]
 __declspec(property(get=get_createdByEntityId, put=set_createdByEntityId)) ::GlobalNamespace::GameEntityId  createdByEntityId;

/// @brief Field entityComponents, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityComponents, put=__cordl_internal_set_entityComponents)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityComponent*>*  entityComponents;

/// @brief Field entitySerialize, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_entitySerialize, put=__cordl_internal_set_entitySerialize)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntitySerialize*>*  entitySerialize;

/// @brief Field gravityController, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityController, put=__cordl_internal_set_gravityController)) ::UnityW<::GorillaTag::Gravity::MonkeGravityController>  gravityController;

/// @brief [DebugReadout]
 __declspec(property(get=get_heldByActorNumber, put=set_heldByActorNumber)) int32_t  heldByActorNumber;

/// @brief [DebugReadout]
 __declspec(property(get=get_heldByHandIndex, put=set_heldByHandIndex)) int32_t  heldByHandIndex;

/// @brief [DebugReadout]
 __declspec(property(get=get_id, put=set_id)) ::GlobalNamespace::GameEntityId  id;

/// @brief Field ignoreObjectGrabRenderers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ignoreObjectGrabRenderers, put=__cordl_internal_set_ignoreObjectGrabRenderers)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ignoreObjectGrabRenderers;

/// @brief Field isBuiltIn, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBuiltIn, put=__cordl_internal_set_isBuiltIn)) bool  isBuiltIn;

/// @brief [DebugReadout]
 __declspec(property(get=get_lastHeldByActorNumber, put=set_lastHeldByActorNumber)) int32_t  lastHeldByActorNumber;

/// @brief Field manager, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::GlobalNamespace::GameEntityManager>  manager;

/// @brief Field onEntityDestroyed, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEntityDestroyed, put=__cordl_internal_set_onEntityDestroyed)) ::GlobalNamespace::GameEntity_EntityDestroyedEvent*  onEntityDestroyed;

/// @brief [DebugReadout]
 __declspec(property(get=get_onlyGrabActorNumber, put=set_onlyGrabActorNumber)) int32_t  onlyGrabActorNumber;

/// @brief Field pickupRangeFromSurface, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_pickupRangeFromSurface, put=__cordl_internal_set_pickupRangeFromSurface)) float_t  pickupRangeFromSurface;

/// @brief Field pickupable, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_pickupable, put=__cordl_internal_set_pickupable)) bool  pickupable;

/// @brief Field rigidBody, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field scenePlacedHomePosition, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get_scenePlacedHomePosition, put=__cordl_internal_set_scenePlacedHomePosition)) ::UnityEngine::Vector3  scenePlacedHomePosition;

/// @brief Field scenePlacedHomeRotation, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_scenePlacedHomeRotation, put=__cordl_internal_set_scenePlacedHomeRotation)) ::UnityEngine::Quaternion  scenePlacedHomeRotation;

/// @brief Field scenePlacedHomeScale, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_scenePlacedHomeScale, put=__cordl_internal_set_scenePlacedHomeScale)) float_t  scenePlacedHomeScale;

/// @brief Field scenePlacedInitialized, offset 0xca, size 0x1 
 __declspec(property(get=__cordl_internal_get_scenePlacedInitialized, put=__cordl_internal_set_scenePlacedInitialized)) bool  scenePlacedInitialized;

/// @brief Field shouldDestroyOnZoneExit, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldDestroyOnZoneExit, put=__cordl_internal_set_shouldDestroyOnZoneExit)) bool  shouldDestroyOnZoneExit;

/// @brief [DebugReadout]
 __declspec(property(get=get_slotIndex)) int32_t  slotIndex;

/// @brief Field snapSound, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_snapSound, put=__cordl_internal_set_snapSound)) ::UnityW<::UnityEngine::AudioClip>  snapSound;

/// @brief Field snapSoundVolume, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapSoundVolume, put=__cordl_internal_set_snapSoundVolume)) float_t  snapSoundVolume;

/// @brief [DebugReadout]
 __declspec(property(get=get_snappedByActorNumber, put=set_snappedByActorNumber)) int32_t  snappedByActorNumber;

/// @brief [DebugReadout]
 __declspec(property(get=get_snappedJoint, put=set_snappedJoint)) ::GlobalNamespace::SnapJointType  snappedJoint;

/// @brief Field state, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int64_t  state;

/// @brief Field throwSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwSound, put=__cordl_internal_set_throwSound)) ::UnityW<::UnityEngine::AudioClip>  throwSound;

/// @brief Field throwSoundVolume, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwSoundVolume, put=__cordl_internal_set_throwSoundVolume)) float_t  throwSoundVolume;

/// @brief [DebugReadout]
 __declspec(property(get=get_typeId, put=set_typeId)) int32_t  typeId;

/// @brief Method Awake, addr 0x5812660, size 0x3ac, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Create, addr 0x5812a98, size 0x120, virtual false, abstract: false, final false
inline void Create(::GlobalNamespace::GameEntityManager*  manager, int32_t  netId, int32_t  typeId) ;

/// @brief Method Get, addr 0x5813b3c, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GameEntity> Get(::UnityEngine::Collider*  collider) ;

/// @brief Method GetGrabbableRenderers, addr 0x5812ee0, size 0x540, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntity_RendererSet* GetGrabbableRenderers() ;

/// @brief Method GetLastHeldByPlayerForEntityID, addr 0x5813d8c, size 0x98, virtual false, abstract: false, final false
inline int32_t GetLastHeldByPlayerForEntityID(::GlobalNamespace::GameEntityId  gameEntityId) ;

/// @brief Method GetNetId, addr 0x5813b1c, size 0x20, virtual false, abstract: false, final false
inline int32_t GetNetId() ;

/// @brief Method GetNetId, addr 0x5813b00, size 0x1c, virtual false, abstract: false, final false
inline int32_t GetNetId(::GlobalNamespace::GameEntityId  gameEntityId) ;

/// @brief Method GetState, addr 0x5813848, size 0x8, virtual false, abstract: false, final false
inline int64_t GetState() ;

/// @brief Method GetVelocity, addr 0x58134fc, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVelocity() ;

/// @brief Method Init, addr 0x5812bb8, size 0x190, virtual false, abstract: false, final false
inline void Init(int64_t  createData, int32_t  createdByEntityNetId) ;

/// @brief Method IsAttachedToPlayer, addr 0x5813eac, size 0x68, virtual false, abstract: false, final false
inline bool IsAttachedToPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method IsAuthority, addr 0x580d28c, size 0x20, virtual false, abstract: false, final false
inline bool IsAuthority() ;

/// @brief Method IsGamePlayer, addr 0x58137d4, size 0x74, virtual false, abstract: false, final false
inline bool IsGamePlayer(::UnityEngine::Collider*  collider) ;

/// @brief Method IsHeld, addr 0x5813d7c, size 0x10, virtual false, abstract: false, final false
inline bool IsHeld() ;

/// @brief Method IsHeldByLocalPlayer, addr 0x5813c50, size 0x88, virtual false, abstract: false, final false
inline bool IsHeldByLocalPlayer() ;

/// @brief Method IsSnappedByLocalPlayer, addr 0x5813cd8, size 0x88, virtual false, abstract: false, final false
inline bool IsSnappedByLocalPlayer() ;

/// @brief Method IsValidToMigrate, addr 0x581387c, size 0x1c, virtual false, abstract: false, final false
inline bool IsValidToMigrate() ;

/// @brief Method MigrateHeldBy, addr 0x5813ae0, size 0x10, virtual false, abstract: false, final false
inline void MigrateHeldBy(int32_t  actorNumber) ;

/// @brief Method MigrateSnappedBy, addr 0x5813af0, size 0x10, virtual false, abstract: false, final false
inline void MigrateSnappedBy(int32_t  actorNumber) ;

/// @brief Method MigrateToEntityManager, addr 0x58139dc, size 0x104, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId MigrateToEntityManager(::GlobalNamespace::GameEntityManager*  newManager) ;

static inline ::GlobalNamespace::GameEntity* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5812d48, size 0x198, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayCatchFx, addr 0x58135b8, size 0xb4, virtual false, abstract: false, final false
inline void PlayCatchFx() ;

/// @brief Method PlaySnapFx, addr 0x5813720, size 0xb4, virtual false, abstract: false, final false
inline void PlaySnapFx() ;

/// @brief Method PlayThrowFx, addr 0x581366c, size 0xb4, virtual false, abstract: false, final false
inline void PlayThrowFx() ;

/// @brief Method RequestState, addr 0x5813860, size 0x1c, virtual false, abstract: false, final false
inline void RequestState(::GlobalNamespace::GameEntityId  id, int64_t  newState) ;

/// @brief Method RequestState, addr 0x5813850, size 0x10, virtual false, abstract: false, final false
inline void RequestState(int64_t  newState) ;

/// @brief Method SetState, addr 0x5813898, size 0x144, virtual false, abstract: false, final false
inline void SetState(int64_t  newState) ;

/// @brief Method Start, addr 0x5812a0c, size 0x8c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method WasLastHeldByLocalPlayer, addr 0x5813e24, size 0x88, virtual false, abstract: false, final false
inline bool WasLastHeldByLocalPlayer() ;

/// [CompilerGenerated]
/// @brief Method <GetGrabbableRenderers>g__RemoveNotOwnedComponents|103_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void _GetGrabbableRenderers_g__RemoveNotOwnedComponents_103_0(::System::Collections::Generic::List_1<T>*  components) ;

constexpr float_t const& __cordl_internal_get_LastTickTime() const;

constexpr float_t& __cordl_internal_get_LastTickTime() ;

constexpr float_t const& __cordl_internal_get_MinTimeBetweenTicks() const;

constexpr float_t& __cordl_internal_get_MinTimeBetweenTicks() ;

constexpr ::System::Action* const& __cordl_internal_get_OnAttached() const;

constexpr ::System::Action*& __cordl_internal_get_OnAttached() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDetached() const;

constexpr ::System::Action*& __cordl_internal_get_OnDetached() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGrabbed() const;

constexpr ::System::Action*& __cordl_internal_get_OnGrabbed() ;

constexpr ::System::Action* const& __cordl_internal_get_OnReleased() const;

constexpr ::System::Action*& __cordl_internal_get_OnReleased() ;

constexpr ::System::Action* const& __cordl_internal_get_OnSnapped() const;

constexpr ::System::Action*& __cordl_internal_get_OnSnapped() ;

constexpr ::GlobalNamespace::GameEntity_StateChangedEvent* const& __cordl_internal_get_OnStateChanged() const;

constexpr ::GlobalNamespace::GameEntity_StateChangedEvent*& __cordl_internal_get_OnStateChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_OnTick() const;

constexpr ::System::Action*& __cordl_internal_get_OnTick() ;

constexpr ::System::Action* const& __cordl_internal_get_OnUnsnapped() const;

constexpr ::System::Action*& __cordl_internal_get_OnUnsnapped() ;

constexpr bool const& __cordl_internal_get__IsScenePlaced_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsScenePlaced_k__BackingField() ;

constexpr ::GlobalNamespace::GameEntityId const& __cordl_internal_get__attachedToEntityId_k__BackingField() const;

constexpr ::GlobalNamespace::GameEntityId& __cordl_internal_get__attachedToEntityId_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__createData_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__createData_k__BackingField() ;

constexpr ::GlobalNamespace::GameEntityId const& __cordl_internal_get__createdByEntityId_k__BackingField() const;

constexpr ::GlobalNamespace::GameEntityId& __cordl_internal_get__createdByEntityId_k__BackingField() ;

constexpr ::GlobalNamespace::GameEntity_RendererSet* const& __cordl_internal_get__grabbableRenderers() const;

constexpr ::GlobalNamespace::GameEntity_RendererSet*& __cordl_internal_get__grabbableRenderers() ;

constexpr int32_t const& __cordl_internal_get__heldByActorNumber_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__heldByActorNumber_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__heldByHandIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__heldByHandIndex_k__BackingField() ;

constexpr ::GlobalNamespace::GameEntityId const& __cordl_internal_get__id_k__BackingField() const;

constexpr ::GlobalNamespace::GameEntityId& __cordl_internal_get__id_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__lastHeldByActorNumber_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__lastHeldByActorNumber_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* const& __cordl_internal_get__meshFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*& __cordl_internal_get__meshFilters() ;

constexpr int32_t const& __cordl_internal_get__onlyGrabActorNumber_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__onlyGrabActorNumber_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__snappedByActorNumber_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__snappedByActorNumber_k__BackingField() ;

constexpr ::GlobalNamespace::SnapJointType const& __cordl_internal_get__snappedJoint_k__BackingField() const;

constexpr ::GlobalNamespace::SnapJointType& __cordl_internal_get__snappedJoint_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__typeId_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__typeId_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_builtInEntities() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_builtInEntities() ;

constexpr bool const& __cordl_internal_get_canHoldingPlayerUpdateState() const;

constexpr bool& __cordl_internal_get_canHoldingPlayerUpdateState() ;

constexpr bool const& __cordl_internal_get_canLastHoldingPlayerUpdateState() const;

constexpr bool& __cordl_internal_get_canLastHoldingPlayerUpdateState() ;

constexpr bool const& __cordl_internal_get_canSnapPlayerUpdateState() const;

constexpr bool& __cordl_internal_get_canSnapPlayerUpdateState() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_catchSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_catchSound() ;

constexpr float_t const& __cordl_internal_get_catchSoundVolume() const;

constexpr float_t& __cordl_internal_get_catchSoundVolume() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityComponent*>* const& __cordl_internal_get_entityComponents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityComponent*>*& __cordl_internal_get_entityComponents() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntitySerialize*>* const& __cordl_internal_get_entitySerialize() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntitySerialize*>*& __cordl_internal_get_entitySerialize() ;

constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController> const& __cordl_internal_get_gravityController() const;

constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController>& __cordl_internal_get_gravityController() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_ignoreObjectGrabRenderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_ignoreObjectGrabRenderers() ;

constexpr bool const& __cordl_internal_get_isBuiltIn() const;

constexpr bool& __cordl_internal_get_isBuiltIn() ;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& __cordl_internal_get_manager() ;

constexpr ::GlobalNamespace::GameEntity_EntityDestroyedEvent* const& __cordl_internal_get_onEntityDestroyed() const;

constexpr ::GlobalNamespace::GameEntity_EntityDestroyedEvent*& __cordl_internal_get_onEntityDestroyed() ;

constexpr float_t const& __cordl_internal_get_pickupRangeFromSurface() const;

constexpr float_t& __cordl_internal_get_pickupRangeFromSurface() ;

constexpr bool const& __cordl_internal_get_pickupable() const;

constexpr bool& __cordl_internal_get_pickupable() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_scenePlacedHomePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_scenePlacedHomePosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_scenePlacedHomeRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_scenePlacedHomeRotation() ;

constexpr float_t const& __cordl_internal_get_scenePlacedHomeScale() const;

constexpr float_t& __cordl_internal_get_scenePlacedHomeScale() ;

constexpr bool const& __cordl_internal_get_scenePlacedInitialized() const;

constexpr bool& __cordl_internal_get_scenePlacedInitialized() ;

constexpr bool const& __cordl_internal_get_shouldDestroyOnZoneExit() const;

constexpr bool& __cordl_internal_get_shouldDestroyOnZoneExit() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_snapSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_snapSound() ;

constexpr float_t const& __cordl_internal_get_snapSoundVolume() const;

constexpr float_t& __cordl_internal_get_snapSoundVolume() ;

constexpr int64_t const& __cordl_internal_get_state() const;

constexpr int64_t& __cordl_internal_get_state() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_throwSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_throwSound() ;

constexpr float_t const& __cordl_internal_get_throwSoundVolume() const;

constexpr float_t& __cordl_internal_get_throwSoundVolume() ;

constexpr void __cordl_internal_set_LastTickTime(float_t  value) ;

constexpr void __cordl_internal_set_MinTimeBetweenTicks(float_t  value) ;

constexpr void __cordl_internal_set_OnAttached(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnDetached(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnGrabbed(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnReleased(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnSnapped(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStateChanged(::GlobalNamespace::GameEntity_StateChangedEvent*  value) ;

constexpr void __cordl_internal_set_OnTick(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnUnsnapped(::System::Action*  value) ;

constexpr void __cordl_internal_set__IsScenePlaced_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__attachedToEntityId_k__BackingField(::GlobalNamespace::GameEntityId  value) ;

constexpr void __cordl_internal_set__createData_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__createdByEntityId_k__BackingField(::GlobalNamespace::GameEntityId  value) ;

constexpr void __cordl_internal_set__grabbableRenderers(::GlobalNamespace::GameEntity_RendererSet*  value) ;

constexpr void __cordl_internal_set__heldByActorNumber_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__heldByHandIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__id_k__BackingField(::GlobalNamespace::GameEntityId  value) ;

constexpr void __cordl_internal_set__lastHeldByActorNumber_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__meshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value) ;

constexpr void __cordl_internal_set__onlyGrabActorNumber_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__snappedByActorNumber_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__snappedJoint_k__BackingField(::GlobalNamespace::SnapJointType  value) ;

constexpr void __cordl_internal_set__typeId_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_builtInEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_canHoldingPlayerUpdateState(bool  value) ;

constexpr void __cordl_internal_set_canLastHoldingPlayerUpdateState(bool  value) ;

constexpr void __cordl_internal_set_canSnapPlayerUpdateState(bool  value) ;

constexpr void __cordl_internal_set_catchSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_catchSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_entityComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityComponent*>*  value) ;

constexpr void __cordl_internal_set_entitySerialize(::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntitySerialize*>*  value) ;

constexpr void __cordl_internal_set_gravityController(::UnityW<::GorillaTag::Gravity::MonkeGravityController>  value) ;

constexpr void __cordl_internal_set_ignoreObjectGrabRenderers(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_isBuiltIn(bool  value) ;

constexpr void __cordl_internal_set_manager(::UnityW<::GlobalNamespace::GameEntityManager>  value) ;

constexpr void __cordl_internal_set_onEntityDestroyed(::GlobalNamespace::GameEntity_EntityDestroyedEvent*  value) ;

constexpr void __cordl_internal_set_pickupRangeFromSurface(float_t  value) ;

constexpr void __cordl_internal_set_pickupable(bool  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_scenePlacedHomePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_scenePlacedHomeRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_scenePlacedHomeScale(float_t  value) ;

constexpr void __cordl_internal_set_scenePlacedInitialized(bool  value) ;

constexpr void __cordl_internal_set_shouldDestroyOnZoneExit(bool  value) ;

constexpr void __cordl_internal_set_snapSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_snapSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_state(int64_t  value) ;

constexpr void __cordl_internal_set_throwSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_throwSoundVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x5813f48, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnStateChanged, addr 0x58123f0, size 0x9c, virtual false, abstract: false, final false
inline void add_OnStateChanged(::GlobalNamespace::GameEntity_StateChangedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_onEntityDestroyed, addr 0x5812528, size 0x9c, virtual false, abstract: false, final false
inline void add_onEntityDestroyed(::GlobalNamespace::GameEntity_EntityDestroyedEvent*  value) ;

/// @brief Method get_AttachedPlayerActorNr, addr 0x5813d60, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_AttachedPlayerActorNr() ;

/// @brief Method get_EquippedHandXRNode, addr 0x58118dc, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::XR::XRNode get_EquippedHandXRNode() ;

/// @brief Method get_EquippedHandedness, addr 0x5813f14, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::EHandedness get_EquippedHandedness() ;

/// @brief Method get_EquippedSlotIndex, addr 0x5811800, size 0x34, virtual false, abstract: false, final false
inline int32_t get_EquippedSlotIndex() ;

/// @brief Method get_IsHeldOrSnappedByLocalPlayer, addr 0x5811834, size 0x94, virtual false, abstract: false, final false
inline bool get_IsHeldOrSnappedByLocalPlayer() ;

/// [CompilerGenerated]
/// @brief Method get_IsScenePlaced, addr 0x58123e0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsScenePlaced() ;

/// @brief Method get_IsSnappedToHand, addr 0x58118c8, size 0x14, virtual false, abstract: false, final false
inline bool get_IsSnappedToHand() ;

/// [CompilerGenerated]
/// @brief Method get_attachedToEntityId, addr 0x58123d0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId get_attachedToEntityId() ;

/// [CompilerGenerated]
/// @brief Method get_createData, addr 0x581231c, size 0x8, virtual false, abstract: false, final false
inline int64_t get_createData() ;

/// [CompilerGenerated]
/// @brief Method get_createdByEntityId, addr 0x581232c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId get_createdByEntityId() ;

/// [CompilerGenerated]
/// @brief Method get_heldByActorNumber, addr 0x581233c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_heldByActorNumber() ;

/// [CompilerGenerated]
/// @brief Method get_heldByHandIndex, addr 0x58123a0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_heldByHandIndex() ;

/// [CompilerGenerated]
/// @brief Method get_id, addr 0x58122fc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameEntityId get_id() ;

/// [CompilerGenerated]
/// @brief Method get_lastHeldByActorNumber, addr 0x58123b0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_lastHeldByActorNumber() ;

/// [CompilerGenerated]
/// @brief Method get_onlyGrabActorNumber, addr 0x58123c0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_onlyGrabActorNumber() ;

/// @brief Method get_slotIndex, addr 0x581235c, size 0x34, virtual false, abstract: false, final false
inline int32_t get_slotIndex() ;

/// [CompilerGenerated]
/// @brief Method get_snappedByActorNumber, addr 0x581234c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_snappedByActorNumber() ;

/// [CompilerGenerated]
/// @brief Method get_snappedJoint, addr 0x5812390, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SnapJointType get_snappedJoint() ;

/// [CompilerGenerated]
/// @brief Method get_typeId, addr 0x581230c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_typeId() ;

/// [CompilerGenerated]
/// @brief Method remove_OnStateChanged, addr 0x581248c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnStateChanged(::GlobalNamespace::GameEntity_StateChangedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_onEntityDestroyed, addr 0x58125c4, size 0x9c, virtual false, abstract: false, final false
inline void remove_onEntityDestroyed(::GlobalNamespace::GameEntity_EntityDestroyedEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsScenePlaced, addr 0x58123e8, size 0x8, virtual false, abstract: false, final false
inline void set_IsScenePlaced(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_attachedToEntityId, addr 0x58123d8, size 0x8, virtual false, abstract: false, final false
inline void set_attachedToEntityId(::GlobalNamespace::GameEntityId  value) ;

/// [CompilerGenerated]
/// @brief Method set_createData, addr 0x5812324, size 0x8, virtual false, abstract: false, final false
inline void set_createData(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_createdByEntityId, addr 0x5812334, size 0x8, virtual false, abstract: false, final false
inline void set_createdByEntityId(::GlobalNamespace::GameEntityId  value) ;

/// [CompilerGenerated]
/// @brief Method set_heldByActorNumber, addr 0x5812344, size 0x8, virtual false, abstract: false, final false
inline void set_heldByActorNumber(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_heldByHandIndex, addr 0x58123a8, size 0x8, virtual false, abstract: false, final false
inline void set_heldByHandIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_id, addr 0x5812304, size 0x8, virtual false, abstract: false, final false
inline void set_id(::GlobalNamespace::GameEntityId  value) ;

/// [CompilerGenerated]
/// @brief Method set_lastHeldByActorNumber, addr 0x58123b8, size 0x8, virtual false, abstract: false, final false
inline void set_lastHeldByActorNumber(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_onlyGrabActorNumber, addr 0x58123c8, size 0x8, virtual false, abstract: false, final false
inline void set_onlyGrabActorNumber(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_snappedByActorNumber, addr 0x5812354, size 0x8, virtual false, abstract: false, final false
inline void set_snappedByActorNumber(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_snappedJoint, addr 0x5812398, size 0x8, virtual false, abstract: false, final false
inline void set_snappedJoint(::GlobalNamespace::SnapJointType  value) ;

/// [CompilerGenerated]
/// @brief Method set_typeId, addr 0x5812314, size 0x8, virtual false, abstract: false, final false
inline void set_typeId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntity(GameEntity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntity(GameEntity const& ) = delete;

/// @brief Field Invalid offset 0xffffffff size 0x4
static constexpr int32_t  Invalid{static_cast<int32_t>(0xffffffff)};

/// @brief Field ScenePlacedTypeId offset 0xffffffff size 0x4
static constexpr int32_t  ScenePlacedTypeId{static_cast<int32_t>(0x80000001)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1734};

/// [CompilerGenerated]
/// @brief Field <id>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityId  ____id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <typeId>k__BackingField, offset: 0x24, size: 0x4, def value: None
 int32_t  ____typeId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <createData>k__BackingField, offset: 0x28, size: 0x8, def value: None
 int64_t  ____createData_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <createdByEntityId>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityId  ____createdByEntityId_k__BackingField;

/// @brief Field builtInEntities, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___builtInEntities;

/// @brief Field isBuiltIn, offset: 0x40, size: 0x1, def value: None
 bool  ___isBuiltIn;

/// @brief Field pickupable, offset: 0x41, size: 0x1, def value: None
 bool  ___pickupable;

/// @brief Field pickupRangeFromSurface, offset: 0x44, size: 0x4, def value: None
 float_t  ___pickupRangeFromSurface;

/// [Tooltip("Renderers on these objects are ignored when determining grab bounds")]
/// @brief Field ignoreObjectGrabRenderers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___ignoreObjectGrabRenderers;

/// @brief Field canHoldingPlayerUpdateState, offset: 0x50, size: 0x1, def value: None
 bool  ___canHoldingPlayerUpdateState;

/// @brief Field canLastHoldingPlayerUpdateState, offset: 0x51, size: 0x1, def value: None
 bool  ___canLastHoldingPlayerUpdateState;

/// @brief Field canSnapPlayerUpdateState, offset: 0x52, size: 0x1, def value: None
 bool  ___canSnapPlayerUpdateState;

/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field catchSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___catchSound;

/// @brief Field catchSoundVolume, offset: 0x68, size: 0x4, def value: None
 float_t  ___catchSoundVolume;

/// @brief Field throwSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___throwSound;

/// @brief Field throwSoundVolume, offset: 0x78, size: 0x4, def value: None
 float_t  ___throwSoundVolume;

/// @brief Field snapSound, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___snapSound;

/// @brief Field snapSoundVolume, offset: 0x88, size: 0x4, def value: None
 float_t  ___snapSoundVolume;

/// @brief Field rigidBody, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// [SerializeField]
/// @brief Field gravityController, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Gravity::MonkeGravityController>  ___gravityController;

/// [CompilerGenerated]
/// @brief Field <heldByActorNumber>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____heldByActorNumber_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <snappedByActorNumber>k__BackingField, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____snappedByActorNumber_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <snappedJoint>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::SnapJointType  ____snappedJoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <heldByHandIndex>k__BackingField, offset: 0xac, size: 0x4, def value: None
 int32_t  ____heldByHandIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <lastHeldByActorNumber>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____lastHeldByActorNumber_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <onlyGrabActorNumber>k__BackingField, offset: 0xb4, size: 0x4, def value: None
 int32_t  ____onlyGrabActorNumber_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <attachedToEntityId>k__BackingField, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::GameEntityId  ____attachedToEntityId_k__BackingField;

/// @brief Field manager, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntityManager>  ___manager;

/// @brief Field shouldDestroyOnZoneExit, offset: 0xc8, size: 0x1, def value: None
 bool  ___shouldDestroyOnZoneExit;

/// [CompilerGenerated]
/// @brief Field <IsScenePlaced>k__BackingField, offset: 0xc9, size: 0x1, def value: None
 bool  ____IsScenePlaced_k__BackingField;

/// @brief Field scenePlacedInitialized, offset: 0xca, size: 0x1, def value: None
 bool  ___scenePlacedInitialized;

/// @brief Field scenePlacedHomePosition, offset: 0xcc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___scenePlacedHomePosition;

/// @brief Field scenePlacedHomeRotation, offset: 0xd8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___scenePlacedHomeRotation;

/// @brief Field scenePlacedHomeScale, offset: 0xe8, size: 0x4, def value: None
 float_t  ___scenePlacedHomeScale;

/// @brief Field OnGrabbed, offset: 0xf0, size: 0x8, def value: None
 ::System::Action*  ___OnGrabbed;

/// @brief Field OnReleased, offset: 0xf8, size: 0x8, def value: None
 ::System::Action*  ___OnReleased;

/// @brief Field OnSnapped, offset: 0x100, size: 0x8, def value: None
 ::System::Action*  ___OnSnapped;

/// @brief Field OnUnsnapped, offset: 0x108, size: 0x8, def value: None
 ::System::Action*  ___OnUnsnapped;

/// @brief Field OnAttached, offset: 0x110, size: 0x8, def value: None
 ::System::Action*  ___OnAttached;

/// @brief Field OnDetached, offset: 0x118, size: 0x8, def value: None
 ::System::Action*  ___OnDetached;

/// @brief Field OnTick, offset: 0x120, size: 0x8, def value: None
 ::System::Action*  ___OnTick;

/// @brief Field MinTimeBetweenTicks, offset: 0x128, size: 0x4, def value: None
 float_t  ___MinTimeBetweenTicks;

/// @brief Field LastTickTime, offset: 0x12c, size: 0x4, def value: None
 float_t  ___LastTickTime;

/// [CompilerGenerated]
/// @brief Field OnStateChanged, offset: 0x130, size: 0x8, def value: None
 ::GlobalNamespace::GameEntity_StateChangedEvent*  ___OnStateChanged;

/// [CompilerGenerated]
/// @brief Field onEntityDestroyed, offset: 0x138, size: 0x8, def value: None
 ::GlobalNamespace::GameEntity_EntityDestroyedEvent*  ___onEntityDestroyed;

/// @brief Field state, offset: 0x140, size: 0x8, def value: None
 int64_t  ___state;

/// @brief Field entityComponents, offset: 0x148, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityComponent*>*  ___entityComponents;

/// @brief Field entitySerialize, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntitySerialize*>*  ___entitySerialize;

/// @brief Field _grabbableRenderers, offset: 0x158, size: 0x8, def value: None
 ::GlobalNamespace::GameEntity_RendererSet*  ____grabbableRenderers;

/// @brief Field _meshFilters, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  ____meshFilters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntity, ____id_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____typeId_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____createData_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____createdByEntityId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___builtInEntities) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___isBuiltIn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___pickupable) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___pickupRangeFromSurface) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___ignoreObjectGrabRenderers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___canHoldingPlayerUpdateState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___canLastHoldingPlayerUpdateState) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___canSnapPlayerUpdateState) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___catchSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___catchSoundVolume) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___throwSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___throwSoundVolume) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___snapSound) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___snapSoundVolume) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___rigidBody) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___gravityController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____heldByActorNumber_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____snappedByActorNumber_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____snappedJoint_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____heldByHandIndex_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____lastHeldByActorNumber_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____onlyGrabActorNumber_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____attachedToEntityId_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___manager) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___shouldDestroyOnZoneExit) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____IsScenePlaced_k__BackingField) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___scenePlacedInitialized) == 0xca, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___scenePlacedHomePosition) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___scenePlacedHomeRotation) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___scenePlacedHomeScale) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___OnGrabbed) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___OnReleased) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___OnSnapped) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___OnUnsnapped) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___OnAttached) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___OnDetached) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___OnTick) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___MinTimeBetweenTicks) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___LastTickTime) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___OnStateChanged) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___onEntityDestroyed) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___state) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___entityComponents) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ___entitySerialize) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____grabbableRenderers) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity, ____meshFilters) == 0x160, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntity) == 0x168, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntity/EntityDestroyedEvent
class CORDL_TYPE GameEntity_EntityDestroyedEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x58141c0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::GameEntity*  entity, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x58141e0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x58141ac, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::GameEntity*  entity) ;

static inline ::GlobalNamespace::GameEntity_EntityDestroyedEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x58140a4, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntity_EntityDestroyedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntity_EntityDestroyedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntity_EntityDestroyedEvent(GameEntity_EntityDestroyedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntity_EntityDestroyedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntity_EntityDestroyedEvent(GameEntity_EntityDestroyedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1733};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameEntity_EntityDestroyedEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntity/StateChangedEvent
class CORDL_TYPE GameEntity_StateChangedEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x581401c, size 0x7c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int64_t  prevState, int64_t  nextState, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5814098, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5814008, size 0x14, virtual true, abstract: false, final false
inline void Invoke(int64_t  prevState, int64_t  nextState) ;

static inline ::GlobalNamespace::GameEntity_StateChangedEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5813f68, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntity_StateChangedEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntity_StateChangedEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntity_StateChangedEvent(GameEntity_StateChangedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntity_StateChangedEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntity_StateChangedEvent(GameEntity_StateChangedEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1732};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameEntity_StateChangedEvent) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntity/RendererSet
class CORDL_TYPE GameEntity_RendererSet : public ::System::Object {
public:
// Declarations
/// @brief Field renderers, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::MeshRenderer>>>*  renderers;

/// @brief Field skinnedRenderers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedRenderers, put=__cordl_internal_set_skinnedRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*  skinnedRenderers;

static inline ::GlobalNamespace::GameEntity_RendererSet* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::MeshRenderer>>>* const& __cordl_internal_get_renderers() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::MeshRenderer>>>*& __cordl_internal_get_renderers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>* const& __cordl_internal_get_skinnedRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*& __cordl_internal_get_skinnedRenderers() ;

constexpr void __cordl_internal_set_renderers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::MeshRenderer>>>*  value) ;

constexpr void __cordl_internal_set_skinnedRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*  value) ;

/// @brief Method .ctor, addr 0x5813420, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntity_RendererSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntity_RendererSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntity_RendererSet(GameEntity_RendererSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntity_RendererSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntity_RendererSet(GameEntity_RendererSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1731};

/// [TupleElementNames(new[] { "filter", "renderer" })]
/// @brief Field renderers, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::MeshRenderer>>>*  ___renderers;

/// @brief Field skinnedRenderers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*  ___skinnedRenderers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntity_RendererSet, ___renderers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntity_RendererSet, ___skinnedRenderers) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntity_RendererSet) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
