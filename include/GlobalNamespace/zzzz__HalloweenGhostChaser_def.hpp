#pragma once
// IWYU pragma private; include "GlobalNamespace/HalloweenGhostChaser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_ChaseState_def.hpp"
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_GhostData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HalloweenGhostChaser)
namespace GlobalNamespace {
struct HalloweenGhostChaser_ChaseState;
}
namespace GlobalNamespace {
struct HalloweenGhostChaser_GhostData;
}
namespace GlobalNamespace {
class HalloweenGhostChaser___c__DisplayClass74_0;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
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
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HalloweenGhostChaser;
}
namespace GlobalNamespace {
class HalloweenGhostChaser___c__DisplayClass74_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HalloweenGhostChaser*);
MARK_REF_T(::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HalloweenGhostChaser*, "", "HalloweenGhostChaser");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0*, "", "HalloweenGhostChaser/<>c__DisplayClass74_0");
// [NetworkBehaviourWeaved(5)]
// Dependencies HalloweenGhostChaser::ChaseState, HalloweenGhostChaser::GhostData, NetworkComponent, UnityEngine.Color, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HalloweenGhostChaser
class CORDL_TYPE HalloweenGhostChaser : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using ChaseState = ::GlobalNamespace::HalloweenGhostChaser_ChaseState;

using GhostData = ::GlobalNamespace::HalloweenGhostChaser_GhostData;

using __c__DisplayClass74_0 = ::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0;

/// [Networked]
/// @brief [NetworkedWeaved(0, 5)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::HalloweenGhostChaser_GhostData  Data;

/// @brief Field _Data, offset 0x278, size 0x14 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::HalloweenGhostChaser_GhostData  _Data;

/// @brief Field catchDistance, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchDistance, put=__cordl_internal_set_catchDistance)) float_t  catchDistance;

/// @brief Field childGhost, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_childGhost, put=__cordl_internal_set_childGhost)) ::UnityW<::UnityEngine::Transform>  childGhost;

/// @brief Field currentSpeed, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSpeed, put=__cordl_internal_set_currentSpeed)) float_t  currentSpeed;

/// @brief Field currentState, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::HalloweenGhostChaser_ChaseState  currentState;

/// @brief Field currentTargetIdx, offset 0x270, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentTargetIdx, put=__cordl_internal_set_currentTargetIdx)) int32_t  currentTargetIdx;

/// @brief Field deepLaugh, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_deepLaugh, put=__cordl_internal_set_deepLaugh)) ::UnityW<::UnityEngine::AudioClip>  deepLaugh;

/// @brief Field defaultColor, offset 0x230, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultColor, put=__cordl_internal_set_defaultColor)) ::UnityEngine::Color  defaultColor;

/// @brief Field defaultLaugh, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultLaugh, put=__cordl_internal_set_defaultLaugh)) ::UnityW<::UnityEngine::AudioClip>  defaultLaugh;

/// @brief Field followTarget, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_followTarget, put=__cordl_internal_set_followTarget)) ::UnityW<::UnityEngine::Transform>  followTarget;

/// @brief Field ghostBody, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostBody, put=__cordl_internal_set_ghostBody)) ::UnityW<::UnityEngine::GameObject>  ghostBody;

/// @brief Field ghostGrabbingEulerRotation, offset 0x17c, size 0xc 
 __declspec(property(get=__cordl_internal_get_ghostGrabbingEulerRotation, put=__cordl_internal_set_ghostGrabbingEulerRotation)) ::UnityEngine::Vector3  ghostGrabbingEulerRotation;

/// @brief Field ghostMaterial, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostMaterial, put=__cordl_internal_set_ghostMaterial)) ::UnityW<::UnityEngine::Material>  ghostMaterial;

/// @brief Field ghostOffsetGrabbingLocal, offset 0x164, size 0xc 
 __declspec(property(get=__cordl_internal_get_ghostOffsetGrabbingLocal, put=__cordl_internal_set_ghostOffsetGrabbingLocal)) ::UnityEngine::Vector3  ghostOffsetGrabbingLocal;

/// @brief Field ghostStartingEulerRotation, offset 0x170, size 0xc 
 __declspec(property(get=__cordl_internal_get_ghostStartingEulerRotation, put=__cordl_internal_set_ghostStartingEulerRotation)) ::UnityEngine::Vector3  ghostStartingEulerRotation;

/// @brief Field gong, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_gong, put=__cordl_internal_set_gong)) ::UnityW<::UnityEngine::AudioClip>  gong;

/// @brief Field gongDuration, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_gongDuration, put=__cordl_internal_set_gongDuration)) float_t  gongDuration;

/// @brief Field grabDuration, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabDuration, put=__cordl_internal_set_grabDuration)) float_t  grabDuration;

/// @brief Field grabSpeed, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabSpeed, put=__cordl_internal_set_grabSpeed)) float_t  grabSpeed;

/// @brief Field grabTime, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabTime, put=__cordl_internal_set_grabTime)) float_t  grabTime;

/// @brief Field grabbedPlayer, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedPlayer, put=__cordl_internal_set_grabbedPlayer)) ::GlobalNamespace::NetPlayer*  grabbedPlayer;

/// @brief Field hapticDuration, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDuration, put=__cordl_internal_set_hapticDuration)) float_t  hapticDuration;

/// @brief Field hapticStrength, offset 0x254, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field headEulerAngles, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_headEulerAngles, put=__cordl_internal_set_headEulerAngles)) ::ArrayW<::UnityEngine::Vector3>  headEulerAngles;

/// @brief Field heightAboveNavmesh, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightAboveNavmesh, put=__cordl_internal_set_heightAboveNavmesh)) float_t  heightAboveNavmesh;

/// @brief Field isSummoned, offset 0x250, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSummoned, put=__cordl_internal_set_isSummoned)) bool  isSummoned;

/// @brief Field lastHeadAngleTime, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHeadAngleTime, put=__cordl_internal_set_lastHeadAngleTime)) float_t  lastHeadAngleTime;

/// @brief Field lastSpeedIncreased, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSpeedIncreased, put=__cordl_internal_set_lastSpeedIncreased)) float_t  lastSpeedIncreased;

/// @brief Field lastState, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::HalloweenGhostChaser_ChaseState  lastState;

/// @brief Field lastSummonCheck, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSummonCheck, put=__cordl_internal_set_lastSummonCheck)) float_t  lastSummonCheck;

/// @brief Field laugh, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_laugh, put=__cordl_internal_set_laugh)) ::UnityW<::UnityEngine::AudioSource>  laugh;

/// @brief Field leftArm, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArm, put=__cordl_internal_set_leftArm)) ::UnityW<::UnityEngine::Transform>  leftArm;

/// @brief Field leftArmGrabbingLocal, offset 0x11c, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftArmGrabbingLocal, put=__cordl_internal_set_leftArmGrabbingLocal)) ::UnityEngine::Vector3  leftArmGrabbingLocal;

/// @brief Field leftHand, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::UnityW<::UnityEngine::Transform>  leftHand;

/// @brief Field leftHandGrabbingLocal, offset 0x134, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHandGrabbingLocal, put=__cordl_internal_set_leftHandGrabbingLocal)) ::UnityEngine::Vector3  leftHandGrabbingLocal;

/// @brief Field leftHandStartingLocal, offset 0x14c, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHandStartingLocal, put=__cordl_internal_set_leftHandStartingLocal)) ::UnityEngine::Vector3  leftHandStartingLocal;

/// @brief Field maxNextTimeToChasePlayer, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNextTimeToChasePlayer, put=__cordl_internal_set_maxNextTimeToChasePlayer)) float_t  maxNextTimeToChasePlayer;

/// @brief Field maxTimeToNextHeadAngle, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTimeToNextHeadAngle, put=__cordl_internal_set_maxTimeToNextHeadAngle)) float_t  maxTimeToNextHeadAngle;

/// @brief Field minGrabCooldown, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_minGrabCooldown, put=__cordl_internal_set_minGrabCooldown)) float_t  minGrabCooldown;

/// @brief Field nextHeadAngleTime, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextHeadAngleTime, put=__cordl_internal_set_nextHeadAngleTime)) float_t  nextHeadAngleTime;

/// @brief Field nextPathTimestamp, offset 0x274, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPathTimestamp, put=__cordl_internal_set_nextPathTimestamp)) float_t  nextPathTimestamp;

/// @brief Field nextTimeToChasePlayer, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextTimeToChasePlayer, put=__cordl_internal_set_nextTimeToChasePlayer)) float_t  nextTimeToChasePlayer;

/// @brief Field noisyOffset, offset 0x110, size 0xc 
 __declspec(property(get=__cordl_internal_get_noisyOffset, put=__cordl_internal_set_noisyOffset)) ::UnityEngine::Vector3  noisyOffset;

/// @brief Field path, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::UnityEngine::AI::NavMeshPath*  path;

/// @brief Field points, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_points, put=__cordl_internal_set_points)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points;

/// @brief Field possibleTarget, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_possibleTarget, put=__cordl_internal_set_possibleTarget)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  possibleTarget;

/// @brief Field rightArm, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArm, put=__cordl_internal_set_rightArm)) ::UnityW<::UnityEngine::Transform>  rightArm;

/// @brief Field rightArmGrabbingLocal, offset 0x128, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightArmGrabbingLocal, put=__cordl_internal_set_rightArmGrabbingLocal)) ::UnityEngine::Vector3  rightArmGrabbingLocal;

/// @brief Field rightHand, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::UnityW<::UnityEngine::Transform>  rightHand;

/// @brief Field rightHandGrabbingLocal, offset 0x140, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHandGrabbingLocal, put=__cordl_internal_set_rightHandGrabbingLocal)) ::UnityEngine::Vector3  rightHandGrabbingLocal;

/// @brief Field rightHandStartingLocal, offset 0x158, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHandStartingLocal, put=__cordl_internal_set_rightHandStartingLocal)) ::UnityEngine::Vector3  rightHandStartingLocal;

/// @brief Field riseDistance, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_riseDistance, put=__cordl_internal_set_riseDistance)) float_t  riseDistance;

/// @brief Field skullTransform, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_skullTransform, put=__cordl_internal_set_skullTransform)) ::UnityW<::UnityEngine::Transform>  skullTransform;

/// @brief Field spawnIndex, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnIndex, put=__cordl_internal_set_spawnIndex)) int32_t  spawnIndex;

/// @brief Field spawnTransformOffsets, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnTransformOffsets, put=__cordl_internal_set_spawnTransformOffsets)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  spawnTransformOffsets;

/// @brief Field spawnTransforms, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnTransforms, put=__cordl_internal_set_spawnTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  spawnTransforms;

/// @brief Field summonCount, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_summonCount, put=__cordl_internal_set_summonCount)) int32_t  summonCount;

/// @brief Field summonDistance, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_summonDistance, put=__cordl_internal_set_summonDistance)) float_t  summonDistance;

/// @brief Field summonedColor, offset 0x240, size 0x10 
 __declspec(property(get=__cordl_internal_get_summonedColor, put=__cordl_internal_set_summonedColor)) ::UnityEngine::Color  summonedColor;

/// @brief Field summoningCheckCountdown, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_summoningCheckCountdown, put=__cordl_internal_set_summoningCheckCountdown)) float_t  summoningCheckCountdown;

/// @brief Field summoningDuration, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_summoningDuration, put=__cordl_internal_set_summoningDuration)) float_t  summoningDuration;

/// @brief Field targetIsOnNavMesh, offset 0x251, size 0x1 
 __declspec(property(get=__cordl_internal_get_targetIsOnNavMesh, put=__cordl_internal_set_targetIsOnNavMesh)) bool  targetIsOnNavMesh;

/// @brief Field targetPlayer, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Field timeEncircled, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeEncircled, put=__cordl_internal_set_timeEncircled)) float_t  timeEncircled;

/// @brief Field timeGongStarted, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeGongStarted, put=__cordl_internal_set_timeGongStarted)) float_t  timeGongStarted;

/// @brief Field timeRiseStarted, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeRiseStarted, put=__cordl_internal_set_timeRiseStarted)) float_t  timeRiseStarted;

/// @brief Field totalTimeToRise, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalTimeToRise, put=__cordl_internal_set_totalTimeToRise)) float_t  totalTimeToRise;

/// @brief Field velocityIncreaseTime, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityIncreaseTime, put=__cordl_internal_set_velocityIncreaseTime)) float_t  velocityIncreaseTime;

/// @brief Field velocityStep, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityStep, put=__cordl_internal_set_velocityStep)) float_t  velocityStep;

/// @brief Field wasSurroundedLastCheck, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasSurroundedLastCheck, put=__cordl_internal_set_wasSurroundedLastCheck)) bool  wasSurroundedLastCheck;

/// @brief Method Awake, addr 0x594b4b0, size 0xb0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ChaseHost, addr 0x594cd94, size 0x314, virtual false, abstract: false, final false
inline void ChaseHost() ;

/// @brief Method ChooseRandomTarget, addr 0x594c194, size 0x4cc, virtual false, abstract: false, final false
inline void ChooseRandomTarget() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x594e764, size 0x68, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x594e7cc, size 0x690, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method GetNewPath, addr 0x594dbd8, size 0x324, virtual false, abstract: false, final false
inline void GetNewPath(::UnityEngine::Vector3  destination) ;

/// @brief Method GrabBodyShared, addr 0x594d450, size 0xdc, virtual false, abstract: false, final false
inline void GrabBodyShared() ;

/// @brief Method InitializeGhost, addr 0x594b69c, size 0x190, virtual false, abstract: false, final false
inline void InitializeGhost() ;

/// @brief Method LateUpdate, addr 0x594b82c, size 0x730, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MoveBodyShared, addr 0x594d0a8, size 0xe4, virtual false, abstract: false, final false
inline void MoveBodyShared() ;

/// @brief Method MoveHead, addr 0x594ccdc, size 0xb8, virtual false, abstract: false, final false
inline void MoveHead() ;

static inline ::GlobalNamespace::HalloweenGhostChaser* New_ctor() ;

/// @brief Method OnChangeState, addr 0x594c660, size 0x4e4, virtual false, abstract: false, final false
inline void OnChangeState(::GlobalNamespace::HalloweenGhostChaser_ChaseState  newState) ;

/// @brief Method OnJoinedRoom, addr 0x594e654, size 0xb8, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnOwnerChange, addr 0x594e5b8, size 0x9c, virtual true, abstract: false, final false
inline void OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner) ;

/// @brief Method ReadDataFusion, addr 0x594e078, size 0x160, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x594e388, size 0x230, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ResetPath, addr 0x594d808, size 0x14, virtual false, abstract: false, final false
inline void ResetPath() ;

/// @brief Method RiseGrabbedLocalPlayer, addr 0x594d18c, size 0x2c4, virtual false, abstract: false, final false
inline void RiseGrabbedLocalPlayer() ;

/// @brief Method RiseHost, addr 0x594cb44, size 0x198, virtual false, abstract: false, final false
inline void RiseHost() ;

/// @brief Method SetInitialRotations, addr 0x594d52c, size 0x15c, virtual false, abstract: false, final false
inline void SetInitialRotations() ;

/// @brief Method SetInitialSpawnPoint, addr 0x594d688, size 0x180, virtual false, abstract: false, final false
inline void SetInitialSpawnPoint() ;

/// @brief Method Start, addr 0x594b560, size 0x13c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateFollowPath, addr 0x594d81c, size 0x3bc, virtual false, abstract: false, final false
inline void UpdateFollowPath(::UnityEngine::Vector3  destination, float_t  currentSpeed) ;

/// @brief Method UpdateState, addr 0x594bf5c, size 0x238, virtual false, abstract: false, final false
inline void UpdateState() ;

/// @brief Method WriteDataFusion, addr 0x594dfcc, size 0xac, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x594e1d8, size 0x1b0, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::GlobalNamespace::HalloweenGhostChaser_GhostData const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::HalloweenGhostChaser_GhostData& __cordl_internal_get__Data() ;

constexpr float_t const& __cordl_internal_get_catchDistance() const;

constexpr float_t& __cordl_internal_get_catchDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_childGhost() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_childGhost() ;

constexpr float_t const& __cordl_internal_get_currentSpeed() const;

constexpr float_t& __cordl_internal_get_currentSpeed() ;

constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState& __cordl_internal_get_currentState() ;

constexpr int32_t const& __cordl_internal_get_currentTargetIdx() const;

constexpr int32_t& __cordl_internal_get_currentTargetIdx() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_deepLaugh() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_deepLaugh() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_defaultColor() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_defaultLaugh() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_defaultLaugh() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followTarget() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ghostBody() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ghostBody() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ghostGrabbingEulerRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ghostGrabbingEulerRotation() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_ghostMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_ghostMaterial() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ghostOffsetGrabbingLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ghostOffsetGrabbingLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ghostStartingEulerRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ghostStartingEulerRotation() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_gong() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_gong() ;

constexpr float_t const& __cordl_internal_get_gongDuration() const;

constexpr float_t& __cordl_internal_get_gongDuration() ;

constexpr float_t const& __cordl_internal_get_grabDuration() const;

constexpr float_t& __cordl_internal_get_grabDuration() ;

constexpr float_t const& __cordl_internal_get_grabSpeed() const;

constexpr float_t& __cordl_internal_get_grabSpeed() ;

constexpr float_t const& __cordl_internal_get_grabTime() const;

constexpr float_t& __cordl_internal_get_grabTime() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_grabbedPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_grabbedPlayer() ;

constexpr float_t const& __cordl_internal_get_hapticDuration() const;

constexpr float_t& __cordl_internal_get_hapticDuration() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_headEulerAngles() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_headEulerAngles() ;

constexpr float_t const& __cordl_internal_get_heightAboveNavmesh() const;

constexpr float_t& __cordl_internal_get_heightAboveNavmesh() ;

constexpr bool const& __cordl_internal_get_isSummoned() const;

constexpr bool& __cordl_internal_get_isSummoned() ;

constexpr float_t const& __cordl_internal_get_lastHeadAngleTime() const;

constexpr float_t& __cordl_internal_get_lastHeadAngleTime() ;

constexpr float_t const& __cordl_internal_get_lastSpeedIncreased() const;

constexpr float_t& __cordl_internal_get_lastSpeedIncreased() ;

constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState& __cordl_internal_get_lastState() ;

constexpr float_t const& __cordl_internal_get_lastSummonCheck() const;

constexpr float_t& __cordl_internal_get_lastSummonCheck() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_laugh() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_laugh() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftArm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftArm() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftArmGrabbingLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftArmGrabbingLocal() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandGrabbingLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandGrabbingLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandStartingLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandStartingLocal() ;

constexpr float_t const& __cordl_internal_get_maxNextTimeToChasePlayer() const;

constexpr float_t& __cordl_internal_get_maxNextTimeToChasePlayer() ;

constexpr float_t const& __cordl_internal_get_maxTimeToNextHeadAngle() const;

constexpr float_t& __cordl_internal_get_maxTimeToNextHeadAngle() ;

constexpr float_t const& __cordl_internal_get_minGrabCooldown() const;

constexpr float_t& __cordl_internal_get_minGrabCooldown() ;

constexpr float_t const& __cordl_internal_get_nextHeadAngleTime() const;

constexpr float_t& __cordl_internal_get_nextHeadAngleTime() ;

constexpr float_t const& __cordl_internal_get_nextPathTimestamp() const;

constexpr float_t& __cordl_internal_get_nextPathTimestamp() ;

constexpr float_t const& __cordl_internal_get_nextTimeToChasePlayer() const;

constexpr float_t& __cordl_internal_get_nextTimeToChasePlayer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_noisyOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_noisyOffset() ;

constexpr ::UnityEngine::AI::NavMeshPath* const& __cordl_internal_get_path() const;

constexpr ::UnityEngine::AI::NavMeshPath*& __cordl_internal_get_path() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_points() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_points() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_possibleTarget() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_possibleTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightArm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightArm() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightArmGrabbingLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightArmGrabbingLocal() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandGrabbingLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandGrabbingLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandStartingLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandStartingLocal() ;

constexpr float_t const& __cordl_internal_get_riseDistance() const;

constexpr float_t& __cordl_internal_get_riseDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_skullTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_skullTransform() ;

constexpr int32_t const& __cordl_internal_get_spawnIndex() const;

constexpr int32_t& __cordl_internal_get_spawnIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_spawnTransformOffsets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_spawnTransformOffsets() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_spawnTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_spawnTransforms() ;

constexpr int32_t const& __cordl_internal_get_summonCount() const;

constexpr int32_t& __cordl_internal_get_summonCount() ;

constexpr float_t const& __cordl_internal_get_summonDistance() const;

constexpr float_t& __cordl_internal_get_summonDistance() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_summonedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_summonedColor() ;

constexpr float_t const& __cordl_internal_get_summoningCheckCountdown() const;

constexpr float_t& __cordl_internal_get_summoningCheckCountdown() ;

constexpr float_t const& __cordl_internal_get_summoningDuration() const;

constexpr float_t& __cordl_internal_get_summoningDuration() ;

constexpr bool const& __cordl_internal_get_targetIsOnNavMesh() const;

constexpr bool& __cordl_internal_get_targetIsOnNavMesh() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr float_t const& __cordl_internal_get_timeEncircled() const;

constexpr float_t& __cordl_internal_get_timeEncircled() ;

constexpr float_t const& __cordl_internal_get_timeGongStarted() const;

constexpr float_t& __cordl_internal_get_timeGongStarted() ;

constexpr float_t const& __cordl_internal_get_timeRiseStarted() const;

constexpr float_t& __cordl_internal_get_timeRiseStarted() ;

constexpr float_t const& __cordl_internal_get_totalTimeToRise() const;

constexpr float_t& __cordl_internal_get_totalTimeToRise() ;

constexpr float_t const& __cordl_internal_get_velocityIncreaseTime() const;

constexpr float_t& __cordl_internal_get_velocityIncreaseTime() ;

constexpr float_t const& __cordl_internal_get_velocityStep() const;

constexpr float_t& __cordl_internal_get_velocityStep() ;

constexpr bool const& __cordl_internal_get_wasSurroundedLastCheck() const;

constexpr bool& __cordl_internal_get_wasSurroundedLastCheck() ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::HalloweenGhostChaser_GhostData  value) ;

constexpr void __cordl_internal_set_catchDistance(float_t  value) ;

constexpr void __cordl_internal_set_childGhost(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_currentSpeed(float_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::HalloweenGhostChaser_ChaseState  value) ;

constexpr void __cordl_internal_set_currentTargetIdx(int32_t  value) ;

constexpr void __cordl_internal_set_deepLaugh(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_defaultLaugh(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_followTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ghostBody(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ghostGrabbingEulerRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ghostMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_ghostOffsetGrabbingLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ghostStartingEulerRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_gong(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_gongDuration(float_t  value) ;

constexpr void __cordl_internal_set_grabDuration(float_t  value) ;

constexpr void __cordl_internal_set_grabSpeed(float_t  value) ;

constexpr void __cordl_internal_set_grabTime(float_t  value) ;

constexpr void __cordl_internal_set_grabbedPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_hapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_headEulerAngles(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_heightAboveNavmesh(float_t  value) ;

constexpr void __cordl_internal_set_isSummoned(bool  value) ;

constexpr void __cordl_internal_set_lastHeadAngleTime(float_t  value) ;

constexpr void __cordl_internal_set_lastSpeedIncreased(float_t  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::HalloweenGhostChaser_ChaseState  value) ;

constexpr void __cordl_internal_set_lastSummonCheck(float_t  value) ;

constexpr void __cordl_internal_set_laugh(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_leftArm(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftArmGrabbingLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftHandGrabbingLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHandStartingLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxNextTimeToChasePlayer(float_t  value) ;

constexpr void __cordl_internal_set_maxTimeToNextHeadAngle(float_t  value) ;

constexpr void __cordl_internal_set_minGrabCooldown(float_t  value) ;

constexpr void __cordl_internal_set_nextHeadAngleTime(float_t  value) ;

constexpr void __cordl_internal_set_nextPathTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_nextTimeToChasePlayer(float_t  value) ;

constexpr void __cordl_internal_set_noisyOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_path(::UnityEngine::AI::NavMeshPath*  value) ;

constexpr void __cordl_internal_set_points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_possibleTarget(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_rightArm(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightArmGrabbingLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightHandGrabbingLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHandStartingLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_riseDistance(float_t  value) ;

constexpr void __cordl_internal_set_skullTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_spawnIndex(int32_t  value) ;

constexpr void __cordl_internal_set_spawnTransformOffsets(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_spawnTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_summonCount(int32_t  value) ;

constexpr void __cordl_internal_set_summonDistance(float_t  value) ;

constexpr void __cordl_internal_set_summonedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_summoningCheckCountdown(float_t  value) ;

constexpr void __cordl_internal_set_summoningDuration(float_t  value) ;

constexpr void __cordl_internal_set_targetIsOnNavMesh(bool  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_timeEncircled(float_t  value) ;

constexpr void __cordl_internal_set_timeGongStarted(float_t  value) ;

constexpr void __cordl_internal_set_timeRiseStarted(float_t  value) ;

constexpr void __cordl_internal_set_totalTimeToRise(float_t  value) ;

constexpr void __cordl_internal_set_velocityIncreaseTime(float_t  value) ;

constexpr void __cordl_internal_set_velocityStep(float_t  value) ;

constexpr void __cordl_internal_set_wasSurroundedLastCheck(bool  value) ;

/// @brief Method .ctor, addr 0x594e70c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x594defc, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::HalloweenGhostChaser_GhostData get_Data() ;

/// @brief Method set_Data, addr 0x594df64, size 0x68, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::HalloweenGhostChaser_GhostData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HalloweenGhostChaser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HalloweenGhostChaser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HalloweenGhostChaser(HalloweenGhostChaser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HalloweenGhostChaser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HalloweenGhostChaser(HalloweenGhostChaser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2296};

/// @brief Field navMeshSampleRange offset 0xffffffff size 0x4
static constexpr float_t  navMeshSampleRange{static_cast<float_t>(5.0f)};

/// @brief Field heightAboveNavmesh, offset: 0x9c, size: 0x4, def value: None
 float_t  ___heightAboveNavmesh;

/// @brief Field followTarget, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___followTarget;

/// @brief Field childGhost, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___childGhost;

/// @brief Field velocityStep, offset: 0xb0, size: 0x4, def value: None
 float_t  ___velocityStep;

/// @brief Field currentSpeed, offset: 0xb4, size: 0x4, def value: None
 float_t  ___currentSpeed;

/// @brief Field velocityIncreaseTime, offset: 0xb8, size: 0x4, def value: None
 float_t  ___velocityIncreaseTime;

/// @brief Field riseDistance, offset: 0xbc, size: 0x4, def value: None
 float_t  ___riseDistance;

/// @brief Field summonDistance, offset: 0xc0, size: 0x4, def value: None
 float_t  ___summonDistance;

/// @brief Field timeEncircled, offset: 0xc4, size: 0x4, def value: None
 float_t  ___timeEncircled;

/// @brief Field lastSummonCheck, offset: 0xc8, size: 0x4, def value: None
 float_t  ___lastSummonCheck;

/// @brief Field timeGongStarted, offset: 0xcc, size: 0x4, def value: None
 float_t  ___timeGongStarted;

/// @brief Field summoningDuration, offset: 0xd0, size: 0x4, def value: None
 float_t  ___summoningDuration;

/// @brief Field summoningCheckCountdown, offset: 0xd4, size: 0x4, def value: None
 float_t  ___summoningCheckCountdown;

/// @brief Field gongDuration, offset: 0xd8, size: 0x4, def value: None
 float_t  ___gongDuration;

/// @brief Field summonCount, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___summonCount;

/// @brief Field wasSurroundedLastCheck, offset: 0xe0, size: 0x1, def value: None
 bool  ___wasSurroundedLastCheck;

/// @brief Field laugh, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___laugh;

/// @brief Field possibleTarget, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___possibleTarget;

/// @brief Field defaultLaugh, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___defaultLaugh;

/// @brief Field deepLaugh, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___deepLaugh;

/// @brief Field gong, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___gong;

/// @brief Field noisyOffset, offset: 0x110, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___noisyOffset;

/// @brief Field leftArmGrabbingLocal, offset: 0x11c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftArmGrabbingLocal;

/// @brief Field rightArmGrabbingLocal, offset: 0x128, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightArmGrabbingLocal;

/// @brief Field leftHandGrabbingLocal, offset: 0x134, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandGrabbingLocal;

/// @brief Field rightHandGrabbingLocal, offset: 0x140, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandGrabbingLocal;

/// @brief Field leftHandStartingLocal, offset: 0x14c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandStartingLocal;

/// @brief Field rightHandStartingLocal, offset: 0x158, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandStartingLocal;

/// @brief Field ghostOffsetGrabbingLocal, offset: 0x164, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ghostOffsetGrabbingLocal;

/// @brief Field ghostStartingEulerRotation, offset: 0x170, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ghostStartingEulerRotation;

/// @brief Field ghostGrabbingEulerRotation, offset: 0x17c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ghostGrabbingEulerRotation;

/// @brief Field maxTimeToNextHeadAngle, offset: 0x188, size: 0x4, def value: None
 float_t  ___maxTimeToNextHeadAngle;

/// @brief Field lastHeadAngleTime, offset: 0x18c, size: 0x4, def value: None
 float_t  ___lastHeadAngleTime;

/// @brief Field nextHeadAngleTime, offset: 0x190, size: 0x4, def value: None
 float_t  ___nextHeadAngleTime;

/// @brief Field nextTimeToChasePlayer, offset: 0x194, size: 0x4, def value: None
 float_t  ___nextTimeToChasePlayer;

/// @brief Field maxNextTimeToChasePlayer, offset: 0x198, size: 0x4, def value: None
 float_t  ___maxNextTimeToChasePlayer;

/// @brief Field timeRiseStarted, offset: 0x19c, size: 0x4, def value: None
 float_t  ___timeRiseStarted;

/// @brief Field totalTimeToRise, offset: 0x1a0, size: 0x4, def value: None
 float_t  ___totalTimeToRise;

/// @brief Field catchDistance, offset: 0x1a4, size: 0x4, def value: None
 float_t  ___catchDistance;

/// @brief Field grabTime, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___grabTime;

/// @brief Field grabDuration, offset: 0x1ac, size: 0x4, def value: None
 float_t  ___grabDuration;

/// @brief Field grabSpeed, offset: 0x1b0, size: 0x4, def value: None
 float_t  ___grabSpeed;

/// @brief Field minGrabCooldown, offset: 0x1b4, size: 0x4, def value: None
 float_t  ___minGrabCooldown;

/// @brief Field lastSpeedIncreased, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___lastSpeedIncreased;

/// @brief Field headEulerAngles, offset: 0x1c0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___headEulerAngles;

/// @brief Field skullTransform, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___skullTransform;

/// @brief Field leftArm, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftArm;

/// @brief Field rightArm, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightArm;

/// @brief Field leftHand, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHand;

/// @brief Field rightHand, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHand;

/// @brief Field spawnTransforms, offset: 0x1f0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___spawnTransforms;

/// @brief Field spawnTransformOffsets, offset: 0x1f8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___spawnTransformOffsets;

/// @brief Field targetPlayer, offset: 0x200, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// @brief Field ghostBody, offset: 0x208, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ghostBody;

/// @brief Field currentState, offset: 0x210, size: 0x4, def value: None
 ::GlobalNamespace::HalloweenGhostChaser_ChaseState  ___currentState;

/// @brief Field lastState, offset: 0x214, size: 0x4, def value: None
 ::GlobalNamespace::HalloweenGhostChaser_ChaseState  ___lastState;

/// @brief Field spawnIndex, offset: 0x218, size: 0x4, def value: None
 int32_t  ___spawnIndex;

/// @brief Field grabbedPlayer, offset: 0x220, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___grabbedPlayer;

/// @brief Field ghostMaterial, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___ghostMaterial;

/// @brief Field defaultColor, offset: 0x230, size: 0x10, def value: None
 ::UnityEngine::Color  ___defaultColor;

/// @brief Field summonedColor, offset: 0x240, size: 0x10, def value: None
 ::UnityEngine::Color  ___summonedColor;

/// @brief Field isSummoned, offset: 0x250, size: 0x1, def value: None
 bool  ___isSummoned;

/// @brief Field targetIsOnNavMesh, offset: 0x251, size: 0x1, def value: None
 bool  ___targetIsOnNavMesh;

/// [Tooltip("Haptic vibration when chased by lucy")]
/// @brief Field hapticStrength, offset: 0x254, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// @brief Field hapticDuration, offset: 0x258, size: 0x4, def value: None
 float_t  ___hapticDuration;

/// @brief Field path, offset: 0x260, size: 0x8, def value: None
 ::UnityEngine::AI::NavMeshPath*  ___path;

/// @brief Field points, offset: 0x268, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___points;

/// @brief Field currentTargetIdx, offset: 0x270, size: 0x4, def value: None
 int32_t  ___currentTargetIdx;

/// @brief Field nextPathTimestamp, offset: 0x274, size: 0x4, def value: None
 float_t  ___nextPathTimestamp;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 5)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0x278, size: 0x14, def value: None
 ::GlobalNamespace::HalloweenGhostChaser_GhostData  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___heightAboveNavmesh) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___followTarget) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___childGhost) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___velocityStep) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___currentSpeed) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___velocityIncreaseTime) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___riseDistance) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___summonDistance) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___timeEncircled) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___lastSummonCheck) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___timeGongStarted) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___summoningDuration) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___summoningCheckCountdown) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___gongDuration) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___summonCount) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___wasSurroundedLastCheck) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___laugh) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___possibleTarget) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___defaultLaugh) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___deepLaugh) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___gong) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___noisyOffset) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___leftArmGrabbingLocal) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___rightArmGrabbingLocal) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___leftHandGrabbingLocal) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___rightHandGrabbingLocal) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___leftHandStartingLocal) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___rightHandStartingLocal) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___ghostOffsetGrabbingLocal) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___ghostStartingEulerRotation) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___ghostGrabbingEulerRotation) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___maxTimeToNextHeadAngle) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___lastHeadAngleTime) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___nextHeadAngleTime) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___nextTimeToChasePlayer) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___maxNextTimeToChasePlayer) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___timeRiseStarted) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___totalTimeToRise) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___catchDistance) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___grabTime) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___grabDuration) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___grabSpeed) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___minGrabCooldown) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___lastSpeedIncreased) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___headEulerAngles) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___skullTransform) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___leftArm) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___rightArm) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___leftHand) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___rightHand) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___spawnTransforms) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___spawnTransformOffsets) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___targetPlayer) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___ghostBody) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___currentState) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___lastState) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___spawnIndex) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___grabbedPlayer) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___ghostMaterial) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___defaultColor) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___summonedColor) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___isSummoned) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___targetIsOnNavMesh) == 0x251, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___hapticStrength) == 0x254, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___hapticDuration) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___path) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___points) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___currentTargetIdx) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ___nextPathTimestamp) == 0x274, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser, ____Data) == 0x278, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HalloweenGhostChaser) == 0x290, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HalloweenGhostChaser/<>c__DisplayClass74_0
class CORDL_TYPE HalloweenGhostChaser___c__DisplayClass74_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HalloweenGhostChaser>  __4__this;

/// @brief Field randomTarget, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomTarget, put=__cordl_internal_set_randomTarget)) int32_t  randomTarget;

static inline ::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0* New_ctor() ;

/// @brief Method <ChooseRandomTarget>b__0, addr 0x594eee8, size 0x90, virtual false, abstract: false, final false
inline bool _ChooseRandomTarget_b__0(::GlobalNamespace::RigContainer*  x) ;

constexpr ::UnityW<::GlobalNamespace::HalloweenGhostChaser> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HalloweenGhostChaser>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_randomTarget() const;

constexpr int32_t& __cordl_internal_get_randomTarget() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HalloweenGhostChaser>  value) ;

constexpr void __cordl_internal_set_randomTarget(int32_t  value) ;

/// @brief Method .ctor, addr 0x594eee0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HalloweenGhostChaser___c__DisplayClass74_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HalloweenGhostChaser___c__DisplayClass74_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HalloweenGhostChaser___c__DisplayClass74_0(HalloweenGhostChaser___c__DisplayClass74_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HalloweenGhostChaser___c__DisplayClass74_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HalloweenGhostChaser___c__DisplayClass74_0(HalloweenGhostChaser___c__DisplayClass74_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2295};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HalloweenGhostChaser>  _____4__this;

/// @brief Field randomTarget, offset: 0x18, size: 0x4, def value: None
 int32_t  ___randomTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0, ___randomTarget) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
