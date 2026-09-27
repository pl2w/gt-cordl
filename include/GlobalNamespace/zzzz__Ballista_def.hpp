#pragma once
// IWYU pragma private; include "GlobalNamespace/Ballista.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Ballista)
namespace GlobalNamespace {
class Ballista__DebugDrawTrajectory_d__51;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Ballista;
}
namespace GlobalNamespace {
class Ballista__DebugDrawTrajectory_d__51;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Ballista*);
MARK_REF_T(::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Ballista*, "", "Ballista");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51*, "", "Ballista/<DebugDrawTrajectory>d__51");
// Dependencies Photon.Pun.MonoBehaviourPun, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Ballista
class CORDL_TYPE Ballista : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
using _DebugDrawTrajectory_d__51 = ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51;

 __declspec(property(get=get_LaunchSpeed)) float_t  LaunchSpeed;

/// @brief Field animator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field appliedAnimatorPitch, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_appliedAnimatorPitch, put=__cordl_internal_set_appliedAnimatorPitch)) float_t  appliedAnimatorPitch;

/// @brief Field collidingLayer, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_collidingLayer, put=__cordl_internal_set_collidingLayer)) int32_t  collidingLayer;

/// @brief Field currentSpeedIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSpeedIndex, put=__cordl_internal_set_currentSpeedIndex)) int32_t  currentSpeedIndex;

/// @brief Field debugDrawTrajectoryOnLaunch, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDrawTrajectoryOnLaunch, put=__cordl_internal_set_debugDrawTrajectoryOnLaunch)) bool  debugDrawTrajectoryOnLaunch;

/// @brief Field fireCompleteTime, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireCompleteTime, put=__cordl_internal_set_fireCompleteTime)) float_t  fireCompleteTime;

/// @brief Field fireStateHash, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireStateHash, put=__cordl_internal_set_fireStateHash)) int32_t  fireStateHash;

/// @brief Field fireTriggerHash, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireTriggerHash, put=__cordl_internal_set_fireTriggerHash)) int32_t  fireTriggerHash;

/// @brief Field idleStateHash, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_idleStateHash, put=__cordl_internal_set_idleStateHash)) int32_t  idleStateHash;

/// @brief Field launchBone, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchBone, put=__cordl_internal_set_launchBone)) ::UnityW<::UnityEngine::Transform>  launchBone;

/// @brief Field launchDirection, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get_launchDirection, put=__cordl_internal_set_launchDirection)) ::UnityEngine::Vector3  launchDirection;

/// @brief Field launchEnd, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchEnd, put=__cordl_internal_set_launchEnd)) ::UnityW<::UnityEngine::Transform>  launchEnd;

/// @brief Field launchRampDistance, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchRampDistance, put=__cordl_internal_set_launchRampDistance)) float_t  launchRampDistance;

/// @brief Field launchSpeed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchSpeed, put=__cordl_internal_set_launchSpeed)) float_t  launchSpeed;

/// @brief Field launchStart, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchStart, put=__cordl_internal_set_launchStart)) ::UnityW<::UnityEngine::Transform>  launchStart;

/// @brief Field loadStartTime, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadStartTime, put=__cordl_internal_set_loadStartTime)) float_t  loadStartTime;

/// @brief Field loadStateHash, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadStateHash, put=__cordl_internal_set_loadStateHash)) int32_t  loadStateHash;

/// @brief Field loadTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadTime, put=__cordl_internal_set_loadTime)) float_t  loadTime;

/// @brief Field loadTriggerHash, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadTriggerHash, put=__cordl_internal_set_loadTriggerHash)) int32_t  loadTriggerHash;

/// @brief Field notCollidingLayer, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_notCollidingLayer, put=__cordl_internal_set_notCollidingLayer)) int32_t  notCollidingLayer;

/// @brief Field pitch, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) float_t  pitch;

/// @brief Field pitchParamHash, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchParamHash, put=__cordl_internal_set_pitchParamHash)) int32_t  pitchParamHash;

/// @brief Field playerBodyOffsetFromHead, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_playerBodyOffsetFromHead, put=__cordl_internal_set_playerBodyOffsetFromHead)) ::UnityEngine::Vector3  playerBodyOffsetFromHead;

/// @brief Field playerInTrigger, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerInTrigger, put=__cordl_internal_set_playerInTrigger)) bool  playerInTrigger;

/// @brief Field playerLaunched, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerLaunched, put=__cordl_internal_set_playerLaunched)) bool  playerLaunched;

/// @brief Field playerMagnetismStrength, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerMagnetismStrength, put=__cordl_internal_set_playerMagnetismStrength)) float_t  playerMagnetismStrength;

/// @brief Field playerPullInRate, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerPullInRate, put=__cordl_internal_set_playerPullInRate)) float_t  playerPullInRate;

/// @brief Field playerReadyToFire, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerReadyToFire, put=__cordl_internal_set_playerReadyToFire)) bool  playerReadyToFire;

/// @brief Field playerReadyToFireDist, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerReadyToFireDist, put=__cordl_internal_set_playerReadyToFireDist)) float_t  playerReadyToFireDist;

/// @brief Field predictionLinePoints, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_predictionLinePoints, put=__cordl_internal_set_predictionLinePoints)) ::ArrayW<::UnityEngine::Vector3>  predictionLinePoints;

/// @brief Field prevStateHash, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevStateHash, put=__cordl_internal_set_prevStateHash)) int32_t  prevStateHash;

/// @brief Field reloadDelay, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_reloadDelay, put=__cordl_internal_set_reloadDelay)) float_t  reloadDelay;

/// @brief Field speedOneButton, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedOneButton, put=__cordl_internal_set_speedOneButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  speedOneButton;

/// @brief Field speedOptions, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedOptions, put=__cordl_internal_set_speedOptions)) ::ArrayW<float_t>  speedOptions;

/// @brief Field speedThreeButton, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedThreeButton, put=__cordl_internal_set_speedThreeButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  speedThreeButton;

/// @brief Field speedTwoButton, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedTwoButton, put=__cordl_internal_set_speedTwoButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  speedTwoButton;

/// @brief Field speedZeroButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedZeroButton, put=__cordl_internal_set_speedZeroButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  speedZeroButton;

/// @brief Field useSpeedOptions, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSpeedOptions, put=__cordl_internal_set_useSpeedOptions)) bool  useSpeedOptions;

/// @brief Method Awake, addr 0x5d11e30, size 0x17c, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(Ballista::<DebugDrawTrajectory>d__51))]
/// @brief Method DebugDrawTrajectory, addr 0x5d128bc, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DebugDrawTrajectory(float_t  duration) ;

/// [PunRPC]
/// @brief Method FireBallistaRPC, addr 0x5d12b4c, size 0x4, virtual false, abstract: false, final false
inline void FireBallistaRPC(::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method FireLocal, addr 0x5d12878, size 0x44, virtual false, abstract: false, final false
inline void FireLocal() ;

/// @brief Method GetPlayerBodyCenterPosition, addr 0x5d1273c, size 0x13c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPlayerBodyCenterPosition(::GorillaLocomotion::GTPlayer*  player) ;

static inline ::GlobalNamespace::Ballista* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5d12dc4, size 0x150, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnTriggerEnter, addr 0x5d12938, size 0x10c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5d12a44, size 0x108, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method RefreshButtonColors, addr 0x5d11fac, size 0xa0, virtual false, abstract: false, final false
inline void RefreshButtonColors() ;

/// @brief Method SetSpeedIndex, addr 0x5d12f14, size 0x8, virtual false, abstract: false, final false
inline void SetSpeedIndex(int32_t  index) ;

/// @brief Method TriggerFire, addr 0x5d11dc8, size 0x20, virtual false, abstract: false, final false
inline void TriggerFire() ;

/// @brief Method TriggerLoad, addr 0x5d11da8, size 0x20, virtual false, abstract: false, final false
inline void TriggerLoad() ;

/// @brief Method Update, addr 0x5d1204c, size 0x6f0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePredictionLine, addr 0x5d12b50, size 0x24c, virtual false, abstract: false, final false
inline void UpdatePredictionLine() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_appliedAnimatorPitch() const;

constexpr float_t& __cordl_internal_get_appliedAnimatorPitch() ;

constexpr int32_t const& __cordl_internal_get_collidingLayer() const;

constexpr int32_t& __cordl_internal_get_collidingLayer() ;

constexpr int32_t const& __cordl_internal_get_currentSpeedIndex() const;

constexpr int32_t& __cordl_internal_get_currentSpeedIndex() ;

constexpr bool const& __cordl_internal_get_debugDrawTrajectoryOnLaunch() const;

constexpr bool& __cordl_internal_get_debugDrawTrajectoryOnLaunch() ;

constexpr float_t const& __cordl_internal_get_fireCompleteTime() const;

constexpr float_t& __cordl_internal_get_fireCompleteTime() ;

constexpr int32_t const& __cordl_internal_get_fireStateHash() const;

constexpr int32_t& __cordl_internal_get_fireStateHash() ;

constexpr int32_t const& __cordl_internal_get_fireTriggerHash() const;

constexpr int32_t& __cordl_internal_get_fireTriggerHash() ;

constexpr int32_t const& __cordl_internal_get_idleStateHash() const;

constexpr int32_t& __cordl_internal_get_idleStateHash() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_launchBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_launchBone() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_launchDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_launchDirection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_launchEnd() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_launchEnd() ;

constexpr float_t const& __cordl_internal_get_launchRampDistance() const;

constexpr float_t& __cordl_internal_get_launchRampDistance() ;

constexpr float_t const& __cordl_internal_get_launchSpeed() const;

constexpr float_t& __cordl_internal_get_launchSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_launchStart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_launchStart() ;

constexpr float_t const& __cordl_internal_get_loadStartTime() const;

constexpr float_t& __cordl_internal_get_loadStartTime() ;

constexpr int32_t const& __cordl_internal_get_loadStateHash() const;

constexpr int32_t& __cordl_internal_get_loadStateHash() ;

constexpr float_t const& __cordl_internal_get_loadTime() const;

constexpr float_t& __cordl_internal_get_loadTime() ;

constexpr int32_t const& __cordl_internal_get_loadTriggerHash() const;

constexpr int32_t& __cordl_internal_get_loadTriggerHash() ;

constexpr int32_t const& __cordl_internal_get_notCollidingLayer() const;

constexpr int32_t& __cordl_internal_get_notCollidingLayer() ;

constexpr float_t const& __cordl_internal_get_pitch() const;

constexpr float_t& __cordl_internal_get_pitch() ;

constexpr int32_t const& __cordl_internal_get_pitchParamHash() const;

constexpr int32_t& __cordl_internal_get_pitchParamHash() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_playerBodyOffsetFromHead() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_playerBodyOffsetFromHead() ;

constexpr bool const& __cordl_internal_get_playerInTrigger() const;

constexpr bool& __cordl_internal_get_playerInTrigger() ;

constexpr bool const& __cordl_internal_get_playerLaunched() const;

constexpr bool& __cordl_internal_get_playerLaunched() ;

constexpr float_t const& __cordl_internal_get_playerMagnetismStrength() const;

constexpr float_t& __cordl_internal_get_playerMagnetismStrength() ;

constexpr float_t const& __cordl_internal_get_playerPullInRate() const;

constexpr float_t& __cordl_internal_get_playerPullInRate() ;

constexpr bool const& __cordl_internal_get_playerReadyToFire() const;

constexpr bool& __cordl_internal_get_playerReadyToFire() ;

constexpr float_t const& __cordl_internal_get_playerReadyToFireDist() const;

constexpr float_t& __cordl_internal_get_playerReadyToFireDist() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_predictionLinePoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_predictionLinePoints() ;

constexpr int32_t const& __cordl_internal_get_prevStateHash() const;

constexpr int32_t& __cordl_internal_get_prevStateHash() ;

constexpr float_t const& __cordl_internal_get_reloadDelay() const;

constexpr float_t& __cordl_internal_get_reloadDelay() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_speedOneButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_speedOneButton() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_speedOptions() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_speedOptions() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_speedThreeButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_speedThreeButton() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_speedTwoButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_speedTwoButton() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_speedZeroButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_speedZeroButton() ;

constexpr bool const& __cordl_internal_get_useSpeedOptions() const;

constexpr bool& __cordl_internal_get_useSpeedOptions() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_appliedAnimatorPitch(float_t  value) ;

constexpr void __cordl_internal_set_collidingLayer(int32_t  value) ;

constexpr void __cordl_internal_set_currentSpeedIndex(int32_t  value) ;

constexpr void __cordl_internal_set_debugDrawTrajectoryOnLaunch(bool  value) ;

constexpr void __cordl_internal_set_fireCompleteTime(float_t  value) ;

constexpr void __cordl_internal_set_fireStateHash(int32_t  value) ;

constexpr void __cordl_internal_set_fireTriggerHash(int32_t  value) ;

constexpr void __cordl_internal_set_idleStateHash(int32_t  value) ;

constexpr void __cordl_internal_set_launchBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_launchDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_launchEnd(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_launchRampDistance(float_t  value) ;

constexpr void __cordl_internal_set_launchSpeed(float_t  value) ;

constexpr void __cordl_internal_set_launchStart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_loadStartTime(float_t  value) ;

constexpr void __cordl_internal_set_loadStateHash(int32_t  value) ;

constexpr void __cordl_internal_set_loadTime(float_t  value) ;

constexpr void __cordl_internal_set_loadTriggerHash(int32_t  value) ;

constexpr void __cordl_internal_set_notCollidingLayer(int32_t  value) ;

constexpr void __cordl_internal_set_pitch(float_t  value) ;

constexpr void __cordl_internal_set_pitchParamHash(int32_t  value) ;

constexpr void __cordl_internal_set_playerBodyOffsetFromHead(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_playerInTrigger(bool  value) ;

constexpr void __cordl_internal_set_playerLaunched(bool  value) ;

constexpr void __cordl_internal_set_playerMagnetismStrength(float_t  value) ;

constexpr void __cordl_internal_set_playerPullInRate(float_t  value) ;

constexpr void __cordl_internal_set_playerReadyToFire(bool  value) ;

constexpr void __cordl_internal_set_playerReadyToFireDist(float_t  value) ;

constexpr void __cordl_internal_set_predictionLinePoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_prevStateHash(int32_t  value) ;

constexpr void __cordl_internal_set_reloadDelay(float_t  value) ;

constexpr void __cordl_internal_set_speedOneButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_speedOptions(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_speedThreeButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_speedTwoButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_speedZeroButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_useSpeedOptions(bool  value) ;

/// @brief Method .ctor, addr 0x5d12f1c, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LaunchSpeed, addr 0x5d11de8, size 0x48, virtual false, abstract: false, final false
inline float_t get_LaunchSpeed() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ballista() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ballista", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ballista(Ballista && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ballista", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ballista(Ballista const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{471};

/// @brief Field predictionLineSamples offset 0xffffffff size 0x4
static constexpr int32_t  predictionLineSamples{static_cast<int32_t>(0xf0)};

/// @brief Field animator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field launchStart, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___launchStart;

/// @brief Field launchEnd, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___launchEnd;

/// @brief Field launchBone, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___launchBone;

/// @brief Field reloadDelay, offset: 0x48, size: 0x4, def value: None
 float_t  ___reloadDelay;

/// @brief Field loadTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ___loadTime;

/// @brief Field playerMagnetismStrength, offset: 0x50, size: 0x4, def value: None
 float_t  ___playerMagnetismStrength;

/// @brief Field launchSpeed, offset: 0x54, size: 0x4, def value: None
 float_t  ___launchSpeed;

/// [Range(0, 1)]
/// @brief Field pitch, offset: 0x58, size: 0x4, def value: None
 float_t  ___pitch;

/// @brief Field useSpeedOptions, offset: 0x5c, size: 0x1, def value: None
 bool  ___useSpeedOptions;

/// @brief Field speedOptions, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t>  ___speedOptions;

/// @brief Field currentSpeedIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___currentSpeedIndex;

/// @brief Field speedZeroButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___speedZeroButton;

/// @brief Field speedOneButton, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___speedOneButton;

/// @brief Field speedTwoButton, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___speedTwoButton;

/// @brief Field speedThreeButton, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___speedThreeButton;

/// @brief Field debugDrawTrajectoryOnLaunch, offset: 0x90, size: 0x1, def value: None
 bool  ___debugDrawTrajectoryOnLaunch;

/// @brief Field loadTriggerHash, offset: 0x94, size: 0x4, def value: None
 int32_t  ___loadTriggerHash;

/// @brief Field fireTriggerHash, offset: 0x98, size: 0x4, def value: None
 int32_t  ___fireTriggerHash;

/// @brief Field pitchParamHash, offset: 0x9c, size: 0x4, def value: None
 int32_t  ___pitchParamHash;

/// @brief Field idleStateHash, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___idleStateHash;

/// @brief Field loadStateHash, offset: 0xa4, size: 0x4, def value: None
 int32_t  ___loadStateHash;

/// @brief Field fireStateHash, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___fireStateHash;

/// @brief Field prevStateHash, offset: 0xac, size: 0x4, def value: None
 int32_t  ___prevStateHash;

/// @brief Field fireCompleteTime, offset: 0xb0, size: 0x4, def value: None
 float_t  ___fireCompleteTime;

/// @brief Field loadStartTime, offset: 0xb4, size: 0x4, def value: None
 float_t  ___loadStartTime;

/// @brief Field playerInTrigger, offset: 0xb8, size: 0x1, def value: None
 bool  ___playerInTrigger;

/// @brief Field playerReadyToFire, offset: 0xb9, size: 0x1, def value: None
 bool  ___playerReadyToFire;

/// @brief Field playerLaunched, offset: 0xba, size: 0x1, def value: None
 bool  ___playerLaunched;

/// @brief Field playerReadyToFireDist, offset: 0xbc, size: 0x4, def value: None
 float_t  ___playerReadyToFireDist;

/// @brief Field playerBodyOffsetFromHead, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___playerBodyOffsetFromHead;

/// @brief Field launchDirection, offset: 0xcc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___launchDirection;

/// @brief Field launchRampDistance, offset: 0xd8, size: 0x4, def value: None
 float_t  ___launchRampDistance;

/// @brief Field collidingLayer, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___collidingLayer;

/// @brief Field notCollidingLayer, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___notCollidingLayer;

/// @brief Field playerPullInRate, offset: 0xe4, size: 0x4, def value: None
 float_t  ___playerPullInRate;

/// @brief Field appliedAnimatorPitch, offset: 0xe8, size: 0x4, def value: None
 float_t  ___appliedAnimatorPitch;

/// @brief Field predictionLinePoints, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___predictionLinePoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Ballista, ___animator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___launchStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___launchEnd) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___launchBone) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___reloadDelay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___loadTime) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___playerMagnetismStrength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___launchSpeed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___pitch) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___useSpeedOptions) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___speedOptions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___currentSpeedIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___speedZeroButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___speedOneButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___speedTwoButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___speedThreeButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___debugDrawTrajectoryOnLaunch) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___loadTriggerHash) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___fireTriggerHash) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___pitchParamHash) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___idleStateHash) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___loadStateHash) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___fireStateHash) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___prevStateHash) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___fireCompleteTime) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___loadStartTime) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___playerInTrigger) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___playerReadyToFire) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___playerLaunched) == 0xba, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___playerReadyToFireDist) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___playerBodyOffsetFromHead) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___launchDirection) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___launchRampDistance) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___collidingLayer) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___notCollidingLayer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___playerPullInRate) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___appliedAnimatorPitch) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista, ___predictionLinePoints) == 0xf0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Ballista) == 0xf8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Ballista/<DebugDrawTrajectory>d__51
class CORDL_TYPE Ballista__DebugDrawTrajectory_d__51 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::Ballista>  __4__this;

/// @brief Field <startTime>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Field duration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d130e0, size 0x194, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d13274, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d1327c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d132b4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d130dc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::Ballista> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::Ballista>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::Ballista>  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d12d9c, size 0x28, virtual false, abstract: false, final false
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
constexpr Ballista__DebugDrawTrajectory_d__51() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ballista__DebugDrawTrajectory_d__51", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ballista__DebugDrawTrajectory_d__51(Ballista__DebugDrawTrajectory_d__51 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ballista__DebugDrawTrajectory_d__51", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ballista__DebugDrawTrajectory_d__51(Ballista__DebugDrawTrajectory_d__51 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{470};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Ballista>  _____4__this;

/// @brief Field duration, offset: 0x28, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <startTime>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____startTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51, ____startTime_5__2) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Ballista__DebugDrawTrajectory_d__51) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
