#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyRanged.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GREnemyRanged_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyRanged_BodyState_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyRanged)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRAbilityDie;
}
namespace GlobalNamespace {
class GRAbilityFlashed;
}
namespace GlobalNamespace {
class GRAbilityJump;
}
namespace GlobalNamespace {
class GRAbilityKeepDistance;
}
namespace GlobalNamespace {
class GRAbilityMoveToTarget;
}
namespace GlobalNamespace {
class GRAbilityPatrol;
}
namespace GlobalNamespace {
class GRAbilityStagger;
}
namespace GlobalNamespace {
class GRArmorEnemy;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
class GRCollectible;
}
namespace GlobalNamespace {
struct GREnemyRanged_Behavior;
}
namespace GlobalNamespace {
struct GREnemyRanged_BodyState;
}
namespace GlobalNamespace {
class GREnemy;
}
namespace GlobalNamespace {
class GRPatrolPath;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GRRangedEnemyProjectile;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GRSenseNearby;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
class GameHittable;
}
namespace GlobalNamespace {
class IGameAgentComponent;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameEntityDebugComponent;
}
namespace GlobalNamespace {
class IGameEntitySerialize;
}
namespace GlobalNamespace {
class IGameHittable;
}
namespace GlobalNamespace {
class IGameProjectileLauncher;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
namespace UnityEngine {
class Animation;
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
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GREnemyRanged;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemyRanged*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyRanged*, "", "GREnemyRanged");
// Dependencies GREnemyRanged::Behavior, GREnemyRanged::BodyState, System.Nullable`1<T>, UnityEngine.Color, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyRanged
class CORDL_TYPE GREnemyRanged : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Behavior = ::GlobalNamespace::GREnemyRanged_Behavior;

using BodyState = ::GlobalNamespace::GREnemyRanged_BodyState;

/// @brief Field abilityDie, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityDie, put=__cordl_internal_set_abilityDie)) ::GlobalNamespace::GRAbilityDie*  abilityDie;

/// @brief Field abilityFlashed, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityFlashed, put=__cordl_internal_set_abilityFlashed)) ::GlobalNamespace::GRAbilityFlashed*  abilityFlashed;

/// @brief Field abilityInvestigate, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityInvestigate, put=__cordl_internal_set_abilityInvestigate)) ::GlobalNamespace::GRAbilityMoveToTarget*  abilityInvestigate;

/// @brief Field abilityJump, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityJump, put=__cordl_internal_set_abilityJump)) ::GlobalNamespace::GRAbilityJump*  abilityJump;

/// @brief Field abilityKeepDistance, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityKeepDistance, put=__cordl_internal_set_abilityKeepDistance)) ::GlobalNamespace::GRAbilityKeepDistance*  abilityKeepDistance;

/// @brief Field abilityPatrol, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityPatrol, put=__cordl_internal_set_abilityPatrol)) ::GlobalNamespace::GRAbilityPatrol*  abilityPatrol;

/// @brief Field abilityStagger, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityStagger, put=__cordl_internal_set_abilityStagger)) ::GlobalNamespace::GRAbilityStagger*  abilityStagger;

/// @brief Field agent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::GlobalNamespace::GameAgent>  agent;

/// @brief Field always, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_always, put=__cordl_internal_set_always)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  always;

/// @brief Field anim, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field armor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_armor, put=__cordl_internal_set_armor)) ::UnityW<::GlobalNamespace::GRArmorEnemy>  armor;

/// @brief Field attackAbilitySound, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_attackAbilitySound, put=__cordl_internal_set_attackAbilitySound)) ::GlobalNamespace::AbilitySound*  attackAbilitySound;

/// @brief Field attributes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSecondarySource, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSecondarySource, put=__cordl_internal_set_audioSecondarySource)) ::UnityW<::UnityEngine::AudioSource>  audioSecondarySource;

/// @brief Field audioSource, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field behaviorEndTime, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorEndTime, put=__cordl_internal_set_behaviorEndTime)) double_t  behaviorEndTime;

/// @brief Field bestTargetNetPlayer, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestTargetNetPlayer, put=__cordl_internal_set_bestTargetNetPlayer)) ::GlobalNamespace::NetPlayer*  bestTargetNetPlayer;

/// @brief Field bestTargetPlayer, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestTargetPlayer, put=__cordl_internal_set_bestTargetPlayer)) ::UnityW<::GlobalNamespace::GRPlayer>  bestTargetPlayer;

/// @brief Field bones, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bones, put=__cordl_internal_set_bones)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  bones;

/// @brief Field chaseAbilitySound, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_chaseAbilitySound, put=__cordl_internal_set_chaseAbilitySound)) ::GlobalNamespace::AbilitySound*  chaseAbilitySound;

/// @brief Field chaseColor, offset 0xe4, size 0x10 
 __declspec(property(get=__cordl_internal_get_chaseColor, put=__cordl_internal_set_chaseColor)) ::UnityEngine::Color  chaseColor;

/// @brief Field colliders, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field coreMarker, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreMarker, put=__cordl_internal_set_coreMarker)) ::UnityW<::UnityEngine::Transform>  coreMarker;

/// @brief Field corePrefab, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_corePrefab, put=__cordl_internal_set_corePrefab)) ::UnityW<::GlobalNamespace::GRCollectible>  corePrefab;

/// @brief Field currBehavior, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBehavior, put=__cordl_internal_set_currBehavior)) ::GlobalNamespace::GREnemyRanged_Behavior  currBehavior;

/// @brief Field currBodyState, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBodyState, put=__cordl_internal_set_currBodyState)) ::GlobalNamespace::GREnemyRanged_BodyState  currBodyState;

/// @brief Field damagedSound, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_damagedSound, put=__cordl_internal_set_damagedSound)) ::UnityW<::UnityEngine::AudioClip>  damagedSound;

/// @brief Field damagedSoundVolume, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_damagedSoundVolume, put=__cordl_internal_set_damagedSoundVolume)) float_t  damagedSoundVolume;

/// @brief Field debugLog, offset 0x180, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugLog, put=__cordl_internal_set_debugLog)) bool  debugLog;

/// @brief Field defaultColor, offset 0x2b4, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultColor, put=__cordl_internal_set_defaultColor)) ::UnityEngine::Color  defaultColor;

/// @brief Field enemy, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemy, put=__cordl_internal_set_enemy)) ::UnityW<::GlobalNamespace::GREnemy>  enemy;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field fxDamaged, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxDamaged, put=__cordl_internal_set_fxDamaged)) ::UnityW<::UnityEngine::GameObject>  fxDamaged;

/// @brief Field headLightReset, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_headLightReset, put=__cordl_internal_set_headLightReset)) bool  headLightReset;

/// @brief Field headRemovalFrame, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_headRemovalFrame, put=__cordl_internal_set_headRemovalFrame)) float_t  headRemovalFrame;

/// @brief Field headRemovaltime, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_headRemovaltime, put=__cordl_internal_set_headRemovaltime)) double_t  headRemovaltime;

/// @brief Field headRemoved, offset 0x1e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_headRemoved, put=__cordl_internal_set_headRemoved)) bool  headRemoved;

/// @brief Field headTransform, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_headTransform, put=__cordl_internal_set_headTransform)) ::UnityW<::UnityEngine::Transform>  headTransform;

/// @brief Field hearingRadius, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_hearingRadius, put=__cordl_internal_set_hearingRadius)) float_t  hearingRadius;

/// @brief Field hittable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hittable, put=__cordl_internal_set_hittable)) ::UnityW<::GlobalNamespace::GameHittable>  hittable;

/// @brief Field hp, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_hp, put=__cordl_internal_set_hp)) int32_t  hp;

/// @brief Field investigateLocation, offset 0x170, size 0x10 
 __declspec(property(get=__cordl_internal_get_investigateLocation, put=__cordl_internal_set_investigateLocation)) ::System::Nullable_1<::UnityEngine::Vector3>  investigateLocation;

/// @brief Field lastHitPlayerTime, offset 0x2c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHitPlayerTime, put=__cordl_internal_set_lastHitPlayerTime)) float_t  lastHitPlayerTime;

/// @brief Field lastMoving, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastMoving, put=__cordl_internal_set_lastMoving)) bool  lastMoving;

/// @brief Field lastSeenTargetPosition, offset 0x210, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetPosition, put=__cordl_internal_set_lastSeenTargetPosition)) ::UnityEngine::Vector3  lastSeenTargetPosition;

/// @brief Field lastSeenTargetTime, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetTime, put=__cordl_internal_set_lastSeenTargetTime)) double_t  lastSeenTargetTime;

/// @brief Field loseSightDist, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_loseSightDist, put=__cordl_internal_set_loseSightDist)) float_t  loseSightDist;

/// @brief Field minTimeBetweenHits, offset 0x2c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTimeBetweenHits, put=__cordl_internal_set_minTimeBetweenHits)) float_t  minTimeBetweenHits;

/// @brief Field navAgent, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_navAgent, put=__cordl_internal_set_navAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navAgent;

/// @brief Field nextPatrolNode, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPatrolNode, put=__cordl_internal_set_nextPatrolNode)) int32_t  nextPatrolNode;

/// @brief Field patrolPath, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolPath, put=__cordl_internal_set_patrolPath)) ::UnityW<::GlobalNamespace::GRPatrolPath>  patrolPath;

/// @brief Field projectileHasImpacted, offset 0x290, size 0x1 
 __declspec(property(get=__cordl_internal_get_projectileHasImpacted, put=__cordl_internal_set_projectileHasImpacted)) bool  projectileHasImpacted;

/// @brief Field projectileHitRadius, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileHitRadius, put=__cordl_internal_set_projectileHitRadius)) float_t  projectileHitRadius;

/// @brief Field projectileImpactTime, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileImpactTime, put=__cordl_internal_set_projectileImpactTime)) double_t  projectileImpactTime;

/// @brief Field projectileSpeed, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileSpeed, put=__cordl_internal_set_projectileSpeed)) float_t  projectileSpeed;

/// @brief Field queuedFiringPosition, offset 0x270, size 0xc 
 __declspec(property(get=__cordl_internal_get_queuedFiringPosition, put=__cordl_internal_set_queuedFiringPosition)) ::UnityEngine::Vector3  queuedFiringPosition;

/// @brief Field queuedFiringTime, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_queuedFiringTime, put=__cordl_internal_set_queuedFiringTime)) double_t  queuedFiringTime;

/// @brief Field queuedTargetPosition, offset 0x27c, size 0xc 
 __declspec(property(get=__cordl_internal_get_queuedTargetPosition, put=__cordl_internal_set_queuedTargetPosition)) ::UnityEngine::Vector3  queuedTargetPosition;

/// @brief Field rangedAttackChargeTime, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_rangedAttackChargeTime, put=__cordl_internal_set_rangedAttackChargeTime)) float_t  rangedAttackChargeTime;

/// @brief Field rangedAttackDistMax, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rangedAttackDistMax, put=__cordl_internal_set_rangedAttackDistMax)) float_t  rangedAttackDistMax;

/// @brief Field rangedAttackDistMin, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_rangedAttackDistMin, put=__cordl_internal_set_rangedAttackDistMin)) float_t  rangedAttackDistMin;

/// @brief Field rangedAttackQueued, offset 0x260, size 0x1 
 __declspec(property(get=__cordl_internal_get_rangedAttackQueued, put=__cordl_internal_set_rangedAttackQueued)) bool  rangedAttackQueued;

/// @brief Field rangedAttackRecoverTime, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_rangedAttackRecoverTime, put=__cordl_internal_set_rangedAttackRecoverTime)) float_t  rangedAttackRecoverTime;

/// @brief Field rangedFiringPosition, offset 0x234, size 0xc 
 __declspec(property(get=__cordl_internal_get_rangedFiringPosition, put=__cordl_internal_set_rangedFiringPosition)) ::UnityEngine::Vector3  rangedFiringPosition;

/// @brief Field rangedProjectileFirePoint, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_rangedProjectileFirePoint, put=__cordl_internal_set_rangedProjectileFirePoint)) ::UnityW<::UnityEngine::Transform>  rangedProjectileFirePoint;

/// @brief Field rangedProjectileInstance, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_rangedProjectileInstance, put=__cordl_internal_set_rangedProjectileInstance)) ::UnityW<::UnityEngine::GameObject>  rangedProjectileInstance;

/// @brief Field rangedProjectilePrefab, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_rangedProjectilePrefab, put=__cordl_internal_set_rangedProjectilePrefab)) ::UnityW<::UnityEngine::GameObject>  rangedProjectilePrefab;

/// @brief Field rangedTargetPosition, offset 0x240, size 0xc 
 __declspec(property(get=__cordl_internal_get_rangedTargetPosition, put=__cordl_internal_set_rangedTargetPosition)) ::UnityEngine::Vector3  rangedTargetPosition;

/// @brief Field rigidBody, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field searchPosition, offset 0x228, size 0xc 
 __declspec(property(get=__cordl_internal_get_searchPosition, put=__cordl_internal_set_searchPosition)) ::UnityEngine::Vector3  searchPosition;

/// @brief Field searchTime, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_searchTime, put=__cordl_internal_set_searchTime)) float_t  searchTime;

/// @brief Field senseLineOfSight, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseLineOfSight, put=__cordl_internal_set_senseLineOfSight)) ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight;

/// @brief Field senseNearby, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseNearby, put=__cordl_internal_set_senseNearby)) ::GlobalNamespace::GRSenseNearby*  senseNearby;

/// @brief Field sightDist, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightDist, put=__cordl_internal_set_sightDist)) float_t  sightDist;

/// @brief Field sightFOV, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightFOV, put=__cordl_internal_set_sightFOV)) float_t  sightFOV;

/// @brief Field sightLostFollowStopTime, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightLostFollowStopTime, put=__cordl_internal_set_sightLostFollowStopTime)) float_t  sightLostFollowStopTime;

/// @brief Field spitterHeadInHand, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_spitterHeadInHand, put=__cordl_internal_set_spitterHeadInHand)) ::UnityW<::UnityEngine::GameObject>  spitterHeadInHand;

/// @brief Field spitterHeadInHandLight, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_spitterHeadInHandLight, put=__cordl_internal_set_spitterHeadInHandLight)) ::UnityW<::UnityEngine::GameObject>  spitterHeadInHandLight;

/// @brief Field spitterHeadInHandVFX, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_spitterHeadInHandVFX, put=__cordl_internal_set_spitterHeadInHandVFX)) ::UnityW<::UnityEngine::GameObject>  spitterHeadInHandVFX;

/// @brief Field spitterHeadOnShoulders, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_spitterHeadOnShoulders, put=__cordl_internal_set_spitterHeadOnShoulders)) ::UnityW<::UnityEngine::GameObject>  spitterHeadOnShoulders;

/// @brief Field spitterHeadOnShouldersLight, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_spitterHeadOnShouldersLight, put=__cordl_internal_set_spitterHeadOnShouldersLight)) ::UnityW<::UnityEngine::GameObject>  spitterHeadOnShouldersLight;

/// @brief Field spitterHeadOnShouldersVFX, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_spitterHeadOnShouldersVFX, put=__cordl_internal_set_spitterHeadOnShouldersVFX)) ::UnityW<::UnityEngine::GameObject>  spitterHeadOnShouldersVFX;

/// @brief Field spitterLightTurnOffDelay, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_spitterLightTurnOffDelay, put=__cordl_internal_set_spitterLightTurnOffDelay)) double_t  spitterLightTurnOffDelay;

/// @brief Field spitterLightTurnOffTime, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_spitterLightTurnOffTime, put=__cordl_internal_set_spitterLightTurnOffTime)) double_t  spitterLightTurnOffTime;

/// @brief Field target, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetPlayer, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field turnSpeed, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnSpeed, put=__cordl_internal_set_turnSpeed)) float_t  turnSpeed;

/// @brief Field visibilityLayerMask, offset 0x2b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibilityLayerMask, put=__cordl_internal_set_visibilityLayerMask)) ::UnityEngine::LayerMask  visibilityLayerMask;

/// @brief Convert operator to "::GlobalNamespace::IGameAgentComponent"
constexpr operator  ::GlobalNamespace::IGameAgentComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr operator  ::GlobalNamespace::IGameEntityDebugComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr operator  ::GlobalNamespace::IGameEntitySerialize*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr operator  ::GlobalNamespace::IGameHittable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameProjectileLauncher"
constexpr operator  ::GlobalNamespace::IGameProjectileLauncher*() noexcept;

/// @brief Method Awake, addr 0x5893aa8, size 0x274, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateLaunchDirection, addr 0x5896d50, size 0x2e4, virtual false, abstract: false, final false
static inline bool CalculateLaunchDirection(::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  targetPos, float_t  speed, ::by_ref<::UnityEngine::Vector3>  direction) ;

/// @brief Method ChooseNewBehavior, addr 0x5895cb8, size 0x1e4, virtual false, abstract: false, final false
inline void ChooseNewBehavior() ;

/// @brief Method DestroyProjectile, addr 0x589433c, size 0xf0, virtual false, abstract: false, final false
inline void DestroyProjectile() ;

/// @brief Method DisableHeadInHand, addr 0x58939f4, size 0x24, virtual false, abstract: false, final false
inline void DisableHeadInHand() ;

/// @brief Method DisableHeadOnShoulderAndHeadInHand, addr 0x5893a18, size 0x90, virtual false, abstract: false, final false
inline void DisableHeadOnShoulderAndHeadInHand() ;

/// @brief Method EnableVFXForHeadInHand, addr 0x5893968, size 0x8c, virtual false, abstract: false, final false
inline void EnableVFXForHeadInHand() ;

/// @brief Method EnableVFXForShoulderHead, addr 0x58938dc, size 0x8c, virtual false, abstract: false, final false
inline void EnableVFXForShoulderHead() ;

/// @brief Method FireRangedAttack, addr 0x5895fec, size 0x1e4, virtual false, abstract: false, final false
inline void FireRangedAttack(::UnityEngine::Vector3  launchPosition, ::UnityEngine::Vector3  targetPosition) ;

/// @brief Method ForceHeadToDeadState, addr 0x589384c, size 0x90, virtual false, abstract: false, final false
inline void ForceHeadToDeadState() ;

/// @brief Method ForceResetThrowableHead, addr 0x58937bc, size 0x90, virtual false, abstract: false, final false
inline void ForceResetThrowableHead() ;

/// @brief Method GetDebugTextLines, addr 0x5897068, size 0x4c4, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method InstantDeath, addr 0x5896514, size 0x2c, virtual false, abstract: false, final false
inline void InstantDeath() ;

/// @brief Method IsHitValid, addr 0x5896be4, size 0x8, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method IsMoving, addr 0x58936e8, size 0x3c, virtual false, abstract: false, final false
inline bool IsMoving() ;

static inline ::GlobalNamespace::GREnemyRanged* New_ctor() ;

/// @brief Method OnAgentJumpRequested, addr 0x5894bcc, size 0x30, virtual false, abstract: false, final false
inline void OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale) ;

/// @brief Method OnDestroy, addr 0x589425c, size 0xe0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x5894254, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5893d1c, size 0x480, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5894258, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnEntityThink, addr 0x58958e4, size 0xc4, virtual true, abstract: false, final true
inline void OnEntityThink(float_t  dt) ;

/// @brief Method OnGameEntityDeserialize, addr 0x5896a94, size 0x150, virtual true, abstract: false, final true
inline void OnGameEntityDeserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method OnGameEntitySerialize, addr 0x58969c4, size 0xd0, virtual true, abstract: false, final true
inline void OnGameEntitySerialize(::System::IO::BinaryWriter*  writer) ;

/// @brief Method OnHit, addr 0x5896bec, size 0x13c, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByClub, addr 0x58961d0, size 0x344, virtual false, abstract: false, final false
inline void OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByFlash, addr 0x5896540, size 0x450, virtual false, abstract: false, final false
inline void OnHitByFlash(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByShield, addr 0x5896990, size 0x34, virtual false, abstract: false, final false
inline void OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnNetworkBehaviorStateChange, addr 0x5894bfc, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBehaviorStateChange(uint8_t  newState) ;

/// @brief Method OnNetworkBodyStateChange, addr 0x5894c14, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBodyStateChange(uint8_t  newState) ;

/// @brief Method OnProjectileHit, addr 0x5897064, size 0x4, virtual true, abstract: false, final true
inline void OnProjectileHit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method OnProjectileInit, addr 0x5897034, size 0x30, virtual true, abstract: false, final true
inline void OnProjectileInit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile) ;

/// @brief Method OnUpdateAuthority, addr 0x5894e48, size 0x7b8, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x5895600, size 0x1d4, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PlayAnim, addr 0x5894c60, size 0xd4, virtual false, abstract: false, final false
inline void PlayAnim(::StringW  animName, float_t  blendTime, float_t  speed) ;

/// @brief Method RefreshBody, addr 0x5894d34, size 0xc4, virtual false, abstract: false, final false
inline void RefreshBody() ;

/// @brief Method RequestRangedAttack, addr 0x5896d28, size 0x28, virtual false, abstract: false, final false
inline void RequestRangedAttack(::UnityEngine::Vector3  firingPosition, ::UnityEngine::Vector3  targetPosition, double_t  fireTime) ;

/// @brief Method SetBehavior, addr 0x58944c8, size 0x548, virtual false, abstract: false, final false
inline void SetBehavior(::GlobalNamespace::GREnemyRanged_Behavior  newBehavior, bool  force) ;

/// @brief Method SetBodyState, addr 0x5894a10, size 0x1bc, virtual false, abstract: false, final false
inline void SetBodyState(::GlobalNamespace::GREnemyRanged_BodyState  newBodyState, bool  force) ;

/// @brief Method SetHP, addr 0x5894c2c, size 0x8, virtual false, abstract: false, final false
inline void SetHP(int32_t  hp) ;

/// @brief Method SetPatrolPath, addr 0x589442c, size 0x9c, virtual false, abstract: false, final false
inline void SetPatrolPath(int64_t  entityCreateData) ;

/// @brief Method Setup, addr 0x589419c, size 0xb8, virtual false, abstract: false, final false
inline void Setup(int64_t  entityCreateData) ;

/// @brief Method SoftResetThrowableHead, addr 0x5893724, size 0x98, virtual false, abstract: false, final false
inline void SoftResetThrowableHead() ;

/// @brief Method TrySetBehavior, addr 0x5894c34, size 0x2c, virtual false, abstract: false, final false
inline bool TrySetBehavior(::GlobalNamespace::GREnemyRanged_Behavior  newBehavior) ;

/// @brief Method Update, addr 0x5894df8, size 0x50, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSearch, addr 0x5895e9c, size 0x150, virtual false, abstract: false, final false
inline void UpdateSearch() ;

/// @brief Method UpdateShared, addr 0x58957d4, size 0x110, virtual false, abstract: false, final false
inline void UpdateShared() ;

/// @brief Method UpdateTarget, addr 0x58959a8, size 0x310, virtual false, abstract: false, final false
inline void UpdateTarget() ;

constexpr ::GlobalNamespace::GRAbilityDie* const& __cordl_internal_get_abilityDie() const;

constexpr ::GlobalNamespace::GRAbilityDie*& __cordl_internal_get_abilityDie() ;

constexpr ::GlobalNamespace::GRAbilityFlashed* const& __cordl_internal_get_abilityFlashed() const;

constexpr ::GlobalNamespace::GRAbilityFlashed*& __cordl_internal_get_abilityFlashed() ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_abilityInvestigate() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_abilityInvestigate() ;

constexpr ::GlobalNamespace::GRAbilityJump* const& __cordl_internal_get_abilityJump() const;

constexpr ::GlobalNamespace::GRAbilityJump*& __cordl_internal_get_abilityJump() ;

constexpr ::GlobalNamespace::GRAbilityKeepDistance* const& __cordl_internal_get_abilityKeepDistance() const;

constexpr ::GlobalNamespace::GRAbilityKeepDistance*& __cordl_internal_get_abilityKeepDistance() ;

constexpr ::GlobalNamespace::GRAbilityPatrol* const& __cordl_internal_get_abilityPatrol() const;

constexpr ::GlobalNamespace::GRAbilityPatrol*& __cordl_internal_get_abilityPatrol() ;

constexpr ::GlobalNamespace::GRAbilityStagger* const& __cordl_internal_get_abilityStagger() const;

constexpr ::GlobalNamespace::GRAbilityStagger*& __cordl_internal_get_abilityStagger() ;

constexpr ::UnityW<::GlobalNamespace::GameAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::GlobalNamespace::GameAgent>& __cordl_internal_get_agent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_always() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_always() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& __cordl_internal_get_armor() const;

constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& __cordl_internal_get_armor() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_attackAbilitySound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_attackAbilitySound() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSecondarySource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSecondarySource() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr double_t const& __cordl_internal_get_behaviorEndTime() const;

constexpr double_t& __cordl_internal_get_behaviorEndTime() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_bestTargetNetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_bestTargetNetPlayer() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get_bestTargetPlayer() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get_bestTargetPlayer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_bones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_bones() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_chaseAbilitySound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_chaseAbilitySound() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_chaseColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_chaseColor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_coreMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_coreMarker() ;

constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& __cordl_internal_get_corePrefab() const;

constexpr ::UnityW<::GlobalNamespace::GRCollectible>& __cordl_internal_get_corePrefab() ;

constexpr ::GlobalNamespace::GREnemyRanged_Behavior const& __cordl_internal_get_currBehavior() const;

constexpr ::GlobalNamespace::GREnemyRanged_Behavior& __cordl_internal_get_currBehavior() ;

constexpr ::GlobalNamespace::GREnemyRanged_BodyState const& __cordl_internal_get_currBodyState() const;

constexpr ::GlobalNamespace::GREnemyRanged_BodyState& __cordl_internal_get_currBodyState() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_damagedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_damagedSound() ;

constexpr float_t const& __cordl_internal_get_damagedSoundVolume() const;

constexpr float_t& __cordl_internal_get_damagedSoundVolume() ;

constexpr bool const& __cordl_internal_get_debugLog() const;

constexpr bool& __cordl_internal_get_debugLog() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_defaultColor() ;

constexpr ::UnityW<::GlobalNamespace::GREnemy> const& __cordl_internal_get_enemy() const;

constexpr ::UnityW<::GlobalNamespace::GREnemy>& __cordl_internal_get_enemy() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxDamaged() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxDamaged() ;

constexpr bool const& __cordl_internal_get_headLightReset() const;

constexpr bool& __cordl_internal_get_headLightReset() ;

constexpr float_t const& __cordl_internal_get_headRemovalFrame() const;

constexpr float_t& __cordl_internal_get_headRemovalFrame() ;

constexpr double_t const& __cordl_internal_get_headRemovaltime() const;

constexpr double_t& __cordl_internal_get_headRemovaltime() ;

constexpr bool const& __cordl_internal_get_headRemoved() const;

constexpr bool& __cordl_internal_get_headRemoved() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTransform() ;

constexpr float_t const& __cordl_internal_get_hearingRadius() const;

constexpr float_t& __cordl_internal_get_hearingRadius() ;

constexpr ::UnityW<::GlobalNamespace::GameHittable> const& __cordl_internal_get_hittable() const;

constexpr ::UnityW<::GlobalNamespace::GameHittable>& __cordl_internal_get_hittable() ;

constexpr int32_t const& __cordl_internal_get_hp() const;

constexpr int32_t& __cordl_internal_get_hp() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_investigateLocation() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_investigateLocation() ;

constexpr float_t const& __cordl_internal_get_lastHitPlayerTime() const;

constexpr float_t& __cordl_internal_get_lastHitPlayerTime() ;

constexpr bool const& __cordl_internal_get_lastMoving() const;

constexpr bool& __cordl_internal_get_lastMoving() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastSeenTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastSeenTargetPosition() ;

constexpr double_t const& __cordl_internal_get_lastSeenTargetTime() const;

constexpr double_t& __cordl_internal_get_lastSeenTargetTime() ;

constexpr float_t const& __cordl_internal_get_loseSightDist() const;

constexpr float_t& __cordl_internal_get_loseSightDist() ;

constexpr float_t const& __cordl_internal_get_minTimeBetweenHits() const;

constexpr float_t& __cordl_internal_get_minTimeBetweenHits() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navAgent() ;

constexpr int32_t const& __cordl_internal_get_nextPatrolNode() const;

constexpr int32_t& __cordl_internal_get_nextPatrolNode() ;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& __cordl_internal_get_patrolPath() const;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& __cordl_internal_get_patrolPath() ;

constexpr bool const& __cordl_internal_get_projectileHasImpacted() const;

constexpr bool& __cordl_internal_get_projectileHasImpacted() ;

constexpr float_t const& __cordl_internal_get_projectileHitRadius() const;

constexpr float_t& __cordl_internal_get_projectileHitRadius() ;

constexpr double_t const& __cordl_internal_get_projectileImpactTime() const;

constexpr double_t& __cordl_internal_get_projectileImpactTime() ;

constexpr float_t const& __cordl_internal_get_projectileSpeed() const;

constexpr float_t& __cordl_internal_get_projectileSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_queuedFiringPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_queuedFiringPosition() ;

constexpr double_t const& __cordl_internal_get_queuedFiringTime() const;

constexpr double_t& __cordl_internal_get_queuedFiringTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_queuedTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_queuedTargetPosition() ;

constexpr float_t const& __cordl_internal_get_rangedAttackChargeTime() const;

constexpr float_t& __cordl_internal_get_rangedAttackChargeTime() ;

constexpr float_t const& __cordl_internal_get_rangedAttackDistMax() const;

constexpr float_t& __cordl_internal_get_rangedAttackDistMax() ;

constexpr float_t const& __cordl_internal_get_rangedAttackDistMin() const;

constexpr float_t& __cordl_internal_get_rangedAttackDistMin() ;

constexpr bool const& __cordl_internal_get_rangedAttackQueued() const;

constexpr bool& __cordl_internal_get_rangedAttackQueued() ;

constexpr float_t const& __cordl_internal_get_rangedAttackRecoverTime() const;

constexpr float_t& __cordl_internal_get_rangedAttackRecoverTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rangedFiringPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rangedFiringPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rangedProjectileFirePoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rangedProjectileFirePoint() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rangedProjectileInstance() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rangedProjectileInstance() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rangedProjectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rangedProjectilePrefab() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rangedTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rangedTargetPosition() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_searchPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_searchPosition() ;

constexpr float_t const& __cordl_internal_get_searchTime() const;

constexpr float_t& __cordl_internal_get_searchTime() ;

constexpr ::GlobalNamespace::GRSenseLineOfSight* const& __cordl_internal_get_senseLineOfSight() const;

constexpr ::GlobalNamespace::GRSenseLineOfSight*& __cordl_internal_get_senseLineOfSight() ;

constexpr ::GlobalNamespace::GRSenseNearby* const& __cordl_internal_get_senseNearby() const;

constexpr ::GlobalNamespace::GRSenseNearby*& __cordl_internal_get_senseNearby() ;

constexpr float_t const& __cordl_internal_get_sightDist() const;

constexpr float_t& __cordl_internal_get_sightDist() ;

constexpr float_t const& __cordl_internal_get_sightFOV() const;

constexpr float_t& __cordl_internal_get_sightFOV() ;

constexpr float_t const& __cordl_internal_get_sightLostFollowStopTime() const;

constexpr float_t& __cordl_internal_get_sightLostFollowStopTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spitterHeadInHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spitterHeadInHand() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spitterHeadInHandLight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spitterHeadInHandLight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spitterHeadInHandVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spitterHeadInHandVFX() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spitterHeadOnShoulders() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spitterHeadOnShoulders() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spitterHeadOnShouldersLight() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spitterHeadOnShouldersLight() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spitterHeadOnShouldersVFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spitterHeadOnShouldersVFX() ;

constexpr double_t const& __cordl_internal_get_spitterLightTurnOffDelay() const;

constexpr double_t& __cordl_internal_get_spitterLightTurnOffDelay() ;

constexpr double_t const& __cordl_internal_get_spitterLightTurnOffTime() const;

constexpr double_t& __cordl_internal_get_spitterLightTurnOffTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr float_t const& __cordl_internal_get_turnSpeed() const;

constexpr float_t& __cordl_internal_get_turnSpeed() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_visibilityLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_visibilityLayerMask() ;

constexpr void __cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value) ;

constexpr void __cordl_internal_set_abilityFlashed(::GlobalNamespace::GRAbilityFlashed*  value) ;

constexpr void __cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

constexpr void __cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value) ;

constexpr void __cordl_internal_set_abilityKeepDistance(::GlobalNamespace::GRAbilityKeepDistance*  value) ;

constexpr void __cordl_internal_set_abilityPatrol(::GlobalNamespace::GRAbilityPatrol*  value) ;

constexpr void __cordl_internal_set_abilityStagger(::GlobalNamespace::GRAbilityStagger*  value) ;

constexpr void __cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value) ;

constexpr void __cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value) ;

constexpr void __cordl_internal_set_attackAbilitySound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSecondarySource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_behaviorEndTime(double_t  value) ;

constexpr void __cordl_internal_set_bestTargetNetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_bestTargetPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_chaseAbilitySound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_chaseColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_coreMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_corePrefab(::UnityW<::GlobalNamespace::GRCollectible>  value) ;

constexpr void __cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyRanged_Behavior  value) ;

constexpr void __cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyRanged_BodyState  value) ;

constexpr void __cordl_internal_set_damagedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_damagedSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_debugLog(bool  value) ;

constexpr void __cordl_internal_set_defaultColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_fxDamaged(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_headLightReset(bool  value) ;

constexpr void __cordl_internal_set_headRemovalFrame(float_t  value) ;

constexpr void __cordl_internal_set_headRemovaltime(double_t  value) ;

constexpr void __cordl_internal_set_headRemoved(bool  value) ;

constexpr void __cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hearingRadius(float_t  value) ;

constexpr void __cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value) ;

constexpr void __cordl_internal_set_hp(int32_t  value) ;

constexpr void __cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_lastHitPlayerTime(float_t  value) ;

constexpr void __cordl_internal_set_lastMoving(bool  value) ;

constexpr void __cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastSeenTargetTime(double_t  value) ;

constexpr void __cordl_internal_set_loseSightDist(float_t  value) ;

constexpr void __cordl_internal_set_minTimeBetweenHits(float_t  value) ;

constexpr void __cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_nextPatrolNode(int32_t  value) ;

constexpr void __cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value) ;

constexpr void __cordl_internal_set_projectileHasImpacted(bool  value) ;

constexpr void __cordl_internal_set_projectileHitRadius(float_t  value) ;

constexpr void __cordl_internal_set_projectileImpactTime(double_t  value) ;

constexpr void __cordl_internal_set_projectileSpeed(float_t  value) ;

constexpr void __cordl_internal_set_queuedFiringPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_queuedFiringTime(double_t  value) ;

constexpr void __cordl_internal_set_queuedTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rangedAttackChargeTime(float_t  value) ;

constexpr void __cordl_internal_set_rangedAttackDistMax(float_t  value) ;

constexpr void __cordl_internal_set_rangedAttackDistMin(float_t  value) ;

constexpr void __cordl_internal_set_rangedAttackQueued(bool  value) ;

constexpr void __cordl_internal_set_rangedAttackRecoverTime(float_t  value) ;

constexpr void __cordl_internal_set_rangedFiringPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rangedProjectileFirePoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rangedProjectileInstance(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rangedProjectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rangedTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_searchPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_searchTime(float_t  value) ;

constexpr void __cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value) ;

constexpr void __cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value) ;

constexpr void __cordl_internal_set_sightDist(float_t  value) ;

constexpr void __cordl_internal_set_sightFOV(float_t  value) ;

constexpr void __cordl_internal_set_sightLostFollowStopTime(float_t  value) ;

constexpr void __cordl_internal_set_spitterHeadInHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spitterHeadInHandLight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spitterHeadInHandVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spitterHeadOnShoulders(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spitterHeadOnShouldersLight(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spitterHeadOnShouldersVFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spitterLightTurnOffDelay(double_t  value) ;

constexpr void __cordl_internal_set_spitterLightTurnOffTime(double_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_turnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_visibilityLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x589752c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

/// @brief Convert to "::GlobalNamespace::IGameAgentComponent"
constexpr ::GlobalNamespace::IGameAgentComponent* i___GlobalNamespace__IGameAgentComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* i___GlobalNamespace__IGameEntityDebugComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* i___GlobalNamespace__IGameEntitySerialize() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* i___GlobalNamespace__IGameHittable() noexcept;

/// @brief Convert to "::GlobalNamespace::IGameProjectileLauncher"
constexpr ::GlobalNamespace::IGameProjectileLauncher* i___GlobalNamespace__IGameProjectileLauncher() noexcept;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyRanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyRanged", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyRanged(GREnemyRanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyRanged", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyRanged(GREnemyRanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1965};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field agent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameAgent>  ___agent;

/// @brief Field enemy, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemy>  ___enemy;

/// @brief Field armor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRArmorEnemy>  ___armor;

/// @brief Field hittable, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameHittable>  ___hittable;

/// @brief Field attributes, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field anim, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// @brief Field senseNearby, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseNearby*  ___senseNearby;

/// @brief Field senseLineOfSight, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseLineOfSight*  ___senseLineOfSight;

/// @brief Field abilityStagger, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityStagger*  ___abilityStagger;

/// @brief Field abilityDie, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityDie*  ___abilityDie;

/// @brief Field abilityInvestigate, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___abilityInvestigate;

/// @brief Field abilityPatrol, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityPatrol*  ___abilityPatrol;

/// @brief Field abilityFlashed, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityFlashed*  ___abilityFlashed;

/// @brief Field abilityKeepDistance, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityKeepDistance*  ___abilityKeepDistance;

/// @brief Field abilityJump, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityJump*  ___abilityJump;

/// @brief Field bones, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___bones;

/// @brief Field always, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___always;

/// @brief Field coreMarker, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___coreMarker;

/// @brief Field corePrefab, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRCollectible>  ___corePrefab;

/// @brief Field headTransform, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headTransform;

/// @brief Field sightDist, offset: 0xc8, size: 0x4, def value: None
 float_t  ___sightDist;

/// @brief Field loseSightDist, offset: 0xcc, size: 0x4, def value: None
 float_t  ___loseSightDist;

/// @brief Field sightFOV, offset: 0xd0, size: 0x4, def value: None
 float_t  ___sightFOV;

/// @brief Field sightLostFollowStopTime, offset: 0xd4, size: 0x4, def value: None
 float_t  ___sightLostFollowStopTime;

/// @brief Field searchTime, offset: 0xd8, size: 0x4, def value: None
 float_t  ___searchTime;

/// @brief Field hearingRadius, offset: 0xdc, size: 0x4, def value: None
 float_t  ___hearingRadius;

/// @brief Field turnSpeed, offset: 0xe0, size: 0x4, def value: None
 float_t  ___turnSpeed;

/// @brief Field chaseColor, offset: 0xe4, size: 0x10, def value: None
 ::UnityEngine::Color  ___chaseColor;

/// @brief Field attackAbilitySound, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___attackAbilitySound;

/// @brief Field chaseAbilitySound, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___chaseAbilitySound;

/// @brief Field rangedAttackDistMin, offset: 0x108, size: 0x4, def value: None
 float_t  ___rangedAttackDistMin;

/// @brief Field rangedAttackDistMax, offset: 0x10c, size: 0x4, def value: None
 float_t  ___rangedAttackDistMax;

/// @brief Field rangedAttackChargeTime, offset: 0x110, size: 0x4, def value: None
 float_t  ___rangedAttackChargeTime;

/// @brief Field rangedAttackRecoverTime, offset: 0x114, size: 0x4, def value: None
 float_t  ___rangedAttackRecoverTime;

/// @brief Field projectileSpeed, offset: 0x118, size: 0x4, def value: None
 float_t  ___projectileSpeed;

/// @brief Field projectileHitRadius, offset: 0x11c, size: 0x4, def value: None
 float_t  ___projectileHitRadius;

/// @brief Field rangedProjectilePrefab, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rangedProjectilePrefab;

/// @brief Field rangedProjectileFirePoint, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rangedProjectileFirePoint;

/// [ReadOnly]
/// [SerializeField]
/// @brief Field patrolPath, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPatrolPath>  ___patrolPath;

/// @brief Field navAgent, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navAgent;

/// @brief Field audioSource, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field audioSecondarySource, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSecondarySource;

/// @brief Field damagedSound, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___damagedSound;

/// @brief Field damagedSoundVolume, offset: 0x158, size: 0x4, def value: None
 float_t  ___damagedSoundVolume;

/// @brief Field fxDamaged, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxDamaged;

/// @brief Field lastMoving, offset: 0x168, size: 0x1, def value: None
 bool  ___lastMoving;

/// @brief Field investigateLocation, offset: 0x170, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ___investigateLocation;

/// @brief Field debugLog, offset: 0x180, size: 0x1, def value: None
 bool  ___debugLog;

/// @brief Field spitterHeadOnShoulders, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spitterHeadOnShoulders;

/// @brief Field spitterHeadOnShouldersLight, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spitterHeadOnShouldersLight;

/// @brief Field spitterHeadOnShouldersVFX, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spitterHeadOnShouldersVFX;

/// @brief Field spitterHeadInHand, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spitterHeadInHand;

/// @brief Field spitterHeadInHandLight, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spitterHeadInHandLight;

/// @brief Field spitterHeadInHandVFX, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spitterHeadInHandVFX;

/// @brief Field spitterLightTurnOffDelay, offset: 0x1b8, size: 0x8, def value: None
 double_t  ___spitterLightTurnOffDelay;

/// @brief Field headLightReset, offset: 0x1c0, size: 0x1, def value: None
 bool  ___headLightReset;

/// @brief Field spitterLightTurnOffTime, offset: 0x1c8, size: 0x8, def value: None
 double_t  ___spitterLightTurnOffTime;

/// [FormerlySerializedAs("headRemovalInterval")]
/// @brief Field headRemovalFrame, offset: 0x1d0, size: 0x4, def value: None
 float_t  ___headRemovalFrame;

/// @brief Field headRemovaltime, offset: 0x1d8, size: 0x8, def value: None
 double_t  ___headRemovaltime;

/// @brief Field headRemoved, offset: 0x1e0, size: 0x1, def value: None
 bool  ___headRemoved;

/// @brief Field target, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [ReadOnly]
/// @brief Field hp, offset: 0x1f0, size: 0x4, def value: None
 int32_t  ___hp;

/// [ReadOnly]
/// @brief Field currBehavior, offset: 0x1f4, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyRanged_Behavior  ___currBehavior;

/// [ReadOnly]
/// @brief Field behaviorEndTime, offset: 0x1f8, size: 0x8, def value: None
 double_t  ___behaviorEndTime;

/// [ReadOnly]
/// @brief Field currBodyState, offset: 0x200, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyRanged_BodyState  ___currBodyState;

/// [ReadOnly]
/// @brief Field nextPatrolNode, offset: 0x204, size: 0x4, def value: None
 int32_t  ___nextPatrolNode;

/// [ReadOnly]
/// @brief Field targetPlayer, offset: 0x208, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// [ReadOnly]
/// @brief Field lastSeenTargetPosition, offset: 0x210, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastSeenTargetPosition;

/// [ReadOnly]
/// @brief Field lastSeenTargetTime, offset: 0x220, size: 0x8, def value: None
 double_t  ___lastSeenTargetTime;

/// [ReadOnly]
/// @brief Field searchPosition, offset: 0x228, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___searchPosition;

/// [ReadOnly]
/// @brief Field rangedFiringPosition, offset: 0x234, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rangedFiringPosition;

/// [ReadOnly]
/// @brief Field rangedTargetPosition, offset: 0x240, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rangedTargetPosition;

/// [ReadOnly]
/// @brief Field bestTargetPlayer, offset: 0x250, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ___bestTargetPlayer;

/// [ReadOnly]
/// @brief Field bestTargetNetPlayer, offset: 0x258, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___bestTargetNetPlayer;

/// @brief Field rangedAttackQueued, offset: 0x260, size: 0x1, def value: None
 bool  ___rangedAttackQueued;

/// @brief Field queuedFiringTime, offset: 0x268, size: 0x8, def value: None
 double_t  ___queuedFiringTime;

/// @brief Field queuedFiringPosition, offset: 0x270, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___queuedFiringPosition;

/// @brief Field queuedTargetPosition, offset: 0x27c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___queuedTargetPosition;

/// @brief Field rangedProjectileInstance, offset: 0x288, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rangedProjectileInstance;

/// @brief Field projectileHasImpacted, offset: 0x290, size: 0x1, def value: None
 bool  ___projectileHasImpacted;

/// @brief Field projectileImpactTime, offset: 0x298, size: 0x8, def value: None
 double_t  ___projectileImpactTime;

/// @brief Field rigidBody, offset: 0x2a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field colliders, offset: 0x2a8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field visibilityLayerMask, offset: 0x2b0, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___visibilityLayerMask;

/// @brief Field defaultColor, offset: 0x2b4, size: 0x10, def value: None
 ::UnityEngine::Color  ___defaultColor;

/// @brief Field lastHitPlayerTime, offset: 0x2c4, size: 0x4, def value: None
 float_t  ___lastHitPlayerTime;

/// @brief Field minTimeBetweenHits, offset: 0x2c8, size: 0x4, def value: None
 float_t  ___minTimeBetweenHits;

/// @brief Size padding 0x2c8 - 0x2d0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___agent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___enemy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___armor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___hittable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___attributes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___anim) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___senseNearby) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___senseLineOfSight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___abilityStagger) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___abilityDie) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___abilityInvestigate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___abilityPatrol) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___abilityFlashed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___abilityKeepDistance) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___abilityJump) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___bones) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___always) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___coreMarker) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___corePrefab) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___headTransform) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___sightDist) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___loseSightDist) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___sightFOV) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___sightLostFollowStopTime) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___searchTime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___hearingRadius) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___turnSpeed) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___chaseColor) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___attackAbilitySound) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___chaseAbilitySound) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedAttackDistMin) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedAttackDistMax) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedAttackChargeTime) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedAttackRecoverTime) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___projectileSpeed) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___projectileHitRadius) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedProjectilePrefab) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedProjectileFirePoint) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___patrolPath) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___navAgent) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___audioSource) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___audioSecondarySource) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___damagedSound) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___damagedSoundVolume) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___fxDamaged) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___lastMoving) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___investigateLocation) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___debugLog) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___spitterHeadOnShoulders) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___spitterHeadOnShouldersLight) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___spitterHeadOnShouldersVFX) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___spitterHeadInHand) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___spitterHeadInHandLight) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___spitterHeadInHandVFX) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___spitterLightTurnOffDelay) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___headLightReset) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___spitterLightTurnOffTime) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___headRemovalFrame) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___headRemovaltime) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___headRemoved) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___target) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___hp) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___currBehavior) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___behaviorEndTime) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___currBodyState) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___nextPatrolNode) == 0x204, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___targetPlayer) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___lastSeenTargetPosition) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___lastSeenTargetTime) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___searchPosition) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedFiringPosition) == 0x234, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedTargetPosition) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___bestTargetPlayer) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___bestTargetNetPlayer) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedAttackQueued) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___queuedFiringTime) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___queuedFiringPosition) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___queuedTargetPosition) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rangedProjectileInstance) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___projectileHasImpacted) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___projectileImpactTime) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___rigidBody) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___colliders) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___visibilityLayerMask) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___defaultColor) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___lastHitPlayerTime) == 0x2c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyRanged, ___minTimeBetweenHits) == 0x2c8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyRanged) == 0x2c8, "Size mismatch!");

} // namespace end def GlobalNamespace
