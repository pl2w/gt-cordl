#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemySummoner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GREnemySummoner_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemySummoner_BodyState_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemySummoner)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRAbilityAttackJump;
}
namespace GlobalNamespace {
class GRAbilityDie;
}
namespace GlobalNamespace {
class GRAbilityIdle;
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
class GRAbilityStagger;
}
namespace GlobalNamespace {
class GRAbilitySummon;
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
struct GREnemySummoner_Behavior;
}
namespace GlobalNamespace {
struct GREnemySummoner_BodyState;
}
namespace GlobalNamespace {
class GREnemy;
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
class GameLight;
}
namespace GlobalNamespace {
class IGRSummoningEntity;
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
class AudioSource;
}
namespace UnityEngine {
class Collider;
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
class GREnemySummoner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemySummoner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemySummoner*, "", "GREnemySummoner");
// Dependencies GREnemySummoner::Behavior, GREnemySummoner::BodyState, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemySummoner
class CORDL_TYPE GREnemySummoner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Behavior = ::GlobalNamespace::GREnemySummoner_Behavior;

using BodyState = ::GlobalNamespace::GREnemySummoner_BodyState;

/// @brief Field abilityAttack, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttack, put=__cordl_internal_set_abilityAttack)) ::GlobalNamespace::GRAbilityAttackJump*  abilityAttack;

/// @brief Field abilityDie, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityDie, put=__cordl_internal_set_abilityDie)) ::GlobalNamespace::GRAbilityDie*  abilityDie;

/// @brief Field abilityFlashed, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityFlashed, put=__cordl_internal_set_abilityFlashed)) ::GlobalNamespace::GRAbilityStagger*  abilityFlashed;

/// @brief Field abilityIdle, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityIdle, put=__cordl_internal_set_abilityIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityIdle;

/// @brief Field abilityInvestigate, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityInvestigate, put=__cordl_internal_set_abilityInvestigate)) ::GlobalNamespace::GRAbilityMoveToTarget*  abilityInvestigate;

/// @brief Field abilityJump, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityJump, put=__cordl_internal_set_abilityJump)) ::GlobalNamespace::GRAbilityJump*  abilityJump;

/// @brief Field abilityKeepDistance, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityKeepDistance, put=__cordl_internal_set_abilityKeepDistance)) ::GlobalNamespace::GRAbilityKeepDistance*  abilityKeepDistance;

/// @brief Field abilityMoveToTarget, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityMoveToTarget, put=__cordl_internal_set_abilityMoveToTarget)) ::GlobalNamespace::GRAbilityMoveToTarget*  abilityMoveToTarget;

/// @brief Field abilityStagger, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityStagger, put=__cordl_internal_set_abilityStagger)) ::GlobalNamespace::GRAbilityStagger*  abilityStagger;

/// @brief Field abilitySummon, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilitySummon, put=__cordl_internal_set_abilitySummon)) ::GlobalNamespace::GRAbilitySummon*  abilitySummon;

/// @brief Field abilityWander, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityWander, put=__cordl_internal_set_abilityWander)) ::GlobalNamespace::GRAbilityWander*  abilityWander;

/// @brief Field agent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::GlobalNamespace::GameAgent>  agent;

/// @brief Field always, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_always, put=__cordl_internal_set_always)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  always;

/// @brief Field alwaysVisibleObjects, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_alwaysVisibleObjects, put=__cordl_internal_set_alwaysVisibleObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  alwaysVisibleObjects;

/// @brief Field anim, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field armor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_armor, put=__cordl_internal_set_armor)) ::UnityW<::GlobalNamespace::GRArmorEnemy>  armor;

/// @brief Field attackRange, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackRange, put=__cordl_internal_set_attackRange)) float_t  attackRange;

/// @brief Field attributes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field behaviorEndTime, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorEndTime, put=__cordl_internal_set_behaviorEndTime)) double_t  behaviorEndTime;

/// @brief Field behaviorStartTime, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorStartTime, put=__cordl_internal_set_behaviorStartTime)) double_t  behaviorStartTime;

/// @brief Field bones, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bones, put=__cordl_internal_set_bones)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  bones;

/// @brief Field bonesStateVisibleObjects, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonesStateVisibleObjects, put=__cordl_internal_set_bonesStateVisibleObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  bonesStateVisibleObjects;

/// @brief Field colliders, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field coreMarker, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreMarker, put=__cordl_internal_set_coreMarker)) ::UnityW<::UnityEngine::Transform>  coreMarker;

/// @brief Field corePrefab, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_corePrefab, put=__cordl_internal_set_corePrefab)) ::UnityW<::GlobalNamespace::GRCollectible>  corePrefab;

/// @brief Field currBehavior, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBehavior, put=__cordl_internal_set_currBehavior)) ::GlobalNamespace::GREnemySummoner_Behavior  currBehavior;

/// @brief Field currBodyState, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBodyState, put=__cordl_internal_set_currBodyState)) ::GlobalNamespace::GREnemySummoner_BodyState  currBodyState;

/// @brief Field enemy, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemy, put=__cordl_internal_set_enemy)) ::UnityW<::GlobalNamespace::GREnemy>  enemy;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field headTransform, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_headTransform, put=__cordl_internal_set_headTransform)) ::UnityW<::UnityEngine::Transform>  headTransform;

/// @brief Field hearingRadius, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_hearingRadius, put=__cordl_internal_set_hearingRadius)) float_t  hearingRadius;

/// @brief Field hp, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hp, put=__cordl_internal_set_hp)) int32_t  hp;

/// @brief Field idleDuration, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_idleDuration, put=__cordl_internal_set_idleDuration)) float_t  idleDuration;

/// @brief Field investigateLocation, offset 0x190, size 0x10 
 __declspec(property(get=__cordl_internal_get_investigateLocation, put=__cordl_internal_set_investigateLocation)) ::System::Nullable_1<::UnityEngine::Vector3>  investigateLocation;

/// @brief Field keepDistanceThreshold, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_keepDistanceThreshold, put=__cordl_internal_set_keepDistanceThreshold)) float_t  keepDistanceThreshold;

/// @brief Field lastSummonTime, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSummonTime, put=__cordl_internal_set_lastSummonTime)) double_t  lastSummonTime;

/// @brief Field lastUpdateTime, offset 0x1a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUpdateTime, put=__cordl_internal_set_lastUpdateTime)) float_t  lastUpdateTime;

/// @brief Field maxSimultaneousSummonedEntities, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSimultaneousSummonedEntities, put=__cordl_internal_set_maxSimultaneousSummonedEntities)) int32_t  maxSimultaneousSummonedEntities;

/// @brief Field minSummonInterval, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSummonInterval, put=__cordl_internal_set_minSummonInterval)) float_t  minSummonInterval;

/// @brief Field navAgent, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_navAgent, put=__cordl_internal_set_navAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navAgent;

/// @brief Field rigidBody, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field rigsNearby, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigsNearby, put=__cordl_internal_set_rigsNearby)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigsNearby;

/// @brief Field searchPosition, offset 0x164, size 0xc 
 __declspec(property(get=__cordl_internal_get_searchPosition, put=__cordl_internal_set_searchPosition)) ::UnityEngine::Vector3  searchPosition;

/// @brief Field senseLineOfSight, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseLineOfSight, put=__cordl_internal_set_senseLineOfSight)) ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight;

/// @brief Field senseNearby, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseNearby, put=__cordl_internal_set_senseNearby)) ::GlobalNamespace::GRSenseNearby*  senseNearby;

/// @brief Field soundAttack, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundAttack, put=__cordl_internal_set_soundAttack)) ::GlobalNamespace::AbilitySound*  soundAttack;

/// @brief Field soundWander, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundWander, put=__cordl_internal_set_soundWander)) ::GlobalNamespace::AbilitySound*  soundWander;

/// @brief Field summonLight, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_summonLight, put=__cordl_internal_set_summonLight)) ::UnityW<::GlobalNamespace::GameLight>  summonLight;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field tooFarDistanceThreshold, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_tooFarDistanceThreshold, put=__cordl_internal_set_tooFarDistanceThreshold)) float_t  tooFarDistanceThreshold;

/// @brief Field trackedEntities, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedEntities, put=__cordl_internal_set_trackedEntities)) ::System::Collections::Generic::List_1<int32_t>*  trackedEntities;

/// @brief Convert operator to "::GlobalNamespace::IGRSummoningEntity"
constexpr operator  ::GlobalNamespace::IGRSummoningEntity*() noexcept;

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

/// @brief Method AddTrackedEntity, addr 0x5899ccc, size 0x9c, virtual false, abstract: false, final false
inline void AddTrackedEntity(::GlobalNamespace::GameEntity*  entityToTrack) ;

/// @brief Method Awake, addr 0x5897620, size 0x2b0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanSummon, addr 0x5898c98, size 0xd0, virtual false, abstract: false, final false
inline bool CanSummon() ;

/// @brief Method ChooseNewBehavior, addr 0x5898a58, size 0x240, virtual false, abstract: false, final false
inline void ChooseNewBehavior() ;

/// @brief Method GetDebugTextLines, addr 0x58999d8, size 0x2f4, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method GetPlayerTransform, addr 0x58985ac, size 0xe0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetPlayerTransform(::GlobalNamespace::NetPlayer*  targetPlayer) ;

/// @brief Method InstantDeath, addr 0x58995dc, size 0x10, virtual false, abstract: false, final false
inline void InstantDeath() ;

/// @brief Method IsHitValid, addr 0x58990a0, size 0x8, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

static inline ::GlobalNamespace::GREnemySummoner* New_ctor() ;

/// @brief Method OnAgentJumpRequested, addr 0x5898530, size 0x30, virtual false, abstract: false, final false
inline void OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale) ;

/// @brief Method OnDestroy, addr 0x58984a0, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x5898498, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58978d0, size 0x60c, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x589849c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnEntityThink, addr 0x58986f8, size 0x360, virtual true, abstract: false, final true
inline void OnEntityThink(float_t  dt) ;

/// @brief Method OnGameEntityDeserialize, addr 0x5899014, size 0x8c, virtual true, abstract: false, final true
inline void OnGameEntityDeserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method OnGameEntitySerialize, addr 0x5898fb0, size 0x64, virtual true, abstract: false, final true
inline void OnGameEntitySerialize(::System::IO::BinaryWriter*  writer) ;

/// @brief Method OnHit, addr 0x58990a8, size 0x138, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByClub, addr 0x58991e0, size 0x154, virtual false, abstract: false, final false
inline void OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByFlash, addr 0x5899334, size 0x274, virtual false, abstract: false, final false
inline void OnHitByFlash(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByShield, addr 0x58995a8, size 0x34, virtual false, abstract: false, final false
inline void OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnNetworkBehaviorStateChange, addr 0x5898560, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBehaviorStateChange(uint8_t  newState) ;

/// @brief Method OnSummonedEntityDestroy, addr 0x5899e14, size 0x4, virtual true, abstract: false, final true
inline void OnSummonedEntityDestroy(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnSummonedEntityInit, addr 0x5899e10, size 0x4, virtual true, abstract: false, final true
inline void OnSummonedEntityInit(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnTriggerEnter, addr 0x58996c8, size 0x310, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnUpdate, addr 0x58986a8, size 0x50, virtual false, abstract: false, final false
inline void OnUpdate(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x5898d68, size 0x164, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x5898ecc, size 0xe4, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method RefreshBody, addr 0x58995ec, size 0xdc, virtual false, abstract: false, final false
inline void RefreshBody() ;

/// @brief Method RemoveTrackedEntity, addr 0x5899d68, size 0xa8, virtual false, abstract: false, final false
inline void RemoveTrackedEntity(::GlobalNamespace::GameEntity*  entityToRemove) ;

/// @brief Method SetBehavior, addr 0x5897edc, size 0x474, virtual false, abstract: false, final false
inline void SetBehavior(::GlobalNamespace::GREnemySummoner_Behavior  newBehavior, bool  force) ;

/// @brief Method SetBodyState, addr 0x5898350, size 0x148, virtual false, abstract: false, final false
inline void SetBodyState(::GlobalNamespace::GREnemySummoner_BodyState  newBodyState, bool  force) ;

/// @brief Method SetHP, addr 0x5898578, size 0x8, virtual false, abstract: false, final false
inline void SetHP(int32_t  hp) ;

/// @brief Method TrySetBehavior, addr 0x5898580, size 0x2c, virtual false, abstract: false, final false
inline bool TrySetBehavior(::GlobalNamespace::GREnemySummoner_Behavior  newBehavior) ;

/// @brief Method Update, addr 0x589868c, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::GRAbilityAttackJump* const& __cordl_internal_get_abilityAttack() const;

constexpr ::GlobalNamespace::GRAbilityAttackJump*& __cordl_internal_get_abilityAttack() ;

constexpr ::GlobalNamespace::GRAbilityDie* const& __cordl_internal_get_abilityDie() const;

constexpr ::GlobalNamespace::GRAbilityDie*& __cordl_internal_get_abilityDie() ;

constexpr ::GlobalNamespace::GRAbilityStagger* const& __cordl_internal_get_abilityFlashed() const;

constexpr ::GlobalNamespace::GRAbilityStagger*& __cordl_internal_get_abilityFlashed() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityIdle() ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_abilityInvestigate() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_abilityInvestigate() ;

constexpr ::GlobalNamespace::GRAbilityJump* const& __cordl_internal_get_abilityJump() const;

constexpr ::GlobalNamespace::GRAbilityJump*& __cordl_internal_get_abilityJump() ;

constexpr ::GlobalNamespace::GRAbilityKeepDistance* const& __cordl_internal_get_abilityKeepDistance() const;

constexpr ::GlobalNamespace::GRAbilityKeepDistance*& __cordl_internal_get_abilityKeepDistance() ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_abilityMoveToTarget() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_abilityMoveToTarget() ;

constexpr ::GlobalNamespace::GRAbilityStagger* const& __cordl_internal_get_abilityStagger() const;

constexpr ::GlobalNamespace::GRAbilityStagger*& __cordl_internal_get_abilityStagger() ;

constexpr ::GlobalNamespace::GRAbilitySummon* const& __cordl_internal_get_abilitySummon() const;

constexpr ::GlobalNamespace::GRAbilitySummon*& __cordl_internal_get_abilitySummon() ;

constexpr ::GlobalNamespace::GRAbilityWander* const& __cordl_internal_get_abilityWander() const;

constexpr ::GlobalNamespace::GRAbilityWander*& __cordl_internal_get_abilityWander() ;

constexpr ::UnityW<::GlobalNamespace::GameAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::GlobalNamespace::GameAgent>& __cordl_internal_get_agent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_always() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_always() ;

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

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_bones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_bones() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_bonesStateVisibleObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_bonesStateVisibleObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_coreMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_coreMarker() ;

constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& __cordl_internal_get_corePrefab() const;

constexpr ::UnityW<::GlobalNamespace::GRCollectible>& __cordl_internal_get_corePrefab() ;

constexpr ::GlobalNamespace::GREnemySummoner_Behavior const& __cordl_internal_get_currBehavior() const;

constexpr ::GlobalNamespace::GREnemySummoner_Behavior& __cordl_internal_get_currBehavior() ;

constexpr ::GlobalNamespace::GREnemySummoner_BodyState const& __cordl_internal_get_currBodyState() const;

constexpr ::GlobalNamespace::GREnemySummoner_BodyState& __cordl_internal_get_currBodyState() ;

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

constexpr float_t const& __cordl_internal_get_idleDuration() const;

constexpr float_t& __cordl_internal_get_idleDuration() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_investigateLocation() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_investigateLocation() ;

constexpr float_t const& __cordl_internal_get_keepDistanceThreshold() const;

constexpr float_t& __cordl_internal_get_keepDistanceThreshold() ;

constexpr double_t const& __cordl_internal_get_lastSummonTime() const;

constexpr double_t& __cordl_internal_get_lastSummonTime() ;

constexpr float_t const& __cordl_internal_get_lastUpdateTime() const;

constexpr float_t& __cordl_internal_get_lastUpdateTime() ;

constexpr int32_t const& __cordl_internal_get_maxSimultaneousSummonedEntities() const;

constexpr int32_t& __cordl_internal_get_maxSimultaneousSummonedEntities() ;

constexpr float_t const& __cordl_internal_get_minSummonInterval() const;

constexpr float_t& __cordl_internal_get_minSummonInterval() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navAgent() ;

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

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundAttack() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundAttack() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundWander() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundWander() ;

constexpr ::UnityW<::GlobalNamespace::GameLight> const& __cordl_internal_get_summonLight() const;

constexpr ::UnityW<::GlobalNamespace::GameLight>& __cordl_internal_get_summonLight() ;

constexpr float_t const& __cordl_internal_get_tooFarDistanceThreshold() const;

constexpr float_t& __cordl_internal_get_tooFarDistanceThreshold() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_trackedEntities() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_trackedEntities() ;

constexpr void __cordl_internal_set_abilityAttack(::GlobalNamespace::GRAbilityAttackJump*  value) ;

constexpr void __cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value) ;

constexpr void __cordl_internal_set_abilityFlashed(::GlobalNamespace::GRAbilityStagger*  value) ;

constexpr void __cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

constexpr void __cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value) ;

constexpr void __cordl_internal_set_abilityKeepDistance(::GlobalNamespace::GRAbilityKeepDistance*  value) ;

constexpr void __cordl_internal_set_abilityMoveToTarget(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

constexpr void __cordl_internal_set_abilityStagger(::GlobalNamespace::GRAbilityStagger*  value) ;

constexpr void __cordl_internal_set_abilitySummon(::GlobalNamespace::GRAbilitySummon*  value) ;

constexpr void __cordl_internal_set_abilityWander(::GlobalNamespace::GRAbilityWander*  value) ;

constexpr void __cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value) ;

constexpr void __cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_alwaysVisibleObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value) ;

constexpr void __cordl_internal_set_attackRange(float_t  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_behaviorEndTime(double_t  value) ;

constexpr void __cordl_internal_set_behaviorStartTime(double_t  value) ;

constexpr void __cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_bonesStateVisibleObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_coreMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_corePrefab(::UnityW<::GlobalNamespace::GRCollectible>  value) ;

constexpr void __cordl_internal_set_currBehavior(::GlobalNamespace::GREnemySummoner_Behavior  value) ;

constexpr void __cordl_internal_set_currBodyState(::GlobalNamespace::GREnemySummoner_BodyState  value) ;

constexpr void __cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hearingRadius(float_t  value) ;

constexpr void __cordl_internal_set_hp(int32_t  value) ;

constexpr void __cordl_internal_set_idleDuration(float_t  value) ;

constexpr void __cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_keepDistanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_lastSummonTime(double_t  value) ;

constexpr void __cordl_internal_set_lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set_maxSimultaneousSummonedEntities(int32_t  value) ;

constexpr void __cordl_internal_set_minSummonInterval(float_t  value) ;

constexpr void __cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rigsNearby(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_searchPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value) ;

constexpr void __cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value) ;

constexpr void __cordl_internal_set_soundAttack(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_soundWander(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_summonLight(::UnityW<::GlobalNamespace::GameLight>  value) ;

constexpr void __cordl_internal_set_tooFarDistanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_trackedEntities(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5899e18, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

/// @brief Convert to "::GlobalNamespace::IGRSummoningEntity"
constexpr ::GlobalNamespace::IGRSummoningEntity* i___GlobalNamespace__IGRSummoningEntity() noexcept;

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

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemySummoner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemySummoner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemySummoner(GREnemySummoner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemySummoner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemySummoner(GREnemySummoner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1968};

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

/// @brief Field abilityWander, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityWander*  ___abilityWander;

/// @brief Field abilityAttack, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityAttackJump*  ___abilityAttack;

/// @brief Field abilityStagger, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityStagger*  ___abilityStagger;

/// @brief Field abilityDie, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityDie*  ___abilityDie;

/// @brief Field abilitySummon, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilitySummon*  ___abilitySummon;

/// @brief Field abilityKeepDistance, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityKeepDistance*  ___abilityKeepDistance;

/// @brief Field abilityMoveToTarget, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___abilityMoveToTarget;

/// @brief Field abilityInvestigate, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___abilityInvestigate;

/// @brief Field abilityJump, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityJump*  ___abilityJump;

/// @brief Field abilityFlashed, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityStagger*  ___abilityFlashed;

/// @brief Field soundWander, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundWander;

/// @brief Field soundAttack, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundAttack;

/// @brief Field summonLight, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameLight>  ___summonLight;

/// @brief Field bones, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___bones;

/// @brief Field always, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___always;

/// @brief Field bonesStateVisibleObjects, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___bonesStateVisibleObjects;

/// @brief Field alwaysVisibleObjects, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___alwaysVisibleObjects;

/// @brief Field coreMarker, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___coreMarker;

/// @brief Field corePrefab, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRCollectible>  ___corePrefab;

/// @brief Field headTransform, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headTransform;

/// @brief Field attackRange, offset: 0x108, size: 0x4, def value: None
 float_t  ___attackRange;

/// @brief Field rigsNearby, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___rigsNearby;

/// @brief Field navAgent, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navAgent;

/// @brief Field audioSource, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field idleDuration, offset: 0x128, size: 0x4, def value: None
 float_t  ___idleDuration;

/// @brief Field keepDistanceThreshold, offset: 0x12c, size: 0x4, def value: None
 float_t  ___keepDistanceThreshold;

/// @brief Field tooFarDistanceThreshold, offset: 0x130, size: 0x4, def value: None
 float_t  ___tooFarDistanceThreshold;

/// @brief Field lastSummonTime, offset: 0x138, size: 0x8, def value: None
 double_t  ___lastSummonTime;

/// @brief Field minSummonInterval, offset: 0x140, size: 0x4, def value: None
 float_t  ___minSummonInterval;

/// @brief Field maxSimultaneousSummonedEntities, offset: 0x144, size: 0x4, def value: None
 int32_t  ___maxSimultaneousSummonedEntities;

/// @brief Field hearingRadius, offset: 0x148, size: 0x4, def value: None
 float_t  ___hearingRadius;

/// [ReadOnly]
/// @brief Field hp, offset: 0x14c, size: 0x4, def value: None
 int32_t  ___hp;

/// [ReadOnly]
/// @brief Field currBehavior, offset: 0x150, size: 0x4, def value: None
 ::GlobalNamespace::GREnemySummoner_Behavior  ___currBehavior;

/// [ReadOnly]
/// @brief Field behaviorEndTime, offset: 0x158, size: 0x8, def value: None
 double_t  ___behaviorEndTime;

/// [ReadOnly]
/// @brief Field currBodyState, offset: 0x160, size: 0x4, def value: None
 ::GlobalNamespace::GREnemySummoner_BodyState  ___currBodyState;

/// [ReadOnly]
/// @brief Field searchPosition, offset: 0x164, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___searchPosition;

/// [ReadOnly]
/// @brief Field behaviorStartTime, offset: 0x170, size: 0x8, def value: None
 double_t  ___behaviorStartTime;

/// @brief Field rigidBody, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field colliders, offset: 0x180, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field trackedEntities, offset: 0x188, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___trackedEntities;

/// @brief Field investigateLocation, offset: 0x190, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ___investigateLocation;

/// @brief Field lastUpdateTime, offset: 0x1a0, size: 0x4, def value: None
 float_t  ___lastUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___agent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___enemy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___armor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___attributes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___anim) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___senseNearby) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___senseLineOfSight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityIdle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityWander) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityAttack) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityStagger) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityDie) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilitySummon) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityKeepDistance) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityMoveToTarget) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityInvestigate) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityJump) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___abilityFlashed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___soundWander) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___soundAttack) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___summonLight) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___bones) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___always) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___bonesStateVisibleObjects) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___alwaysVisibleObjects) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___coreMarker) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___corePrefab) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___headTransform) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___attackRange) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___rigsNearby) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___navAgent) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___audioSource) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___idleDuration) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___keepDistanceThreshold) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___tooFarDistanceThreshold) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___lastSummonTime) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___minSummonInterval) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___maxSimultaneousSummonedEntities) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___hearingRadius) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___hp) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___currBehavior) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___behaviorEndTime) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___currBodyState) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___searchPosition) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___behaviorStartTime) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___rigidBody) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___colliders) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___trackedEntities) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___investigateLocation) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemySummoner, ___lastUpdateTime) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemySummoner) == 0x1a8, "Size mismatch!");

} // namespace end def GlobalNamespace
