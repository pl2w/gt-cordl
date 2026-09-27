#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoonEye.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonEye_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonEye_BodyState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyBossMoonEye)
namespace GlobalNamespace {
class GRAbilityAgent;
}
namespace GlobalNamespace {
class GRAbilityAttackLaser;
}
namespace GlobalNamespace {
class GRAbilityBase;
}
namespace GlobalNamespace {
class GRAbilityDie;
}
namespace GlobalNamespace {
class GRAbilityIdle;
}
namespace GlobalNamespace {
class GRArmorEnemy;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
struct GREnemyBossMoonEye_Behavior;
}
namespace GlobalNamespace {
struct GREnemyBossMoonEye_BodyState;
}
namespace GlobalNamespace {
class GREnemyBossMoonEye__TryHitPlayer_d__71;
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
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GREnemyBossMoonEye;
}
namespace GlobalNamespace {
class GREnemyBossMoonEye__TryHitPlayer_d__71;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemyBossMoonEye*);
MARK_REF_T(::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoonEye*, "", "GREnemyBossMoonEye");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*, "", "GREnemyBossMoonEye/<TryHitPlayer>d__71");
// Dependencies GRAbilityBase, GREnemyBossMoonEye::Behavior, GREnemyBossMoonEye::BodyState, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyBossMoonEye
class CORDL_TYPE GREnemyBossMoonEye : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Behavior = ::GlobalNamespace::GREnemyBossMoonEye_Behavior;

using BodyState = ::GlobalNamespace::GREnemyBossMoonEye_BodyState;

using _TryHitPlayer_d__71 = ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71;

/// @brief Field abilities, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilities, put=__cordl_internal_set_abilities)) ::ArrayW<::GlobalNamespace::GRAbilityBase*>  abilities;

/// @brief Field abilityAgent, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAgent, put=__cordl_internal_set_abilityAgent)) ::GlobalNamespace::GRAbilityAgent*  abilityAgent;

/// @brief Field abilityAttackLaser, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackLaser, put=__cordl_internal_set_abilityAttackLaser)) ::GlobalNamespace::GRAbilityAttackLaser*  abilityAttackLaser;

/// @brief Field abilityClosed, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityClosed, put=__cordl_internal_set_abilityClosed)) ::GlobalNamespace::GRAbilityIdle*  abilityClosed;

/// @brief Field abilityDie, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityDie, put=__cordl_internal_set_abilityDie)) ::GlobalNamespace::GRAbilityDie*  abilityDie;

/// @brief Field abilityGravityEnd, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityGravityEnd, put=__cordl_internal_set_abilityGravityEnd)) ::GlobalNamespace::GRAbilityIdle*  abilityGravityEnd;

/// @brief Field abilityGravityIdle, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityGravityIdle, put=__cordl_internal_set_abilityGravityIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityGravityIdle;

/// @brief Field abilityGravityStart, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityGravityStart, put=__cordl_internal_set_abilityGravityStart)) ::GlobalNamespace::GRAbilityIdle*  abilityGravityStart;

/// @brief Field abilityIdle, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityIdle, put=__cordl_internal_set_abilityIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityIdle;

/// @brief Field agent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::GlobalNamespace::GameAgent>  agent;

/// @brief Field allowLaserAttack, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowLaserAttack, put=__cordl_internal_set_allowLaserAttack)) bool  allowLaserAttack;

/// @brief Field anim, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field armor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_armor, put=__cordl_internal_set_armor)) ::UnityW<::GlobalNamespace::GRArmorEnemy>  armor;

/// @brief Field attributes, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field canChaseJump, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get_canChaseJump, put=__cordl_internal_set_canChaseJump)) bool  canChaseJump;

/// @brief Field chaseJumpDistance, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseJumpDistance, put=__cordl_internal_set_chaseJumpDistance)) float_t  chaseJumpDistance;

/// @brief Field chaseJumpMinInterval, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseJumpMinInterval, put=__cordl_internal_set_chaseJumpMinInterval)) float_t  chaseJumpMinInterval;

/// @brief Field colliders, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field counterAttackWindow, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_counterAttackWindow, put=__cordl_internal_set_counterAttackWindow)) float_t  counterAttackWindow;

/// @brief Field currAbility, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_currAbility, put=__cordl_internal_set_currAbility)) ::GlobalNamespace::GRAbilityBase*  currAbility;

/// @brief Field currBehavior, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBehavior, put=__cordl_internal_set_currBehavior)) ::GlobalNamespace::GREnemyBossMoonEye_Behavior  currBehavior;

/// @brief Field currBodyState, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBodyState, put=__cordl_internal_set_currBodyState)) ::GlobalNamespace::GREnemyBossMoonEye_BodyState  currBodyState;

/// @brief Field enemy, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemy, put=__cordl_internal_set_enemy)) ::UnityW<::GlobalNamespace::GREnemy>  enemy;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field headTransform, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_headTransform, put=__cordl_internal_set_headTransform)) ::UnityW<::UnityEngine::Transform>  headTransform;

/// @brief Field hearingRadius, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_hearingRadius, put=__cordl_internal_set_hearingRadius)) float_t  hearingRadius;

/// @brief Field hittable, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hittable, put=__cordl_internal_set_hittable)) ::UnityW<::GlobalNamespace::GameHittable>  hittable;

/// @brief Field hp, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_hp, put=__cordl_internal_set_hp)) int32_t  hp;

/// @brief Field lastHitPlayerTime, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHitPlayerTime, put=__cordl_internal_set_lastHitPlayerTime)) float_t  lastHitPlayerTime;

/// @brief Field lastHitTime, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastHitTime, put=__cordl_internal_set_lastHitTime)) double_t  lastHitTime;

/// @brief Field lastSeenTargetPosition, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetPosition, put=__cordl_internal_set_lastSeenTargetPosition)) ::UnityEngine::Vector3  lastSeenTargetPosition;

/// @brief Field lastSeenTargetTime, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetTime, put=__cordl_internal_set_lastSeenTargetTime)) double_t  lastSeenTargetTime;

/// @brief Field maxSimultaneousSummonedEntities, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSimultaneousSummonedEntities, put=__cordl_internal_set_maxSimultaneousSummonedEntities)) int32_t  maxSimultaneousSummonedEntities;

/// @brief Field minChaseJumpDistance, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minChaseJumpDistance, put=__cordl_internal_set_minChaseJumpDistance)) float_t  minChaseJumpDistance;

/// @brief Field minTimeBetweenHits, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTimeBetweenHits, put=__cordl_internal_set_minTimeBetweenHits)) float_t  minTimeBetweenHits;

/// @brief Field navAgent, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_navAgent, put=__cordl_internal_set_navAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navAgent;

/// @brief Field senseLineOfSight, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseLineOfSight, put=__cordl_internal_set_senseLineOfSight)) ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight;

/// @brief Field senseNearby, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseNearby, put=__cordl_internal_set_senseNearby)) ::GlobalNamespace::GRSenseNearby*  senseNearby;

/// @brief Field target, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetPlayer, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Field tempPotentialAttacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempPotentialAttacks, put=setStaticF_tempPotentialAttacks)) ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoonEye_Behavior>*  tempPotentialAttacks;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field tryHitPlayerCoroutine, offset 0x140, size 0x8 
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

/// @brief Method Awake, addr 0x588600c, size 0x1c8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcMaxHP, addr 0x5886740, size 0x70, virtual false, abstract: false, final false
inline int32_t CalcMaxHP() ;

/// @brief Method ChooseNewBehavior, addr 0x588701c, size 0x80, virtual false, abstract: false, final false
inline void ChooseNewBehavior() ;

/// @brief Method GetDebugTextLines, addr 0x5887974, size 0x18c, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method InstantKill, addr 0x58821e0, size 0x5c, virtual false, abstract: false, final false
inline void InstantKill() ;

/// @brief Method IsHitValid, addr 0x5887c84, size 0x8, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

static inline ::GlobalNamespace::GREnemyBossMoonEye* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5886c28, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x5886c20, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x58861d4, size 0x49c, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5886c24, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnEntityThink, addr 0x5886d54, size 0x2c8, virtual true, abstract: false, final true
inline void OnEntityThink(float_t  dt) ;

/// @brief Method OnGameEntityDeserialize, addr 0x5887b90, size 0xf4, virtual true, abstract: false, final true
inline void OnGameEntityDeserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method OnGameEntitySerialize, addr 0x5887b00, size 0x90, virtual true, abstract: false, final true
inline void OnGameEntitySerialize(::System::IO::BinaryWriter*  writer) ;

/// @brief Method OnHit, addr 0x5887c8c, size 0x108, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByClub, addr 0x5887418, size 0xb8, virtual false, abstract: false, final false
inline void OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByShield, addr 0x58874d0, size 0x34, virtual false, abstract: false, final false
inline void OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnNetworkBehaviorStateChange, addr 0x5886cb8, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBehaviorStateChange(uint8_t  newState) ;

/// @brief Method OnTriggerEnter, addr 0x5887504, size 0x3c0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnUpdate, addr 0x5886cf0, size 0x64, virtual false, abstract: false, final false
inline void OnUpdate(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x58873ac, size 0x58, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x5887404, size 0x14, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method RefreshBody, addr 0x5886cd0, size 0x4, virtual false, abstract: false, final false
inline void RefreshBody() ;

/// @brief Method ResetEye, addr 0x5881338, size 0x3c, virtual false, abstract: false, final false
inline void ResetEye() ;

/// @brief Method SetBehavior, addr 0x5886848, size 0x3d8, virtual false, abstract: false, final false
inline void SetBehavior(::GlobalNamespace::GREnemyBossMoonEye_Behavior  newBehavior, bool  force) ;

/// @brief Method SetHP, addr 0x58867b0, size 0x98, virtual false, abstract: false, final false
inline void SetHP(int32_t  hp) ;

/// @brief Method Setup, addr 0x5886734, size 0xc, virtual false, abstract: false, final false
inline void Setup(int64_t  entityCreateData) ;

/// @brief Method SetupAbility, addr 0x5886670, size 0xc4, virtual false, abstract: false, final false
inline void SetupAbility(::GlobalNamespace::GREnemyBossMoonEye_Behavior  behavior, ::GlobalNamespace::GRAbilityBase*  ability, ::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

/// @brief Method TryChooseAttackBehavior, addr 0x588709c, size 0x310, virtual false, abstract: false, final false
inline bool TryChooseAttackBehavior() ;

/// [IteratorStateMachine(typeof(GREnemyBossMoonEye::<TryHitPlayer>d__71))]
/// @brief Method TryHitPlayer, addr 0x58878c4, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TryHitPlayer(::GlobalNamespace::GRPlayer*  player) ;

/// @brief Method TrySetBehavior, addr 0x58819ac, size 0x18, virtual false, abstract: false, final false
inline bool TrySetBehavior(::GlobalNamespace::GREnemyBossMoonEye_Behavior  newBehavior) ;

/// @brief Method Update, addr 0x5886cd4, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::GlobalNamespace::GRAbilityBase*> const& __cordl_internal_get_abilities() const;

constexpr ::ArrayW<::GlobalNamespace::GRAbilityBase*>& __cordl_internal_get_abilities() ;

constexpr ::GlobalNamespace::GRAbilityAgent* const& __cordl_internal_get_abilityAgent() const;

constexpr ::GlobalNamespace::GRAbilityAgent*& __cordl_internal_get_abilityAgent() ;

constexpr ::GlobalNamespace::GRAbilityAttackLaser* const& __cordl_internal_get_abilityAttackLaser() const;

constexpr ::GlobalNamespace::GRAbilityAttackLaser*& __cordl_internal_get_abilityAttackLaser() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityClosed() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityClosed() ;

constexpr ::GlobalNamespace::GRAbilityDie* const& __cordl_internal_get_abilityDie() const;

constexpr ::GlobalNamespace::GRAbilityDie*& __cordl_internal_get_abilityDie() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityGravityEnd() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityGravityEnd() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityGravityIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityGravityIdle() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityGravityStart() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityGravityStart() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityIdle() ;

constexpr ::UnityW<::GlobalNamespace::GameAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::GlobalNamespace::GameAgent>& __cordl_internal_get_agent() ;

constexpr bool const& __cordl_internal_get_allowLaserAttack() const;

constexpr bool& __cordl_internal_get_allowLaserAttack() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& __cordl_internal_get_armor() const;

constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& __cordl_internal_get_armor() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_canChaseJump() const;

constexpr bool& __cordl_internal_get_canChaseJump() ;

constexpr float_t const& __cordl_internal_get_chaseJumpDistance() const;

constexpr float_t& __cordl_internal_get_chaseJumpDistance() ;

constexpr float_t const& __cordl_internal_get_chaseJumpMinInterval() const;

constexpr float_t& __cordl_internal_get_chaseJumpMinInterval() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr float_t const& __cordl_internal_get_counterAttackWindow() const;

constexpr float_t& __cordl_internal_get_counterAttackWindow() ;

constexpr ::GlobalNamespace::GRAbilityBase* const& __cordl_internal_get_currAbility() const;

constexpr ::GlobalNamespace::GRAbilityBase*& __cordl_internal_get_currAbility() ;

constexpr ::GlobalNamespace::GREnemyBossMoonEye_Behavior const& __cordl_internal_get_currBehavior() const;

constexpr ::GlobalNamespace::GREnemyBossMoonEye_Behavior& __cordl_internal_get_currBehavior() ;

constexpr ::GlobalNamespace::GREnemyBossMoonEye_BodyState const& __cordl_internal_get_currBodyState() const;

constexpr ::GlobalNamespace::GREnemyBossMoonEye_BodyState& __cordl_internal_get_currBodyState() ;

constexpr ::UnityW<::GlobalNamespace::GREnemy> const& __cordl_internal_get_enemy() const;

constexpr ::UnityW<::GlobalNamespace::GREnemy>& __cordl_internal_get_enemy() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTransform() ;

constexpr float_t const& __cordl_internal_get_hearingRadius() const;

constexpr float_t& __cordl_internal_get_hearingRadius() ;

constexpr ::UnityW<::GlobalNamespace::GameHittable> const& __cordl_internal_get_hittable() const;

constexpr ::UnityW<::GlobalNamespace::GameHittable>& __cordl_internal_get_hittable() ;

constexpr int32_t const& __cordl_internal_get_hp() const;

constexpr int32_t& __cordl_internal_get_hp() ;

constexpr float_t const& __cordl_internal_get_lastHitPlayerTime() const;

constexpr float_t& __cordl_internal_get_lastHitPlayerTime() ;

constexpr double_t const& __cordl_internal_get_lastHitTime() const;

constexpr double_t& __cordl_internal_get_lastHitTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastSeenTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastSeenTargetPosition() ;

constexpr double_t const& __cordl_internal_get_lastSeenTargetTime() const;

constexpr double_t& __cordl_internal_get_lastSeenTargetTime() ;

constexpr int32_t const& __cordl_internal_get_maxSimultaneousSummonedEntities() const;

constexpr int32_t& __cordl_internal_get_maxSimultaneousSummonedEntities() ;

constexpr float_t const& __cordl_internal_get_minChaseJumpDistance() const;

constexpr float_t& __cordl_internal_get_minChaseJumpDistance() ;

constexpr float_t const& __cordl_internal_get_minTimeBetweenHits() const;

constexpr float_t& __cordl_internal_get_minTimeBetweenHits() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navAgent() ;

constexpr ::GlobalNamespace::GRSenseLineOfSight* const& __cordl_internal_get_senseLineOfSight() const;

constexpr ::GlobalNamespace::GRSenseLineOfSight*& __cordl_internal_get_senseLineOfSight() ;

constexpr ::GlobalNamespace::GRSenseNearby* const& __cordl_internal_get_senseNearby() const;

constexpr ::GlobalNamespace::GRSenseNearby*& __cordl_internal_get_senseNearby() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_tryHitPlayerCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_tryHitPlayerCoroutine() ;

constexpr void __cordl_internal_set_abilities(::ArrayW<::GlobalNamespace::GRAbilityBase*>  value) ;

constexpr void __cordl_internal_set_abilityAgent(::GlobalNamespace::GRAbilityAgent*  value) ;

constexpr void __cordl_internal_set_abilityAttackLaser(::GlobalNamespace::GRAbilityAttackLaser*  value) ;

constexpr void __cordl_internal_set_abilityClosed(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value) ;

constexpr void __cordl_internal_set_abilityGravityEnd(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityGravityIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityGravityStart(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value) ;

constexpr void __cordl_internal_set_allowLaserAttack(bool  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_canChaseJump(bool  value) ;

constexpr void __cordl_internal_set_chaseJumpDistance(float_t  value) ;

constexpr void __cordl_internal_set_chaseJumpMinInterval(float_t  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_counterAttackWindow(float_t  value) ;

constexpr void __cordl_internal_set_currAbility(::GlobalNamespace::GRAbilityBase*  value) ;

constexpr void __cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyBossMoonEye_Behavior  value) ;

constexpr void __cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyBossMoonEye_BodyState  value) ;

constexpr void __cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hearingRadius(float_t  value) ;

constexpr void __cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value) ;

constexpr void __cordl_internal_set_hp(int32_t  value) ;

constexpr void __cordl_internal_set_lastHitPlayerTime(float_t  value) ;

constexpr void __cordl_internal_set_lastHitTime(double_t  value) ;

constexpr void __cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastSeenTargetTime(double_t  value) ;

constexpr void __cordl_internal_set_maxSimultaneousSummonedEntities(int32_t  value) ;

constexpr void __cordl_internal_set_minChaseJumpDistance(float_t  value) ;

constexpr void __cordl_internal_set_minTimeBetweenHits(float_t  value) ;

constexpr void __cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value) ;

constexpr void __cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_tryHitPlayerCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x5887d94, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoonEye_Behavior>* getStaticF_tempPotentialAttacks() ;

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

static inline void setStaticF_tempPotentialAttacks(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoonEye_Behavior>*  value) ;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyBossMoonEye() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoonEye", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyBossMoonEye(GREnemyBossMoonEye && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoonEye", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyBossMoonEye(GREnemyBossMoonEye const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1946};

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

/// @brief Field abilities, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GRAbilityBase*>  ___abilities;

/// @brief Field currAbility, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityBase*  ___currAbility;

/// @brief Field abilityAgent, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityAgent*  ___abilityAgent;

/// @brief Field abilityIdle, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityIdle;

/// @brief Field abilityClosed, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityClosed;

/// @brief Field abilityAttackLaser, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityAttackLaser*  ___abilityAttackLaser;

/// @brief Field abilityDie, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityDie*  ___abilityDie;

/// @brief Field abilityGravityStart, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityGravityStart;

/// @brief Field abilityGravityEnd, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityGravityEnd;

/// @brief Field abilityGravityIdle, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityGravityIdle;

/// @brief Field headTransform, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headTransform;

/// @brief Field navAgent, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navAgent;

/// @brief Field audioSource, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field counterAttackWindow, offset: 0xd0, size: 0x4, def value: None
 float_t  ___counterAttackWindow;

/// @brief Field target, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [ReadOnly]
/// @brief Field hp, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___hp;

/// [ReadOnly]
/// @brief Field currBehavior, offset: 0xe4, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyBossMoonEye_Behavior  ___currBehavior;

/// [ReadOnly]
/// @brief Field currBodyState, offset: 0xe8, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyBossMoonEye_BodyState  ___currBodyState;

/// [ReadOnly]
/// @brief Field targetPlayer, offset: 0xf0, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// [ReadOnly]
/// @brief Field lastSeenTargetPosition, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastSeenTargetPosition;

/// [ReadOnly]
/// @brief Field lastSeenTargetTime, offset: 0x108, size: 0x8, def value: None
 double_t  ___lastSeenTargetTime;

/// @brief Field allowLaserAttack, offset: 0x110, size: 0x1, def value: None
 bool  ___allowLaserAttack;

/// @brief Field canChaseJump, offset: 0x111, size: 0x1, def value: None
 bool  ___canChaseJump;

/// @brief Field chaseJumpDistance, offset: 0x114, size: 0x4, def value: None
 float_t  ___chaseJumpDistance;

/// @brief Field chaseJumpMinInterval, offset: 0x118, size: 0x4, def value: None
 float_t  ___chaseJumpMinInterval;

/// @brief Field minChaseJumpDistance, offset: 0x11c, size: 0x4, def value: None
 float_t  ___minChaseJumpDistance;

/// @brief Field lastHitTime, offset: 0x120, size: 0x8, def value: None
 double_t  ___lastHitTime;

/// @brief Field colliders, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field lastHitPlayerTime, offset: 0x130, size: 0x4, def value: None
 float_t  ___lastHitPlayerTime;

/// @brief Field minTimeBetweenHits, offset: 0x134, size: 0x4, def value: None
 float_t  ___minTimeBetweenHits;

/// @brief Field hearingRadius, offset: 0x138, size: 0x4, def value: None
 float_t  ___hearingRadius;

/// @brief Field maxSimultaneousSummonedEntities, offset: 0x13c, size: 0x4, def value: None
 int32_t  ___maxSimultaneousSummonedEntities;

/// @brief Field tryHitPlayerCoroutine, offset: 0x140, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___tryHitPlayerCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___agent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___enemy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___armor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___hittable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___attributes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___senseNearby) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___senseLineOfSight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___anim) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___abilities) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___currAbility) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___abilityAgent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___abilityIdle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___abilityClosed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___abilityAttackLaser) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___abilityDie) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___abilityGravityStart) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___abilityGravityEnd) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___abilityGravityIdle) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___headTransform) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___navAgent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___audioSource) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___counterAttackWindow) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___target) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___hp) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___currBehavior) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___currBodyState) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___targetPlayer) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___lastSeenTargetPosition) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___lastSeenTargetTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___allowLaserAttack) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___canChaseJump) == 0x111, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___chaseJumpDistance) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___chaseJumpMinInterval) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___minChaseJumpDistance) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___lastHitTime) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___colliders) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___lastHitPlayerTime) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___minTimeBetweenHits) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___hearingRadius) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___maxSimultaneousSummonedEntities) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye, ___tryHitPlayerCoroutine) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoonEye) == 0x148, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyBossMoonEye/<TryHitPlayer>d__71
class CORDL_TYPE GREnemyBossMoonEye__TryHitPlayer_d__71 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GREnemyBossMoonEye>  __4__this;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::GlobalNamespace::GRPlayer>  player;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5887ed4, size 0x23c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5888110, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5888118, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5888150, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5887ed0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoonEye> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoonEye>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyBossMoonEye>  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x588794c, size 0x28, virtual false, abstract: false, final false
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
constexpr GREnemyBossMoonEye__TryHitPlayer_d__71() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoonEye__TryHitPlayer_d__71", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyBossMoonEye__TryHitPlayer_d__71(GREnemyBossMoonEye__TryHitPlayer_d__71 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoonEye__TryHitPlayer_d__71", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyBossMoonEye__TryHitPlayer_d__71(GREnemyBossMoonEye__TryHitPlayer_d__71 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1945};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ___player;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemyBossMoonEye>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
