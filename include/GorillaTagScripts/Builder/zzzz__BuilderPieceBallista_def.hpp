#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceBallista.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceBallista_BallistaState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceBallista)
namespace GlobalNamespace {
struct BuilderPieceBallista_BallistaState;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTagScripts::Builder {
class BuilderPieceBallista__DebugDrawTrajectory_d__65;
}
namespace GorillaTagScripts::Builder {
class BuilderSmallHandTrigger;
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
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderPieceBallista;
}
namespace GorillaTagScripts::Builder {
class BuilderPieceBallista__DebugDrawTrajectory_d__65;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderPieceBallista*);
MARK_REF_T(::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderPieceBallista*, "GorillaTagScripts.Builder", "BuilderPieceBallista");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65*, "GorillaTagScripts.Builder", "BuilderPieceBallista/<DebugDrawTrajectory>d__65");
// Dependencies GorillaTagScripts.Builder.BuilderPieceBallista::BallistaState, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderPieceBallista
class CORDL_TYPE BuilderPieceBallista : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BallistaState = ::GlobalNamespace::BuilderPieceBallista_BallistaState;

using _DebugDrawTrajectory_d__65 = ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65;

/// @brief Field animator, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field appliedAnimatorPitch, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_appliedAnimatorPitch, put=__cordl_internal_set_appliedAnimatorPitch)) float_t  appliedAnimatorPitch;

/// @brief Field autoLaunch, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoLaunch, put=__cordl_internal_set_autoLaunch)) bool  autoLaunch;

/// @brief Field autoLaunchDelay, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoLaunchDelay, put=__cordl_internal_set_autoLaunchDelay)) float_t  autoLaunchDelay;

/// @brief Field ballistaState, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_ballistaState, put=__cordl_internal_set_ballistaState)) ::GlobalNamespace::BuilderPieceBallista_BallistaState  ballistaState;

/// @brief Field cockSFX, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_cockSFX, put=__cordl_internal_set_cockSFX)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  cockSFX;

/// @brief Field debugDrawTrajectoryOnLaunch, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDrawTrajectoryOnLaunch, put=__cordl_internal_set_debugDrawTrajectoryOnLaunch)) bool  debugDrawTrajectoryOnLaunch;

/// @brief Field disableWhileLaunching, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableWhileLaunching, put=__cordl_internal_set_disableWhileLaunching)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  disableWhileLaunching;

/// @brief Field enteredTriggerTime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_enteredTriggerTime, put=__cordl_internal_set_enteredTriggerTime)) double_t  enteredTriggerTime;

/// @brief Field fireStateHash, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireStateHash, put=__cordl_internal_set_fireStateHash)) int32_t  fireStateHash;

/// @brief Field fireTriggerHash, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireTriggerHash, put=__cordl_internal_set_fireTriggerHash)) int32_t  fireTriggerHash;

/// @brief Field handTrigger, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_handTrigger, put=__cordl_internal_set_handTrigger)) ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  handTrigger;

/// @brief Field hasLaunchParticles, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLaunchParticles, put=__cordl_internal_set_hasLaunchParticles)) bool  hasLaunchParticles;

/// @brief Field idleStateHash, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_idleStateHash, put=__cordl_internal_set_idleStateHash)) int32_t  idleStateHash;

/// @brief Field launchBigMonkes, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get_launchBigMonkes, put=__cordl_internal_set_launchBigMonkes)) bool  launchBigMonkes;

/// @brief Field launchBone, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchBone, put=__cordl_internal_set_launchBone)) ::UnityW<::UnityEngine::Transform>  launchBone;

/// @brief Field launchDirection, offset 0xec, size 0xc 
 __declspec(property(get=__cordl_internal_get_launchDirection, put=__cordl_internal_set_launchDirection)) ::UnityEngine::Vector3  launchDirection;

/// @brief Field launchEnd, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchEnd, put=__cordl_internal_set_launchEnd)) ::UnityW<::UnityEngine::Transform>  launchEnd;

/// @brief Field launchParticles, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchParticles, put=__cordl_internal_set_launchParticles)) ::UnityW<::UnityEngine::ParticleSystem>  launchParticles;

/// @brief Field launchRampDistance, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchRampDistance, put=__cordl_internal_set_launchRampDistance)) float_t  launchRampDistance;

/// @brief Field launchSFX, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchSFX, put=__cordl_internal_set_launchSFX)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  launchSFX;

/// @brief Field launchSpeed, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchSpeed, put=__cordl_internal_set_launchSpeed)) float_t  launchSpeed;

/// @brief Field launchStart, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchStart, put=__cordl_internal_set_launchStart)) ::UnityW<::UnityEngine::Transform>  launchStart;

/// @brief Field launchedTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchedTime, put=__cordl_internal_set_launchedTime)) double_t  launchedTime;

/// @brief Field loadCompleteTime, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadCompleteTime, put=__cordl_internal_set_loadCompleteTime)) double_t  loadCompleteTime;

/// @brief Field loadSFX, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadSFX, put=__cordl_internal_set_loadSFX)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  loadSFX;

/// @brief Field loadStateHash, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadStateHash, put=__cordl_internal_set_loadStateHash)) int32_t  loadStateHash;

/// @brief Field loadTime, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadTime, put=__cordl_internal_set_loadTime)) float_t  loadTime;

/// @brief Field loadTriggerHash, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_loadTriggerHash, put=__cordl_internal_set_loadTriggerHash)) int32_t  loadTriggerHash;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field pitch, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) float_t  pitch;

/// @brief Field pitchParamHash, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchParamHash, put=__cordl_internal_set_pitchParamHash)) int32_t  pitchParamHash;

/// @brief Field playerBodyOffsetFromHead, offset 0x108, size 0xc 
 __declspec(property(get=__cordl_internal_get_playerBodyOffsetFromHead, put=__cordl_internal_set_playerBodyOffsetFromHead)) ::UnityEngine::Vector3  playerBodyOffsetFromHead;

/// @brief Field playerInTrigger, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerInTrigger, put=__cordl_internal_set_playerInTrigger)) bool  playerInTrigger;

/// @brief Field playerLaunched, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerLaunched, put=__cordl_internal_set_playerLaunched)) bool  playerLaunched;

/// @brief Field playerMagnetismStrength, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerMagnetismStrength, put=__cordl_internal_set_playerMagnetismStrength)) float_t  playerMagnetismStrength;

/// @brief Field playerPullInRate, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerPullInRate, put=__cordl_internal_set_playerPullInRate)) float_t  playerPullInRate;

/// @brief Field playerReadyToFireDist, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerReadyToFireDist, put=__cordl_internal_set_playerReadyToFireDist)) float_t  playerReadyToFireDist;

/// @brief Field playerRigInTrigger, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerRigInTrigger, put=__cordl_internal_set_playerRigInTrigger)) ::UnityW<::GlobalNamespace::VRRig>  playerRigInTrigger;

/// @brief Field predictionLinePoints, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_predictionLinePoints, put=__cordl_internal_set_predictionLinePoints)) ::ArrayW<::UnityEngine::Vector3>  predictionLinePoints;

/// @brief Field prepareForLaunchDistance, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_prepareForLaunchDistance, put=__cordl_internal_set_prepareForLaunchDistance)) float_t  prepareForLaunchDistance;

/// @brief Field reloadDelay, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_reloadDelay, put=__cordl_internal_set_reloadDelay)) float_t  reloadDelay;

/// @brief Field slipOverrideDuration, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_slipOverrideDuration, put=__cordl_internal_set_slipOverrideDuration)) float_t  slipOverrideDuration;

/// @brief Field triggers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggers, put=__cordl_internal_set_triggers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  triggers;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Method Awake, addr 0x5c23354, size 0x200, virtual false, abstract: false, final false
inline void Awake() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.Builder.BuilderPieceBallista::<DebugDrawTrajectory>d__65))]
/// @brief Method DebugDrawTrajectory, addr 0x5c257b4, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DebugDrawTrajectory(float_t  duration) ;

/// @brief Method FunctionalPieceUpdate, addr 0x5c25830, size 0xd8, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method GetPlayerBodyCenterPosition, addr 0x5c23e70, size 0x134, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPlayerBodyCenterPosition(::UnityEngine::Transform*  headTransform, float_t  playerScale) ;

/// @brief Method IsStateValid, addr 0x5c25114, size 0x10, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

static inline ::GorillaTagScripts::Builder::BuilderPieceBallista* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c23554, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnHandTriggerPressed, addr 0x5c2362c, size 0x50, virtual false, abstract: false, final false
inline void OnHandTriggerPressed() ;

/// @brief Method OnPieceActivate, addr 0x5c24b3c, size 0x250, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c249e4, size 0x50, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c24d8c, size 0x1b4, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c24a34, size 0x1c, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c24a50, size 0xec, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnStateChanged, addr 0x5c25124, size 0x690, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c24f40, size 0x1d4, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnTriggerEnter, addr 0x5c244c4, size 0x2a8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5c2476c, size 0x278, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method ResetFlags, addr 0x5c23e60, size 0x10, virtual false, abstract: false, final false
inline void ResetFlags() ;

/// @brief Method UpdatePlayerPosition, addr 0x5c23fa4, size 0x520, virtual false, abstract: false, final false
inline void UpdatePlayerPosition() ;

/// @brief Method UpdatePredictionLine, addr 0x5c25908, size 0x250, virtual false, abstract: false, final false
inline void UpdatePredictionLine() ;

/// @brief Method UpdateStateMaster, addr 0x5c2367c, size 0x7e4, virtual false, abstract: false, final false
inline void UpdateStateMaster() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_appliedAnimatorPitch() const;

constexpr float_t& __cordl_internal_get_appliedAnimatorPitch() ;

constexpr bool const& __cordl_internal_get_autoLaunch() const;

constexpr bool& __cordl_internal_get_autoLaunch() ;

constexpr float_t const& __cordl_internal_get_autoLaunchDelay() const;

constexpr float_t& __cordl_internal_get_autoLaunchDelay() ;

constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState const& __cordl_internal_get_ballistaState() const;

constexpr ::GlobalNamespace::BuilderPieceBallista_BallistaState& __cordl_internal_get_ballistaState() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_cockSFX() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_cockSFX() ;

constexpr bool const& __cordl_internal_get_debugDrawTrajectoryOnLaunch() const;

constexpr bool& __cordl_internal_get_debugDrawTrajectoryOnLaunch() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_disableWhileLaunching() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_disableWhileLaunching() ;

constexpr double_t const& __cordl_internal_get_enteredTriggerTime() const;

constexpr double_t& __cordl_internal_get_enteredTriggerTime() ;

constexpr int32_t const& __cordl_internal_get_fireStateHash() const;

constexpr int32_t& __cordl_internal_get_fireStateHash() ;

constexpr int32_t const& __cordl_internal_get_fireTriggerHash() const;

constexpr int32_t& __cordl_internal_get_fireTriggerHash() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger> const& __cordl_internal_get_handTrigger() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>& __cordl_internal_get_handTrigger() ;

constexpr bool const& __cordl_internal_get_hasLaunchParticles() const;

constexpr bool& __cordl_internal_get_hasLaunchParticles() ;

constexpr int32_t const& __cordl_internal_get_idleStateHash() const;

constexpr int32_t& __cordl_internal_get_idleStateHash() ;

constexpr bool const& __cordl_internal_get_launchBigMonkes() const;

constexpr bool& __cordl_internal_get_launchBigMonkes() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_launchBone() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_launchBone() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_launchDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_launchDirection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_launchEnd() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_launchEnd() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_launchParticles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_launchParticles() ;

constexpr float_t const& __cordl_internal_get_launchRampDistance() const;

constexpr float_t& __cordl_internal_get_launchRampDistance() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_launchSFX() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_launchSFX() ;

constexpr float_t const& __cordl_internal_get_launchSpeed() const;

constexpr float_t& __cordl_internal_get_launchSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_launchStart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_launchStart() ;

constexpr double_t const& __cordl_internal_get_launchedTime() const;

constexpr double_t& __cordl_internal_get_launchedTime() ;

constexpr double_t const& __cordl_internal_get_loadCompleteTime() const;

constexpr double_t& __cordl_internal_get_loadCompleteTime() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_loadSFX() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_loadSFX() ;

constexpr int32_t const& __cordl_internal_get_loadStateHash() const;

constexpr int32_t& __cordl_internal_get_loadStateHash() ;

constexpr float_t const& __cordl_internal_get_loadTime() const;

constexpr float_t& __cordl_internal_get_loadTime() ;

constexpr int32_t const& __cordl_internal_get_loadTriggerHash() const;

constexpr int32_t& __cordl_internal_get_loadTriggerHash() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

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

constexpr float_t const& __cordl_internal_get_playerReadyToFireDist() const;

constexpr float_t& __cordl_internal_get_playerReadyToFireDist() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_playerRigInTrigger() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_playerRigInTrigger() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_predictionLinePoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_predictionLinePoints() ;

constexpr float_t const& __cordl_internal_get_prepareForLaunchDistance() const;

constexpr float_t& __cordl_internal_get_prepareForLaunchDistance() ;

constexpr float_t const& __cordl_internal_get_reloadDelay() const;

constexpr float_t& __cordl_internal_get_reloadDelay() ;

constexpr float_t const& __cordl_internal_get_slipOverrideDuration() const;

constexpr float_t& __cordl_internal_get_slipOverrideDuration() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_triggers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_triggers() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_appliedAnimatorPitch(float_t  value) ;

constexpr void __cordl_internal_set_autoLaunch(bool  value) ;

constexpr void __cordl_internal_set_autoLaunchDelay(float_t  value) ;

constexpr void __cordl_internal_set_ballistaState(::GlobalNamespace::BuilderPieceBallista_BallistaState  value) ;

constexpr void __cordl_internal_set_cockSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_debugDrawTrajectoryOnLaunch(bool  value) ;

constexpr void __cordl_internal_set_disableWhileLaunching(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_enteredTriggerTime(double_t  value) ;

constexpr void __cordl_internal_set_fireStateHash(int32_t  value) ;

constexpr void __cordl_internal_set_fireTriggerHash(int32_t  value) ;

constexpr void __cordl_internal_set_handTrigger(::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  value) ;

constexpr void __cordl_internal_set_hasLaunchParticles(bool  value) ;

constexpr void __cordl_internal_set_idleStateHash(int32_t  value) ;

constexpr void __cordl_internal_set_launchBigMonkes(bool  value) ;

constexpr void __cordl_internal_set_launchBone(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_launchDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_launchEnd(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_launchParticles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_launchRampDistance(float_t  value) ;

constexpr void __cordl_internal_set_launchSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_launchSpeed(float_t  value) ;

constexpr void __cordl_internal_set_launchStart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_launchedTime(double_t  value) ;

constexpr void __cordl_internal_set_loadCompleteTime(double_t  value) ;

constexpr void __cordl_internal_set_loadSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_loadStateHash(int32_t  value) ;

constexpr void __cordl_internal_set_loadTime(float_t  value) ;

constexpr void __cordl_internal_set_loadTriggerHash(int32_t  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_pitch(float_t  value) ;

constexpr void __cordl_internal_set_pitchParamHash(int32_t  value) ;

constexpr void __cordl_internal_set_playerBodyOffsetFromHead(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_playerInTrigger(bool  value) ;

constexpr void __cordl_internal_set_playerLaunched(bool  value) ;

constexpr void __cordl_internal_set_playerMagnetismStrength(float_t  value) ;

constexpr void __cordl_internal_set_playerPullInRate(float_t  value) ;

constexpr void __cordl_internal_set_playerReadyToFireDist(float_t  value) ;

constexpr void __cordl_internal_set_playerRigInTrigger(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_predictionLinePoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_prepareForLaunchDistance(float_t  value) ;

constexpr void __cordl_internal_set_reloadDelay(float_t  value) ;

constexpr void __cordl_internal_set_slipOverrideDuration(float_t  value) ;

constexpr void __cordl_internal_set_triggers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

/// @brief Method .ctor, addr 0x5c25b80, size 0x188, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* i___GlobalNamespace__IBuilderPieceFunctional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceBallista() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceBallista", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceBallista(BuilderPieceBallista && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceBallista", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceBallista(BuilderPieceBallista const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4152};

/// @brief Field predictionLineSamples offset 0xffffffff size 0x4
static constexpr int32_t  predictionLineSamples{static_cast<int32_t>(0xf0)};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field triggers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___triggers;

/// [SerializeField]
/// @brief Field disableWhileLaunching, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___disableWhileLaunching;

/// [Tooltip("Trigger to start the launch if not autoLaunch")]
/// [SerializeField]
/// @brief Field handTrigger, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::BuilderSmallHandTrigger>  ___handTrigger;

/// [Tooltip("Should the player launch without a hand trigger press")]
/// [SerializeField]
/// @brief Field autoLaunch, offset: 0x40, size: 0x1, def value: None
 bool  ___autoLaunch;

/// [SerializeField]
/// @brief Field autoLaunchDelay, offset: 0x44, size: 0x4, def value: None
 float_t  ___autoLaunchDelay;

/// @brief Field enteredTriggerTime, offset: 0x48, size: 0x8, def value: None
 double_t  ___enteredTriggerTime;

/// @brief Field animator, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field launchStart, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___launchStart;

/// @brief Field launchEnd, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___launchEnd;

/// @brief Field launchBone, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___launchBone;

/// [SerializeField]
/// @brief Field loadSFX, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___loadSFX;

/// [SerializeField]
/// @brief Field launchSFX, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___launchSFX;

/// [SerializeField]
/// @brief Field cockSFX, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___cockSFX;

/// [SerializeField]
/// @brief Field launchParticles, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___launchParticles;

/// @brief Field hasLaunchParticles, offset: 0x90, size: 0x1, def value: None
 bool  ___hasLaunchParticles;

/// @brief Field reloadDelay, offset: 0x94, size: 0x4, def value: None
 float_t  ___reloadDelay;

/// @brief Field loadTime, offset: 0x98, size: 0x4, def value: None
 float_t  ___loadTime;

/// @brief Field slipOverrideDuration, offset: 0x9c, size: 0x4, def value: None
 float_t  ___slipOverrideDuration;

/// @brief Field launchedTime, offset: 0xa0, size: 0x8, def value: None
 double_t  ___launchedTime;

/// @brief Field playerMagnetismStrength, offset: 0xa8, size: 0x4, def value: None
 float_t  ___playerMagnetismStrength;

/// [Tooltip("Speed will be scaled by piece scale")]
/// @brief Field launchSpeed, offset: 0xac, size: 0x4, def value: None
 float_t  ___launchSpeed;

/// [Range(0, 1)]
/// @brief Field pitch, offset: 0xb0, size: 0x4, def value: None
 float_t  ___pitch;

/// @brief Field debugDrawTrajectoryOnLaunch, offset: 0xb4, size: 0x1, def value: None
 bool  ___debugDrawTrajectoryOnLaunch;

/// @brief Field loadTriggerHash, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___loadTriggerHash;

/// @brief Field fireTriggerHash, offset: 0xbc, size: 0x4, def value: None
 int32_t  ___fireTriggerHash;

/// @brief Field pitchParamHash, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___pitchParamHash;

/// @brief Field idleStateHash, offset: 0xc4, size: 0x4, def value: None
 int32_t  ___idleStateHash;

/// @brief Field loadStateHash, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___loadStateHash;

/// @brief Field fireStateHash, offset: 0xcc, size: 0x4, def value: None
 int32_t  ___fireStateHash;

/// @brief Field playerInTrigger, offset: 0xd0, size: 0x1, def value: None
 bool  ___playerInTrigger;

/// @brief Field playerRigInTrigger, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___playerRigInTrigger;

/// @brief Field playerLaunched, offset: 0xe0, size: 0x1, def value: None
 bool  ___playerLaunched;

/// @brief Field playerReadyToFireDist, offset: 0xe4, size: 0x4, def value: None
 float_t  ___playerReadyToFireDist;

/// @brief Field prepareForLaunchDistance, offset: 0xe8, size: 0x4, def value: None
 float_t  ___prepareForLaunchDistance;

/// @brief Field launchDirection, offset: 0xec, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___launchDirection;

/// @brief Field launchRampDistance, offset: 0xf8, size: 0x4, def value: None
 float_t  ___launchRampDistance;

/// @brief Field playerPullInRate, offset: 0xfc, size: 0x4, def value: None
 float_t  ___playerPullInRate;

/// @brief Field appliedAnimatorPitch, offset: 0x100, size: 0x4, def value: None
 float_t  ___appliedAnimatorPitch;

/// @brief Field launchBigMonkes, offset: 0x104, size: 0x1, def value: None
 bool  ___launchBigMonkes;

/// @brief Field playerBodyOffsetFromHead, offset: 0x108, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___playerBodyOffsetFromHead;

/// @brief Field loadCompleteTime, offset: 0x118, size: 0x8, def value: None
 double_t  ___loadCompleteTime;

/// @brief Field ballistaState, offset: 0x120, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPieceBallista_BallistaState  ___ballistaState;

/// @brief Field predictionLinePoints, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___predictionLinePoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___triggers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___disableWhileLaunching) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___handTrigger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___autoLaunch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___autoLaunchDelay) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___enteredTriggerTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___animator) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchStart) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchEnd) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchBone) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___loadSFX) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchSFX) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___cockSFX) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchParticles) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___hasLaunchParticles) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___reloadDelay) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___loadTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___slipOverrideDuration) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchedTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___playerMagnetismStrength) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchSpeed) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___pitch) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___debugDrawTrajectoryOnLaunch) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___loadTriggerHash) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___fireTriggerHash) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___pitchParamHash) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___idleStateHash) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___loadStateHash) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___fireStateHash) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___playerInTrigger) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___playerRigInTrigger) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___playerLaunched) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___playerReadyToFireDist) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___prepareForLaunchDistance) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchDirection) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchRampDistance) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___playerPullInRate) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___appliedAnimatorPitch) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___launchBigMonkes) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___playerBodyOffsetFromHead) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___loadCompleteTime) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___ballistaState) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista, ___predictionLinePoints) == 0x128, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderPieceBallista) == 0x130, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderPieceBallista/<DebugDrawTrajectory>d__65
class CORDL_TYPE BuilderPieceBallista__DebugDrawTrajectory_d__65 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::Builder::BuilderPieceBallista>  __4__this;

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

/// @brief Method MoveNext, addr 0x5c25d0c, size 0x194, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c25ea0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c25ea8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c25ee0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c25d08, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderPieceBallista> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderPieceBallista>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Builder::BuilderPieceBallista>  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c25b58, size 0x28, virtual false, abstract: false, final false
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
constexpr BuilderPieceBallista__DebugDrawTrajectory_d__65() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceBallista__DebugDrawTrajectory_d__65", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderPieceBallista__DebugDrawTrajectory_d__65(BuilderPieceBallista__DebugDrawTrajectory_d__65 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderPieceBallista__DebugDrawTrajectory_d__65", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderPieceBallista__DebugDrawTrajectory_d__65(BuilderPieceBallista__DebugDrawTrajectory_d__65 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4151};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::BuilderPieceBallista>  _____4__this;

/// @brief Field duration, offset: 0x28, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <startTime>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____startTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65, ____startTime_5__2) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderPieceBallista__DebugDrawTrajectory_d__65) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
