#pragma once
// IWYU pragma private; include "GlobalNamespace/WanderingGhost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableSetDressing_def.hpp"
#include "GlobalNamespace/zzzz__WanderingGhost_Waypoint_def.hpp"
#include "GlobalNamespace/zzzz__WanderingGhost_ghostState_def.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WanderingGhost)
namespace GlobalNamespace {
struct WanderingGhost_Waypoint;
}
namespace GlobalNamespace {
struct WanderingGhost_ghostState;
}
namespace GlobalNamespace {
class ZoneBasedObject;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class WanderingGhost;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WanderingGhost*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WanderingGhost*, "", "WanderingGhost");
// [NetworkBehaviourWeaved(1)]
// Dependencies NetworkComponent, ThrowableSetDressing, UnityEngine.AudioClip, UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.Vector3, WanderingGhost::Waypoint, WanderingGhost::ghostState, ZoneBasedObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: WanderingGhost
class CORDL_TYPE WanderingGhost : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using Waypoint = ::GlobalNamespace::WanderingGhost_Waypoint;

using ghostState = ::GlobalNamespace::WanderingGhost_ghostState;

/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::WanderingGhost_ghostState  Data;

/// @brief Field TriggerHauntedObjects, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerHauntedObjects, put=__cordl_internal_set_TriggerHauntedObjects)) ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*  TriggerHauntedObjects;

/// @brief Field _Data, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::WanderingGhost_ghostState  _Data;

/// @brief Field allFlowers, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_allFlowers, put=__cordl_internal_set_allFlowers)) ::ArrayW<::UnityW<::GlobalNamespace::ThrowableSetDressing>>  allFlowers;

/// @brief Field appearAudio, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_appearAudio, put=__cordl_internal_set_appearAudio)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  appearAudio;

/// @brief Field audioSource, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field currentState, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::WanderingGhost_ghostState  currentState;

/// @brief Field currentWaypoint, offset 0x100, size 0x10 
 __declspec(property(get=__cordl_internal_get_currentWaypoint, put=__cordl_internal_set_currentWaypoint)) ::GlobalNamespace::WanderingGhost_Waypoint  currentWaypoint;

/// @brief Field debugForceWaypointRegion, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugForceWaypointRegion, put=__cordl_internal_set_debugForceWaypointRegion)) ::StringW  debugForceWaypointRegion;

/// @brief Field flowerDisabledPosition, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_flowerDisabledPosition, put=__cordl_internal_set_flowerDisabledPosition)) ::UnityEngine::Vector3  flowerDisabledPosition;

/// @brief Field flowerGroundMask, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_flowerGroundMask, put=__cordl_internal_set_flowerGroundMask)) ::UnityEngine::LayerMask  flowerGroundMask;

/// @brief Field flowerSpawnDuration, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_flowerSpawnDuration, put=__cordl_internal_set_flowerSpawnDuration)) float_t  flowerSpawnDuration;

/// @brief Field flowerSpawnRadius, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_flowerSpawnRadius, put=__cordl_internal_set_flowerSpawnRadius)) float_t  flowerSpawnRadius;

/// @brief Field hitColliders, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitColliders, put=__cordl_internal_set_hitColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  hitColliders;

/// @brief Field hoverDrag, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverDrag, put=__cordl_internal_set_hoverDrag)) float_t  hoverDrag;

/// @brief Field hoverRandomForce, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverRandomForce, put=__cordl_internal_set_hoverRandomForce)) float_t  hoverRandomForce;

/// @brief Field hoverRectifyForce, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverRectifyForce, put=__cordl_internal_set_hoverRectifyForce)) float_t  hoverRectifyForce;

/// @brief Field hoverVelocity, offset 0x150, size 0xc 
 __declspec(property(get=__cordl_internal_get_hoverVelocity, put=__cordl_internal_set_hoverVelocity)) ::UnityEngine::Vector3  hoverVelocity;

/// @brief Field idlePassedTime, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_idlePassedTime, put=__cordl_internal_set_idlePassedTime)) float_t  idlePassedTime;

/// @brief Field idleStayDuration, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_idleStayDuration, put=__cordl_internal_set_idleStayDuration)) float_t  idleStayDuration;

/// @brief Field idleVolume, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_idleVolume, put=__cordl_internal_set_idleVolume)) float_t  idleVolume;

/// @brief Field lastWaypointRegion, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastWaypointRegion, put=__cordl_internal_set_lastWaypointRegion)) ::UnityW<::GlobalNamespace::ZoneBasedObject>  lastWaypointRegion;

/// @brief Field mrenderer, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mrenderer, put=__cordl_internal_set_mrenderer)) ::UnityW<::UnityEngine::MeshRenderer>  mrenderer;

/// @brief Field patrolAudio, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolAudio, put=__cordl_internal_set_patrolAudio)) ::UnityW<::UnityEngine::AudioClip>  patrolAudio;

/// @brief Field patrolSpeed, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolSpeed, put=__cordl_internal_set_patrolSpeed)) float_t  patrolSpeed;

/// @brief Field patrolVolume, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolVolume, put=__cordl_internal_set_patrolVolume)) float_t  patrolVolume;

/// @brief Field scryableMaterial, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_scryableMaterial, put=__cordl_internal_set_scryableMaterial)) ::UnityW<::UnityEngine::Material>  scryableMaterial;

/// @brief Field sphereColliderRadius, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_sphereColliderRadius, put=__cordl_internal_set_sphereColliderRadius)) float_t  sphereColliderRadius;

/// @brief Field visibleMaterial, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_visibleMaterial, put=__cordl_internal_set_visibleMaterial)) ::UnityW<::UnityEngine::Material>  visibleMaterial;

/// @brief Field waypointRegions, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_waypointRegions, put=__cordl_internal_set_waypointRegions)) ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  waypointRegions;

/// @brief Field waypoints, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_waypoints, put=__cordl_internal_set_waypoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost_Waypoint>*  waypoints;

/// @brief Field waypointsContainer, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_waypointsContainer, put=__cordl_internal_set_waypointsContainer)) ::UnityW<::UnityEngine::GameObject>  waypointsContainer;

/// @brief Method ChangeState, addr 0x5a119f4, size 0x190, virtual false, abstract: false, final false
inline void ChangeState(::GlobalNamespace::WanderingGhost_ghostState  newState) ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5a13004, size 0x20, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5a13024, size 0x24, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method DelayedStart, addr 0x5a1144c, size 0x64, virtual false, abstract: false, final false
inline void DelayedStart() ;

/// @brief Method HauntObjects, addr 0x5a12a74, size 0x178, virtual false, abstract: false, final false
inline void HauntObjects() ;

/// @brief Method LateUpdate, addr 0x5a11b84, size 0x234, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MaybeHideGhost, addr 0x5a12510, size 0x170, virtual false, abstract: false, final false
inline bool MaybeHideGhost() ;

static inline ::GlobalNamespace::WanderingGhost* New_ctor() ;

/// @brief Method OnOwnerChange, addr 0x5a12e9c, size 0x9c, virtual true, abstract: false, final false
inline void OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Method Patrol, addr 0x5a12200, size 0x310, virtual false, abstract: false, final false
inline void Patrol() ;

/// @brief Method PickNextWaypoint, addr 0x5a114b0, size 0x544, virtual false, abstract: false, final false
inline void PickNextWaypoint() ;

/// @brief Method ReadDataFusion, addr 0x5a12cac, size 0x34, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5a12db4, size 0xe8, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataShared, addr 0x5a12ce0, size 0x18, virtual false, abstract: false, final false
inline void ReadDataShared(::GlobalNamespace::WanderingGhost_ghostState  state) ;

/// @brief Method SpawnFlowerNearby, addr 0x5a12680, size 0x3f4, virtual false, abstract: false, final false
inline void SpawnFlowerNearby() ;

/// @brief Method Start, addr 0x5a11350, size 0xfc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateState, addr 0x5a11db8, size 0x210, virtual false, abstract: false, final false
inline void UpdateState() ;

/// @brief Method WriteDataFusion, addr 0x5a12ca4, size 0x8, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5a12cf8, size 0xbc, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_TriggerHauntedObjects() const;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_TriggerHauntedObjects() ;

constexpr ::GlobalNamespace::WanderingGhost_ghostState const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::WanderingGhost_ghostState& __cordl_internal_get__Data() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ThrowableSetDressing>> const& __cordl_internal_get_allFlowers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ThrowableSetDressing>>& __cordl_internal_get_allFlowers() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_appearAudio() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_appearAudio() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::GlobalNamespace::WanderingGhost_ghostState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::WanderingGhost_ghostState& __cordl_internal_get_currentState() ;

constexpr ::GlobalNamespace::WanderingGhost_Waypoint const& __cordl_internal_get_currentWaypoint() const;

constexpr ::GlobalNamespace::WanderingGhost_Waypoint& __cordl_internal_get_currentWaypoint() ;

constexpr ::StringW const& __cordl_internal_get_debugForceWaypointRegion() const;

constexpr ::StringW& __cordl_internal_get_debugForceWaypointRegion() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_flowerDisabledPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_flowerDisabledPosition() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_flowerGroundMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_flowerGroundMask() ;

constexpr float_t const& __cordl_internal_get_flowerSpawnDuration() const;

constexpr float_t& __cordl_internal_get_flowerSpawnDuration() ;

constexpr float_t const& __cordl_internal_get_flowerSpawnRadius() const;

constexpr float_t& __cordl_internal_get_flowerSpawnRadius() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_hitColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_hitColliders() ;

constexpr float_t const& __cordl_internal_get_hoverDrag() const;

constexpr float_t& __cordl_internal_get_hoverDrag() ;

constexpr float_t const& __cordl_internal_get_hoverRandomForce() const;

constexpr float_t& __cordl_internal_get_hoverRandomForce() ;

constexpr float_t const& __cordl_internal_get_hoverRectifyForce() const;

constexpr float_t& __cordl_internal_get_hoverRectifyForce() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_hoverVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_hoverVelocity() ;

constexpr float_t const& __cordl_internal_get_idlePassedTime() const;

constexpr float_t& __cordl_internal_get_idlePassedTime() ;

constexpr float_t const& __cordl_internal_get_idleStayDuration() const;

constexpr float_t& __cordl_internal_get_idleStayDuration() ;

constexpr float_t const& __cordl_internal_get_idleVolume() const;

constexpr float_t& __cordl_internal_get_idleVolume() ;

constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject> const& __cordl_internal_get_lastWaypointRegion() const;

constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject>& __cordl_internal_get_lastWaypointRegion() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_mrenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_mrenderer() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_patrolAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_patrolAudio() ;

constexpr float_t const& __cordl_internal_get_patrolSpeed() const;

constexpr float_t& __cordl_internal_get_patrolSpeed() ;

constexpr float_t const& __cordl_internal_get_patrolVolume() const;

constexpr float_t& __cordl_internal_get_patrolVolume() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_scryableMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_scryableMaterial() ;

constexpr float_t const& __cordl_internal_get_sphereColliderRadius() const;

constexpr float_t& __cordl_internal_get_sphereColliderRadius() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_visibleMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_visibleMaterial() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>> const& __cordl_internal_get_waypointRegions() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>& __cordl_internal_get_waypointRegions() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost_Waypoint>* const& __cordl_internal_get_waypoints() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost_Waypoint>*& __cordl_internal_get_waypoints() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waypointsContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waypointsContainer() ;

constexpr void __cordl_internal_set_TriggerHauntedObjects(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::WanderingGhost_ghostState  value) ;

constexpr void __cordl_internal_set_allFlowers(::ArrayW<::UnityW<::GlobalNamespace::ThrowableSetDressing>>  value) ;

constexpr void __cordl_internal_set_appearAudio(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::WanderingGhost_ghostState  value) ;

constexpr void __cordl_internal_set_currentWaypoint(::GlobalNamespace::WanderingGhost_Waypoint  value) ;

constexpr void __cordl_internal_set_debugForceWaypointRegion(::StringW  value) ;

constexpr void __cordl_internal_set_flowerDisabledPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_flowerGroundMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_flowerSpawnDuration(float_t  value) ;

constexpr void __cordl_internal_set_flowerSpawnRadius(float_t  value) ;

constexpr void __cordl_internal_set_hitColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_hoverDrag(float_t  value) ;

constexpr void __cordl_internal_set_hoverRandomForce(float_t  value) ;

constexpr void __cordl_internal_set_hoverRectifyForce(float_t  value) ;

constexpr void __cordl_internal_set_hoverVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_idlePassedTime(float_t  value) ;

constexpr void __cordl_internal_set_idleStayDuration(float_t  value) ;

constexpr void __cordl_internal_set_idleVolume(float_t  value) ;

constexpr void __cordl_internal_set_lastWaypointRegion(::UnityW<::GlobalNamespace::ZoneBasedObject>  value) ;

constexpr void __cordl_internal_set_mrenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_patrolAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_patrolSpeed(float_t  value) ;

constexpr void __cordl_internal_set_patrolVolume(float_t  value) ;

constexpr void __cordl_internal_set_scryableMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_sphereColliderRadius(float_t  value) ;

constexpr void __cordl_internal_set_visibleMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_waypointRegions(::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  value) ;

constexpr void __cordl_internal_set_waypoints(::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost_Waypoint>*  value) ;

constexpr void __cordl_internal_set_waypointsContainer(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5a12f38, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5a12bec, size 0x5c, virtual false, abstract: false, final false
inline ::GlobalNamespace::WanderingGhost_ghostState get_Data() ;

/// @brief Method set_Data, addr 0x5a12c48, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::WanderingGhost_ghostState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WanderingGhost() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WanderingGhost", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WanderingGhost(WanderingGhost && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WanderingGhost", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WanderingGhost(WanderingGhost const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2784};

/// @brief Field maxColliders offset 0xffffffff size 0x4
static constexpr int32_t  maxColliders{static_cast<int32_t>(0xa)};

/// @brief Field patrolSpeed, offset: 0x9c, size: 0x4, def value: None
 float_t  ___patrolSpeed;

/// @brief Field idleStayDuration, offset: 0xa0, size: 0x4, def value: None
 float_t  ___idleStayDuration;

/// @brief Field sphereColliderRadius, offset: 0xa4, size: 0x4, def value: None
 float_t  ___sphereColliderRadius;

/// @brief Field allFlowers, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ThrowableSetDressing>>  ___allFlowers;

/// @brief Field flowerDisabledPosition, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___flowerDisabledPosition;

/// @brief Field flowerSpawnRadius, offset: 0xbc, size: 0x4, def value: None
 float_t  ___flowerSpawnRadius;

/// @brief Field flowerSpawnDuration, offset: 0xc0, size: 0x4, def value: None
 float_t  ___flowerSpawnDuration;

/// @brief Field flowerGroundMask, offset: 0xc4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___flowerGroundMask;

/// @brief Field mrenderer, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___mrenderer;

/// @brief Field visibleMaterial, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___visibleMaterial;

/// @brief Field scryableMaterial, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___scryableMaterial;

/// @brief Field waypointsContainer, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waypointsContainer;

/// @brief Field waypointRegions, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  ___waypointRegions;

/// @brief Field lastWaypointRegion, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneBasedObject>  ___lastWaypointRegion;

/// @brief Field waypoints, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::WanderingGhost_Waypoint>*  ___waypoints;

/// @brief Field currentWaypoint, offset: 0x100, size: 0x10, def value: None
 ::GlobalNamespace::WanderingGhost_Waypoint  ___currentWaypoint;

/// @brief Field debugForceWaypointRegion, offset: 0x110, size: 0x8, def value: None
 ::StringW  ___debugForceWaypointRegion;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field appearAudio, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___appearAudio;

/// @brief Field idleVolume, offset: 0x128, size: 0x4, def value: None
 float_t  ___idleVolume;

/// @brief Field patrolAudio, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___patrolAudio;

/// @brief Field patrolVolume, offset: 0x138, size: 0x4, def value: None
 float_t  ___patrolVolume;

/// @brief Field currentState, offset: 0x13c, size: 0x4, def value: None
 ::GlobalNamespace::WanderingGhost_ghostState  ___currentState;

/// @brief Field idlePassedTime, offset: 0x140, size: 0x4, def value: None
 float_t  ___idlePassedTime;

/// @brief Field TriggerHauntedObjects, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*  ___TriggerHauntedObjects;

/// @brief Field hoverVelocity, offset: 0x150, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___hoverVelocity;

/// @brief Field hoverRectifyForce, offset: 0x15c, size: 0x4, def value: None
 float_t  ___hoverRectifyForce;

/// @brief Field hoverRandomForce, offset: 0x160, size: 0x4, def value: None
 float_t  ___hoverRandomForce;

/// @brief Field hoverDrag, offset: 0x164, size: 0x4, def value: None
 float_t  ___hoverDrag;

/// @brief Field hitColliders, offset: 0x168, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___hitColliders;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0x170, size: 0x4, def value: None
 ::GlobalNamespace::WanderingGhost_ghostState  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___patrolSpeed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___idleStayDuration) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___sphereColliderRadius) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___allFlowers) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___flowerDisabledPosition) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___flowerSpawnRadius) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___flowerSpawnDuration) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___flowerGroundMask) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___mrenderer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___visibleMaterial) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___scryableMaterial) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___waypointsContainer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___waypointRegions) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___lastWaypointRegion) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___waypoints) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___currentWaypoint) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___debugForceWaypointRegion) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___audioSource) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___appearAudio) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___idleVolume) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___patrolAudio) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___patrolVolume) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___currentState) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___idlePassedTime) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___TriggerHauntedObjects) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___hoverVelocity) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___hoverRectifyForce) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___hoverRandomForce) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___hoverDrag) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ___hitColliders) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WanderingGhost, ____Data) == 0x170, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WanderingGhost) == 0x178, "Size mismatch!");

} // namespace end def GlobalNamespace
