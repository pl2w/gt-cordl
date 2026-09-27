#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyPest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GREnemyPest_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyPest_BodyState_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyPest)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRAbilityAttackJump;
}
namespace GlobalNamespace {
class GRAbilityChase;
}
namespace GlobalNamespace {
class GRAbilityDie;
}
namespace GlobalNamespace {
class GRAbilityGrabbed;
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
class GRAbilityStagger;
}
namespace GlobalNamespace {
class GRAbilityThrown;
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
struct GREnemyPest_Behavior;
}
namespace GlobalNamespace {
struct GREnemyPest_BodyState;
}
namespace GlobalNamespace {
class GREnemyPest__TryHitPlayer_d__80;
}
namespace GlobalNamespace {
class GREnemy;
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
class ITickSystemTick;
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
class GREnemyPest;
}
namespace GlobalNamespace {
class GREnemyPest__TryHitPlayer_d__80;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemyPest*);
MARK_REF_T(::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyPest*, "", "GREnemyPest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*, "", "GREnemyPest/<TryHitPlayer>d__80");
// Dependencies GREnemyPest::Behavior, GREnemyPest::BodyState, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyPest
class CORDL_TYPE GREnemyPest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Behavior = ::GlobalNamespace::GREnemyPest_Behavior;

using BodyState = ::GlobalNamespace::GREnemyPest_BodyState;

using _TryHitPlayer_d__80 = ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field abilityAttack, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttack, put=__cordl_internal_set_abilityAttack)) ::GlobalNamespace::GRAbilityAttackJump*  abilityAttack;

/// @brief Field abilityChase, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityChase, put=__cordl_internal_set_abilityChase)) ::GlobalNamespace::GRAbilityChase*  abilityChase;

/// @brief Field abilityDie, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityDie, put=__cordl_internal_set_abilityDie)) ::GlobalNamespace::GRAbilityDie*  abilityDie;

/// @brief Field abilityFlashed, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityFlashed, put=__cordl_internal_set_abilityFlashed)) ::GlobalNamespace::GRAbilityStagger*  abilityFlashed;

/// @brief Field abilityGrabbed, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityGrabbed, put=__cordl_internal_set_abilityGrabbed)) ::GlobalNamespace::GRAbilityGrabbed*  abilityGrabbed;

/// @brief Field abilityIdle, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityIdle, put=__cordl_internal_set_abilityIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityIdle;

/// @brief Field abilityInvestigate, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityInvestigate, put=__cordl_internal_set_abilityInvestigate)) ::GlobalNamespace::GRAbilityMoveToTarget*  abilityInvestigate;

/// @brief Field abilityJump, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityJump, put=__cordl_internal_set_abilityJump)) ::GlobalNamespace::GRAbilityJump*  abilityJump;

/// @brief Field abilityStagger, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityStagger, put=__cordl_internal_set_abilityStagger)) ::GlobalNamespace::GRAbilityStagger*  abilityStagger;

/// @brief Field abilityThrown, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityThrown, put=__cordl_internal_set_abilityThrown)) ::GlobalNamespace::GRAbilityThrown*  abilityThrown;

/// @brief Field abilityWander, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityWander, put=__cordl_internal_set_abilityWander)) ::GlobalNamespace::GRAbilityWander*  abilityWander;

/// @brief Field agent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::GlobalNamespace::GameAgent>  agent;

/// @brief Field alwaysVisibleObjects, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_alwaysVisibleObjects, put=__cordl_internal_set_alwaysVisibleObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  alwaysVisibleObjects;

/// @brief Field anim, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field armor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_armor, put=__cordl_internal_set_armor)) ::UnityW<::GlobalNamespace::GRArmorEnemy>  armor;

/// @brief Field attackRange, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackRange, put=__cordl_internal_set_attackRange)) float_t  attackRange;

/// @brief Field attributes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field behaviorEndTime, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorEndTime, put=__cordl_internal_set_behaviorEndTime)) double_t  behaviorEndTime;

/// @brief Field behaviorStartTime, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorStartTime, put=__cordl_internal_set_behaviorStartTime)) double_t  behaviorStartTime;

/// @brief Field bonesStateVisibleObjects, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonesStateVisibleObjects, put=__cordl_internal_set_bonesStateVisibleObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  bonesStateVisibleObjects;

/// @brief Field colliders, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field coreMarker, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreMarker, put=__cordl_internal_set_coreMarker)) ::UnityW<::UnityEngine::Transform>  coreMarker;

/// @brief Field corePrefab, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_corePrefab, put=__cordl_internal_set_corePrefab)) ::UnityW<::GlobalNamespace::GRCollectible>  corePrefab;

/// @brief Field currBehavior, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBehavior, put=__cordl_internal_set_currBehavior)) ::GlobalNamespace::GREnemyPest_Behavior  currBehavior;

/// @brief Field currBodyState, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBodyState, put=__cordl_internal_set_currBodyState)) ::GlobalNamespace::GREnemyPest_BodyState  currBodyState;

/// @brief Field enemy, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemy, put=__cordl_internal_set_enemy)) ::UnityW<::GlobalNamespace::GREnemy>  enemy;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field headTransform, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_headTransform, put=__cordl_internal_set_headTransform)) ::UnityW<::UnityEngine::Transform>  headTransform;

/// @brief Field hearingRadius, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_hearingRadius, put=__cordl_internal_set_hearingRadius)) float_t  hearingRadius;

/// @brief Field hp, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_hp, put=__cordl_internal_set_hp)) int32_t  hp;

/// @brief Field investigateLocation, offset 0x110, size 0x10 
 __declspec(property(get=__cordl_internal_get_investigateLocation, put=__cordl_internal_set_investigateLocation)) ::System::Nullable_1<::UnityEngine::Vector3>  investigateLocation;

/// @brief Field lastHitPlayerTime, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHitPlayerTime, put=__cordl_internal_set_lastHitPlayerTime)) float_t  lastHitPlayerTime;

/// @brief Field minTimeBetweenHits, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTimeBetweenHits, put=__cordl_internal_set_minTimeBetweenHits)) float_t  minTimeBetweenHits;

/// @brief Field navAgent, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_navAgent, put=__cordl_internal_set_navAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navAgent;

/// @brief Field nextPatrolNode, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPatrolNode, put=__cordl_internal_set_nextPatrolNode)) int32_t  nextPatrolNode;

/// @brief Field rigidBody, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field rigsNearby, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigsNearby, put=__cordl_internal_set_rigsNearby)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigsNearby;

/// @brief Field searchPosition, offset 0x140, size 0xc 
 __declspec(property(get=__cordl_internal_get_searchPosition, put=__cordl_internal_set_searchPosition)) ::UnityEngine::Vector3  searchPosition;

/// @brief Field senseLineOfSight, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseLineOfSight, put=__cordl_internal_set_senseLineOfSight)) ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight;

/// @brief Field senseNearby, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseNearby, put=__cordl_internal_set_senseNearby)) ::GlobalNamespace::GRSenseNearby*  senseNearby;

/// @brief Field spawnSound, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnSound, put=__cordl_internal_set_spawnSound)) ::GlobalNamespace::AbilitySound*  spawnSound;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field tryHitPlayerCoroutine, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryHitPlayerCoroutine, put=__cordl_internal_set_tryHitPlayerCoroutine)) ::UnityEngine::Coroutine*  tryHitPlayerCoroutine;

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

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x588ea78, size 0x314, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChooseNewBehavior, addr 0x588fdb8, size 0x178, virtual false, abstract: false, final false
inline void ChooseNewBehavior() ;

/// @brief Method GetDebugTextLines, addr 0x5890e2c, size 0x434, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method InstantDeath, addr 0x5890924, size 0x10, virtual false, abstract: false, final false
inline void InstantDeath() ;

/// @brief Method IsHitValid, addr 0x5890400, size 0x8, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

static inline ::GlobalNamespace::GREnemyPest* New_ctor() ;

/// @brief Method OnAgentJumpRequested, addr 0x588f96c, size 0x30, virtual false, abstract: false, final false
inline void OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale) ;

/// @brief Method OnDestroy, addr 0x588f8dc, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x588edf8, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x588ed8c, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEntityDestroy, addr 0x588f8d4, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x588ee80, size 0x668, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x588f8d8, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnEntityThink, addr 0x588fa8c, size 0x32c, virtual true, abstract: false, final true
inline void OnEntityThink(float_t  dt) ;

/// @brief Method OnGameEntityDeserialize, addr 0x5890374, size 0x8c, virtual true, abstract: false, final true
inline void OnGameEntityDeserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method OnGameEntitySerialize, addr 0x5890310, size 0x64, virtual true, abstract: false, final true
inline void OnGameEntitySerialize(::System::IO::BinaryWriter*  writer) ;

/// @brief Method OnGrabbed, addr 0x588f9e8, size 0x1c, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnHit, addr 0x5890408, size 0x138, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByClub, addr 0x5890540, size 0x13c, virtual false, abstract: false, final false
inline void OnHitByClub(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByFlash, addr 0x589067c, size 0x274, virtual false, abstract: false, final false
inline void OnHitByFlash(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByShield, addr 0x58908f0, size 0x34, virtual false, abstract: false, final false
inline void OnHitByShield(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnNetworkBehaviorStateChange, addr 0x588f99c, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBehaviorStateChange(uint8_t  newState) ;

/// @brief Method OnReleased, addr 0x588fa04, size 0x1c, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method OnTriggerEnter, addr 0x58909d0, size 0x3ac, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnUpdate, addr 0x588fa3c, size 0x50, virtual false, abstract: false, final false
inline void OnUpdate(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x588ff30, size 0x310, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x5890240, size 0xd0, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method PlaySpawnAudio, addr 0x588ee64, size 0x1c, virtual false, abstract: false, final false
inline void PlaySpawnAudio() ;

/// @brief Method RefreshBody, addr 0x5890934, size 0x9c, virtual false, abstract: false, final false
inline void RefreshBody() ;

/// @brief Method SetBehavior, addr 0x588f4e8, size 0x2a4, virtual false, abstract: false, final false
inline void SetBehavior(::GlobalNamespace::GREnemyPest_Behavior  newBehavior, bool  force) ;

/// @brief Method SetBodyState, addr 0x588f78c, size 0x148, virtual false, abstract: false, final false
inline void SetBodyState(::GlobalNamespace::GREnemyPest_BodyState  newBodyState, bool  force) ;

/// @brief Method SetHP, addr 0x588f9b4, size 0x8, virtual false, abstract: false, final false
inline void SetHP(int32_t  hp) ;

/// @brief Method Tick, addr 0x588fa20, size 0x1c, virtual true, abstract: false, final true
inline void Tick() ;

/// [IteratorStateMachine(typeof(GREnemyPest::<TryHitPlayer>d__80))]
/// @brief Method TryHitPlayer, addr 0x5890d7c, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TryHitPlayer(::GlobalNamespace::GRPlayer*  player) ;

/// @brief Method TrySetBehavior, addr 0x588f9bc, size 0x2c, virtual false, abstract: false, final false
inline bool TrySetBehavior(::GlobalNamespace::GREnemyPest_Behavior  newBehavior) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GlobalNamespace::GRAbilityAttackJump* const& __cordl_internal_get_abilityAttack() const;

constexpr ::GlobalNamespace::GRAbilityAttackJump*& __cordl_internal_get_abilityAttack() ;

constexpr ::GlobalNamespace::GRAbilityChase* const& __cordl_internal_get_abilityChase() const;

constexpr ::GlobalNamespace::GRAbilityChase*& __cordl_internal_get_abilityChase() ;

constexpr ::GlobalNamespace::GRAbilityDie* const& __cordl_internal_get_abilityDie() const;

constexpr ::GlobalNamespace::GRAbilityDie*& __cordl_internal_get_abilityDie() ;

constexpr ::GlobalNamespace::GRAbilityStagger* const& __cordl_internal_get_abilityFlashed() const;

constexpr ::GlobalNamespace::GRAbilityStagger*& __cordl_internal_get_abilityFlashed() ;

constexpr ::GlobalNamespace::GRAbilityGrabbed* const& __cordl_internal_get_abilityGrabbed() const;

constexpr ::GlobalNamespace::GRAbilityGrabbed*& __cordl_internal_get_abilityGrabbed() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityIdle() ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_abilityInvestigate() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_abilityInvestigate() ;

constexpr ::GlobalNamespace::GRAbilityJump* const& __cordl_internal_get_abilityJump() const;

constexpr ::GlobalNamespace::GRAbilityJump*& __cordl_internal_get_abilityJump() ;

constexpr ::GlobalNamespace::GRAbilityStagger* const& __cordl_internal_get_abilityStagger() const;

constexpr ::GlobalNamespace::GRAbilityStagger*& __cordl_internal_get_abilityStagger() ;

constexpr ::GlobalNamespace::GRAbilityThrown* const& __cordl_internal_get_abilityThrown() const;

constexpr ::GlobalNamespace::GRAbilityThrown*& __cordl_internal_get_abilityThrown() ;

constexpr ::GlobalNamespace::GRAbilityWander* const& __cordl_internal_get_abilityWander() const;

constexpr ::GlobalNamespace::GRAbilityWander*& __cordl_internal_get_abilityWander() ;

constexpr ::UnityW<::GlobalNamespace::GameAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::GlobalNamespace::GameAgent>& __cordl_internal_get_agent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_alwaysVisibleObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_alwaysVisibleObjects() ;

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

constexpr double_t const& __cordl_internal_get_behaviorEndTime() const;

constexpr double_t& __cordl_internal_get_behaviorEndTime() ;

constexpr double_t const& __cordl_internal_get_behaviorStartTime() const;

constexpr double_t& __cordl_internal_get_behaviorStartTime() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_bonesStateVisibleObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_bonesStateVisibleObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_coreMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_coreMarker() ;

constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& __cordl_internal_get_corePrefab() const;

constexpr ::UnityW<::GlobalNamespace::GRCollectible>& __cordl_internal_get_corePrefab() ;

constexpr ::GlobalNamespace::GREnemyPest_Behavior const& __cordl_internal_get_currBehavior() const;

constexpr ::GlobalNamespace::GREnemyPest_Behavior& __cordl_internal_get_currBehavior() ;

constexpr ::GlobalNamespace::GREnemyPest_BodyState const& __cordl_internal_get_currBodyState() const;

constexpr ::GlobalNamespace::GREnemyPest_BodyState& __cordl_internal_get_currBodyState() ;

constexpr ::UnityW<::GlobalNamespace::GREnemy> const& __cordl_internal_get_enemy() const;

constexpr ::UnityW<::GlobalNamespace::GREnemy>& __cordl_internal_get_enemy() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTransform() ;

constexpr float_t const& __cordl_internal_get_hearingRadius() const;

constexpr float_t& __cordl_internal_get_hearingRadius() ;

constexpr int32_t const& __cordl_internal_get_hp() const;

constexpr int32_t& __cordl_internal_get_hp() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_investigateLocation() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_investigateLocation() ;

constexpr float_t const& __cordl_internal_get_lastHitPlayerTime() const;

constexpr float_t& __cordl_internal_get_lastHitPlayerTime() ;

constexpr float_t const& __cordl_internal_get_minTimeBetweenHits() const;

constexpr float_t& __cordl_internal_get_minTimeBetweenHits() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navAgent() ;

constexpr int32_t const& __cordl_internal_get_nextPatrolNode() const;

constexpr int32_t& __cordl_internal_get_nextPatrolNode() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_rigsNearby() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_rigsNearby() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_searchPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_searchPosition() ;

constexpr ::GlobalNamespace::GRSenseLineOfSight* const& __cordl_internal_get_senseLineOfSight() const;

constexpr ::GlobalNamespace::GRSenseLineOfSight*& __cordl_internal_get_senseLineOfSight() ;

constexpr ::GlobalNamespace::GRSenseNearby* const& __cordl_internal_get_senseNearby() const;

constexpr ::GlobalNamespace::GRSenseNearby*& __cordl_internal_get_senseNearby() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_spawnSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_spawnSound() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_tryHitPlayerCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_tryHitPlayerCoroutine() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_abilityAttack(::GlobalNamespace::GRAbilityAttackJump*  value) ;

constexpr void __cordl_internal_set_abilityChase(::GlobalNamespace::GRAbilityChase*  value) ;

constexpr void __cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value) ;

constexpr void __cordl_internal_set_abilityFlashed(::GlobalNamespace::GRAbilityStagger*  value) ;

constexpr void __cordl_internal_set_abilityGrabbed(::GlobalNamespace::GRAbilityGrabbed*  value) ;

constexpr void __cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

constexpr void __cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value) ;

constexpr void __cordl_internal_set_abilityStagger(::GlobalNamespace::GRAbilityStagger*  value) ;

constexpr void __cordl_internal_set_abilityThrown(::GlobalNamespace::GRAbilityThrown*  value) ;

constexpr void __cordl_internal_set_abilityWander(::GlobalNamespace::GRAbilityWander*  value) ;

constexpr void __cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value) ;

constexpr void __cordl_internal_set_alwaysVisibleObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value) ;

constexpr void __cordl_internal_set_attackRange(float_t  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_behaviorEndTime(double_t  value) ;

constexpr void __cordl_internal_set_behaviorStartTime(double_t  value) ;

constexpr void __cordl_internal_set_bonesStateVisibleObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_coreMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_corePrefab(::UnityW<::GlobalNamespace::GRCollectible>  value) ;

constexpr void __cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyPest_Behavior  value) ;

constexpr void __cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyPest_BodyState  value) ;

constexpr void __cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hearingRadius(float_t  value) ;

constexpr void __cordl_internal_set_hp(int32_t  value) ;

constexpr void __cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_lastHitPlayerTime(float_t  value) ;

constexpr void __cordl_internal_set_minTimeBetweenHits(float_t  value) ;

constexpr void __cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_nextPatrolNode(int32_t  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rigsNearby(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_searchPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value) ;

constexpr void __cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value) ;

constexpr void __cordl_internal_set_spawnSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_tryHitPlayerCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x5891260, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x588ea68, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

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

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x588ea70, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyPest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyPest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyPest(GREnemyPest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyPest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyPest(GREnemyPest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1959};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field agent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameAgent>  ___agent;

/// @brief Field enemy, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemy>  ___enemy;

/// @brief Field armor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRArmorEnemy>  ___armor;

/// @brief Field attributes, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field anim, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// @brief Field senseNearby, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseNearby*  ___senseNearby;

/// @brief Field senseLineOfSight, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseLineOfSight*  ___senseLineOfSight;

/// @brief Field abilityIdle, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityIdle;

/// @brief Field abilityChase, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityChase*  ___abilityChase;

/// @brief Field abilityWander, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityWander*  ___abilityWander;

/// @brief Field abilityAttack, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityAttackJump*  ___abilityAttack;

/// @brief Field abilityStagger, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityStagger*  ___abilityStagger;

/// @brief Field abilityFlashed, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityStagger*  ___abilityFlashed;

/// @brief Field abilityDie, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityDie*  ___abilityDie;

/// @brief Field abilityGrabbed, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityGrabbed*  ___abilityGrabbed;

/// @brief Field abilityThrown, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityThrown*  ___abilityThrown;

/// @brief Field spawnSound, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___spawnSound;

/// @brief Field abilityInvestigate, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___abilityInvestigate;

/// @brief Field abilityJump, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityJump*  ___abilityJump;

/// @brief Field bonesStateVisibleObjects, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___bonesStateVisibleObjects;

/// @brief Field alwaysVisibleObjects, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___alwaysVisibleObjects;

/// @brief Field coreMarker, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___coreMarker;

/// @brief Field corePrefab, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRCollectible>  ___corePrefab;

/// @brief Field headTransform, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headTransform;

/// @brief Field attackRange, offset: 0xe8, size: 0x4, def value: None
 float_t  ___attackRange;

/// @brief Field rigsNearby, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___rigsNearby;

/// @brief Field navAgent, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navAgent;

/// @brief Field audioSource, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field hearingRadius, offset: 0x108, size: 0x4, def value: None
 float_t  ___hearingRadius;

/// @brief Field investigateLocation, offset: 0x110, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ___investigateLocation;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x120, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [ReadOnly]
/// @brief Field hp, offset: 0x124, size: 0x4, def value: None
 int32_t  ___hp;

/// [ReadOnly]
/// @brief Field currBehavior, offset: 0x128, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyPest_Behavior  ___currBehavior;

/// [ReadOnly]
/// @brief Field behaviorEndTime, offset: 0x130, size: 0x8, def value: None
 double_t  ___behaviorEndTime;

/// [ReadOnly]
/// @brief Field currBodyState, offset: 0x138, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyPest_BodyState  ___currBodyState;

/// [ReadOnly]
/// @brief Field nextPatrolNode, offset: 0x13c, size: 0x4, def value: None
 int32_t  ___nextPatrolNode;

/// [ReadOnly]
/// @brief Field searchPosition, offset: 0x140, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___searchPosition;

/// [ReadOnly]
/// @brief Field behaviorStartTime, offset: 0x150, size: 0x8, def value: None
 double_t  ___behaviorStartTime;

/// @brief Field rigidBody, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field colliders, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field lastHitPlayerTime, offset: 0x168, size: 0x4, def value: None
 float_t  ___lastHitPlayerTime;

/// @brief Field minTimeBetweenHits, offset: 0x16c, size: 0x4, def value: None
 float_t  ___minTimeBetweenHits;

/// @brief Field tryHitPlayerCoroutine, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___tryHitPlayerCoroutine;

/// @brief Size padding 0x170 - 0x178 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___agent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___enemy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___armor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___attributes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___anim) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___senseNearby) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___senseLineOfSight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityIdle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityChase) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityWander) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityAttack) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityStagger) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityFlashed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityDie) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityGrabbed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityThrown) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___spawnSound) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityInvestigate) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___abilityJump) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___bonesStateVisibleObjects) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___alwaysVisibleObjects) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___coreMarker) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___corePrefab) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___headTransform) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___attackRange) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___rigsNearby) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___navAgent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___audioSource) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___hearingRadius) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___investigateLocation) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ____TickRunning_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___hp) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___currBehavior) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___behaviorEndTime) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___currBodyState) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___nextPatrolNode) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___searchPosition) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___behaviorStartTime) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___rigidBody) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___colliders) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___lastHitPlayerTime) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___minTimeBetweenHits) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest, ___tryHitPlayerCoroutine) == 0x170, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyPest) == 0x170, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyPest/<TryHitPlayer>d__80
class CORDL_TYPE GREnemyPest__TryHitPlayer_d__80 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GREnemyPest>  __4__this;

/// @brief Field player, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::GlobalNamespace::GRPlayer>  player;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5891320, size 0x1b4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x58914d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x58914dc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5891514, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x589131c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GREnemyPest> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GREnemyPest>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyPest>  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5890e04, size 0x28, virtual false, abstract: false, final false
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
constexpr GREnemyPest__TryHitPlayer_d__80() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyPest__TryHitPlayer_d__80", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyPest__TryHitPlayer_d__80(GREnemyPest__TryHitPlayer_d__80 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyPest__TryHitPlayer_d__80", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyPest__TryHitPlayer_d__80(GREnemyPest__TryHitPlayer_d__80 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1958};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemyPest>  _____4__this;

/// @brief Field player, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ___player;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80, ___player) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
