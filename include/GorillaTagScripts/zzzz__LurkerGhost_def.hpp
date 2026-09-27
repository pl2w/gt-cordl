#pragma once
// IWYU pragma private; include "GorillaTagScripts/LurkerGhost.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_def.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_LurkerGhostData_def.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_ghostState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LurkerGhost)
namespace GlobalNamespace {
struct LurkerGhost_LurkerGhostData;
}
namespace GlobalNamespace {
struct LurkerGhost_ghostState;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class ThrowableSetDressing;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class ZoneBasedObject;
}
namespace GorillaTagScripts {
class LurkerGhost___c__DisplayClass57_0;
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
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class LurkerGhost;
}
namespace GorillaTagScripts {
class LurkerGhost___c__DisplayClass57_0;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::LurkerGhost*);
MARK_REF_T(::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::LurkerGhost*, "GorillaTagScripts", "LurkerGhost");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0*, "GorillaTagScripts", "LurkerGhost/<>c__DisplayClass57_0");
// [NetworkBehaviourWeaved(6)]
// Dependencies GorillaTagScripts.LurkerGhost::LurkerGhostData, GorillaTagScripts.LurkerGhost::ghostState, NetworkComponent, ShaderHashId, UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.Vector4, ZoneBasedObject
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.LurkerGhost
class CORDL_TYPE LurkerGhost : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using LurkerGhostData = ::GlobalNamespace::LurkerGhost_LurkerGhostData;

using ghostState = ::GlobalNamespace::LurkerGhost_ghostState;

using __c__DisplayClass57_0 = ::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0;

/// [Networked]
/// @brief [NetworkedWeaved(0, 6)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::LurkerGhost_LurkerGhostData  Data;

/// @brief Field HauntedMagicNumbers, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_HauntedMagicNumbers, put=__cordl_internal_set_HauntedMagicNumbers)) ::UnityEngine::Vector4  HauntedMagicNumbers;

/// @brief Field PossessionDuration, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_PossessionDuration, put=__cordl_internal_set_PossessionDuration)) float_t  PossessionDuration;

/// @brief Field SpookyMagicNumbers, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get_SpookyMagicNumbers, put=__cordl_internal_set_SpookyMagicNumbers)) ::UnityEngine::Vector3  SpookyMagicNumbers;

/// @brief Field TriggerHauntedObjects, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_TriggerHauntedObjects, put=__cordl_internal_set_TriggerHauntedObjects)) ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*  TriggerHauntedObjects;

/// @brief Field _BlackAndWhite, offset 0x1e0, size 0x10 
 __declspec(property(get=__cordl_internal_get__BlackAndWhite, put=__cordl_internal_set__BlackAndWhite)) ::GlobalNamespace::ShaderHashId  _BlackAndWhite;

/// @brief Field _Data, offset 0x20c, size 0x18 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::LurkerGhost_LurkerGhostData  _Data;

/// @brief Field audioSource, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bonesMeshRenderer, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonesMeshRenderer, put=__cordl_internal_set_bonesMeshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  bonesMeshRenderer;

/// @brief Field chargeSpeed, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_chargeSpeed, put=__cordl_internal_set_chargeSpeed)) float_t  chargeSpeed;

/// @brief Field cooldownDuration, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownDuration, put=__cordl_internal_set_cooldownDuration)) float_t  cooldownDuration;

/// @brief Field cooldownTimeRemaining, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownTimeRemaining, put=__cordl_internal_set_cooldownTimeRemaining)) float_t  cooldownTimeRemaining;

/// @brief Field currentIndex, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentRepeatHuntTimes, offset 0x184, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRepeatHuntTimes, put=__cordl_internal_set_currentRepeatHuntTimes)) int32_t  currentRepeatHuntTimes;

/// @brief Field currentState, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::LurkerGhost_ghostState  currentState;

/// @brief Field currentWaypoint, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentWaypoint, put=__cordl_internal_set_currentWaypoint)) ::UnityW<::UnityEngine::Transform>  currentWaypoint;

/// @brief Field hapticDuration, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field hauntNeighbors, offset 0x208, size 0x1 
 __declspec(property(get=__cordl_internal_get_hauntNeighbors, put=__cordl_internal_set_hauntNeighbors)) bool  hauntNeighbors;

/// @brief Field huntAudio, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_huntAudio, put=__cordl_internal_set_huntAudio)) ::UnityW<::UnityEngine::AudioClip>  huntAudio;

/// @brief Field huntedPassedTime, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_huntedPassedTime, put=__cordl_internal_set_huntedPassedTime)) float_t  huntedPassedTime;

/// @brief Field lastHauntedVRRig, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastHauntedVRRig, put=__cordl_internal_set_lastHauntedVRRig)) ::UnityW<::GlobalNamespace::VRRig>  lastHauntedVRRig;

/// @brief Field lastWaypointRegion, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastWaypointRegion, put=__cordl_internal_set_lastWaypointRegion)) ::UnityW<::GlobalNamespace::ZoneBasedObject>  lastWaypointRegion;

/// @brief Field maxCooldownDuration, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCooldownDuration, put=__cordl_internal_set_maxCooldownDuration)) float_t  maxCooldownDuration;

/// @brief Field maxHuntDistance, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHuntDistance, put=__cordl_internal_set_maxHuntDistance)) float_t  maxHuntDistance;

/// @brief Field maxRepeatHuntDistance, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRepeatHuntDistance, put=__cordl_internal_set_maxRepeatHuntDistance)) float_t  maxRepeatHuntDistance;

/// @brief Field maxRepeatHuntTimes, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRepeatHuntTimes, put=__cordl_internal_set_maxRepeatHuntTimes)) int32_t  maxRepeatHuntTimes;

/// @brief Field meshRenderer, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

/// @brief Field minCatchDistance, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_minCatchDistance, put=__cordl_internal_set_minCatchDistance)) float_t  minCatchDistance;

/// @brief Field nextTagTime, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextTagTime, put=__cordl_internal_set_nextTagTime)) float_t  nextTagTime;

/// @brief Field passingPlayer, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_passingPlayer, put=__cordl_internal_set_passingPlayer)) ::GlobalNamespace::NetPlayer*  passingPlayer;

/// @brief Field patrolAudio, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolAudio, put=__cordl_internal_set_patrolAudio)) ::UnityW<::UnityEngine::AudioClip>  patrolAudio;

/// @brief Field patrolSpeed, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolSpeed, put=__cordl_internal_set_patrolSpeed)) float_t  patrolSpeed;

/// @brief Field possessedAudio, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_possessedAudio, put=__cordl_internal_set_possessedAudio)) ::UnityW<::UnityEngine::AudioClip>  possessedAudio;

/// @brief Field possibleTargets, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_possibleTargets, put=__cordl_internal_set_possibleTargets)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  possibleTargets;

/// @brief Field scryableMaterial, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_scryableMaterial, put=__cordl_internal_set_scryableMaterial)) ::UnityW<::UnityEngine::Material>  scryableMaterial;

/// @brief Field scryableMaterialBones, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_scryableMaterialBones, put=__cordl_internal_set_scryableMaterialBones)) ::UnityW<::UnityEngine::Material>  scryableMaterialBones;

/// @brief Field scryingAngerAfterTimestamp, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_scryingAngerAfterTimestamp, put=__cordl_internal_set_scryingAngerAfterTimestamp)) float_t  scryingAngerAfterTimestamp;

/// @brief Field scryingAngerAngle, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_scryingAngerAngle, put=__cordl_internal_set_scryingAngerAngle)) float_t  scryingAngerAngle;

/// @brief Field scryingAngerDelay, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_scryingAngerDelay, put=__cordl_internal_set_scryingAngerDelay)) float_t  scryingAngerDelay;

/// @brief Field scryingGlass, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_scryingGlass, put=__cordl_internal_set_scryingGlass)) ::UnityW<::GlobalNamespace::ThrowableSetDressing>  scryingGlass;

/// @brief Field seekAheadDistance, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_seekAheadDistance, put=__cordl_internal_set_seekAheadDistance)) float_t  seekAheadDistance;

/// @brief Field seekCloseEnoughDistance, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_seekCloseEnoughDistance, put=__cordl_internal_set_seekCloseEnoughDistance)) float_t  seekCloseEnoughDistance;

/// @brief Field seekSpeed, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_seekSpeed, put=__cordl_internal_set_seekSpeed)) float_t  seekSpeed;

/// @brief Field sphereColliderRadius, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_sphereColliderRadius, put=__cordl_internal_set_sphereColliderRadius)) float_t  sphereColliderRadius;

/// @brief Field tagCoolDown, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagCoolDown, put=__cordl_internal_set_tagCoolDown)) float_t  tagCoolDown;

/// @brief Field targetPlayer, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Field targetPosition, offset 0x1bc, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPosition, put=__cordl_internal_set_targetPosition)) ::UnityEngine::Vector3  targetPosition;

/// @brief Field targetRotation, offset 0x1c8, size 0x10 
 __declspec(property(get=__cordl_internal_get_targetRotation, put=__cordl_internal_set_targetRotation)) ::UnityEngine::Quaternion  targetRotation;

/// @brief Field targetTransform, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTransform, put=__cordl_internal_set_targetTransform)) ::UnityW<::UnityEngine::Transform>  targetTransform;

/// @brief Field targetVRRig, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetVRRig, put=__cordl_internal_set_targetVRRig)) ::UnityW<::GlobalNamespace::VRRig>  targetVRRig;

/// @brief Field visibleMaterial, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_visibleMaterial, put=__cordl_internal_set_visibleMaterial)) ::UnityW<::UnityEngine::Material>  visibleMaterial;

/// @brief Field visibleMaterialBones, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_visibleMaterialBones, put=__cordl_internal_set_visibleMaterialBones)) ::UnityW<::UnityEngine::Material>  visibleMaterialBones;

/// @brief Field waypointRegions, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_waypointRegions, put=__cordl_internal_set_waypointRegions)) ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  waypointRegions;

/// @brief Field waypoints, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_waypoints, put=__cordl_internal_set_waypoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  waypoints;

/// @brief Field waypointsContainer, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_waypointsContainer, put=__cordl_internal_set_waypointsContainer)) ::UnityW<::UnityEngine::GameObject>  waypointsContainer;

/// @brief Method Awake, addr 0x5bcc074, size 0xb8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ChangeState, addr 0x5bcc6fc, size 0x35c, virtual false, abstract: false, final false
inline void ChangeState(::GlobalNamespace::LurkerGhost_ghostState  newState) ;

/// @brief Method ChargeAtPlayer, addr 0x5bce3bc, size 0x294, virtual false, abstract: false, final false
inline void ChargeAtPlayer() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5bcf2c4, size 0x68, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5bcf32c, size 0x68, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method HauntObjects, addr 0x5bce650, size 0x178, virtual false, abstract: false, final false
inline void HauntObjects() ;

/// @brief Method LateUpdate, addr 0x5bcca58, size 0x18, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTagScripts::LurkerGhost* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5bce7c8, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnOwnerChange, addr 0x5bcf118, size 0x9c, virtual true, abstract: false, final false
inline void OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Method Patrol, addr 0x5bcd23c, size 0x318, virtual false, abstract: false, final false
inline void Patrol() ;

/// @brief Method PickNextWaypoint, addr 0x5bcc1ac, size 0x550, virtual false, abstract: false, final false
inline void PickNextWaypoint() ;

/// @brief Method PickPlayer, addr 0x5bcd67c, size 0x600, virtual false, abstract: false, final false
inline bool PickPlayer(float_t  maxDistance) ;

/// @brief Method PickPlayer, addr 0x5bcdc7c, size 0x350, virtual false, abstract: false, final false
inline void PickPlayer(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method PlaySound, addr 0x5bcd554, size 0x128, virtual false, abstract: false, final false
inline void PlaySound(::UnityEngine::AudioClip*  clip, bool  loop) ;

/// @brief Method ReadDataFusion, addr 0x5bceaa8, size 0xdc, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5bcef80, size 0x198, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ReadDataShared, addr 0x5bcebc4, size 0x244, virtual false, abstract: false, final false
inline void ReadDataShared(::GlobalNamespace::LurkerGhost_ghostState  state, int32_t  index, int32_t  targetActorNumber, ::UnityEngine::Vector3  targetPos) ;

/// @brief Method SeekPlayer, addr 0x5bcdfd4, size 0x3e8, virtual false, abstract: false, final false
inline void SeekPlayer() ;

/// @brief Method Start, addr 0x5bcc12c, size 0x80, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateGhostVisibility, addr 0x5bcd11c, size 0x120, virtual false, abstract: false, final false
inline void UpdateGhostVisibility() ;

/// @brief Method UpdateState, addr 0x5bcca70, size 0x6ac, virtual false, abstract: false, final false
inline void UpdateState() ;

/// @brief Method WriteDataFusion, addr 0x5bce970, size 0xd4, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5bcee08, size 0x178, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_HauntedMagicNumbers() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_HauntedMagicNumbers() ;

constexpr float_t const& __cordl_internal_get_PossessionDuration() const;

constexpr float_t& __cordl_internal_get_PossessionDuration() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_SpookyMagicNumbers() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_SpookyMagicNumbers() ;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_TriggerHauntedObjects() const;

constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_TriggerHauntedObjects() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__BlackAndWhite() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__BlackAndWhite() ;

constexpr ::GlobalNamespace::LurkerGhost_LurkerGhostData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::LurkerGhost_LurkerGhostData& __cordl_internal_get__Data() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_bonesMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_bonesMeshRenderer() ;

constexpr float_t const& __cordl_internal_get_chargeSpeed() const;

constexpr float_t& __cordl_internal_get_chargeSpeed() ;

constexpr float_t const& __cordl_internal_get_cooldownDuration() const;

constexpr float_t& __cordl_internal_get_cooldownDuration() ;

constexpr float_t const& __cordl_internal_get_cooldownTimeRemaining() const;

constexpr float_t& __cordl_internal_get_cooldownTimeRemaining() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr int32_t const& __cordl_internal_get_currentRepeatHuntTimes() const;

constexpr int32_t& __cordl_internal_get_currentRepeatHuntTimes() ;

constexpr ::GlobalNamespace::LurkerGhost_ghostState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::LurkerGhost_ghostState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_currentWaypoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_currentWaypoint() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr bool const& __cordl_internal_get_hauntNeighbors() const;

constexpr bool& __cordl_internal_get_hauntNeighbors() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_huntAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_huntAudio() ;

constexpr float_t const& __cordl_internal_get_huntedPassedTime() const;

constexpr float_t& __cordl_internal_get_huntedPassedTime() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_lastHauntedVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_lastHauntedVRRig() ;

constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject> const& __cordl_internal_get_lastWaypointRegion() const;

constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject>& __cordl_internal_get_lastWaypointRegion() ;

constexpr float_t const& __cordl_internal_get_maxCooldownDuration() const;

constexpr float_t& __cordl_internal_get_maxCooldownDuration() ;

constexpr float_t const& __cordl_internal_get_maxHuntDistance() const;

constexpr float_t& __cordl_internal_get_maxHuntDistance() ;

constexpr float_t const& __cordl_internal_get_maxRepeatHuntDistance() const;

constexpr float_t& __cordl_internal_get_maxRepeatHuntDistance() ;

constexpr int32_t const& __cordl_internal_get_maxRepeatHuntTimes() const;

constexpr int32_t& __cordl_internal_get_maxRepeatHuntTimes() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr float_t const& __cordl_internal_get_minCatchDistance() const;

constexpr float_t& __cordl_internal_get_minCatchDistance() ;

constexpr float_t const& __cordl_internal_get_nextTagTime() const;

constexpr float_t& __cordl_internal_get_nextTagTime() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_passingPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_passingPlayer() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_patrolAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_patrolAudio() ;

constexpr float_t const& __cordl_internal_get_patrolSpeed() const;

constexpr float_t& __cordl_internal_get_patrolSpeed() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_possessedAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_possessedAudio() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_possibleTargets() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_possibleTargets() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_scryableMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_scryableMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_scryableMaterialBones() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_scryableMaterialBones() ;

constexpr float_t const& __cordl_internal_get_scryingAngerAfterTimestamp() const;

constexpr float_t& __cordl_internal_get_scryingAngerAfterTimestamp() ;

constexpr float_t const& __cordl_internal_get_scryingAngerAngle() const;

constexpr float_t& __cordl_internal_get_scryingAngerAngle() ;

constexpr float_t const& __cordl_internal_get_scryingAngerDelay() const;

constexpr float_t& __cordl_internal_get_scryingAngerDelay() ;

constexpr ::UnityW<::GlobalNamespace::ThrowableSetDressing> const& __cordl_internal_get_scryingGlass() const;

constexpr ::UnityW<::GlobalNamespace::ThrowableSetDressing>& __cordl_internal_get_scryingGlass() ;

constexpr float_t const& __cordl_internal_get_seekAheadDistance() const;

constexpr float_t& __cordl_internal_get_seekAheadDistance() ;

constexpr float_t const& __cordl_internal_get_seekCloseEnoughDistance() const;

constexpr float_t& __cordl_internal_get_seekCloseEnoughDistance() ;

constexpr float_t const& __cordl_internal_get_seekSpeed() const;

constexpr float_t& __cordl_internal_get_seekSpeed() ;

constexpr float_t const& __cordl_internal_get_sphereColliderRadius() const;

constexpr float_t& __cordl_internal_get_sphereColliderRadius() ;

constexpr float_t const& __cordl_internal_get_tagCoolDown() const;

constexpr float_t& __cordl_internal_get_tagCoolDown() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_targetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_targetRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_targetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_targetTransform() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetVRRig() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_visibleMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_visibleMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_visibleMaterialBones() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_visibleMaterialBones() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>> const& __cordl_internal_get_waypointRegions() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>& __cordl_internal_get_waypointRegions() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_waypoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_waypoints() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waypointsContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waypointsContainer() ;

constexpr void __cordl_internal_set_HauntedMagicNumbers(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_PossessionDuration(float_t  value) ;

constexpr void __cordl_internal_set_SpookyMagicNumbers(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_TriggerHauntedObjects(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__BlackAndWhite(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::LurkerGhost_LurkerGhostData  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bonesMeshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_chargeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_cooldownDuration(float_t  value) ;

constexpr void __cordl_internal_set_cooldownTimeRemaining(float_t  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentRepeatHuntTimes(int32_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::LurkerGhost_ghostState  value) ;

constexpr void __cordl_internal_set_currentWaypoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_hauntNeighbors(bool  value) ;

constexpr void __cordl_internal_set_huntAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_huntedPassedTime(float_t  value) ;

constexpr void __cordl_internal_set_lastHauntedVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_lastWaypointRegion(::UnityW<::GlobalNamespace::ZoneBasedObject>  value) ;

constexpr void __cordl_internal_set_maxCooldownDuration(float_t  value) ;

constexpr void __cordl_internal_set_maxHuntDistance(float_t  value) ;

constexpr void __cordl_internal_set_maxRepeatHuntDistance(float_t  value) ;

constexpr void __cordl_internal_set_maxRepeatHuntTimes(int32_t  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_minCatchDistance(float_t  value) ;

constexpr void __cordl_internal_set_nextTagTime(float_t  value) ;

constexpr void __cordl_internal_set_passingPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_patrolAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_patrolSpeed(float_t  value) ;

constexpr void __cordl_internal_set_possessedAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_possibleTargets(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_scryableMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_scryableMaterialBones(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_scryingAngerAfterTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_scryingAngerAngle(float_t  value) ;

constexpr void __cordl_internal_set_scryingAngerDelay(float_t  value) ;

constexpr void __cordl_internal_set_scryingGlass(::UnityW<::GlobalNamespace::ThrowableSetDressing>  value) ;

constexpr void __cordl_internal_set_seekAheadDistance(float_t  value) ;

constexpr void __cordl_internal_set_seekCloseEnoughDistance(float_t  value) ;

constexpr void __cordl_internal_set_seekSpeed(float_t  value) ;

constexpr void __cordl_internal_set_sphereColliderRadius(float_t  value) ;

constexpr void __cordl_internal_set_tagCoolDown(float_t  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_visibleMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_visibleMaterialBones(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_waypointRegions(::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  value) ;

constexpr void __cordl_internal_set_waypoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_waypointsContainer(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5bcf1b4, size 0x110, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5bce8a0, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::LurkerGhost_LurkerGhostData get_Data() ;

/// @brief Method set_Data, addr 0x5bce908, size 0x68, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::LurkerGhost_LurkerGhostData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LurkerGhost() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LurkerGhost", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LurkerGhost(LurkerGhost && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LurkerGhost", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LurkerGhost(LurkerGhost const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4000};

/// @brief Field patrolSpeed, offset: 0x9c, size: 0x4, def value: None
 float_t  ___patrolSpeed;

/// @brief Field seekSpeed, offset: 0xa0, size: 0x4, def value: None
 float_t  ___seekSpeed;

/// @brief Field chargeSpeed, offset: 0xa4, size: 0x4, def value: None
 float_t  ___chargeSpeed;

/// [Tooltip("Cooldown until the next time the ghost needs to hunt a new player")]
/// @brief Field cooldownDuration, offset: 0xa8, size: 0x4, def value: None
 float_t  ___cooldownDuration;

/// [Tooltip("Max Cooldown (randomized)")]
/// @brief Field maxCooldownDuration, offset: 0xac, size: 0x4, def value: None
 float_t  ___maxCooldownDuration;

/// [Tooltip("How long the possession effects should last")]
/// @brief Field PossessionDuration, offset: 0xb0, size: 0x4, def value: None
 float_t  ___PossessionDuration;

/// [Tooltip("Hunted objects within this radius will get triggered ")]
/// @brief Field sphereColliderRadius, offset: 0xb4, size: 0x4, def value: None
 float_t  ___sphereColliderRadius;

/// [Tooltip("Maximum distance to the possible player to get hunted")]
/// @brief Field maxHuntDistance, offset: 0xb8, size: 0x4, def value: None
 float_t  ___maxHuntDistance;

/// [Tooltip("Minimum distance from the player to start the possession effects")]
/// @brief Field minCatchDistance, offset: 0xbc, size: 0x4, def value: None
 float_t  ___minCatchDistance;

/// [Tooltip("Maximum distance to the possible player to get repeat hunted")]
/// @brief Field maxRepeatHuntDistance, offset: 0xc0, size: 0x4, def value: None
 float_t  ___maxRepeatHuntDistance;

/// [Tooltip("Maximum times the lurker can haunt a nearby player before going back on cooldown")]
/// @brief Field maxRepeatHuntTimes, offset: 0xc4, size: 0x4, def value: None
 int32_t  ___maxRepeatHuntTimes;

/// [Tooltip("Time in seconds before a haunted player can pass the lurker to another player by tagging")]
/// @brief Field tagCoolDown, offset: 0xc8, size: 0x4, def value: None
 float_t  ___tagCoolDown;

/// [Tooltip("UP & DOWN, IN & OUT")]
/// @brief Field SpookyMagicNumbers, offset: 0xcc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___SpookyMagicNumbers;

/// [Tooltip("SPIN, SPIN, SPIN, SPIN")]
/// @brief Field HauntedMagicNumbers, offset: 0xd8, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___HauntedMagicNumbers;

/// [Tooltip("Haptic vibration when haunted by the ghost")]
/// @brief Field hapticStrength, offset: 0xe8, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// @brief Field hapticDuration, offset: 0xec, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// @brief Field waypointsContainer, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waypointsContainer;

/// @brief Field waypointRegions, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  ___waypointRegions;

/// @brief Field lastWaypointRegion, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ZoneBasedObject>  ___lastWaypointRegion;

/// @brief Field waypoints, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___waypoints;

/// @brief Field currentWaypoint, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___currentWaypoint;

/// @brief Field visibleMaterial, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___visibleMaterial;

/// @brief Field scryableMaterial, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___scryableMaterial;

/// @brief Field visibleMaterialBones, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___visibleMaterialBones;

/// @brief Field scryableMaterialBones, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___scryableMaterialBones;

/// @brief Field meshRenderer, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field bonesMeshRenderer, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___bonesMeshRenderer;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field patrolAudio, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___patrolAudio;

/// @brief Field huntAudio, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___huntAudio;

/// @brief Field possessedAudio, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___possessedAudio;

/// @brief Field scryingGlass, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThrowableSetDressing>  ___scryingGlass;

/// @brief Field scryingAngerAngle, offset: 0x170, size: 0x4, def value: None
 float_t  ___scryingAngerAngle;

/// @brief Field scryingAngerDelay, offset: 0x174, size: 0x4, def value: None
 float_t  ___scryingAngerDelay;

/// @brief Field seekAheadDistance, offset: 0x178, size: 0x4, def value: None
 float_t  ___seekAheadDistance;

/// @brief Field seekCloseEnoughDistance, offset: 0x17c, size: 0x4, def value: None
 float_t  ___seekCloseEnoughDistance;

/// @brief Field scryingAngerAfterTimestamp, offset: 0x180, size: 0x4, def value: None
 float_t  ___scryingAngerAfterTimestamp;

/// @brief Field currentRepeatHuntTimes, offset: 0x184, size: 0x4, def value: None
 int32_t  ___currentRepeatHuntTimes;

/// @brief Field TriggerHauntedObjects, offset: 0x188, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*  ___TriggerHauntedObjects;

/// @brief Field currentIndex, offset: 0x190, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentState, offset: 0x194, size: 0x4, def value: None
 ::GlobalNamespace::LurkerGhost_ghostState  ___currentState;

/// @brief Field cooldownTimeRemaining, offset: 0x198, size: 0x4, def value: None
 float_t  ___cooldownTimeRemaining;

/// @brief Field possibleTargets, offset: 0x1a0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___possibleTargets;

/// @brief Field targetPlayer, offset: 0x1a8, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// @brief Field targetTransform, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___targetTransform;

/// @brief Field huntedPassedTime, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___huntedPassedTime;

/// @brief Field targetPosition, offset: 0x1bc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPosition;

/// @brief Field targetRotation, offset: 0x1c8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___targetRotation;

/// @brief Field targetVRRig, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetVRRig;

/// @brief Field _BlackAndWhite, offset: 0x1e0, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____BlackAndWhite;

/// @brief Field lastHauntedVRRig, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___lastHauntedVRRig;

/// @brief Field nextTagTime, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___nextTagTime;

/// @brief Field passingPlayer, offset: 0x200, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___passingPlayer;

/// [SerializeField]
/// @brief Field hauntNeighbors, offset: 0x208, size: 0x1, def value: None
 bool  ___hauntNeighbors;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 6)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0x20c, size: 0x18, def value: None
 ::GlobalNamespace::LurkerGhost_LurkerGhostData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___patrolSpeed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___seekSpeed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___chargeSpeed) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___cooldownDuration) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___maxCooldownDuration) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___PossessionDuration) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___sphereColliderRadius) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___maxHuntDistance) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___minCatchDistance) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___maxRepeatHuntDistance) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___maxRepeatHuntTimes) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___tagCoolDown) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___SpookyMagicNumbers) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___HauntedMagicNumbers) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___hapticStrength) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___hapticDuration) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___waypointsContainer) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___waypointRegions) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___lastWaypointRegion) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___waypoints) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___currentWaypoint) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___visibleMaterial) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___scryableMaterial) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___visibleMaterialBones) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___scryableMaterialBones) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___meshRenderer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___bonesMeshRenderer) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___audioSource) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___patrolAudio) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___huntAudio) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___possessedAudio) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___scryingGlass) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___scryingAngerAngle) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___scryingAngerDelay) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___seekAheadDistance) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___seekCloseEnoughDistance) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___scryingAngerAfterTimestamp) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___currentRepeatHuntTimes) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___TriggerHauntedObjects) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___currentIndex) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___currentState) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___cooldownTimeRemaining) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___possibleTargets) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___targetPlayer) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___targetTransform) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___huntedPassedTime) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___targetPosition) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___targetRotation) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___targetVRRig) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ____BlackAndWhite) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___lastHauntedVRRig) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___nextTagTime) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___passingPlayer) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ___hauntNeighbors) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LurkerGhost, ____Data) == 0x20c, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::LurkerGhost) == 0x228, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.LurkerGhost/<>c__DisplayClass57_0
class CORDL_TYPE LurkerGhost___c__DisplayClass57_0 : public ::System::Object {
public:
// Declarations
/// @brief Field player, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::GlobalNamespace::NetPlayer*  player;

static inline ::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0* New_ctor() ;

/// @brief Method <PickPlayer>b__0, addr 0x5bcf420, size 0x4c, virtual false, abstract: false, final false
inline bool _PickPlayer_b__0(::GlobalNamespace::RigContainer*  x) ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_player() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value) ;

/// @brief Method .ctor, addr 0x5bcdfcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LurkerGhost___c__DisplayClass57_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LurkerGhost___c__DisplayClass57_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LurkerGhost___c__DisplayClass57_0(LurkerGhost___c__DisplayClass57_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LurkerGhost___c__DisplayClass57_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LurkerGhost___c__DisplayClass57_0(LurkerGhost___c__DisplayClass57_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3999};

/// @brief Field player, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0, ___player) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaTagScripts
