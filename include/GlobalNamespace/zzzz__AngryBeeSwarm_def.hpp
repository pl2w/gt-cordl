#pragma once
// IWYU pragma private; include "GlobalNamespace/AngryBeeSwarm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AngryBeeSwarm_ChaseState_def.hpp"
#include "GlobalNamespace/zzzz__BeeSwarmData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AngryBeeSwarm)
namespace GlobalNamespace {
class AngryBeeAnimator;
}
namespace GlobalNamespace {
struct AngryBeeSwarm_ChaseState;
}
namespace GlobalNamespace {
struct BeeSwarmData;
}
namespace GlobalNamespace {
class NetPlayer;
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
namespace UnityEngine::AI {
class NavMeshPath;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AngryBeeSwarm;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AngryBeeSwarm*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AngryBeeSwarm*, "", "AngryBeeSwarm");
// [NetworkBehaviourWeaved(3)]
// Dependencies AngryBeeSwarm::ChaseState, BeeSwarmData, NetworkComponent, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AngryBeeSwarm
class CORDL_TYPE AngryBeeSwarm : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using ChaseState = ::GlobalNamespace::AngryBeeSwarm_ChaseState;

/// @brief Field BoredToDeathAtTimestamp, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_BoredToDeathAtTimestamp, put=__cordl_internal_set_BoredToDeathAtTimestamp)) float_t  BoredToDeathAtTimestamp;

/// [Networked]
/// @brief [NetworkedWeaved(0, 3)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::BeeSwarmData  Data;

/// @brief Field MinHeightAboveWater, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinHeightAboveWater, put=__cordl_internal_set_MinHeightAboveWater)) float_t  MinHeightAboveWater;

/// @brief Field NextRefreshClosestPlayerTimestamp, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_NextRefreshClosestPlayerTimestamp, put=__cordl_internal_set_NextRefreshClosestPlayerTimestamp)) float_t  NextRefreshClosestPlayerTimestamp;

/// @brief Field PlayerMinHeightAboveWater, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerMinHeightAboveWater, put=__cordl_internal_set_PlayerMinHeightAboveWater)) float_t  PlayerMinHeightAboveWater;

/// @brief Field RefreshClosestPlayerInterval, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_RefreshClosestPlayerInterval, put=__cordl_internal_set_RefreshClosestPlayerInterval)) float_t  RefreshClosestPlayerInterval;

/// @brief Field _Data, offset 0x180, size 0xc 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::BeeSwarmData  _Data;

/// @brief Field beeAnimator, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_beeAnimator, put=__cordl_internal_set_beeAnimator)) ::UnityW<::GlobalNamespace::AngryBeeAnimator>  beeAnimator;

/// @brief Field boredAfterDuration, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_boredAfterDuration, put=__cordl_internal_set_boredAfterDuration)) float_t  boredAfterDuration;

/// @brief Field catchDistance, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchDistance, put=__cordl_internal_set_catchDistance)) float_t  catchDistance;

/// @brief Field currentPathPointIdx, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPathPointIdx, put=__cordl_internal_set_currentPathPointIdx)) int32_t  currentPathPointIdx;

/// @brief Field currentSpeed, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSpeed, put=__cordl_internal_set_currentSpeed)) float_t  currentSpeed;

/// @brief Field currentState, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::AngryBeeSwarm_ChaseState  currentState;

/// @brief Field emergeFromPosition, offset 0x150, size 0xc 
 __declspec(property(get=__cordl_internal_get_emergeFromPosition, put=__cordl_internal_set_emergeFromPosition)) ::UnityEngine::Vector3  emergeFromPosition;

/// @brief Field emergeStartedTimestamp, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_emergeStartedTimestamp, put=__cordl_internal_set_emergeStartedTimestamp)) float_t  emergeStartedTimestamp;

/// @brief Field emergeToPosition, offset 0x15c, size 0xc 
 __declspec(property(get=__cordl_internal_get_emergeToPosition, put=__cordl_internal_set_emergeToPosition)) ::UnityEngine::Vector3  emergeToPosition;

/// @brief Field finalRangeLimit, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_finalRangeLimit, put=__cordl_internal_set_finalRangeLimit)) float_t  finalRangeLimit;

/// @brief Field followTarget, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_followTarget, put=__cordl_internal_set_followTarget)) ::UnityW<::UnityEngine::Transform>  followTarget;

/// @brief Field ghostOffsetGrabbingLocal, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_ghostOffsetGrabbingLocal, put=__cordl_internal_set_ghostOffsetGrabbingLocal)) ::UnityEngine::Vector3  ghostOffsetGrabbingLocal;

/// @brief Field grabDuration, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabDuration, put=__cordl_internal_set_grabDuration)) float_t  grabDuration;

/// @brief Field grabSpeed, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabSpeed, put=__cordl_internal_set_grabSpeed)) float_t  grabSpeed;

/// @brief Field grabTimestamp, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabTimestamp, put=__cordl_internal_set_grabTimestamp)) float_t  grabTimestamp;

/// @brief Field grabbedPlayer, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedPlayer, put=__cordl_internal_set_grabbedPlayer)) ::GlobalNamespace::NetPlayer*  grabbedPlayer;

/// @brief Field hapticDuration, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field heightAboveNavmesh, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightAboveNavmesh, put=__cordl_internal_set_heightAboveNavmesh)) float_t  heightAboveNavmesh;

/// @brief Field initialRangeLimit, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialRangeLimit, put=__cordl_internal_set_initialRangeLimit)) float_t  initialRangeLimit;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::AngryBeeSwarm>  instance;

 __declspec(property(get=get_isDormant)) bool  isDormant;

/// @brief Field lastSpeedIncreased, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSpeedIncreased, put=__cordl_internal_set_lastSpeedIncreased)) float_t  lastSpeedIncreased;

/// @brief Field lastState, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::AngryBeeSwarm_ChaseState  lastState;

/// @brief Field minGrabCooldown, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_minGrabCooldown, put=__cordl_internal_set_minGrabCooldown)) float_t  minGrabCooldown;

/// @brief Field nextPathTimestamp, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPathTimestamp, put=__cordl_internal_set_nextPathTimestamp)) float_t  nextPathTimestamp;

/// @brief Field noisyOffset, offset 0xb4, size 0xc 
 __declspec(property(get=__cordl_internal_get_noisyOffset, put=__cordl_internal_set_noisyOffset)) ::UnityEngine::Vector3  noisyOffset;

/// @brief Field path, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::UnityEngine::AI::NavMeshPath*  path;

/// @brief Field pathPoints, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathPoints, put=__cordl_internal_set_pathPoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  pathPoints;

/// @brief Field rangeLimitBlendDuration, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rangeLimitBlendDuration, put=__cordl_internal_set_rangeLimitBlendDuration)) float_t  rangeLimitBlendDuration;

/// @brief Field targetIsOnNavMesh, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_targetIsOnNavMesh, put=__cordl_internal_set_targetIsOnNavMesh)) bool  targetIsOnNavMesh;

/// @brief Field targetPlayer, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Field testEmergeFrom, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_testEmergeFrom, put=__cordl_internal_set_testEmergeFrom)) ::UnityW<::UnityEngine::Transform>  testEmergeFrom;

/// @brief Field testEmergeTo, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_testEmergeTo, put=__cordl_internal_set_testEmergeTo)) ::UnityW<::UnityEngine::Transform>  testEmergeTo;

/// @brief Field totalTimeToEmerge, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalTimeToEmerge, put=__cordl_internal_set_totalTimeToEmerge)) float_t  totalTimeToEmerge;

/// @brief Field velocityIncreaseInterval, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityIncreaseInterval, put=__cordl_internal_set_velocityIncreaseInterval)) float_t  velocityIncreaseInterval;

/// @brief Field velocityStep, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityStep, put=__cordl_internal_set_velocityStep)) float_t  velocityStep;

/// @brief Method Awake, addr 0x5e09598, size 0x148, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ChaseHost, addr 0x5e0a6cc, size 0x298, virtual false, abstract: false, final false
inline void ChaseHost() ;

/// @brief Method ChooseClosestTarget, addr 0x5e09d10, size 0x5bc, virtual false, abstract: false, final false
inline void ChooseClosestTarget() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5e0bc6c, size 0x24, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5e0bc90, size 0x68c, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method Emerge, addr 0x5e0ad9c, size 0x90, virtual false, abstract: false, final false
inline void Emerge(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Vector3  toPosition) ;

/// @brief Method GetNewPath, addr 0x5e0b26c, size 0x320, virtual false, abstract: false, final false
inline void GetNewPath(::UnityEngine::Vector3  destination) ;

/// @brief Method GrabBodyShared, addr 0x5e0acc0, size 0xdc, virtual false, abstract: false, final false
inline void GrabBodyShared() ;

/// @brief Method InitializeSwarm, addr 0x5e096e0, size 0xec, virtual false, abstract: false, final false
inline void InitializeSwarm() ;

/// @brief Method LateUpdate, addr 0x5e097cc, size 0x3b4, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MoveBodyShared, addr 0x5e0a964, size 0x98, virtual false, abstract: false, final false
inline void MoveBodyShared() ;

static inline ::GlobalNamespace::AngryBeeSwarm* New_ctor() ;

/// @brief Method OnChangeState, addr 0x5e0a2cc, size 0x2d8, virtual false, abstract: false, final false
inline void OnChangeState(::GlobalNamespace::AngryBeeSwarm_ChaseState  newState) ;

/// @brief Method OnJoinedRoom, addr 0x5e0bb20, size 0x84, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnOwnerChange, addr 0x5e0ba84, size 0x9c, virtual true, abstract: false, final false
inline void OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Method ReadDataFusion, addr 0x5e0b6e4, size 0xc4, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5e0b8e4, size 0x1a0, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ResetPath, addr 0x5e0ae9c, size 0x14, virtual false, abstract: false, final false
inline void ResetPath() ;

/// @brief Method RiseGrabbedLocalPlayer, addr 0x5e0a9fc, size 0x2c4, virtual false, abstract: false, final false
inline void RiseGrabbedLocalPlayer() ;

/// @brief Method SetInitialRotations, addr 0x5e0ae2c, size 0x70, virtual false, abstract: false, final false
inline void SetInitialRotations() ;

/// @brief Method SwarmEmergeUpdateShared, addr 0x5e0a5a4, size 0x128, virtual false, abstract: false, final false
inline void SwarmEmergeUpdateShared() ;

/// @brief Method TestEmerge, addr 0x5e0bba4, size 0x84, virtual false, abstract: false, final false
inline void TestEmerge() ;

/// @brief Method UpdateFollowPath, addr 0x5e0aeb0, size 0x3bc, virtual false, abstract: false, final false
inline void UpdateFollowPath(::UnityEngine::Vector3  destination, float_t  currentSpeed) ;

/// @brief Method UpdateState, addr 0x5e09b80, size 0x190, virtual false, abstract: false, final false
inline void UpdateState() ;

/// @brief Method WriteDataFusion, addr 0x5e0b64c, size 0x98, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5e0b7a8, size 0x13c, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr float_t const& __cordl_internal_get_BoredToDeathAtTimestamp() const;

constexpr float_t& __cordl_internal_get_BoredToDeathAtTimestamp() ;

constexpr float_t const& __cordl_internal_get_MinHeightAboveWater() const;

constexpr float_t& __cordl_internal_get_MinHeightAboveWater() ;

constexpr float_t const& __cordl_internal_get_NextRefreshClosestPlayerTimestamp() const;

constexpr float_t& __cordl_internal_get_NextRefreshClosestPlayerTimestamp() ;

constexpr float_t const& __cordl_internal_get_PlayerMinHeightAboveWater() const;

constexpr float_t& __cordl_internal_get_PlayerMinHeightAboveWater() ;

constexpr float_t const& __cordl_internal_get_RefreshClosestPlayerInterval() const;

constexpr float_t& __cordl_internal_get_RefreshClosestPlayerInterval() ;

constexpr ::GlobalNamespace::BeeSwarmData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::BeeSwarmData& __cordl_internal_get__Data() ;

constexpr ::UnityW<::GlobalNamespace::AngryBeeAnimator> const& __cordl_internal_get_beeAnimator() const;

constexpr ::UnityW<::GlobalNamespace::AngryBeeAnimator>& __cordl_internal_get_beeAnimator() ;

constexpr float_t const& __cordl_internal_get_boredAfterDuration() const;

constexpr float_t& __cordl_internal_get_boredAfterDuration() ;

constexpr float_t const& __cordl_internal_get_catchDistance() const;

constexpr float_t& __cordl_internal_get_catchDistance() ;

constexpr int32_t const& __cordl_internal_get_currentPathPointIdx() const;

constexpr int32_t& __cordl_internal_get_currentPathPointIdx() ;

constexpr float_t const& __cordl_internal_get_currentSpeed() const;

constexpr float_t& __cordl_internal_get_currentSpeed() ;

constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState& __cordl_internal_get_currentState() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_emergeFromPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_emergeFromPosition() ;

constexpr float_t const& __cordl_internal_get_emergeStartedTimestamp() const;

constexpr float_t& __cordl_internal_get_emergeStartedTimestamp() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_emergeToPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_emergeToPosition() ;

constexpr float_t const& __cordl_internal_get_finalRangeLimit() const;

constexpr float_t& __cordl_internal_get_finalRangeLimit() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followTarget() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ghostOffsetGrabbingLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ghostOffsetGrabbingLocal() ;

constexpr float_t const& __cordl_internal_get_grabDuration() const;

constexpr float_t& __cordl_internal_get_grabDuration() ;

constexpr float_t const& __cordl_internal_get_grabSpeed() const;

constexpr float_t& __cordl_internal_get_grabSpeed() ;

constexpr float_t const& __cordl_internal_get_grabTimestamp() const;

constexpr float_t& __cordl_internal_get_grabTimestamp() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_grabbedPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_grabbedPlayer() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr float_t const& __cordl_internal_get_heightAboveNavmesh() const;

constexpr float_t& __cordl_internal_get_heightAboveNavmesh() ;

constexpr float_t const& __cordl_internal_get_initialRangeLimit() const;

constexpr float_t& __cordl_internal_get_initialRangeLimit() ;

constexpr float_t const& __cordl_internal_get_lastSpeedIncreased() const;

constexpr float_t& __cordl_internal_get_lastSpeedIncreased() ;

constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState& __cordl_internal_get_lastState() ;

constexpr float_t const& __cordl_internal_get_minGrabCooldown() const;

constexpr float_t& __cordl_internal_get_minGrabCooldown() ;

constexpr float_t const& __cordl_internal_get_nextPathTimestamp() const;

constexpr float_t& __cordl_internal_get_nextPathTimestamp() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_noisyOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_noisyOffset() ;

constexpr ::UnityEngine::AI::NavMeshPath* const& __cordl_internal_get_path() const;

constexpr ::UnityEngine::AI::NavMeshPath*& __cordl_internal_get_path() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_pathPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_pathPoints() ;

constexpr float_t const& __cordl_internal_get_rangeLimitBlendDuration() const;

constexpr float_t& __cordl_internal_get_rangeLimitBlendDuration() ;

constexpr bool const& __cordl_internal_get_targetIsOnNavMesh() const;

constexpr bool& __cordl_internal_get_targetIsOnNavMesh() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_testEmergeFrom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_testEmergeFrom() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_testEmergeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_testEmergeTo() ;

constexpr float_t const& __cordl_internal_get_totalTimeToEmerge() const;

constexpr float_t& __cordl_internal_get_totalTimeToEmerge() ;

constexpr float_t const& __cordl_internal_get_velocityIncreaseInterval() const;

constexpr float_t& __cordl_internal_get_velocityIncreaseInterval() ;

constexpr float_t const& __cordl_internal_get_velocityStep() const;

constexpr float_t& __cordl_internal_get_velocityStep() ;

constexpr void __cordl_internal_set_BoredToDeathAtTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_MinHeightAboveWater(float_t  value) ;

constexpr void __cordl_internal_set_NextRefreshClosestPlayerTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_PlayerMinHeightAboveWater(float_t  value) ;

constexpr void __cordl_internal_set_RefreshClosestPlayerInterval(float_t  value) ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::BeeSwarmData  value) ;

constexpr void __cordl_internal_set_beeAnimator(::UnityW<::GlobalNamespace::AngryBeeAnimator>  value) ;

constexpr void __cordl_internal_set_boredAfterDuration(float_t  value) ;

constexpr void __cordl_internal_set_catchDistance(float_t  value) ;

constexpr void __cordl_internal_set_currentPathPointIdx(int32_t  value) ;

constexpr void __cordl_internal_set_currentSpeed(float_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::AngryBeeSwarm_ChaseState  value) ;

constexpr void __cordl_internal_set_emergeFromPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_emergeStartedTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_emergeToPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_finalRangeLimit(float_t  value) ;

constexpr void __cordl_internal_set_followTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ghostOffsetGrabbingLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_grabDuration(float_t  value) ;

constexpr void __cordl_internal_set_grabSpeed(float_t  value) ;

constexpr void __cordl_internal_set_grabTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_grabbedPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_heightAboveNavmesh(float_t  value) ;

constexpr void __cordl_internal_set_initialRangeLimit(float_t  value) ;

constexpr void __cordl_internal_set_lastSpeedIncreased(float_t  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::AngryBeeSwarm_ChaseState  value) ;

constexpr void __cordl_internal_set_minGrabCooldown(float_t  value) ;

constexpr void __cordl_internal_set_nextPathTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_noisyOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_path(::UnityEngine::AI::NavMeshPath*  value) ;

constexpr void __cordl_internal_set_pathPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_rangeLimitBlendDuration(float_t  value) ;

constexpr void __cordl_internal_set_targetIsOnNavMesh(bool  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_testEmergeFrom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_testEmergeTo(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_totalTimeToEmerge(float_t  value) ;

constexpr void __cordl_internal_set_velocityIncreaseInterval(float_t  value) ;

constexpr void __cordl_internal_set_velocityStep(float_t  value) ;

/// @brief Method .ctor, addr 0x5e0bc28, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::AngryBeeSwarm> getStaticF_instance() ;

/// @brief Method get_Data, addr 0x5e0b58c, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::BeeSwarmData get_Data() ;

/// @brief Method get_isDormant, addr 0x5e09588, size 0x10, virtual false, abstract: false, final false
inline bool get_isDormant() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::AngryBeeSwarm>  value) ;

/// @brief Method set_Data, addr 0x5e0b5ec, size 0x60, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::BeeSwarmData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AngryBeeSwarm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AngryBeeSwarm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AngryBeeSwarm(AngryBeeSwarm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AngryBeeSwarm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AngryBeeSwarm(AngryBeeSwarm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{542};

/// @brief Field navMeshSampleRange offset 0xffffffff size 0x4
static constexpr float_t  navMeshSampleRange{static_cast<float_t>(5.0f)};

/// @brief Field heightAboveNavmesh, offset: 0x9c, size: 0x4, def value: None
 float_t  ___heightAboveNavmesh;

/// @brief Field followTarget, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___followTarget;

/// [SerializeField]
/// @brief Field velocityStep, offset: 0xa8, size: 0x4, def value: None
 float_t  ___velocityStep;

/// @brief Field currentSpeed, offset: 0xac, size: 0x4, def value: None
 float_t  ___currentSpeed;

/// [SerializeField]
/// @brief Field velocityIncreaseInterval, offset: 0xb0, size: 0x4, def value: None
 float_t  ___velocityIncreaseInterval;

/// @brief Field noisyOffset, offset: 0xb4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___noisyOffset;

/// @brief Field ghostOffsetGrabbingLocal, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ghostOffsetGrabbingLocal;

/// @brief Field emergeStartedTimestamp, offset: 0xcc, size: 0x4, def value: None
 float_t  ___emergeStartedTimestamp;

/// @brief Field grabTimestamp, offset: 0xd0, size: 0x4, def value: None
 float_t  ___grabTimestamp;

/// @brief Field lastSpeedIncreased, offset: 0xd4, size: 0x4, def value: None
 float_t  ___lastSpeedIncreased;

/// [SerializeField]
/// @brief Field totalTimeToEmerge, offset: 0xd8, size: 0x4, def value: None
 float_t  ___totalTimeToEmerge;

/// [SerializeField]
/// @brief Field catchDistance, offset: 0xdc, size: 0x4, def value: None
 float_t  ___catchDistance;

/// [SerializeField]
/// @brief Field grabDuration, offset: 0xe0, size: 0x4, def value: None
 float_t  ___grabDuration;

/// [SerializeField]
/// @brief Field grabSpeed, offset: 0xe4, size: 0x4, def value: None
 float_t  ___grabSpeed;

/// [SerializeField]
/// @brief Field minGrabCooldown, offset: 0xe8, size: 0x4, def value: None
 float_t  ___minGrabCooldown;

/// [SerializeField]
/// @brief Field initialRangeLimit, offset: 0xec, size: 0x4, def value: None
 float_t  ___initialRangeLimit;

/// [SerializeField]
/// @brief Field finalRangeLimit, offset: 0xf0, size: 0x4, def value: None
 float_t  ___finalRangeLimit;

/// [SerializeField]
/// @brief Field rangeLimitBlendDuration, offset: 0xf4, size: 0x4, def value: None
 float_t  ___rangeLimitBlendDuration;

/// [SerializeField]
/// @brief Field boredAfterDuration, offset: 0xf8, size: 0x4, def value: None
 float_t  ___boredAfterDuration;

/// @brief Field targetPlayer, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// @brief Field beeAnimator, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AngryBeeAnimator>  ___beeAnimator;

/// @brief Field currentState, offset: 0x110, size: 0x4, def value: None
 ::GlobalNamespace::AngryBeeSwarm_ChaseState  ___currentState;

/// @brief Field lastState, offset: 0x114, size: 0x4, def value: None
 ::GlobalNamespace::AngryBeeSwarm_ChaseState  ___lastState;

/// @brief Field grabbedPlayer, offset: 0x118, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___grabbedPlayer;

/// @brief Field targetIsOnNavMesh, offset: 0x120, size: 0x1, def value: None
 bool  ___targetIsOnNavMesh;

/// [Tooltip("Haptic vibration when chased by lucy")]
/// @brief Field hapticStrength, offset: 0x124, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// @brief Field hapticDuration, offset: 0x128, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// @brief Field MinHeightAboveWater, offset: 0x12c, size: 0x4, def value: None
 float_t  ___MinHeightAboveWater;

/// @brief Field PlayerMinHeightAboveWater, offset: 0x130, size: 0x4, def value: None
 float_t  ___PlayerMinHeightAboveWater;

/// @brief Field RefreshClosestPlayerInterval, offset: 0x134, size: 0x4, def value: None
 float_t  ___RefreshClosestPlayerInterval;

/// @brief Field NextRefreshClosestPlayerTimestamp, offset: 0x138, size: 0x4, def value: None
 float_t  ___NextRefreshClosestPlayerTimestamp;

/// @brief Field BoredToDeathAtTimestamp, offset: 0x13c, size: 0x4, def value: None
 float_t  ___BoredToDeathAtTimestamp;

/// [SerializeField]
/// @brief Field testEmergeFrom, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___testEmergeFrom;

/// [SerializeField]
/// @brief Field testEmergeTo, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___testEmergeTo;

/// @brief Field emergeFromPosition, offset: 0x150, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___emergeFromPosition;

/// @brief Field emergeToPosition, offset: 0x15c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___emergeToPosition;

/// @brief Field path, offset: 0x168, size: 0x8, def value: None
 ::UnityEngine::AI::NavMeshPath*  ___path;

/// @brief Field pathPoints, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___pathPoints;

/// @brief Field currentPathPointIdx, offset: 0x178, size: 0x4, def value: None
 int32_t  ___currentPathPointIdx;

/// @brief Field nextPathTimestamp, offset: 0x17c, size: 0x4, def value: None
 float_t  ___nextPathTimestamp;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 3)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0x180, size: 0xc, def value: None
 ::GlobalNamespace::BeeSwarmData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___heightAboveNavmesh) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___followTarget) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___velocityStep) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___currentSpeed) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___velocityIncreaseInterval) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___noisyOffset) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___ghostOffsetGrabbingLocal) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___emergeStartedTimestamp) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___grabTimestamp) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___lastSpeedIncreased) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___totalTimeToEmerge) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___catchDistance) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___grabDuration) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___grabSpeed) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___minGrabCooldown) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___initialRangeLimit) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___finalRangeLimit) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___rangeLimitBlendDuration) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___boredAfterDuration) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___targetPlayer) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___beeAnimator) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___currentState) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___lastState) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___grabbedPlayer) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___targetIsOnNavMesh) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___hapticStrength) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___hapticDuration) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___MinHeightAboveWater) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___PlayerMinHeightAboveWater) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___RefreshClosestPlayerInterval) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___NextRefreshClosestPlayerTimestamp) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___BoredToDeathAtTimestamp) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___testEmergeFrom) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___testEmergeTo) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___emergeFromPosition) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___emergeToPosition) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___path) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___pathPoints) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___currentPathPointIdx) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ___nextPathTimestamp) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AngryBeeSwarm, ____Data) == 0x180, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AngryBeeSwarm) == 0x190, "Size mismatch!");

} // namespace end def GlobalNamespace
