#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyChaser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GREnemyChaser_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyChaser_BodyState_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyChaser)
namespace GlobalNamespace {
class GRAbilityAttackSwipe;
}
namespace GlobalNamespace {
class GRAbilityChase;
}
namespace GlobalNamespace {
class GRAbilityDie;
}
namespace GlobalNamespace {
class GRAbilityFlashed;
}
namespace GlobalNamespace {
class GRAbilityIdle;
}
namespace GlobalNamespace {
class GRAbilityJump;
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
class GRAbilityWander;
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
struct GREnemyChaser_Behavior;
}
namespace GlobalNamespace {
struct GREnemyChaser_BodyState;
}
namespace GlobalNamespace {
class GREnemyChaser__TryHitPlayer_d__89;
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
class NetPlayer;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class VRRig;
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
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
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
class Coroutine;
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
class GREnemyChaser;
}
namespace GlobalNamespace {
class GREnemyChaser__TryHitPlayer_d__89;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemyChaser*);
MARK_REF_T(::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyChaser*, "", "GREnemyChaser");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*, "", "GREnemyChaser/<TryHitPlayer>d__89");
// Dependencies GREnemyChaser::Behavior, GREnemyChaser::BodyState, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyChaser
class CORDL_TYPE GREnemyChaser : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Behavior = ::GlobalNamespace::GREnemyChaser_Behavior;

using BodyState = ::GlobalNamespace::GREnemyChaser_BodyState;

using _TryHitPlayer_d__89 = ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89;

/// @brief Field abilityAttackSwipe, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackSwipe, put=__cordl_internal_set_abilityAttackSwipe)) ::GlobalNamespace::GRAbilityAttackSwipe*  abilityAttackSwipe;

/// @brief Field abilityChase, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityChase, put=__cordl_internal_set_abilityChase)) ::GlobalNamespace::GRAbilityChase*  abilityChase;

/// @brief Field abilityDie, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityDie, put=__cordl_internal_set_abilityDie)) ::GlobalNamespace::GRAbilityDie*  abilityDie;

/// @brief Field abilityFlashed, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityFlashed, put=__cordl_internal_set_abilityFlashed)) ::GlobalNamespace::GRAbilityFlashed*  abilityFlashed;

/// @brief Field abilityIdle, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityIdle, put=__cordl_internal_set_abilityIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityIdle;

/// @brief Field abilityInvestigate, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityInvestigate, put=__cordl_internal_set_abilityInvestigate)) ::GlobalNamespace::GRAbilityMoveToTarget*  abilityInvestigate;

/// @brief Field abilityJump, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityJump, put=__cordl_internal_set_abilityJump)) ::GlobalNamespace::GRAbilityJump*  abilityJump;

/// @brief Field abilityPatrol, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityPatrol, put=__cordl_internal_set_abilityPatrol)) ::GlobalNamespace::GRAbilityPatrol*  abilityPatrol;

/// @brief Field abilitySearch, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilitySearch, put=__cordl_internal_set_abilitySearch)) ::GlobalNamespace::GRAbilityIdle*  abilitySearch;

/// @brief Field abilityStagger, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityStagger, put=__cordl_internal_set_abilityStagger)) ::GlobalNamespace::GRAbilityStagger*  abilityStagger;

/// @brief Field abilityWander, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityWander, put=__cordl_internal_set_abilityWander)) ::GlobalNamespace::GRAbilityWander*  abilityWander;

/// @brief Field agent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::GlobalNamespace::GameAgent>  agent;

/// @brief Field always, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_always, put=__cordl_internal_set_always)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  always;

/// @brief Field anim, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field armor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_armor, put=__cordl_internal_set_armor)) ::UnityW<::GlobalNamespace::GRArmorEnemy>  armor;

/// @brief Field attackRange, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackRange, put=__cordl_internal_set_attackRange)) float_t  attackRange;

/// @brief Field attributes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bones, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bones, put=__cordl_internal_set_bones)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  bones;

/// @brief Field canChaseJump, offset 0x19c, size 0x1 
 __declspec(property(get=__cordl_internal_get_canChaseJump, put=__cordl_internal_set_canChaseJump)) bool  canChaseJump;

/// @brief Field chaseJumpDistance, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseJumpDistance, put=__cordl_internal_set_chaseJumpDistance)) float_t  chaseJumpDistance;

/// @brief Field chaseJumpMinInterval, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseJumpMinInterval, put=__cordl_internal_set_chaseJumpMinInterval)) float_t  chaseJumpMinInterval;

/// @brief Field chaseSoundBank, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_chaseSoundBank, put=__cordl_internal_set_chaseSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  chaseSoundBank;

/// @brief Field colliders, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field coreMarker, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreMarker, put=__cordl_internal_set_coreMarker)) ::UnityW<::UnityEngine::Transform>  coreMarker;

/// @brief Field corePrefab, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_corePrefab, put=__cordl_internal_set_corePrefab)) ::UnityW<::GlobalNamespace::GRCollectible>  corePrefab;

/// @brief Field currBehavior, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBehavior, put=__cordl_internal_set_currBehavior)) ::GlobalNamespace::GREnemyChaser_Behavior  currBehavior;

/// @brief Field currBodyState, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBodyState, put=__cordl_internal_set_currBodyState)) ::GlobalNamespace::GREnemyChaser_BodyState  currBodyState;

/// @brief Field damagedSound, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_damagedSound, put=__cordl_internal_set_damagedSound)) ::UnityW<::UnityEngine::AudioClip>  damagedSound;

/// @brief Field damagedSoundIndex, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_damagedSoundIndex, put=__cordl_internal_set_damagedSoundIndex)) int32_t  damagedSoundIndex;

/// @brief Field damagedSoundVolume, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_damagedSoundVolume, put=__cordl_internal_set_damagedSoundVolume)) float_t  damagedSoundVolume;

/// @brief Field damagedSounds, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_damagedSounds, put=__cordl_internal_set_damagedSounds)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  damagedSounds;

/// @brief Field enemy, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemy, put=__cordl_internal_set_enemy)) ::UnityW<::GlobalNamespace::GREnemy>  enemy;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field fxDamaged, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxDamaged, put=__cordl_internal_set_fxDamaged)) ::UnityW<::UnityEngine::GameObject>  fxDamaged;

/// @brief Field headTransform, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_headTransform, put=__cordl_internal_set_headTransform)) ::UnityW<::UnityEngine::Transform>  headTransform;

/// @brief Field hearingRadius, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hearingRadius, put=__cordl_internal_set_hearingRadius)) float_t  hearingRadius;

/// @brief Field hittable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hittable, put=__cordl_internal_set_hittable)) ::UnityW<::GlobalNamespace::GameHittable>  hittable;

/// @brief Field hp, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_hp, put=__cordl_internal_set_hp)) int32_t  hp;

/// @brief Field investigateLocation, offset 0x140, size 0x10 
 __declspec(property(get=__cordl_internal_get_investigateLocation, put=__cordl_internal_set_investigateLocation)) ::System::Nullable_1<::UnityEngine::Vector3>  investigateLocation;

/// @brief Field lastHitPlayerTime, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHitPlayerTime, put=__cordl_internal_set_lastHitPlayerTime)) float_t  lastHitPlayerTime;

/// @brief Field lastSeenTargetPosition, offset 0x178, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetPosition, put=__cordl_internal_set_lastSeenTargetPosition)) ::UnityEngine::Vector3  lastSeenTargetPosition;

/// @brief Field lastSeenTargetTime, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetTime, put=__cordl_internal_set_lastSeenTargetTime)) double_t  lastSeenTargetTime;

/// @brief Field lastStaggerTime, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStaggerTime, put=__cordl_internal_set_lastStaggerTime)) float_t  lastStaggerTime;

/// @brief Field minChaseJumpDistance, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_minChaseJumpDistance, put=__cordl_internal_set_minChaseJumpDistance)) float_t  minChaseJumpDistance;

/// @brief Field minTimeBetweenHits, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTimeBetweenHits, put=__cordl_internal_set_minTimeBetweenHits)) float_t  minTimeBetweenHits;

/// @brief Field navAgent, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_navAgent, put=__cordl_internal_set_navAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navAgent;

/// @brief Field patrolPath, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolPath, put=__cordl_internal_set_patrolPath)) ::UnityW<::GlobalNamespace::GRPatrolPath>  patrolPath;

/// @brief Field rigidBody, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field searchPosition, offset 0x190, size 0xc 
 __declspec(property(get=__cordl_internal_get_searchPosition, put=__cordl_internal_set_searchPosition)) ::UnityEngine::Vector3  searchPosition;

/// @brief Field senseLineOfSight, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseLineOfSight, put=__cordl_internal_set_senseLineOfSight)) ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight;

/// @brief Field senseNearby, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseNearby, put=__cordl_internal_set_senseNearby)) ::GlobalNamespace::GRSenseNearby*  senseNearby;

/// @brief Field staggerImmuneTime, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_staggerImmuneTime, put=__cordl_internal_set_staggerImmuneTime)) float_t  staggerImmuneTime;

/// @brief Field target, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetPlayer, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field tryHitPlayerCoroutine, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryHitPlayerCoroutine, put=__cordl_internal_set_tryHitPlayerCoroutine)) ::UnityEngine::Coroutine*  tryHitPlayerCoroutine;

/// @brief Field turnSpeed, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnSpeed, put=__cordl_internal_set_turnSpeed)) float_t  turnSpeed;

/// @brief Field visibilityHits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_visibilityHits, put=setStaticF_visibilityHits)) ::ArrayW<::UnityEngine::RaycastHit>  visibilityHits;

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

/// @brief Method Awake, addr 0x5888158, size 0x1e8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChooseNewBehavior, addr 0x588957c, size 0x464, virtual false, abstract: false, final false
inline void ChooseNewBehavior() ;

/// @brief Method GetDebugTextLines, addr 0x588ad8c, size 0x3f0, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method InstantDeath, addr 0x588223c, size 0x2c, virtual false, abstract: false, final false
inline void InstantDeath() ;

/// @brief Method IsHitValid, addr 0x588b39c, size 0x8, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

static inline ::GlobalNamespace::GREnemyChaser* New_ctor() ;

/// @brief Method OnAgentJumpRequested, addr 0x5888fbc, size 0x30, virtual false, abstract: false, final false
inline void OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale) ;

/// @brief Method OnDestroy, addr 0x5888980, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x5888978, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5888340, size 0x5c8, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x588897c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnEntityThink, addr 0x5889264, size 0x318, virtual true, abstract: false, final true
inline void OnEntityThink(float_t  dt) ;

/// @brief Method OnGameEntityDeserialize, addr 0x588b24c, size 0x150, virtual true, abstract: false, final true
inline void OnGameEntityDeserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method OnGameEntitySerialize, addr 0x588b17c, size 0xd0, virtual true, abstract: false, final true
inline void OnGameEntitySerialize(::System::IO::BinaryWriter*  writer) ;

/// @brief Method OnHit, addr 0x588b3a4, size 0x148, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByClub, addr 0x5889f50, size 0x3e4, virtual false, abstract: false, final false
inline void OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByFlash, addr 0x588a334, size 0x440, virtual false, abstract: false, final false
inline void OnHitByFlash(::GlobalNamespace::GRTool*  grTool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByShield, addr 0x588a774, size 0x1c0, virtual false, abstract: false, final false
inline void OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnNetworkBehaviorStateChange, addr 0x5888fec, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBehaviorStateChange(uint8_t  newState) ;

/// @brief Method OnNetworkBodyStateChange, addr 0x5889004, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBodyStateChange(uint8_t  newState) ;

/// @brief Method OnTriggerEnter, addr 0x588a934, size 0x3c8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnUpdate, addr 0x5889214, size 0x50, virtual false, abstract: false, final false
inline void OnUpdate(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x58899e0, size 0x468, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x5889e48, size 0x108, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PlayAnim, addr 0x5889124, size 0xd4, virtual false, abstract: false, final false
inline void PlayAnim(::StringW  animName, float_t  blendTime, float_t  speed) ;

/// @brief Method RefreshBody, addr 0x58890ac, size 0x78, virtual false, abstract: false, final false
inline void RefreshBody() ;

/// @brief Method SetBehavior, addr 0x5888af4, size 0x380, virtual false, abstract: false, final false
inline void SetBehavior(::GlobalNamespace::GREnemyChaser_Behavior  newBehavior, bool  force) ;

/// @brief Method SetBodyState, addr 0x5888e74, size 0x148, virtual false, abstract: false, final false
inline void SetBodyState(::GlobalNamespace::GREnemyChaser_BodyState  newBodyState, bool  force) ;

/// @brief Method SetHP, addr 0x5889034, size 0x8, virtual false, abstract: false, final false
inline void SetHP(int32_t  hp) ;

/// @brief Method SetNextPatrolNode, addr 0x588901c, size 0x18, virtual false, abstract: false, final false
inline void SetNextPatrolNode(int32_t  nextPatrolNode) ;

/// @brief Method SetPatrolPath, addr 0x5888a58, size 0x9c, virtual false, abstract: false, final false
inline void SetPatrolPath(int64_t  entityCreateData) ;

/// @brief Method Setup, addr 0x5888908, size 0x70, virtual false, abstract: false, final false
inline void Setup(int64_t  entityCreateData) ;

/// [IteratorStateMachine(typeof(GREnemyChaser::<TryHitPlayer>d__89))]
/// @brief Method TryHitPlayer, addr 0x588acfc, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TryHitPlayer(::GlobalNamespace::GRPlayer*  player) ;

/// @brief Method TrySetBehavior, addr 0x588903c, size 0x70, virtual false, abstract: false, final false
inline bool TrySetBehavior(::GlobalNamespace::GREnemyChaser_Behavior  newBehavior) ;

/// @brief Method Update, addr 0x58891f8, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::GRAbilityAttackSwipe* const& __cordl_internal_get_abilityAttackSwipe() const;

constexpr ::GlobalNamespace::GRAbilityAttackSwipe*& __cordl_internal_get_abilityAttackSwipe() ;

constexpr ::GlobalNamespace::GRAbilityChase* const& __cordl_internal_get_abilityChase() const;

constexpr ::GlobalNamespace::GRAbilityChase*& __cordl_internal_get_abilityChase() ;

constexpr ::GlobalNamespace::GRAbilityDie* const& __cordl_internal_get_abilityDie() const;

constexpr ::GlobalNamespace::GRAbilityDie*& __cordl_internal_get_abilityDie() ;

constexpr ::GlobalNamespace::GRAbilityFlashed* const& __cordl_internal_get_abilityFlashed() const;

constexpr ::GlobalNamespace::GRAbilityFlashed*& __cordl_internal_get_abilityFlashed() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityIdle() ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_abilityInvestigate() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_abilityInvestigate() ;

constexpr ::GlobalNamespace::GRAbilityJump* const& __cordl_internal_get_abilityJump() const;

constexpr ::GlobalNamespace::GRAbilityJump*& __cordl_internal_get_abilityJump() ;

constexpr ::GlobalNamespace::GRAbilityPatrol* const& __cordl_internal_get_abilityPatrol() const;

constexpr ::GlobalNamespace::GRAbilityPatrol*& __cordl_internal_get_abilityPatrol() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilitySearch() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilitySearch() ;

constexpr ::GlobalNamespace::GRAbilityStagger* const& __cordl_internal_get_abilityStagger() const;

constexpr ::GlobalNamespace::GRAbilityStagger*& __cordl_internal_get_abilityStagger() ;

constexpr ::GlobalNamespace::GRAbilityWander* const& __cordl_internal_get_abilityWander() const;

constexpr ::GlobalNamespace::GRAbilityWander*& __cordl_internal_get_abilityWander() ;

constexpr ::UnityW<::GlobalNamespace::GameAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::GlobalNamespace::GameAgent>& __cordl_internal_get_agent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_always() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_always() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& __cordl_internal_get_armor() const;

constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& __cordl_internal_get_armor() ;

constexpr float_t const& __cordl_internal_get_attackRange() const;

constexpr float_t& __cordl_internal_get_attackRange() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_bones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_bones() ;

constexpr bool const& __cordl_internal_get_canChaseJump() const;

constexpr bool& __cordl_internal_get_canChaseJump() ;

constexpr float_t const& __cordl_internal_get_chaseJumpDistance() const;

constexpr float_t& __cordl_internal_get_chaseJumpDistance() ;

constexpr float_t const& __cordl_internal_get_chaseJumpMinInterval() const;

constexpr float_t& __cordl_internal_get_chaseJumpMinInterval() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_chaseSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_chaseSoundBank() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_coreMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_coreMarker() ;

constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& __cordl_internal_get_corePrefab() const;

constexpr ::UnityW<::GlobalNamespace::GRCollectible>& __cordl_internal_get_corePrefab() ;

constexpr ::GlobalNamespace::GREnemyChaser_Behavior const& __cordl_internal_get_currBehavior() const;

constexpr ::GlobalNamespace::GREnemyChaser_Behavior& __cordl_internal_get_currBehavior() ;

constexpr ::GlobalNamespace::GREnemyChaser_BodyState const& __cordl_internal_get_currBodyState() const;

constexpr ::GlobalNamespace::GREnemyChaser_BodyState& __cordl_internal_get_currBodyState() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_damagedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_damagedSound() ;

constexpr int32_t const& __cordl_internal_get_damagedSoundIndex() const;

constexpr int32_t& __cordl_internal_get_damagedSoundIndex() ;

constexpr float_t const& __cordl_internal_get_damagedSoundVolume() const;

constexpr float_t& __cordl_internal_get_damagedSoundVolume() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_damagedSounds() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_damagedSounds() ;

constexpr ::UnityW<::GlobalNamespace::GREnemy> const& __cordl_internal_get_enemy() const;

constexpr ::UnityW<::GlobalNamespace::GREnemy>& __cordl_internal_get_enemy() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxDamaged() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxDamaged() ;

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

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastSeenTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastSeenTargetPosition() ;

constexpr double_t const& __cordl_internal_get_lastSeenTargetTime() const;

constexpr double_t& __cordl_internal_get_lastSeenTargetTime() ;

constexpr float_t const& __cordl_internal_get_lastStaggerTime() const;

constexpr float_t& __cordl_internal_get_lastStaggerTime() ;

constexpr float_t const& __cordl_internal_get_minChaseJumpDistance() const;

constexpr float_t& __cordl_internal_get_minChaseJumpDistance() ;

constexpr float_t const& __cordl_internal_get_minTimeBetweenHits() const;

constexpr float_t& __cordl_internal_get_minTimeBetweenHits() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navAgent() ;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& __cordl_internal_get_patrolPath() const;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& __cordl_internal_get_patrolPath() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_searchPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_searchPosition() ;

constexpr ::GlobalNamespace::GRSenseLineOfSight* const& __cordl_internal_get_senseLineOfSight() const;

constexpr ::GlobalNamespace::GRSenseLineOfSight*& __cordl_internal_get_senseLineOfSight() ;

constexpr ::GlobalNamespace::GRSenseNearby* const& __cordl_internal_get_senseNearby() const;

constexpr ::GlobalNamespace::GRSenseNearby*& __cordl_internal_get_senseNearby() ;

constexpr float_t const& __cordl_internal_get_staggerImmuneTime() const;

constexpr float_t& __cordl_internal_get_staggerImmuneTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_tryHitPlayerCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_tryHitPlayerCoroutine() ;

constexpr float_t const& __cordl_internal_get_turnSpeed() const;

constexpr float_t& __cordl_internal_get_turnSpeed() ;

constexpr void __cordl_internal_set_abilityAttackSwipe(::GlobalNamespace::GRAbilityAttackSwipe*  value) ;

constexpr void __cordl_internal_set_abilityChase(::GlobalNamespace::GRAbilityChase*  value) ;

constexpr void __cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value) ;

constexpr void __cordl_internal_set_abilityFlashed(::GlobalNamespace::GRAbilityFlashed*  value) ;

constexpr void __cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

constexpr void __cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value) ;

constexpr void __cordl_internal_set_abilityPatrol(::GlobalNamespace::GRAbilityPatrol*  value) ;

constexpr void __cordl_internal_set_abilitySearch(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityStagger(::GlobalNamespace::GRAbilityStagger*  value) ;

constexpr void __cordl_internal_set_abilityWander(::GlobalNamespace::GRAbilityWander*  value) ;

constexpr void __cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value) ;

constexpr void __cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value) ;

constexpr void __cordl_internal_set_attackRange(float_t  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_canChaseJump(bool  value) ;

constexpr void __cordl_internal_set_chaseJumpDistance(float_t  value) ;

constexpr void __cordl_internal_set_chaseJumpMinInterval(float_t  value) ;

constexpr void __cordl_internal_set_chaseSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_coreMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_corePrefab(::UnityW<::GlobalNamespace::GRCollectible>  value) ;

constexpr void __cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyChaser_Behavior  value) ;

constexpr void __cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyChaser_BodyState  value) ;

constexpr void __cordl_internal_set_damagedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_damagedSoundIndex(int32_t  value) ;

constexpr void __cordl_internal_set_damagedSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_damagedSounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_fxDamaged(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hearingRadius(float_t  value) ;

constexpr void __cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value) ;

constexpr void __cordl_internal_set_hp(int32_t  value) ;

constexpr void __cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_lastHitPlayerTime(float_t  value) ;

constexpr void __cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastSeenTargetTime(double_t  value) ;

constexpr void __cordl_internal_set_lastStaggerTime(float_t  value) ;

constexpr void __cordl_internal_set_minChaseJumpDistance(float_t  value) ;

constexpr void __cordl_internal_set_minTimeBetweenHits(float_t  value) ;

constexpr void __cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_searchPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value) ;

constexpr void __cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value) ;

constexpr void __cordl_internal_set_staggerImmuneTime(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_tryHitPlayerCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_turnSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x588b4ec, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

static inline ::ArrayW<::UnityEngine::RaycastHit> getStaticF_visibilityHits() ;

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

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

static inline void setStaticF_visibilityHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyChaser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyChaser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyChaser(GREnemyChaser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyChaser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyChaser(GREnemyChaser const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1950};

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

/// [SerializeField]
/// @brief Field attributes, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field senseNearby, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseNearby*  ___senseNearby;

/// @brief Field senseLineOfSight, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseLineOfSight*  ___senseLineOfSight;

/// @brief Field anim, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// @brief Field abilityIdle, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityIdle;

/// @brief Field abilityChase, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityChase*  ___abilityChase;

/// @brief Field abilitySearch, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilitySearch;

/// @brief Field abilityAttackSwipe, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityAttackSwipe*  ___abilityAttackSwipe;

/// @brief Field abilityStagger, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityStagger*  ___abilityStagger;

/// @brief Field abilityDie, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityDie*  ___abilityDie;

/// @brief Field abilityInvestigate, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___abilityInvestigate;

/// @brief Field abilityPatrol, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityPatrol*  ___abilityPatrol;

/// @brief Field abilityWander, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityWander*  ___abilityWander;

/// @brief Field abilityFlashed, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityFlashed*  ___abilityFlashed;

/// @brief Field abilityJump, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityJump*  ___abilityJump;

/// @brief Field bones, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___bones;

/// @brief Field always, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___always;

/// @brief Field coreMarker, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___coreMarker;

/// @brief Field corePrefab, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRCollectible>  ___corePrefab;

/// @brief Field headTransform, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headTransform;

/// @brief Field turnSpeed, offset: 0xe8, size: 0x4, def value: None
 float_t  ___turnSpeed;

/// @brief Field chaseSoundBank, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___chaseSoundBank;

/// @brief Field attackRange, offset: 0xf8, size: 0x4, def value: None
 float_t  ___attackRange;

/// [ReadOnly]
/// [SerializeField]
/// @brief Field patrolPath, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPatrolPath>  ___patrolPath;

/// @brief Field navAgent, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navAgent;

/// @brief Field audioSource, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field damagedSound, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___damagedSound;

/// @brief Field damagedSoundVolume, offset: 0x120, size: 0x4, def value: None
 float_t  ___damagedSoundVolume;

/// @brief Field damagedSounds, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___damagedSounds;

/// @brief Field damagedSoundIndex, offset: 0x130, size: 0x4, def value: None
 int32_t  ___damagedSoundIndex;

/// @brief Field fxDamaged, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxDamaged;

/// @brief Field investigateLocation, offset: 0x140, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ___investigateLocation;

/// @brief Field lastStaggerTime, offset: 0x150, size: 0x4, def value: None
 float_t  ___lastStaggerTime;

/// @brief Field staggerImmuneTime, offset: 0x154, size: 0x4, def value: None
 float_t  ___staggerImmuneTime;

/// @brief Field target, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [ReadOnly]
/// @brief Field hp, offset: 0x160, size: 0x4, def value: None
 int32_t  ___hp;

/// [ReadOnly]
/// @brief Field currBehavior, offset: 0x164, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyChaser_Behavior  ___currBehavior;

/// [ReadOnly]
/// @brief Field currBodyState, offset: 0x168, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyChaser_BodyState  ___currBodyState;

/// [ReadOnly]
/// @brief Field targetPlayer, offset: 0x170, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// [ReadOnly]
/// @brief Field lastSeenTargetPosition, offset: 0x178, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastSeenTargetPosition;

/// [ReadOnly]
/// @brief Field lastSeenTargetTime, offset: 0x188, size: 0x8, def value: None
 double_t  ___lastSeenTargetTime;

/// [ReadOnly]
/// @brief Field searchPosition, offset: 0x190, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___searchPosition;

/// @brief Field canChaseJump, offset: 0x19c, size: 0x1, def value: None
 bool  ___canChaseJump;

/// @brief Field chaseJumpDistance, offset: 0x1a0, size: 0x4, def value: None
 float_t  ___chaseJumpDistance;

/// @brief Field chaseJumpMinInterval, offset: 0x1a4, size: 0x4, def value: None
 float_t  ___chaseJumpMinInterval;

/// @brief Field minChaseJumpDistance, offset: 0x1a8, size: 0x4, def value: None
 float_t  ___minChaseJumpDistance;

/// @brief Field rigidBody, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field colliders, offset: 0x1b8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field lastHitPlayerTime, offset: 0x1c0, size: 0x4, def value: None
 float_t  ___lastHitPlayerTime;

/// @brief Field minTimeBetweenHits, offset: 0x1c4, size: 0x4, def value: None
 float_t  ___minTimeBetweenHits;

/// @brief Field hearingRadius, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___hearingRadius;

/// @brief Field tryHitPlayerCoroutine, offset: 0x1d0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___tryHitPlayerCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___agent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___enemy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___armor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___hittable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___attributes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___senseNearby) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___senseLineOfSight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___anim) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityIdle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityChase) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilitySearch) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityAttackSwipe) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityStagger) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityDie) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityInvestigate) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityPatrol) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityWander) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityFlashed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___abilityJump) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___bones) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___always) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___coreMarker) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___corePrefab) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___headTransform) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___turnSpeed) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___chaseSoundBank) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___attackRange) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___patrolPath) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___navAgent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___audioSource) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___damagedSound) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___damagedSoundVolume) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___damagedSounds) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___damagedSoundIndex) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___fxDamaged) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___investigateLocation) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___lastStaggerTime) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___staggerImmuneTime) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___target) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___hp) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___currBehavior) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___currBodyState) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___targetPlayer) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___lastSeenTargetPosition) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___lastSeenTargetTime) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___searchPosition) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___canChaseJump) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___chaseJumpDistance) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___chaseJumpMinInterval) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___minChaseJumpDistance) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___rigidBody) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___colliders) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___lastHitPlayerTime) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___minTimeBetweenHits) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___hearingRadius) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser, ___tryHitPlayerCoroutine) == 0x1d0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyChaser) == 0x1d8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyChaser/<TryHitPlayer>d__89
class CORDL_TYPE GREnemyChaser__TryHitPlayer_d__89 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GREnemyChaser>  __4__this;

/// @brief Field player, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::GlobalNamespace::GRPlayer>  player;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x588b634, size 0x1b4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x588b7e8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x588b7f0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x588b828, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x588b630, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GREnemyChaser> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GREnemyChaser>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyChaser>  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x588b608, size 0x28, virtual false, abstract: false, final false
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
constexpr GREnemyChaser__TryHitPlayer_d__89() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyChaser__TryHitPlayer_d__89", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyChaser__TryHitPlayer_d__89(GREnemyChaser__TryHitPlayer_d__89 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyChaser__TryHitPlayer_d__89", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyChaser__TryHitPlayer_d__89(GREnemyChaser__TryHitPlayer_d__89 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1949};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemyChaser>  _____4__this;

/// @brief Field player, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ___player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89, ___player) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
