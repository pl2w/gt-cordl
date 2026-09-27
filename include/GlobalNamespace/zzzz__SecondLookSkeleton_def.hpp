#pragma once
// IWYU pragma private; include "GlobalNamespace/SecondLookSkeleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SecondLookSkeleton_GhostState_def.hpp"
#include "GlobalNamespace/zzzz__SkeletonPathingNode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SecondLookSkeleton)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SecondLookSkeletonSynchValues;
}
namespace GlobalNamespace {
struct SecondLookSkeleton_GhostState;
}
namespace GlobalNamespace {
class SkeletonPathingNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animator;
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
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SecondLookSkeleton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SecondLookSkeleton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SecondLookSkeleton*, "", "SecondLookSkeleton");
// Dependencies SecondLookSkeleton::GhostState, SkeletonPathingNode, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SecondLookSkeleton
class CORDL_TYPE SecondLookSkeleton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GhostState = ::GlobalNamespace::SecondLookSkeleton_GhostState;

/// @brief Field angerPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_angerPoint, put=__cordl_internal_set_angerPoint)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  angerPoint;

/// @brief Field angerPointChangedTime, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_angerPointChangedTime, put=__cordl_internal_set_angerPointChangedTime)) float_t  angerPointChangedTime;

/// @brief Field angerPointIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_angerPointIndex, put=__cordl_internal_set_angerPointIndex)) int32_t  angerPointIndex;

/// @brief Field animator, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field audioSource, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bodyHeightOffset, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyHeightOffset, put=__cordl_internal_set_bodyHeightOffset)) float_t  bodyHeightOffset;

/// @brief Field carryingLoop, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_carryingLoop, put=__cordl_internal_set_carryingLoop)) ::UnityW<::UnityEngine::AudioClip>  carryingLoop;

/// @brief Field catchDistance, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchDistance, put=__cordl_internal_set_catchDistance)) float_t  catchDistance;

/// @brief Field caughtSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_caughtSpeed, put=__cordl_internal_set_caughtSpeed)) float_t  caughtSpeed;

/// @brief Field changeAngerPointOnTimeInterval, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_changeAngerPointOnTimeInterval, put=__cordl_internal_set_changeAngerPointOnTimeInterval)) bool  changeAngerPointOnTimeInterval;

/// @brief Field changeAngerPointTimeMinutes, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_changeAngerPointTimeMinutes, put=__cordl_internal_set_changeAngerPointTimeMinutes)) float_t  changeAngerPointTimeMinutes;

/// @brief Field chaseLoop, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_chaseLoop, put=__cordl_internal_set_chaseLoop)) ::UnityW<::UnityEngine::AudioClip>  chaseLoop;

/// @brief Field chaseSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseSpeed, put=__cordl_internal_set_chaseSpeed)) float_t  chaseSpeed;

/// @brief Field closest, offset 0x15c, size 0x2c 
 __declspec(property(get=__cordl_internal_get_closest, put=__cordl_internal_set_closest)) ::UnityEngine::RaycastHit  closest;

/// @brief Field currentNode, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentNode, put=__cordl_internal_set_currentNode)) ::UnityW<::GlobalNamespace::SkeletonPathingNode>  currentNode;

/// @brief Field currentState, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::SecondLookSkeleton_GhostState  currentState;

/// @brief Field currentlyLooking, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentlyLooking, put=__cordl_internal_set_currentlyLooking)) bool  currentlyLooking;

/// @brief Field exitPoints, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitPoints, put=__cordl_internal_set_exitPoints)) ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  exitPoints;

/// @brief Field firstLookActivated, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstLookActivated, put=__cordl_internal_set_firstLookActivated)) bool  firstLookActivated;

/// @brief Field firstNode, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstNode, put=__cordl_internal_set_firstNode)) ::UnityW<::GlobalNamespace::SkeletonPathingNode>  firstNode;

/// @brief Field ghostActivationDistance, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_ghostActivationDistance, put=__cordl_internal_set_ghostActivationDistance)) float_t  ghostActivationDistance;

/// @brief Field grabbedSound, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedSound, put=__cordl_internal_set_grabbedSound)) ::UnityW<::UnityEngine::AudioClip>  grabbedSound;

/// @brief Field hapticDuration, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field heightOffset, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightOffset, put=__cordl_internal_set_heightOffset)) ::UnityW<::UnityEngine::Transform>  heightOffset;

/// @brief Field initialScream, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialScream, put=__cordl_internal_set_initialScream)) ::UnityW<::UnityEngine::AudioClip>  initialScream;

/// @brief Field localCaught, offset 0x148, size 0x1 
 __declspec(property(get=__cordl_internal_get_localCaught, put=__cordl_internal_set_localCaught)) bool  localCaught;

/// @brief Field localThrown, offset 0x149, size 0x1 
 __declspec(property(get=__cordl_internal_get_localThrown, put=__cordl_internal_set_localThrown)) bool  localThrown;

/// @brief Field lookSource, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookSource, put=__cordl_internal_set_lookSource)) ::UnityW<::UnityEngine::Transform>  lookSource;

/// @brief Field lookedAway, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_lookedAway, put=__cordl_internal_set_lookedAway)) bool  lookedAway;

/// @brief Field mask, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field maxRotSpeed, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRotSpeed, put=__cordl_internal_set_maxRotSpeed)) float_t  maxRotSpeed;

/// @brief Field maxSeeDistance, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSeeDistance, put=__cordl_internal_set_maxSeeDistance)) float_t  maxSeeDistance;

/// @brief Field nextNode, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::UnityW<::GlobalNamespace::SkeletonPathingNode>  nextNode;

/// @brief Field offsetGrabPosition, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_offsetGrabPosition, put=__cordl_internal_set_offsetGrabPosition)) ::UnityEngine::Vector3  offsetGrabPosition;

/// @brief Field pathPoints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathPoints, put=__cordl_internal_set_pathPoints)) ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  pathPoints;

/// @brief Field patrolLoop, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolLoop, put=__cordl_internal_set_patrolLoop)) ::UnityW<::UnityEngine::AudioClip>  patrolLoop;

/// @brief Field patrolSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolSpeed, put=__cordl_internal_set_patrolSpeed)) float_t  patrolSpeed;

/// @brief Field playerMask, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerMask, put=__cordl_internal_set_playerMask)) ::UnityEngine::LayerMask  playerMask;

/// @brief Field playerTransform, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTransform, put=__cordl_internal_set_playerTransform)) ::UnityW<::UnityEngine::Transform>  playerTransform;

/// @brief Field playersSeen, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersSeen, put=__cordl_internal_set_playersSeen)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  playersSeen;

/// @brief Field rHits, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rHits, put=__cordl_internal_set_rHits)) ::ArrayW<::UnityEngine::RaycastHit>  rHits;

/// @brief Field reachNodeDist, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_reachNodeDist, put=__cordl_internal_set_reachNodeDist)) float_t  reachNodeDist;

/// @brief Field requireSecondLookToActivate, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireSecondLookToActivate, put=__cordl_internal_set_requireSecondLookToActivate)) bool  requireSecondLookToActivate;

/// @brief Field requireTappingToActivate, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_requireTappingToActivate, put=__cordl_internal_set_requireTappingToActivate)) bool  requireTappingToActivate;

/// @brief Field resetChaseHistory, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetChaseHistory, put=__cordl_internal_set_resetChaseHistory)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SkeletonPathingNode>>*  resetChaseHistory;

/// @brief Field spookyGhost, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_spookyGhost, put=__cordl_internal_set_spookyGhost)) ::UnityW<::UnityEngine::GameObject>  spookyGhost;

/// @brief Field spookyText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_spookyText, put=__cordl_internal_set_spookyText)) ::UnityW<::UnityEngine::GameObject>  spookyText;

/// @brief Field synchValues, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_synchValues, put=__cordl_internal_set_synchValues)) ::UnityW<::GlobalNamespace::SecondLookSkeletonSynchValues>  synchValues;

/// @brief Field tapped, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get_tapped, put=__cordl_internal_set_tapped)) bool  tapped;

/// @brief Field throwForce, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwForce, put=__cordl_internal_set_throwForce)) float_t  throwForce;

/// @brief Field throwSound, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwSound, put=__cordl_internal_set_throwSound)) ::UnityW<::UnityEngine::AudioClip>  throwSound;

/// @brief Field timeFirstAppeared, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeFirstAppeared, put=__cordl_internal_set_timeFirstAppeared)) float_t  timeFirstAppeared;

/// @brief Field timeThrown, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeThrown, put=__cordl_internal_set_timeThrown)) float_t  timeThrown;

/// @brief Field timeThrownCooldown, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeThrownCooldown, put=__cordl_internal_set_timeThrownCooldown)) float_t  timeThrownCooldown;

/// @brief Field timeToFirstDisappear, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeToFirstDisappear, put=__cordl_internal_set_timeToFirstDisappear)) float_t  timeToFirstDisappear;

/// @brief Method ActivateGhost, addr 0x5d0ee44, size 0xe8, virtual false, abstract: false, final false
inline void ActivateGhost() ;

/// @brief Method CanGrab, addr 0x5d0d8b8, size 0xe0, virtual false, abstract: false, final false
inline bool CanGrab() ;

/// @brief Method CanSeePlayer, addr 0x5d0ef2c, size 0x8, virtual false, abstract: false, final false
inline bool CanSeePlayer() ;

/// @brief Method CanSeePlayerWithResults, addr 0x5d0ef34, size 0x2d4, virtual false, abstract: false, final false
inline bool CanSeePlayerWithResults(::by_ref<::UnityEngine::RaycastHit>  closest) ;

/// @brief Method CaughtMove, addr 0x5d0e30c, size 0x48, virtual false, abstract: false, final false
inline void CaughtMove() ;

/// @brief Method CaughtPlayerUpdate, addr 0x5d0dad4, size 0x8c, virtual false, abstract: false, final false
inline void CaughtPlayerUpdate() ;

/// @brief Method ChangeState, addr 0x5d0c960, size 0x6b8, virtual false, abstract: false, final false
inline void ChangeState(::GlobalNamespace::SecondLookSkeleton_GhostState  newState) ;

/// @brief Method ChaseMove, addr 0x5d0d998, size 0x48, virtual false, abstract: false, final false
inline void ChaseMove() ;

/// @brief Method CheckActivateGhost, addr 0x5d0d534, size 0xdc, virtual false, abstract: false, final false
inline void CheckActivateGhost() ;

/// @brief Method CheckPlayerSeen, addr 0x5d0d610, size 0x238, virtual false, abstract: false, final false
inline bool CheckPlayerSeen() ;

/// @brief Method CheckReachedNextNode, addr 0x5d0f7cc, size 0x974, virtual false, abstract: false, final false
inline void CheckReachedNextNode(bool  forChuck, bool  forChase) ;

/// @brief Method ChuckPlayer, addr 0x5d0e064, size 0x2a0, virtual false, abstract: false, final false
inline void ChuckPlayer() ;

/// @brief Method DeactivateGhost, addr 0x5d0e304, size 0x8, virtual false, abstract: false, final false
inline void DeactivateGhost() ;

/// @brief Method FloatPlayer, addr 0x5d0e354, size 0x6c8, virtual false, abstract: false, final false
inline void FloatPlayer() ;

/// @brief Method FollowPosition, addr 0x5d0dddc, size 0x180, virtual false, abstract: false, final false
inline void FollowPosition() ;

/// @brief Method GhostAtExit, addr 0x5d0df5c, size 0x108, virtual false, abstract: false, final false
inline bool GhostAtExit() ;

/// @brief Method GhostMove, addr 0x5d0f464, size 0x368, virtual false, abstract: false, final false
inline void GhostMove(::UnityEngine::Transform*  target, float_t  speed) ;

/// @brief Method GrabPlayer, addr 0x5d0d9e0, size 0xf4, virtual false, abstract: false, final false
inline void GrabPlayer() ;

/// @brief Method IsCurrentlyLooking, addr 0x5d0ecec, size 0x158, virtual false, abstract: false, final false
inline bool IsCurrentlyLooking() ;

/// @brief Method IsMine, addr 0x5d0d324, size 0x94, virtual false, abstract: false, final false
inline bool IsMine() ;

static inline ::GlobalNamespace::SecondLookSkeleton* New_ctor() ;

/// @brief Method PatrolMove, addr 0x5d0d848, size 0x48, virtual false, abstract: false, final false
inline void PatrolMove() ;

/// @brief Method ProcessGhostState, addr 0x5d0d01c, size 0x308, virtual false, abstract: false, final false
inline void ProcessGhostState() ;

/// @brief Method RemoteActivateGhost, addr 0x5d0f208, size 0x2c, virtual false, abstract: false, final false
inline void RemoteActivateGhost() ;

/// @brief Method RemotePlayerCaught, addr 0x5d0f324, size 0x140, virtual false, abstract: false, final false
inline void RemotePlayerCaught(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method RemotePlayerSeen, addr 0x5d0f234, size 0xf0, virtual false, abstract: false, final false
inline void RemotePlayerSeen(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method SetHeightOffset, addr 0x5d0ea1c, size 0x2d0, virtual false, abstract: false, final false
inline void SetHeightOffset() ;

/// @brief Method SetNodes, addr 0x5d0d488, size 0xac, virtual false, abstract: false, final false
inline void SetNodes() ;

/// @brief Method SetTappedState, addr 0x5d0db60, size 0x27c, virtual false, abstract: false, final false
inline void SetTappedState() ;

/// @brief Method Start, addr 0x5d0c6e4, size 0x27c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartChasing, addr 0x5d0d890, size 0x28, virtual false, abstract: false, final false
inline void StartChasing() ;

/// @brief Method SyncNodes, addr 0x5d0d3b8, size 0xd0, virtual false, abstract: false, final false
inline void SyncNodes() ;

/// @brief Method Update, addr 0x5d0d018, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_angerPoint() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_angerPoint() ;

constexpr float_t const& __cordl_internal_get_angerPointChangedTime() const;

constexpr float_t& __cordl_internal_get_angerPointChangedTime() ;

constexpr int32_t const& __cordl_internal_get_angerPointIndex() const;

constexpr int32_t& __cordl_internal_get_angerPointIndex() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_bodyHeightOffset() const;

constexpr float_t& __cordl_internal_get_bodyHeightOffset() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_carryingLoop() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_carryingLoop() ;

constexpr float_t const& __cordl_internal_get_catchDistance() const;

constexpr float_t& __cordl_internal_get_catchDistance() ;

constexpr float_t const& __cordl_internal_get_caughtSpeed() const;

constexpr float_t& __cordl_internal_get_caughtSpeed() ;

constexpr bool const& __cordl_internal_get_changeAngerPointOnTimeInterval() const;

constexpr bool& __cordl_internal_get_changeAngerPointOnTimeInterval() ;

constexpr float_t const& __cordl_internal_get_changeAngerPointTimeMinutes() const;

constexpr float_t& __cordl_internal_get_changeAngerPointTimeMinutes() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_chaseLoop() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_chaseLoop() ;

constexpr float_t const& __cordl_internal_get_chaseSpeed() const;

constexpr float_t& __cordl_internal_get_chaseSpeed() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_closest() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_closest() ;

constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode> const& __cordl_internal_get_currentNode() const;

constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode>& __cordl_internal_get_currentNode() ;

constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState& __cordl_internal_get_currentState() ;

constexpr bool const& __cordl_internal_get_currentlyLooking() const;

constexpr bool& __cordl_internal_get_currentlyLooking() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>> const& __cordl_internal_get_exitPoints() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>& __cordl_internal_get_exitPoints() ;

constexpr bool const& __cordl_internal_get_firstLookActivated() const;

constexpr bool& __cordl_internal_get_firstLookActivated() ;

constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode> const& __cordl_internal_get_firstNode() const;

constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode>& __cordl_internal_get_firstNode() ;

constexpr float_t const& __cordl_internal_get_ghostActivationDistance() const;

constexpr float_t& __cordl_internal_get_ghostActivationDistance() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_grabbedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_grabbedSound() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_heightOffset() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_heightOffset() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_initialScream() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_initialScream() ;

constexpr bool const& __cordl_internal_get_localCaught() const;

constexpr bool& __cordl_internal_get_localCaught() ;

constexpr bool const& __cordl_internal_get_localThrown() const;

constexpr bool& __cordl_internal_get_localThrown() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lookSource() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lookSource() ;

constexpr bool const& __cordl_internal_get_lookedAway() const;

constexpr bool& __cordl_internal_get_lookedAway() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr float_t const& __cordl_internal_get_maxRotSpeed() const;

constexpr float_t& __cordl_internal_get_maxRotSpeed() ;

constexpr float_t const& __cordl_internal_get_maxSeeDistance() const;

constexpr float_t& __cordl_internal_get_maxSeeDistance() ;

constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode> const& __cordl_internal_get_nextNode() const;

constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode>& __cordl_internal_get_nextNode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetGrabPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetGrabPosition() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>> const& __cordl_internal_get_pathPoints() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>& __cordl_internal_get_pathPoints() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_patrolLoop() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_patrolLoop() ;

constexpr float_t const& __cordl_internal_get_patrolSpeed() const;

constexpr float_t& __cordl_internal_get_patrolSpeed() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_playerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_playerMask() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_playerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_playerTransform() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_playersSeen() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_playersSeen() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_rHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_rHits() ;

constexpr float_t const& __cordl_internal_get_reachNodeDist() const;

constexpr float_t& __cordl_internal_get_reachNodeDist() ;

constexpr bool const& __cordl_internal_get_requireSecondLookToActivate() const;

constexpr bool& __cordl_internal_get_requireSecondLookToActivate() ;

constexpr bool const& __cordl_internal_get_requireTappingToActivate() const;

constexpr bool& __cordl_internal_get_requireTappingToActivate() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SkeletonPathingNode>>* const& __cordl_internal_get_resetChaseHistory() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SkeletonPathingNode>>*& __cordl_internal_get_resetChaseHistory() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spookyGhost() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spookyGhost() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spookyText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spookyText() ;

constexpr ::UnityW<::GlobalNamespace::SecondLookSkeletonSynchValues> const& __cordl_internal_get_synchValues() const;

constexpr ::UnityW<::GlobalNamespace::SecondLookSkeletonSynchValues>& __cordl_internal_get_synchValues() ;

constexpr bool const& __cordl_internal_get_tapped() const;

constexpr bool& __cordl_internal_get_tapped() ;

constexpr float_t const& __cordl_internal_get_throwForce() const;

constexpr float_t& __cordl_internal_get_throwForce() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_throwSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_throwSound() ;

constexpr float_t const& __cordl_internal_get_timeFirstAppeared() const;

constexpr float_t& __cordl_internal_get_timeFirstAppeared() ;

constexpr float_t const& __cordl_internal_get_timeThrown() const;

constexpr float_t& __cordl_internal_get_timeThrown() ;

constexpr float_t const& __cordl_internal_get_timeThrownCooldown() const;

constexpr float_t& __cordl_internal_get_timeThrownCooldown() ;

constexpr float_t const& __cordl_internal_get_timeToFirstDisappear() const;

constexpr float_t& __cordl_internal_get_timeToFirstDisappear() ;

constexpr void __cordl_internal_set_angerPoint(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_angerPointChangedTime(float_t  value) ;

constexpr void __cordl_internal_set_angerPointIndex(int32_t  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bodyHeightOffset(float_t  value) ;

constexpr void __cordl_internal_set_carryingLoop(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_catchDistance(float_t  value) ;

constexpr void __cordl_internal_set_caughtSpeed(float_t  value) ;

constexpr void __cordl_internal_set_changeAngerPointOnTimeInterval(bool  value) ;

constexpr void __cordl_internal_set_changeAngerPointTimeMinutes(float_t  value) ;

constexpr void __cordl_internal_set_chaseLoop(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_chaseSpeed(float_t  value) ;

constexpr void __cordl_internal_set_closest(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_currentNode(::UnityW<::GlobalNamespace::SkeletonPathingNode>  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::SecondLookSkeleton_GhostState  value) ;

constexpr void __cordl_internal_set_currentlyLooking(bool  value) ;

constexpr void __cordl_internal_set_exitPoints(::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  value) ;

constexpr void __cordl_internal_set_firstLookActivated(bool  value) ;

constexpr void __cordl_internal_set_firstNode(::UnityW<::GlobalNamespace::SkeletonPathingNode>  value) ;

constexpr void __cordl_internal_set_ghostActivationDistance(float_t  value) ;

constexpr void __cordl_internal_set_grabbedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_heightOffset(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_initialScream(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_localCaught(bool  value) ;

constexpr void __cordl_internal_set_localThrown(bool  value) ;

constexpr void __cordl_internal_set_lookSource(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lookedAway(bool  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_maxRotSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxSeeDistance(float_t  value) ;

constexpr void __cordl_internal_set_nextNode(::UnityW<::GlobalNamespace::SkeletonPathingNode>  value) ;

constexpr void __cordl_internal_set_offsetGrabPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pathPoints(::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  value) ;

constexpr void __cordl_internal_set_patrolLoop(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_patrolSpeed(float_t  value) ;

constexpr void __cordl_internal_set_playerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_playerTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_playersSeen(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_rHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_reachNodeDist(float_t  value) ;

constexpr void __cordl_internal_set_requireSecondLookToActivate(bool  value) ;

constexpr void __cordl_internal_set_requireTappingToActivate(bool  value) ;

constexpr void __cordl_internal_set_resetChaseHistory(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SkeletonPathingNode>>*  value) ;

constexpr void __cordl_internal_set_spookyGhost(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spookyText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_synchValues(::UnityW<::GlobalNamespace::SecondLookSkeletonSynchValues>  value) ;

constexpr void __cordl_internal_set_tapped(bool  value) ;

constexpr void __cordl_internal_set_throwForce(float_t  value) ;

constexpr void __cordl_internal_set_throwSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_timeFirstAppeared(float_t  value) ;

constexpr void __cordl_internal_set_timeThrown(float_t  value) ;

constexpr void __cordl_internal_set_timeThrownCooldown(float_t  value) ;

constexpr void __cordl_internal_set_timeToFirstDisappear(float_t  value) ;

/// @brief Method .ctor, addr 0x5d10140, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecondLookSkeleton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecondLookSkeleton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecondLookSkeleton(SecondLookSkeleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecondLookSkeleton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecondLookSkeleton(SecondLookSkeleton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{465};

/// @brief Field angerPoint, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___angerPoint;

/// @brief Field angerPointIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___angerPointIndex;

/// @brief Field pathPoints, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  ___pathPoints;

/// @brief Field exitPoints, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  ___exitPoints;

/// @brief Field heightOffset, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___heightOffset;

/// @brief Field requireSecondLookToActivate, offset: 0x48, size: 0x1, def value: None
 bool  ___requireSecondLookToActivate;

/// @brief Field requireTappingToActivate, offset: 0x49, size: 0x1, def value: None
 bool  ___requireTappingToActivate;

/// @brief Field changeAngerPointOnTimeInterval, offset: 0x4a, size: 0x1, def value: None
 bool  ___changeAngerPointOnTimeInterval;

/// @brief Field changeAngerPointTimeMinutes, offset: 0x4c, size: 0x4, def value: None
 float_t  ___changeAngerPointTimeMinutes;

/// @brief Field firstLookActivated, offset: 0x50, size: 0x1, def value: None
 bool  ___firstLookActivated;

/// @brief Field lookedAway, offset: 0x51, size: 0x1, def value: None
 bool  ___lookedAway;

/// @brief Field currentlyLooking, offset: 0x52, size: 0x1, def value: None
 bool  ___currentlyLooking;

/// @brief Field ghostActivationDistance, offset: 0x54, size: 0x4, def value: None
 float_t  ___ghostActivationDistance;

/// @brief Field spookyGhost, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spookyGhost;

/// @brief Field timeFirstAppeared, offset: 0x60, size: 0x4, def value: None
 float_t  ___timeFirstAppeared;

/// @brief Field timeToFirstDisappear, offset: 0x64, size: 0x4, def value: None
 float_t  ___timeToFirstDisappear;

/// @brief Field currentState, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::SecondLookSkeleton_GhostState  ___currentState;

/// @brief Field spookyText, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spookyText;

/// @brief Field patrolSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___patrolSpeed;

/// @brief Field chaseSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___chaseSpeed;

/// @brief Field caughtSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___caughtSpeed;

/// @brief Field firstNode, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SkeletonPathingNode>  ___firstNode;

/// @brief Field currentNode, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SkeletonPathingNode>  ___currentNode;

/// @brief Field nextNode, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SkeletonPathingNode>  ___nextNode;

/// @brief Field lookSource, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lookSource;

/// @brief Field playerTransform, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___playerTransform;

/// @brief Field reachNodeDist, offset: 0xb0, size: 0x4, def value: None
 float_t  ___reachNodeDist;

/// @brief Field maxRotSpeed, offset: 0xb4, size: 0x4, def value: None
 float_t  ___maxRotSpeed;

/// @brief Field hapticStrength, offset: 0xb8, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// @brief Field hapticDuration, offset: 0xbc, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// @brief Field offsetGrabPosition, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offsetGrabPosition;

/// @brief Field throwForce, offset: 0xcc, size: 0x4, def value: None
 float_t  ___throwForce;

/// @brief Field animator, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field bodyHeightOffset, offset: 0xd8, size: 0x4, def value: None
 float_t  ___bodyHeightOffset;

/// @brief Field timeThrown, offset: 0xdc, size: 0x4, def value: None
 float_t  ___timeThrown;

/// @brief Field timeThrownCooldown, offset: 0xe0, size: 0x4, def value: None
 float_t  ___timeThrownCooldown;

/// @brief Field catchDistance, offset: 0xe4, size: 0x4, def value: None
 float_t  ___catchDistance;

/// @brief Field maxSeeDistance, offset: 0xe8, size: 0x4, def value: None
 float_t  ___maxSeeDistance;

/// @brief Field rHits, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___rHits;

/// @brief Field mask, offset: 0xf8, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// @brief Field playerMask, offset: 0xfc, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___playerMask;

/// @brief Field audioSource, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field initialScream, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___initialScream;

/// @brief Field patrolLoop, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___patrolLoop;

/// @brief Field chaseLoop, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___chaseLoop;

/// @brief Field grabbedSound, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___grabbedSound;

/// @brief Field carryingLoop, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___carryingLoop;

/// @brief Field throwSound, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___throwSound;

/// @brief Field resetChaseHistory, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SkeletonPathingNode>>*  ___resetChaseHistory;

/// @brief Field synchValues, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SecondLookSkeletonSynchValues>  ___synchValues;

/// @brief Field localCaught, offset: 0x148, size: 0x1, def value: None
 bool  ___localCaught;

/// @brief Field localThrown, offset: 0x149, size: 0x1, def value: None
 bool  ___localThrown;

/// @brief Field playersSeen, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___playersSeen;

/// @brief Field tapped, offset: 0x158, size: 0x1, def value: None
 bool  ___tapped;

/// @brief Field closest, offset: 0x15c, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___closest;

/// @brief Field angerPointChangedTime, offset: 0x188, size: 0x4, def value: None
 float_t  ___angerPointChangedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___angerPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___angerPointIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___pathPoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___exitPoints) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___heightOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___requireSecondLookToActivate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___requireTappingToActivate) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___changeAngerPointOnTimeInterval) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___changeAngerPointTimeMinutes) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___firstLookActivated) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___lookedAway) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___currentlyLooking) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___ghostActivationDistance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___spookyGhost) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___timeFirstAppeared) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___timeToFirstDisappear) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___currentState) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___spookyText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___patrolSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___chaseSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___caughtSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___firstNode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___currentNode) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___nextNode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___lookSource) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___playerTransform) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___reachNodeDist) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___maxRotSpeed) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___hapticStrength) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___hapticDuration) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___offsetGrabPosition) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___throwForce) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___animator) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___bodyHeightOffset) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___timeThrown) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___timeThrownCooldown) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___catchDistance) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___maxSeeDistance) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___rHits) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___mask) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___playerMask) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___audioSource) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___initialScream) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___patrolLoop) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___chaseLoop) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___grabbedSound) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___carryingLoop) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___throwSound) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___resetChaseHistory) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___synchValues) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___localCaught) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___localThrown) == 0x149, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___playersSeen) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___tapped) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___closest) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SecondLookSkeleton, ___angerPointChangedTime) == 0x188, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SecondLookSkeleton) == 0x190, "Size mismatch!");

} // namespace end def GlobalNamespace
