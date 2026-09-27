#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeAI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeyeAI)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class MazePlayerCollection;
}
namespace GlobalNamespace {
struct MonkeyeAI_ReplState_EStates;
}
namespace GlobalNamespace {
class MonkeyeAI_ReplState;
}
namespace GlobalNamespace {
class Monkeye_LazerFX;
}
namespace GlobalNamespace {
class PlayerCollection;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Pathfinding {
class AIDestinationSetter;
}
namespace Pathfinding {
class AILerp;
}
namespace Pathfinding {
class AIPath;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class Seeker;
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
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeyeAI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeyeAI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeyeAI*, "", "MonkeyeAI");
// [RequireComponent(typeof(NetworkView))]
// Dependencies MonkeyeAI_ReplState::EStates, UnityEngine.Color, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeyeAI
class CORDL_TYPE MonkeyeAI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ColorShaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ColorShaderProp, put=setStaticF_ColorShaderProp)) int32_t  ColorShaderProp;

/// @brief Field EmissionColorShaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EmissionColorShaderProp, put=setStaticF_EmissionColorShaderProp)) int32_t  EmissionColorShaderProp;

/// @brief Field EyeColorShaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EyeColorShaderProp, put=setStaticF_EyeColorShaderProp)) int32_t  EyeColorShaderProp;

/// @brief Field aiDest, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_aiDest, put=__cordl_internal_set_aiDest)) ::UnityW<::Pathfinding::AIDestinationSetter>  aiDest;

/// @brief Field aiLerp, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_aiLerp, put=__cordl_internal_set_aiLerp)) ::UnityW<::Pathfinding::AILerp>  aiLerp;

/// @brief Field aiPath, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_aiPath, put=__cordl_internal_set_aiPath)) ::UnityW<::Pathfinding::AIPath>  aiPath;

/// @brief Field animController, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_animController, put=__cordl_internal_set_animController)) ::UnityW<::UnityEngine::Animator>  animController;

/// @brief Field animStateID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_animStateID, put=setStaticF_animStateID)) int32_t  animStateID;

/// @brief Field attackDistance, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackDistance, put=__cordl_internal_set_attackDistance)) float_t  attackDistance;

/// @brief Field attackSound, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_attackSound, put=__cordl_internal_set_attackSound)) ::UnityW<::UnityEngine::AudioClip>  attackSound;

/// @brief Field attackVolume, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackVolume, put=__cordl_internal_set_attackVolume)) float_t  attackVolume;

/// @brief Field audioSource, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field beginAttackTime, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_beginAttackTime, put=__cordl_internal_set_beginAttackTime)) float_t  beginAttackTime;

/// @brief Field calculatingPath, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_calculatingPath, put=__cordl_internal_set_calculatingPath)) bool  calculatingPath;

/// @brief Field chaseDistance, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseDistance, put=__cordl_internal_set_chaseDistance)) float_t  chaseDistance;

/// @brief Field chaseLoopFadeInTime, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseLoopFadeInTime, put=__cordl_internal_set_chaseLoopFadeInTime)) float_t  chaseLoopFadeInTime;

/// @brief Field chaseLoopSound, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_chaseLoopSound, put=__cordl_internal_set_chaseLoopSound)) ::UnityW<::UnityEngine::AudioClip>  chaseLoopSound;

/// @brief Field chaseLoopVolume, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseLoopVolume, put=__cordl_internal_set_chaseLoopVolume)) float_t  chaseLoopVolume;

/// @brief Field closeFloorTime, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_closeFloorTime, put=__cordl_internal_set_closeFloorTime)) float_t  closeFloorTime;

/// @brief Field currentWaypoint, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentWaypoint, put=__cordl_internal_set_currentWaypoint)) int32_t  currentWaypoint;

/// @brief Field deltaTime, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_deltaTime, put=__cordl_internal_set_deltaTime)) float_t  deltaTime;

/// @brief Field dropPlayerTime, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_dropPlayerTime, put=__cordl_internal_set_dropPlayerTime)) float_t  dropPlayerTime;

/// @brief Field eyeBones, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeBones, put=__cordl_internal_set_eyeBones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  eyeBones;

/// @brief Field gorillaPortalColor, offset 0x118, size 0x10 
 __declspec(property(get=__cordl_internal_get_gorillaPortalColor, put=__cordl_internal_set_gorillaPortalColor)) ::UnityEngine::Color  gorillaPortalColor;

/// @brief Field lastTime, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTime, put=__cordl_internal_set_lastTime)) float_t  lastTime;

/// @brief Field layerBase, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerBase, put=__cordl_internal_set_layerBase)) int32_t  layerBase;

/// @brief Field layerForward, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerForward, put=__cordl_internal_set_layerForward)) int32_t  layerForward;

/// @brief Field layerLeft, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerLeft, put=__cordl_internal_set_layerLeft)) int32_t  layerLeft;

/// @brief Field layerMask, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field layerRight, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerRight, put=__cordl_internal_set_layerRight)) int32_t  layerRight;

/// @brief Field lazerFx, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_lazerFx, put=__cordl_internal_set_lazerFx)) ::UnityW<::GlobalNamespace::Monkeye_LazerFX>  lazerFx;

/// @brief Field lockedOn, offset 0x200, size 0x1 
 __declspec(property(get=__cordl_internal_get_lockedOn, put=__cordl_internal_set_lockedOn)) bool  lockedOn;

/// @brief Field maxPatrols, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPatrols, put=__cordl_internal_set_maxPatrols)) int32_t  maxPatrols;

/// @brief Field monkEyeColor, offset 0x128, size 0x10 
 __declspec(property(get=__cordl_internal_get_monkEyeColor, put=__cordl_internal_set_monkEyeColor)) ::UnityEngine::Color  monkEyeColor;

/// @brief Field monkEyeEyeColorAttacking, offset 0x148, size 0x10 
 __declspec(property(get=__cordl_internal_get_monkEyeEyeColorAttacking, put=__cordl_internal_set_monkEyeEyeColorAttacking)) ::UnityEngine::Color  monkEyeEyeColorAttacking;

/// @brief Field monkEyeEyeColorNormal, offset 0x138, size 0x10 
 __declspec(property(get=__cordl_internal_get_monkEyeEyeColorNormal, put=__cordl_internal_set_monkEyeEyeColorNormal)) ::UnityEngine::Color  monkEyeEyeColorNormal;

/// @brief Field monkEyeMatPropBlock, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_monkEyeMatPropBlock, put=__cordl_internal_set_monkEyeMatPropBlock)) ::UnityEngine::MaterialPropertyBlock*  monkEyeMatPropBlock;

/// @brief Field myRequestableOwnershipGaurd, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRequestableOwnershipGaurd, put=__cordl_internal_set_myRequestableOwnershipGaurd)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  myRequestableOwnershipGaurd;

/// @brief Field openFloorTime, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_openFloorTime, put=__cordl_internal_set_openFloorTime)) float_t  openFloorTime;

/// @brief Field overlapRadius, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlapRadius, put=__cordl_internal_set_overlapRadius)) float_t  overlapRadius;

/// @brief Field path, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::Path*  path;

/// @brief Field patrolCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolCount, put=__cordl_internal_set_patrolCount)) int32_t  patrolCount;

/// @brief Field patrolIdx, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolIdx, put=__cordl_internal_set_patrolIdx)) int32_t  patrolIdx;

/// @brief Field patrolLoopFadeInTime, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolLoopFadeInTime, put=__cordl_internal_set_patrolLoopFadeInTime)) float_t  patrolLoopFadeInTime;

/// @brief Field patrolLoopSound, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolLoopSound, put=__cordl_internal_set_patrolLoopSound)) ::UnityW<::UnityEngine::AudioClip>  patrolLoopSound;

/// @brief Field patrolLoopVolume, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolLoopVolume, put=__cordl_internal_set_patrolLoopVolume)) float_t  patrolLoopVolume;

/// @brief Field patrolPts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolPts, put=__cordl_internal_set_patrolPts)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  patrolPts;

/// @brief Field playerCollection, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCollection, put=__cordl_internal_set_playerCollection)) ::UnityW<::GlobalNamespace::MazePlayerCollection>  playerCollection;

/// @brief Field playersInRoomCollection, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersInRoomCollection, put=__cordl_internal_set_playersInRoomCollection)) ::UnityW<::GlobalNamespace::PlayerCollection>  playersInRoomCollection;

/// @brief Field portalColor, offset 0x108, size 0x10 
 __declspec(property(get=__cordl_internal_get_portalColor, put=__cordl_internal_set_portalColor)) ::UnityEngine::Color  portalColor;

/// @brief Field portalFx, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_portalFx, put=__cordl_internal_set_portalFx)) ::UnityW<::UnityEngine::GameObject>  portalFx;

/// @brief Field portalMatPropBlock, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_portalMatPropBlock, put=__cordl_internal_set_portalMatPropBlock)) ::UnityEngine::MaterialPropertyBlock*  portalMatPropBlock;

/// @brief Field prevPosition, offset 0x1a0, size 0xc 
 __declspec(property(get=__cordl_internal_get_prevPosition, put=__cordl_internal_set_prevPosition)) ::UnityEngine::Vector3  prevPosition;

/// @brief Field previousState, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousState, put=__cordl_internal_set_previousState)) ::GlobalNamespace::MonkeyeAI_ReplState_EStates  previousState;

/// @brief Field rayResults, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rayResults, put=__cordl_internal_set_rayResults)) ::ArrayW<::UnityEngine::RaycastHit>  rayResults;

/// @brief Field renderer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderer, put=__cordl_internal_set_renderer)) ::UnityW<::UnityEngine::Renderer>  renderer;

/// @brief Field replState, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_replState, put=__cordl_internal_set_replState)) ::UnityW<::GlobalNamespace::MonkeyeAI_ReplState>  replState;

/// @brief Field replStateRequestableOwnershipGaurd, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_replStateRequestableOwnershipGaurd, put=__cordl_internal_set_replStateRequestableOwnershipGaurd)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  replStateRequestableOwnershipGaurd;

/// @brief Field rotationSpeed, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationSpeed, put=__cordl_internal_set_rotationSpeed)) float_t  rotationSpeed;

/// @brief Field seeker, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_seeker, put=__cordl_internal_set_seeker)) ::UnityW<::Pathfinding::Seeker>  seeker;

/// @brief Field skinnedMeshRenderer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedMeshRenderer, put=__cordl_internal_set_skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinnedMeshRenderer;

/// @brief Field sleepDuration, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepDuration, put=__cordl_internal_set_sleepDuration)) float_t  sleepDuration;

/// @brief Field sleepLoopSound, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleepLoopSound, put=__cordl_internal_set_sleepLoopSound)) ::UnityW<::UnityEngine::AudioClip>  sleepLoopSound;

/// @brief Field sleepLoopVolume, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_sleepLoopVolume, put=__cordl_internal_set_sleepLoopVolume)) float_t  sleepLoopVolume;

/// @brief Field sleepPt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sleepPt, put=__cordl_internal_set_sleepPt)) ::UnityW<::UnityEngine::Transform>  sleepPt;

/// @brief Field speed, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field targetPosition, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPosition, put=__cordl_internal_set_targetPosition)) ::UnityEngine::Vector3  targetPosition;

/// @brief Field targetRig, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRig, put=__cordl_internal_set_targetRig)) ::UnityW<::GlobalNamespace::VRRig>  targetRig;

/// @brief Field tintColorShaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_tintColorShaderProp, put=setStaticF_tintColorShaderProp)) int32_t  tintColorShaderProp;

/// @brief Field validRigs, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_validRigs, put=__cordl_internal_set_validRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  validRigs;

/// @brief Field velocity, offset 0x1ac, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Field wakeDistance, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_wakeDistance, put=__cordl_internal_set_wakeDistance)) float_t  wakeDistance;

/// @brief Field wasConnectedToRoom, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasConnectedToRoom, put=__cordl_internal_set_wasConnectedToRoom)) bool  wasConnectedToRoom;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AntiOverlapAssurance, addr 0x5c054dc, size 0x4dc, virtual false, abstract: false, final false
inline void AntiOverlapAssurance() ;

/// @brief Method Awake, addr 0x5c02d5c, size 0x3b4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BeginAttack, addr 0x5c04b40, size 0xa4, virtual false, abstract: false, final false
inline void BeginAttack() ;

/// @brief Method Chasing, addr 0x5c03d78, size 0x150, virtual false, abstract: false, final false
inline void Chasing() ;

/// @brief Method CheckForChase, addr 0x5c03a94, size 0x17c, virtual false, abstract: false, final false
inline bool CheckForChase() ;

/// @brief Method CloseFloor, addr 0x5c04c88, size 0x3c, virtual false, abstract: false, final false
inline void CloseFloor() ;

/// @brief Method ClosestPlayer, addr 0x5c02ac4, size 0x1ac, virtual false, abstract: false, final false
inline bool ClosestPlayer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  myPos, ::by_ref<::GlobalNamespace::VRRig*>  outRig) ;

/// @brief Method Distance2D, addr 0x5c02478, size 0x7c, virtual false, abstract: false, final false
inline float_t Distance2D(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method DropPlayer, addr 0x5c04c50, size 0x38, virtual false, abstract: false, final false
inline void DropPlayer() ;

/// @brief Method ExitAttackState, addr 0x5c04b24, size 0x1c, virtual false, abstract: false, final false
inline void ExitAttackState() ;

/// @brief Method FollowPath, addr 0x5c03318, size 0x424, virtual false, abstract: false, final false
inline void FollowPath() ;

/// @brief Method GetRig, addr 0x5c01e90, size 0x33c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> GetRig(::StringW  userId) ;

/// @brief Method GetValidChoosableRigs, addr 0x5c021cc, size 0x2ac, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GetValidChoosableRigs() ;

static inline ::GlobalNamespace::MonkeyeAI* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c054d0, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c054c4, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPathComplete, addr 0x5c03228, size 0xf0, virtual false, abstract: false, final false
inline void OnPathComplete(::Pathfinding::Path*  path_) ;

/// @brief Method OpenFloor, addr 0x5c04be4, size 0x6c, virtual false, abstract: false, final false
inline void OpenFloor() ;

/// @brief Method Patrolling, addr 0x5c03cd4, size 0xa4, virtual false, abstract: false, final false
inline void Patrolling() ;

/// @brief Method PickNewPath, addr 0x5c0257c, size 0x27c, virtual false, abstract: false, final false
inline void PickNewPath(bool  pathFinished) ;

/// @brief Method PickRandomPatrolPoint, addr 0x5c024f4, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> PickRandomPatrolPoint() ;

/// @brief Method PlayerNear, addr 0x5c0373c, size 0x2b8, virtual false, abstract: false, final false
inline bool PlayerNear(::GlobalNamespace::VRRig*  rig, float_t  dist, ::by_ref<float_t>  playerDist) ;

/// @brief Method ReturnToSleepPt, addr 0x5c03ec8, size 0xc4, virtual false, abstract: false, final false
inline void ReturnToSleepPt() ;

/// @brief Method SetChasePlayer, addr 0x5c03c10, size 0x98, virtual false, abstract: false, final false
inline void SetChasePlayer(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method SetClientState, addr 0x5c047d0, size 0x354, virtual false, abstract: false, final false
inline void SetClientState(::GlobalNamespace::MonkeyeAI_ReplState_EStates  state_) ;

/// @brief Method SetDefaultAttackState, addr 0x5c03110, size 0x9c, virtual false, abstract: false, final false
inline void SetDefaultAttackState() ;

/// @brief Method SetDefaultState, addr 0x5c04508, size 0x1c, virtual false, abstract: false, final false
inline void SetDefaultState() ;

/// @brief Method SetSleep, addr 0x5c03ca8, size 0x2c, virtual false, abstract: false, final false
inline void SetSleep() ;

/// @brief Method SetState, addr 0x5c027f8, size 0x2cc, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::MonkeyeAI_ReplState_EStates  state_) ;

/// @brief Method SetTargetPlayer, addr 0x5c02c70, size 0xec, virtual false, abstract: false, final false
inline void SetTargetPlayer(/* [CanBeNull] */ ::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Sleeping, addr 0x5c039f4, size 0xa0, virtual false, abstract: false, final false
inline void Sleeping() ;

/// @brief Method SliceUpdate, addr 0x5c04f8c, size 0x538, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5c031ac, size 0x7c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateClientState, addr 0x5c03f8c, size 0x57c, virtual false, abstract: false, final false
inline void UpdateClientState() ;

/// @brief Method UserIdFromRig, addr 0x5c01bf8, size 0x298, virtual false, abstract: false, final false
inline ::StringW UserIdFromRig(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method ValidateChasingRig, addr 0x5c04cc4, size 0x1f8, virtual false, abstract: false, final false
inline void ValidateChasingRig() ;

constexpr ::UnityW<::Pathfinding::AIDestinationSetter> const& __cordl_internal_get_aiDest() const;

constexpr ::UnityW<::Pathfinding::AIDestinationSetter>& __cordl_internal_get_aiDest() ;

constexpr ::UnityW<::Pathfinding::AILerp> const& __cordl_internal_get_aiLerp() const;

constexpr ::UnityW<::Pathfinding::AILerp>& __cordl_internal_get_aiLerp() ;

constexpr ::UnityW<::Pathfinding::AIPath> const& __cordl_internal_get_aiPath() const;

constexpr ::UnityW<::Pathfinding::AIPath>& __cordl_internal_get_aiPath() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animController() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animController() ;

constexpr float_t const& __cordl_internal_get_attackDistance() const;

constexpr float_t& __cordl_internal_get_attackDistance() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_attackSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_attackSound() ;

constexpr float_t const& __cordl_internal_get_attackVolume() const;

constexpr float_t& __cordl_internal_get_attackVolume() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_beginAttackTime() const;

constexpr float_t& __cordl_internal_get_beginAttackTime() ;

constexpr bool const& __cordl_internal_get_calculatingPath() const;

constexpr bool& __cordl_internal_get_calculatingPath() ;

constexpr float_t const& __cordl_internal_get_chaseDistance() const;

constexpr float_t& __cordl_internal_get_chaseDistance() ;

constexpr float_t const& __cordl_internal_get_chaseLoopFadeInTime() const;

constexpr float_t& __cordl_internal_get_chaseLoopFadeInTime() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_chaseLoopSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_chaseLoopSound() ;

constexpr float_t const& __cordl_internal_get_chaseLoopVolume() const;

constexpr float_t& __cordl_internal_get_chaseLoopVolume() ;

constexpr float_t const& __cordl_internal_get_closeFloorTime() const;

constexpr float_t& __cordl_internal_get_closeFloorTime() ;

constexpr int32_t const& __cordl_internal_get_currentWaypoint() const;

constexpr int32_t& __cordl_internal_get_currentWaypoint() ;

constexpr float_t const& __cordl_internal_get_deltaTime() const;

constexpr float_t& __cordl_internal_get_deltaTime() ;

constexpr float_t const& __cordl_internal_get_dropPlayerTime() const;

constexpr float_t& __cordl_internal_get_dropPlayerTime() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_eyeBones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_eyeBones() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_gorillaPortalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_gorillaPortalColor() ;

constexpr float_t const& __cordl_internal_get_lastTime() const;

constexpr float_t& __cordl_internal_get_lastTime() ;

constexpr int32_t const& __cordl_internal_get_layerBase() const;

constexpr int32_t& __cordl_internal_get_layerBase() ;

constexpr int32_t const& __cordl_internal_get_layerForward() const;

constexpr int32_t& __cordl_internal_get_layerForward() ;

constexpr int32_t const& __cordl_internal_get_layerLeft() const;

constexpr int32_t& __cordl_internal_get_layerLeft() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr int32_t const& __cordl_internal_get_layerRight() const;

constexpr int32_t& __cordl_internal_get_layerRight() ;

constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX> const& __cordl_internal_get_lazerFx() const;

constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX>& __cordl_internal_get_lazerFx() ;

constexpr bool const& __cordl_internal_get_lockedOn() const;

constexpr bool& __cordl_internal_get_lockedOn() ;

constexpr int32_t const& __cordl_internal_get_maxPatrols() const;

constexpr int32_t& __cordl_internal_get_maxPatrols() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_monkEyeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_monkEyeColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_monkEyeEyeColorAttacking() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_monkEyeEyeColorAttacking() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_monkEyeEyeColorNormal() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_monkEyeEyeColorNormal() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_monkEyeMatPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_monkEyeMatPropBlock() ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get_myRequestableOwnershipGaurd() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get_myRequestableOwnershipGaurd() ;

constexpr float_t const& __cordl_internal_get_openFloorTime() const;

constexpr float_t& __cordl_internal_get_openFloorTime() ;

constexpr float_t const& __cordl_internal_get_overlapRadius() const;

constexpr float_t& __cordl_internal_get_overlapRadius() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_path() ;

constexpr int32_t const& __cordl_internal_get_patrolCount() const;

constexpr int32_t& __cordl_internal_get_patrolCount() ;

constexpr int32_t const& __cordl_internal_get_patrolIdx() const;

constexpr int32_t& __cordl_internal_get_patrolIdx() ;

constexpr float_t const& __cordl_internal_get_patrolLoopFadeInTime() const;

constexpr float_t& __cordl_internal_get_patrolLoopFadeInTime() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_patrolLoopSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_patrolLoopSound() ;

constexpr float_t const& __cordl_internal_get_patrolLoopVolume() const;

constexpr float_t& __cordl_internal_get_patrolLoopVolume() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_patrolPts() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_patrolPts() ;

constexpr ::UnityW<::GlobalNamespace::MazePlayerCollection> const& __cordl_internal_get_playerCollection() const;

constexpr ::UnityW<::GlobalNamespace::MazePlayerCollection>& __cordl_internal_get_playerCollection() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCollection> const& __cordl_internal_get_playersInRoomCollection() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCollection>& __cordl_internal_get_playersInRoomCollection() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_portalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_portalColor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_portalFx() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_portalFx() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_portalMatPropBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_portalMatPropBlock() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_prevPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_prevPosition() ;

constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates const& __cordl_internal_get_previousState() const;

constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates& __cordl_internal_get_previousState() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_rayResults() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_rayResults() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_renderer() ;

constexpr ::UnityW<::GlobalNamespace::MonkeyeAI_ReplState> const& __cordl_internal_get_replState() const;

constexpr ::UnityW<::GlobalNamespace::MonkeyeAI_ReplState>& __cordl_internal_get_replState() ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get_replStateRequestableOwnershipGaurd() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get_replStateRequestableOwnershipGaurd() ;

constexpr float_t const& __cordl_internal_get_rotationSpeed() const;

constexpr float_t& __cordl_internal_get_rotationSpeed() ;

constexpr ::UnityW<::Pathfinding::Seeker> const& __cordl_internal_get_seeker() const;

constexpr ::UnityW<::Pathfinding::Seeker>& __cordl_internal_get_seeker() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_skinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_skinnedMeshRenderer() ;

constexpr float_t const& __cordl_internal_get_sleepDuration() const;

constexpr float_t& __cordl_internal_get_sleepDuration() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_sleepLoopSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_sleepLoopSound() ;

constexpr float_t const& __cordl_internal_get_sleepLoopVolume() const;

constexpr float_t& __cordl_internal_get_sleepLoopVolume() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_sleepPt() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_sleepPt() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPosition() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetRig() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_validRigs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_validRigs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr float_t const& __cordl_internal_get_wakeDistance() const;

constexpr float_t& __cordl_internal_get_wakeDistance() ;

constexpr bool const& __cordl_internal_get_wasConnectedToRoom() const;

constexpr bool& __cordl_internal_get_wasConnectedToRoom() ;

constexpr void __cordl_internal_set_aiDest(::UnityW<::Pathfinding::AIDestinationSetter>  value) ;

constexpr void __cordl_internal_set_aiLerp(::UnityW<::Pathfinding::AILerp>  value) ;

constexpr void __cordl_internal_set_aiPath(::UnityW<::Pathfinding::AIPath>  value) ;

constexpr void __cordl_internal_set_animController(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_attackDistance(float_t  value) ;

constexpr void __cordl_internal_set_attackSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_attackVolume(float_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_beginAttackTime(float_t  value) ;

constexpr void __cordl_internal_set_calculatingPath(bool  value) ;

constexpr void __cordl_internal_set_chaseDistance(float_t  value) ;

constexpr void __cordl_internal_set_chaseLoopFadeInTime(float_t  value) ;

constexpr void __cordl_internal_set_chaseLoopSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_chaseLoopVolume(float_t  value) ;

constexpr void __cordl_internal_set_closeFloorTime(float_t  value) ;

constexpr void __cordl_internal_set_currentWaypoint(int32_t  value) ;

constexpr void __cordl_internal_set_deltaTime(float_t  value) ;

constexpr void __cordl_internal_set_dropPlayerTime(float_t  value) ;

constexpr void __cordl_internal_set_eyeBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_gorillaPortalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_lastTime(float_t  value) ;

constexpr void __cordl_internal_set_layerBase(int32_t  value) ;

constexpr void __cordl_internal_set_layerForward(int32_t  value) ;

constexpr void __cordl_internal_set_layerLeft(int32_t  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_layerRight(int32_t  value) ;

constexpr void __cordl_internal_set_lazerFx(::UnityW<::GlobalNamespace::Monkeye_LazerFX>  value) ;

constexpr void __cordl_internal_set_lockedOn(bool  value) ;

constexpr void __cordl_internal_set_maxPatrols(int32_t  value) ;

constexpr void __cordl_internal_set_monkEyeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_monkEyeEyeColorAttacking(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_monkEyeEyeColorNormal(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_monkEyeMatPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_myRequestableOwnershipGaurd(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

constexpr void __cordl_internal_set_openFloorTime(float_t  value) ;

constexpr void __cordl_internal_set_overlapRadius(float_t  value) ;

constexpr void __cordl_internal_set_path(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_patrolCount(int32_t  value) ;

constexpr void __cordl_internal_set_patrolIdx(int32_t  value) ;

constexpr void __cordl_internal_set_patrolLoopFadeInTime(float_t  value) ;

constexpr void __cordl_internal_set_patrolLoopSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_patrolLoopVolume(float_t  value) ;

constexpr void __cordl_internal_set_patrolPts(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_playerCollection(::UnityW<::GlobalNamespace::MazePlayerCollection>  value) ;

constexpr void __cordl_internal_set_playersInRoomCollection(::UnityW<::GlobalNamespace::PlayerCollection>  value) ;

constexpr void __cordl_internal_set_portalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_portalFx(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_portalMatPropBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_prevPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_previousState(::GlobalNamespace::MonkeyeAI_ReplState_EStates  value) ;

constexpr void __cordl_internal_set_rayResults(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_replState(::UnityW<::GlobalNamespace::MonkeyeAI_ReplState>  value) ;

constexpr void __cordl_internal_set_replStateRequestableOwnershipGaurd(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

constexpr void __cordl_internal_set_rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value) ;

constexpr void __cordl_internal_set_skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_sleepDuration(float_t  value) ;

constexpr void __cordl_internal_set_sleepLoopSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_sleepLoopVolume(float_t  value) ;

constexpr void __cordl_internal_set_sleepPt(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_validRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_wakeDistance(float_t  value) ;

constexpr void __cordl_internal_set_wasConnectedToRoom(bool  value) ;

/// @brief Method .ctor, addr 0x5c059b8, size 0x11c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_ColorShaderProp() ;

static inline int32_t getStaticF_EmissionColorShaderProp() ;

static inline int32_t getStaticF_EyeColorShaderProp() ;

static inline int32_t getStaticF_animStateID() ;

static inline int32_t getStaticF_tintColorShaderProp() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Method setEyeColor, addr 0x5c04ebc, size 0xd0, virtual false, abstract: false, final false
inline void setEyeColor(::UnityEngine::Color  c) ;

static inline void setStaticF_ColorShaderProp(int32_t  value) ;

static inline void setStaticF_EmissionColorShaderProp(int32_t  value) ;

static inline void setStaticF_EyeColorShaderProp(int32_t  value) ;

static inline void setStaticF_animStateID(int32_t  value) ;

static inline void setStaticF_tintColorShaderProp(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeyeAI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeyeAI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeyeAI(MonkeyeAI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeyeAI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeyeAI(MonkeyeAI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{423};

/// @brief Field patrolPts, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___patrolPts;

/// @brief Field sleepPt, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___sleepPt;

/// @brief Field patrolIdx, offset: 0x30, size: 0x4, def value: None
 int32_t  ___patrolIdx;

/// @brief Field patrolCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ___patrolCount;

/// @brief Field targetPosition, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPosition;

/// @brief Field portalMatPropBlock, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___portalMatPropBlock;

/// @brief Field monkEyeMatPropBlock, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___monkEyeMatPropBlock;

/// @brief Field renderer, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___renderer;

/// @brief Field aiDest, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Pathfinding::AIDestinationSetter>  ___aiDest;

/// @brief Field aiPath, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Pathfinding::AIPath>  ___aiPath;

/// @brief Field aiLerp, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Pathfinding::AILerp>  ___aiLerp;

/// @brief Field seeker, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Seeker>  ___seeker;

/// @brief Field path, offset: 0x80, size: 0x8, def value: None
 ::Pathfinding::Path*  ___path;

/// @brief Field currentWaypoint, offset: 0x88, size: 0x4, def value: None
 int32_t  ___currentWaypoint;

/// @brief Field calculatingPath, offset: 0x8c, size: 0x1, def value: None
 bool  ___calculatingPath;

/// @brief Field lazerFx, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Monkeye_LazerFX>  ___lazerFx;

/// @brief Field animController, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animController;

/// @brief Field rayResults, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___rayResults;

/// @brief Field layerMask, offset: 0xa8, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field wasConnectedToRoom, offset: 0xac, size: 0x1, def value: None
 bool  ___wasConnectedToRoom;

/// @brief Field skinnedMeshRenderer, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___skinnedMeshRenderer;

/// @brief Field playerCollection, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MazePlayerCollection>  ___playerCollection;

/// @brief Field playersInRoomCollection, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCollection>  ___playersInRoomCollection;

/// @brief Field validRigs, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___validRigs;

/// @brief Field portalFx, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___portalFx;

/// @brief Field eyeBones, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___eyeBones;

/// @brief Field speed, offset: 0xe0, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field rotationSpeed, offset: 0xe4, size: 0x4, def value: None
 float_t  ___rotationSpeed;

/// @brief Field wakeDistance, offset: 0xe8, size: 0x4, def value: None
 float_t  ___wakeDistance;

/// @brief Field chaseDistance, offset: 0xec, size: 0x4, def value: None
 float_t  ___chaseDistance;

/// @brief Field sleepDuration, offset: 0xf0, size: 0x4, def value: None
 float_t  ___sleepDuration;

/// @brief Field attackDistance, offset: 0xf4, size: 0x4, def value: None
 float_t  ___attackDistance;

/// @brief Field beginAttackTime, offset: 0xf8, size: 0x4, def value: None
 float_t  ___beginAttackTime;

/// @brief Field openFloorTime, offset: 0xfc, size: 0x4, def value: None
 float_t  ___openFloorTime;

/// @brief Field dropPlayerTime, offset: 0x100, size: 0x4, def value: None
 float_t  ___dropPlayerTime;

/// @brief Field closeFloorTime, offset: 0x104, size: 0x4, def value: None
 float_t  ___closeFloorTime;

/// @brief Field portalColor, offset: 0x108, size: 0x10, def value: None
 ::UnityEngine::Color  ___portalColor;

/// @brief Field gorillaPortalColor, offset: 0x118, size: 0x10, def value: None
 ::UnityEngine::Color  ___gorillaPortalColor;

/// @brief Field monkEyeColor, offset: 0x128, size: 0x10, def value: None
 ::UnityEngine::Color  ___monkEyeColor;

/// @brief Field monkEyeEyeColorNormal, offset: 0x138, size: 0x10, def value: None
 ::UnityEngine::Color  ___monkEyeEyeColorNormal;

/// @brief Field monkEyeEyeColorAttacking, offset: 0x148, size: 0x10, def value: None
 ::UnityEngine::Color  ___monkEyeEyeColorAttacking;

/// @brief Field maxPatrols, offset: 0x158, size: 0x4, def value: None
 int32_t  ___maxPatrols;

/// @brief Field targetRig, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetRig;

/// @brief Field deltaTime, offset: 0x168, size: 0x4, def value: None
 float_t  ___deltaTime;

/// @brief Field lastTime, offset: 0x16c, size: 0x4, def value: None
 float_t  ___lastTime;

/// @brief Field replState, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeyeAI_ReplState>  ___replState;

/// @brief Field previousState, offset: 0x178, size: 0x4, def value: None
 ::GlobalNamespace::MonkeyeAI_ReplState_EStates  ___previousState;

/// @brief Field replStateRequestableOwnershipGaurd, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  ___replStateRequestableOwnershipGaurd;

/// @brief Field myRequestableOwnershipGaurd, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  ___myRequestableOwnershipGaurd;

/// @brief Field layerBase, offset: 0x190, size: 0x4, def value: None
 int32_t  ___layerBase;

/// @brief Field layerForward, offset: 0x194, size: 0x4, def value: None
 int32_t  ___layerForward;

/// @brief Field layerLeft, offset: 0x198, size: 0x4, def value: None
 int32_t  ___layerLeft;

/// @brief Field layerRight, offset: 0x19c, size: 0x4, def value: None
 int32_t  ___layerRight;

/// @brief Field prevPosition, offset: 0x1a0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___prevPosition;

/// @brief Field velocity, offset: 0x1ac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field audioSource, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field sleepLoopSound, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___sleepLoopSound;

/// @brief Field sleepLoopVolume, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___sleepLoopVolume;

/// [FormerlySerializedAs("moveLoopSound")]
/// @brief Field patrolLoopSound, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___patrolLoopSound;

/// @brief Field patrolLoopVolume, offset: 0x1d8, size: 0x4, def value: None
 float_t  ___patrolLoopVolume;

/// @brief Field patrolLoopFadeInTime, offset: 0x1dc, size: 0x4, def value: None
 float_t  ___patrolLoopFadeInTime;

/// @brief Field chaseLoopSound, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___chaseLoopSound;

/// @brief Field chaseLoopVolume, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___chaseLoopVolume;

/// @brief Field chaseLoopFadeInTime, offset: 0x1ec, size: 0x4, def value: None
 float_t  ___chaseLoopFadeInTime;

/// @brief Field attackSound, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___attackSound;

/// @brief Field attackVolume, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___attackVolume;

/// @brief Field overlapRadius, offset: 0x1fc, size: 0x4, def value: None
 float_t  ___overlapRadius;

/// @brief Field lockedOn, offset: 0x200, size: 0x1, def value: None
 bool  ___lockedOn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___patrolPts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___sleepPt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___patrolIdx) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___patrolCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___targetPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___portalMatPropBlock) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___monkEyeMatPropBlock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___renderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___aiDest) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___aiPath) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___aiLerp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___seeker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___path) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___currentWaypoint) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___calculatingPath) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___lazerFx) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___animController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___rayResults) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___layerMask) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___wasConnectedToRoom) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___skinnedMeshRenderer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___playerCollection) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___playersInRoomCollection) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___validRigs) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___portalFx) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___eyeBones) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___speed) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___rotationSpeed) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___wakeDistance) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___chaseDistance) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___sleepDuration) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___attackDistance) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___beginAttackTime) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___openFloorTime) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___dropPlayerTime) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___closeFloorTime) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___portalColor) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___gorillaPortalColor) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___monkEyeColor) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___monkEyeEyeColorNormal) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___monkEyeEyeColorAttacking) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___maxPatrols) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___targetRig) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___deltaTime) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___lastTime) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___replState) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___previousState) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___replStateRequestableOwnershipGaurd) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___myRequestableOwnershipGaurd) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___layerBase) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___layerForward) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___layerLeft) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___layerRight) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___prevPosition) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___velocity) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___audioSource) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___sleepLoopSound) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___sleepLoopVolume) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___patrolLoopSound) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___patrolLoopVolume) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___patrolLoopFadeInTime) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___chaseLoopSound) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___chaseLoopVolume) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___chaseLoopFadeInTime) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___attackSound) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___attackVolume) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___overlapRadius) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeyeAI, ___lockedOn) == 0x200, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeyeAI) == 0x208, "Size mismatch!");

} // namespace end def GlobalNamespace
