#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_BodyState_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyBossMoon)
namespace GlobalNamespace {
class CameraShakeDispatcher;
}
namespace GlobalNamespace {
class GRAbilityAgent;
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
class GRAbilitySummon;
}
namespace GlobalNamespace {
class GRAdaptiveMusicController;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
class GRBossMoonTentacleAttack;
}
namespace GlobalNamespace {
class GRBreakableItemSpawnConfig;
}
namespace GlobalNamespace {
class GREnemyBossMoonColliderHelper;
}
namespace GlobalNamespace {
class GREnemyBossMoonEye;
}
namespace GlobalNamespace {
struct GREnemyBossMoon_Behavior;
}
namespace GlobalNamespace {
struct GREnemyBossMoon_BodyState;
}
namespace GlobalNamespace {
class GREnemyBossMoon_LootPhase;
}
namespace GlobalNamespace {
class GREnemyBossMoon_PhaseDef;
}
namespace GlobalNamespace {
class GREnemyBossMoon__TryHitPlayer_d__166;
}
namespace GlobalNamespace {
class GREnemyBossMoon__TryShockPlayer_d__169;
}
namespace GlobalNamespace {
struct GREnemyBossMoon___GroundSlam_d__173;
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
struct GameEntityId;
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
namespace GorillaTagScripts::GhostReactor {
struct GREnemyType;
}
namespace GorillaTagScripts::GhostReactor {
class GRSpherePushVolume;
}
namespace GorillaTagScripts::GhostReactor {
class GRSquishVolume;
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
class GREnemyBossMoon;
}
namespace GlobalNamespace {
class GREnemyBossMoon_LootPhase;
}
namespace GlobalNamespace {
class GREnemyBossMoon_PhaseDef;
}
namespace GlobalNamespace {
class GREnemyBossMoon__TryHitPlayer_d__166;
}
namespace GlobalNamespace {
class GREnemyBossMoon__TryShockPlayer_d__169;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemyBossMoon*);
MARK_REF_T(::GlobalNamespace::GREnemyBossMoon_LootPhase*);
MARK_REF_T(::GlobalNamespace::GREnemyBossMoon_PhaseDef*);
MARK_REF_T(::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*);
MARK_REF_T(::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoon*, "", "GREnemyBossMoon");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoon_LootPhase*, "", "GREnemyBossMoon/LootPhase");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoon_PhaseDef*, "", "GREnemyBossMoon/PhaseDef");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*, "", "GREnemyBossMoon/<TryHitPlayer>d__166");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*, "", "GREnemyBossMoon/<TryShockPlayer>d__169");
// Dependencies GRAbilityBase, GREnemyBossMoon::Behavior, GREnemyBossMoon::BodyState, UnityEngine.GameObject, UnityEngine.Material, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyBossMoon
class CORDL_TYPE GREnemyBossMoon : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Behavior = ::GlobalNamespace::GREnemyBossMoon_Behavior;

using BodyState = ::GlobalNamespace::GREnemyBossMoon_BodyState;

using LootPhase = ::GlobalNamespace::GREnemyBossMoon_LootPhase;

using PhaseDef = ::GlobalNamespace::GREnemyBossMoon_PhaseDef;

using _TryHitPlayer_d__166 = ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166;

using _TryShockPlayer_d__169 = ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169;

using __GroundSlam_d__173 = ::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173;

 __declspec(property(get=get_BossHasRevealed, put=set_BossHasRevealed)) bool  BossHasRevealed;

 __declspec(property(get=get_CurrAbility)) ::GlobalNamespace::GRAbilityBase*  CurrAbility;

/// @brief Field <BossHasRevealed>k__BackingField, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get__BossHasRevealed_k__BackingField, put=__cordl_internal_set__BossHasRevealed_k__BackingField)) bool  _BossHasRevealed_k__BackingField;

/// @brief Field abilities, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilities, put=__cordl_internal_set_abilities)) ::ArrayW<::GlobalNamespace::GRAbilityBase*>  abilities;

/// @brief Field abilityAgent, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAgent, put=__cordl_internal_set_abilityAgent)) ::GlobalNamespace::GRAbilityAgent*  abilityAgent;

/// @brief Field abilityAttackQuickTentacle00, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackQuickTentacle00, put=__cordl_internal_set_abilityAttackQuickTentacle00)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackQuickTentacle00;

/// @brief Field abilityAttackQuickTentacle01, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackQuickTentacle01, put=__cordl_internal_set_abilityAttackQuickTentacle01)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackQuickTentacle01;

/// @brief Field abilityAttackQuickTentacle02, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackQuickTentacle02, put=__cordl_internal_set_abilityAttackQuickTentacle02)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackQuickTentacle02;

/// @brief Field abilityAttackQuickTentacle03, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackQuickTentacle03, put=__cordl_internal_set_abilityAttackQuickTentacle03)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackQuickTentacle03;

/// @brief Field abilityAttackTentacle00, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackTentacle00, put=__cordl_internal_set_abilityAttackTentacle00)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackTentacle00;

/// @brief Field abilityAttackTentacle01, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackTentacle01, put=__cordl_internal_set_abilityAttackTentacle01)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackTentacle01;

/// @brief Field abilityAttackTentacle02, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackTentacle02, put=__cordl_internal_set_abilityAttackTentacle02)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackTentacle02;

/// @brief Field abilityAttackTentacle03, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackTentacle03, put=__cordl_internal_set_abilityAttackTentacle03)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackTentacle03;

/// @brief Field abilityAttackTentacle04, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackTentacle04, put=__cordl_internal_set_abilityAttackTentacle04)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackTentacle04;

/// @brief Field abilityAttackTentacle05, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackTentacle05, put=__cordl_internal_set_abilityAttackTentacle05)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackTentacle05;

/// @brief Field abilityAttackTongue01, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackTongue01, put=__cordl_internal_set_abilityAttackTongue01)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackTongue01;

/// @brief Field abilityAttackTongueSwipe01, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttackTongueSwipe01, put=__cordl_internal_set_abilityAttackTongueSwipe01)) ::GlobalNamespace::GRBossMoonTentacleAttack*  abilityAttackTongueSwipe01;

/// @brief Field abilityDie, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityDie, put=__cordl_internal_set_abilityDie)) ::GlobalNamespace::GRAbilityDie*  abilityDie;

/// @brief Field abilityDieIdle, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityDieIdle, put=__cordl_internal_set_abilityDieIdle)) ::GlobalNamespace::GRAbilityDie*  abilityDieIdle;

/// @brief Field abilityExposed, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityExposed, put=__cordl_internal_set_abilityExposed)) ::GlobalNamespace::GRAbilityIdle*  abilityExposed;

/// @brief Field abilityExposedIdle, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityExposedIdle, put=__cordl_internal_set_abilityExposedIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityExposedIdle;

/// @brief Field abilityHiddenIdle, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityHiddenIdle, put=__cordl_internal_set_abilityHiddenIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityHiddenIdle;

/// @brief Field abilityIdle, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityIdle, put=__cordl_internal_set_abilityIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityIdle;

/// @brief Field abilityNextPhase, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityNextPhase, put=__cordl_internal_set_abilityNextPhase)) ::GlobalNamespace::GRAbilityIdle*  abilityNextPhase;

/// @brief Field abilityRetreatEnd, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityRetreatEnd, put=__cordl_internal_set_abilityRetreatEnd)) ::GlobalNamespace::GRAbilityIdle*  abilityRetreatEnd;

/// @brief Field abilityRetreatIdle, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityRetreatIdle, put=__cordl_internal_set_abilityRetreatIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityRetreatIdle;

/// @brief Field abilityRetreatStart, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityRetreatStart, put=__cordl_internal_set_abilityRetreatStart)) ::GlobalNamespace::GRAbilityIdle*  abilityRetreatStart;

/// @brief Field abilityReveal, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityReveal, put=__cordl_internal_set_abilityReveal)) ::GlobalNamespace::GRAbilityIdle*  abilityReveal;

/// @brief Field abilityRunaway, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityRunaway, put=__cordl_internal_set_abilityRunaway)) ::GlobalNamespace::GRAbilityDie*  abilityRunaway;

/// @brief Field abilitySummon01, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilitySummon01, put=__cordl_internal_set_abilitySummon01)) ::GlobalNamespace::GRAbilitySummon*  abilitySummon01;

/// @brief Field abilitySummon02, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilitySummon02, put=__cordl_internal_set_abilitySummon02)) ::GlobalNamespace::GRAbilitySummon*  abilitySummon02;

/// @brief Field abilitySummon03, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilitySummon03, put=__cordl_internal_set_abilitySummon03)) ::GlobalNamespace::GRAbilitySummon*  abilitySummon03;

/// @brief Field abilitySummon04, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilitySummon04, put=__cordl_internal_set_abilitySummon04)) ::GlobalNamespace::GRAbilitySummon*  abilitySummon04;

/// @brief Field abilitySummonEnd, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilitySummonEnd, put=__cordl_internal_set_abilitySummonEnd)) ::GlobalNamespace::GRAbilityIdle*  abilitySummonEnd;

/// @brief Field abilitySummonStart, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilitySummonStart, put=__cordl_internal_set_abilitySummonStart)) ::GlobalNamespace::GRAbilityIdle*  abilitySummonStart;

/// @brief Field adaptiveMusicController, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_adaptiveMusicController, put=__cordl_internal_set_adaptiveMusicController)) ::UnityW<::GlobalNamespace::GRAdaptiveMusicController>  adaptiveMusicController;

/// @brief Field agent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::GlobalNamespace::GameAgent>  agent;

/// @brief Field always, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_always, put=__cordl_internal_set_always)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  always;

/// @brief Field anim, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field attacksAfterSummon, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_attacksAfterSummon, put=__cordl_internal_set_attacksAfterSummon)) int32_t  attacksAfterSummon;

/// @brief Field attributes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bodyRenderer, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyRenderer, put=__cordl_internal_set_bodyRenderer)) ::UnityW<::UnityEngine::Renderer>  bodyRenderer;

/// @brief Field bones, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bones, put=__cordl_internal_set_bones)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  bones;

/// @brief Field cameraShaker, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraShaker, put=__cordl_internal_set_cameraShaker)) ::UnityW<::GlobalNamespace::CameraShakeDispatcher>  cameraShaker;

/// @brief Field canChaseJump, offset 0x278, size 0x1 
 __declspec(property(get=__cordl_internal_get_canChaseJump, put=__cordl_internal_set_canChaseJump)) bool  canChaseJump;

/// @brief Field chaseJumpDistance, offset 0x27c, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseJumpDistance, put=__cordl_internal_set_chaseJumpDistance)) float_t  chaseJumpDistance;

/// @brief Field chaseJumpMinInterval, offset 0x280, size 0x4 
 __declspec(property(get=__cordl_internal_get_chaseJumpMinInterval, put=__cordl_internal_set_chaseJumpMinInterval)) float_t  chaseJumpMinInterval;

/// @brief Field colliders, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field consecutiveCombos, offset 0x264, size 0x4 
 __declspec(property(get=__cordl_internal_get_consecutiveCombos, put=__cordl_internal_set_consecutiveCombos)) int32_t  consecutiveCombos;

/// @brief Field currAbility, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_currAbility, put=__cordl_internal_set_currAbility)) ::GlobalNamespace::GRAbilityBase*  currAbility;

/// @brief Field currBehavior, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBehavior, put=__cordl_internal_set_currBehavior)) ::GlobalNamespace::GREnemyBossMoon_Behavior  currBehavior;

/// @brief Field currBodyState, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBodyState, put=__cordl_internal_set_currBodyState)) ::GlobalNamespace::GREnemyBossMoon_BodyState  currBodyState;

/// @brief Field currSummon, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_currSummon, put=__cordl_internal_set_currSummon)) ::GlobalNamespace::GRAbilitySummon*  currSummon;

/// @brief Field currentGravActivator, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGravActivator, put=__cordl_internal_set_currentGravActivator)) ::UnityW<::UnityEngine::GameObject>  currentGravActivator;

/// @brief Field damagedSound, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_damagedSound, put=__cordl_internal_set_damagedSound)) ::UnityW<::UnityEngine::AudioClip>  damagedSound;

/// @brief Field damagedSoundIndex, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_damagedSoundIndex, put=__cordl_internal_set_damagedSoundIndex)) int32_t  damagedSoundIndex;

/// @brief Field damagedSoundVolume, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_damagedSoundVolume, put=__cordl_internal_set_damagedSoundVolume)) float_t  damagedSoundVolume;

/// @brief Field damagedSounds, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_damagedSounds, put=__cordl_internal_set_damagedSounds)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  damagedSounds;

/// @brief Field defaultBodyMaterials, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultBodyMaterials, put=__cordl_internal_set_defaultBodyMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  defaultBodyMaterials;

/// @brief Field enemy, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemy, put=__cordl_internal_set_enemy)) ::UnityW<::GlobalNamespace::GREnemy>  enemy;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field eyes, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyes, put=__cordl_internal_set_eyes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonEye>>*  eyes;

/// @brief Field eyesPushVolume, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyesPushVolume, put=__cordl_internal_set_eyesPushVolume)) ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  eyesPushVolume;

/// @brief Field firstTimeReveal, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstTimeReveal, put=__cordl_internal_set_firstTimeReveal)) bool  firstTimeReveal;

/// @brief Field fxDamaged, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxDamaged, put=__cordl_internal_set_fxDamaged)) ::UnityW<::UnityEngine::GameObject>  fxDamaged;

/// @brief Field gravActivators, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravActivators, put=__cordl_internal_set_gravActivators)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gravActivators;

/// @brief Field headTransform, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_headTransform, put=__cordl_internal_set_headTransform)) ::UnityW<::UnityEngine::Transform>  headTransform;

/// @brief Field hearingRadius, offset 0x2b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_hearingRadius, put=__cordl_internal_set_hearingRadius)) float_t  hearingRadius;

/// @brief Field hittable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hittable, put=__cordl_internal_set_hittable)) ::UnityW<::GlobalNamespace::GameHittable>  hittable;

/// @brief Field hp, offset 0x220, size 0x4 
 __declspec(property(get=__cordl_internal_get_hp, put=__cordl_internal_set_hp)) int32_t  hp;

/// @brief Field internalPhaseIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_internalPhaseIndex, put=__cordl_internal_set_internalPhaseIndex)) int32_t  internalPhaseIndex;

/// @brief Field knockbackImpulse, offset 0x288, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackImpulse, put=__cordl_internal_set_knockbackImpulse)) float_t  knockbackImpulse;

/// @brief Field knockbackTransform, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_knockbackTransform, put=__cordl_internal_set_knockbackTransform)) ::UnityW<::UnityEngine::Transform>  knockbackTransform;

/// @brief Field lastBehavior, offset 0x25c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastBehavior, put=__cordl_internal_set_lastBehavior)) ::GlobalNamespace::GREnemyBossMoon_Behavior  lastBehavior;

/// @brief Field lastHitPlayerTime, offset 0x2a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHitPlayerTime, put=__cordl_internal_set_lastHitPlayerTime)) float_t  lastHitPlayerTime;

/// @brief Field lastJumpEndtime, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastJumpEndtime, put=__cordl_internal_set_lastJumpEndtime)) double_t  lastJumpEndtime;

/// @brief Field lastSeenTargetPosition, offset 0x238, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetPosition, put=__cordl_internal_set_lastSeenTargetPosition)) ::UnityEngine::Vector3  lastSeenTargetPosition;

/// @brief Field lastSeenTargetTime, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSeenTargetTime, put=__cordl_internal_set_lastSeenTargetTime)) double_t  lastSeenTargetTime;

/// @brief Field lastStaggerTime, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStaggerTime, put=__cordl_internal_set_lastStaggerTime)) float_t  lastStaggerTime;

/// @brief Field lootPhases, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lootPhases, put=__cordl_internal_set_lootPhases)) ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_LootPhase*>*  lootPhases;

/// @brief Field minChaseJumpDistance, offset 0x284, size 0x4 
 __declspec(property(get=__cordl_internal_get_minChaseJumpDistance, put=__cordl_internal_set_minChaseJumpDistance)) float_t  minChaseJumpDistance;

/// @brief Field minTimeBetweenHits, offset 0x2ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTimeBetweenHits, put=__cordl_internal_set_minTimeBetweenHits)) float_t  minTimeBetweenHits;

/// @brief Field phases, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_phases, put=__cordl_internal_set_phases)) ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>*  phases;

/// @brief Field restAfterAttack, offset 0x260, size 0x1 
 __declspec(property(get=__cordl_internal_get_restAfterAttack, put=__cordl_internal_set_restAfterAttack)) bool  restAfterAttack;

/// @brief Field rigidBody, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field searchPosition, offset 0x250, size 0xc 
 __declspec(property(get=__cordl_internal_get_searchPosition, put=__cordl_internal_set_searchPosition)) ::UnityEngine::Vector3  searchPosition;

/// @brief Field senseLineOfSight, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseLineOfSight, put=__cordl_internal_set_senseLineOfSight)) ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight;

/// @brief Field senseNearby, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseNearby, put=__cordl_internal_set_senseNearby)) ::GlobalNamespace::GRSenseNearby*  senseNearby;

/// @brief Field shockColliders, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_shockColliders, put=__cordl_internal_set_shockColliders)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonColliderHelper>>*  shockColliders;

/// @brief Field shockedBodyMaterials, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_shockedBodyMaterials, put=__cordl_internal_set_shockedBodyMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  shockedBodyMaterials;

/// @brief Field squishVolumes, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_squishVolumes, put=__cordl_internal_set_squishVolumes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>>*  squishVolumes;

/// @brief Field staggerImmuneTime, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_staggerImmuneTime, put=__cordl_internal_set_staggerImmuneTime)) float_t  staggerImmuneTime;

/// @brief Field target, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field targetPlayer, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Field tempPotentialAttacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempPotentialAttacks, put=setStaticF_tempPotentialAttacks)) ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  tempPotentialAttacks;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Field trackedEntities, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedEntities, put=__cordl_internal_set_trackedEntities)) ::System::Collections::Generic::List_1<int32_t>*  trackedEntities;

/// @brief Field trackedGameEntities, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackedGameEntities, put=__cordl_internal_set_trackedGameEntities)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  trackedGameEntities;

/// @brief Field triggerNextMusicTransition, offset 0x2e8, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerNextMusicTransition, put=__cordl_internal_set_triggerNextMusicTransition)) bool  triggerNextMusicTransition;

/// @brief Field tryHitPlayerCoroutine, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryHitPlayerCoroutine, put=__cordl_internal_set_tryHitPlayerCoroutine)) ::UnityEngine::Coroutine*  tryHitPlayerCoroutine;

/// @brief Field tryShockPlayerCoroutine, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryShockPlayerCoroutine, put=__cordl_internal_set_tryShockPlayerCoroutine)) ::UnityEngine::Coroutine*  tryShockPlayerCoroutine;

/// @brief Field waitInRetreat, offset 0x26c, size 0x4 
 __declspec(property(get=__cordl_internal_get_waitInRetreat, put=__cordl_internal_set_waitInRetreat)) float_t  waitInRetreat;

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

/// @brief Method AddTrackedEntity, addr 0x58847b4, size 0x158, virtual false, abstract: false, final false
inline void AddTrackedEntity(::GlobalNamespace::GameEntity*  entityToTrack) ;

/// @brief Method AdjustAttackAnimSpeed, addr 0x58835d8, size 0x88, virtual false, abstract: false, final false
inline void AdjustAttackAnimSpeed(float_t  speed) ;

/// @brief Method AdjustByPhaseIndex, addr 0x5883428, size 0x98, virtual false, abstract: false, final false
inline void AdjustByPhaseIndex(int32_t  phase) ;

/// @brief Method AreAllEyesClosed, addr 0x5883040, size 0xa0, virtual false, abstract: false, final false
inline bool AreAllEyesClosed() ;

/// @brief Method Awake, addr 0x587f6a0, size 0x2b4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcMaxHP, addr 0x5880d48, size 0x21c, virtual false, abstract: false, final false
inline int32_t CalcMaxHP() ;

/// @brief Method CatchUpPhase, addr 0x588337c, size 0xac, virtual false, abstract: false, final false
inline void CatchUpPhase(int32_t  phase) ;

/// @brief Method ChooseAttackForPhase, addr 0x5882580, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::GREnemyBossMoon_Behavior ChooseAttackForPhase() ;

/// @brief Method ChooseNewBehavior, addr 0x5882978, size 0x19c, virtual false, abstract: false, final false
inline void ChooseNewBehavior(bool  forceAttack) ;

/// @brief Method ChooseRandomBehavior, addr 0x58824fc, size 0x84, virtual false, abstract: false, final false
inline ::GlobalNamespace::GREnemyBossMoon_Behavior ChooseRandomBehavior(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  behaviors) ;

/// @brief Method ChooseSummonForPhase, addr 0x58824d8, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::GREnemyBossMoon_Behavior ChooseSummonForPhase() ;

/// [ContextMenu("Debug Hit Player")]
/// @brief Method DebugHitPlayer, addr 0x5883d58, size 0xbc, virtual false, abstract: false, final false
inline void DebugHitPlayer() ;

/// [CanBeNull]
/// @brief Method GetAssociatedAbilityForBehavior, addr 0x5883784, size 0xe4, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRAbilityBase* GetAssociatedAbilityForBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior) ;

/// @brief Method GetCurrPhase, addr 0x5881c28, size 0x88, virtual false, abstract: false, final false
inline ::GlobalNamespace::GREnemyBossMoon_PhaseDef* GetCurrPhase() ;

/// @brief Method GetCurrPhaseIndex, addr 0x5881b7c, size 0xac, virtual false, abstract: false, final false
inline int32_t GetCurrPhaseIndex() ;

/// @brief Method GetDebugTextLines, addr 0x58840c4, size 0x2c0, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

/// @brief Method GetLootTableForType, addr 0x58805d8, size 0xc0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> GetLootTableForType(::GorillaTagScripts::GhostReactor::GREnemyType  enemyType) ;

/// @brief Method GoBackPhase, addr 0x5882268, size 0xc4, virtual false, abstract: false, final false
inline void GoBackPhase() ;

/// @brief Method GoToNextPhase, addr 0x588232c, size 0x94, virtual false, abstract: false, final false
inline void GoToNextPhase() ;

/// @brief Method GotoDyingIdle, addr 0x58830e0, size 0xc, virtual false, abstract: false, final false
inline void GotoDyingIdle() ;

/// @brief Method GroundSlam, addr 0x58840b4, size 0x10, virtual false, abstract: false, final false
inline void GroundSlam(::UnityEngine::Transform*  slamCenter) ;

/// @brief Method GroundSlamWeak, addr 0x5883fb0, size 0x14, virtual false, abstract: false, final false
inline void GroundSlamWeak(::UnityEngine::Transform*  slamCenter) ;

/// @brief Method HitPlayer, addr 0x5883cec, size 0x6c, virtual false, abstract: false, final false
inline void HitPlayer(::GlobalNamespace::GRPlayer*  player, bool  useImpulse) ;

/// @brief Method HurtBoss, addr 0x5881d38, size 0x420, virtual false, abstract: false, final false
inline void HurtBoss(int32_t  hitAmount, ::GlobalNamespace::GameEntityId  hitByEntityId, ::UnityEngine::Vector3  toolPosition) ;

/// @brief Method HurtBossHP, addr 0x5881ccc, size 0x6c, virtual false, abstract: false, final false
inline void HurtBossHP() ;

/// @brief Method IncrementBossPhase, addr 0x58817a0, size 0xcc, virtual false, abstract: false, final false
inline void IncrementBossPhase() ;

/// @brief Method IsAnySummonBehavior, addr 0x58824c4, size 0x14, virtual false, abstract: false, final false
inline bool IsAnySummonBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior) ;

/// @brief Method IsAttackBehavior, addr 0x5883768, size 0x1c, virtual false, abstract: false, final false
inline bool IsAttackBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior) ;

/// @brief Method IsHitValid, addr 0x58846a4, size 0x8, virtual true, abstract: false, final true
inline bool IsHitValid(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method IsSummon, addr 0x58823c0, size 0x104, virtual false, abstract: false, final false
inline bool IsSummon(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior) ;

/// @brief Method KillAllEyes, addr 0x5882158, size 0x88, virtual false, abstract: false, final false
inline void KillAllEyes() ;

/// @brief Method KillAllSummoned, addr 0x5881908, size 0xc, virtual false, abstract: false, final false
inline void KillAllSummoned() ;

/// @brief Method KillAllSummoned, addr 0x5881374, size 0x42c, virtual false, abstract: false, final false
inline void KillAllSummoned(bool  ignoreMonkeye, bool  killAllEnemies) ;

static inline ::GlobalNamespace::GREnemyBossMoon* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5881004, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x5880ffc, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x587f954, size 0xb6c, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5881000, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnEntityThink, addr 0x5882624, size 0x354, virtual true, abstract: false, final true
inline void OnEntityThink(float_t  dt) ;

/// @brief Method OnGameEntityDeserialize, addr 0x5884444, size 0x260, virtual true, abstract: false, final true
inline void OnGameEntityDeserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method OnGameEntitySerialize, addr 0x5884384, size 0xc0, virtual true, abstract: false, final true
inline void OnGameEntitySerialize(::System::IO::BinaryWriter*  writer) ;

/// @brief Method OnHit, addr 0x58846ac, size 0x108, virtual true, abstract: false, final true
inline void OnHit(::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByClub, addr 0x5883660, size 0x4c, virtual false, abstract: false, final false
inline void OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByFlash, addr 0x58836ac, size 0x4, virtual false, abstract: false, final false
inline void OnHitByFlash(::GlobalNamespace::GRTool*  grTool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnHitByShield, addr 0x58836b0, size 0x34, virtual false, abstract: false, final false
inline void OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit) ;

/// @brief Method OnNetworkBehaviorStateChange, addr 0x58812dc, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBehaviorStateChange(uint8_t  newState) ;

/// @brief Method OnNetworkBodyStateChange, addr 0x58812f4, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBodyStateChange(uint8_t  newState) ;

/// @brief Method OnSummonedEntityDestroy, addr 0x5884a0c, size 0x4, virtual true, abstract: false, final true
inline void OnSummonedEntityDestroy(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnSummonedEntityInit, addr 0x5884a08, size 0x4, virtual true, abstract: false, final true
inline void OnSummonedEntityInit(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnTriggerEnter, addr 0x5883868, size 0x484, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnUpdate, addr 0x58825c0, size 0x64, virtual false, abstract: false, final false
inline void OnUpdate(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x58830ec, size 0x27c, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x5883368, size 0x14, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method RefreshBody, addr 0x5881a88, size 0x34, virtual false, abstract: false, final false
inline void RefreshBody() ;

/// @brief Method RemoveTrackedEntity, addr 0x588490c, size 0xfc, virtual false, abstract: false, final false
inline void RemoveTrackedEntity(::GlobalNamespace::GameEntity*  entityToRemove) ;

/// @brief Method ReportDeathStat, addr 0x58836e4, size 0x84, virtual false, abstract: false, final false
inline void ReportDeathStat() ;

/// @brief Method RestoreFullHealth, addr 0x5881cb0, size 0x1c, virtual false, abstract: false, final false
inline void RestoreFullHealth() ;

/// @brief Method SetBehavior, addr 0x5880698, size 0x6b0, virtual false, abstract: false, final false
inline void SetBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  newBehavior, bool  force) ;

/// @brief Method SetBodyState, addr 0x58810dc, size 0x200, virtual false, abstract: false, final false
inline void SetBodyState(::GlobalNamespace::GREnemyBossMoon_BodyState  newBodyState, bool  force) ;

/// @brief Method SetHP, addr 0x5880f64, size 0x98, virtual false, abstract: false, final false
inline void SetHP(int32_t  hp) ;

/// @brief Method SetSquishVolumeState, addr 0x5881abc, size 0xc0, virtual false, abstract: false, final false
inline void SetSquishVolumeState(bool  squishEnabled) ;

/// @brief Method Setup, addr 0x5880584, size 0x54, virtual false, abstract: false, final false
inline void Setup(int64_t  entityCreateData) ;

/// @brief Method SetupAbility, addr 0x58804c0, size 0xc4, virtual false, abstract: false, final false
inline void SetupAbility(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior, ::GlobalNamespace::GRAbilityBase*  ability, ::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

/// @brief Method ShockPlayer, addr 0x5883ed0, size 0x4c, virtual false, abstract: false, final false
inline void ShockPlayer() ;

/// @brief Method SyncPhase, addr 0x58834c0, size 0x118, virtual false, abstract: false, final false
inline void SyncPhase(int32_t  phase) ;

/// @brief Method ToggleShockColliders, addr 0x588186c, size 0x9c, virtual false, abstract: false, final false
inline void ToggleShockColliders(bool  toggle) ;

/// @brief Method TryChooseAttackBehavior, addr 0x5882b14, size 0x52c, virtual false, abstract: false, final false
inline ::GlobalNamespace::GREnemyBossMoon_Behavior TryChooseAttackBehavior() ;

/// [IteratorStateMachine(typeof(GREnemyBossMoon::<TryHitPlayer>d__166))]
/// @brief Method TryHitPlayer, addr 0x5883e14, size 0x94, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TryHitPlayer(::GlobalNamespace::GRPlayer*  player, bool  useImpulse) ;

/// @brief Method TrySetBehavior, addr 0x588130c, size 0x2c, virtual false, abstract: false, final false
inline bool TrySetBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  newBehavior) ;

/// [IteratorStateMachine(typeof(GREnemyBossMoon::<TryShockPlayer>d__169))]
/// @brief Method TryShockPlayer, addr 0x5883f1c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TryShockPlayer() ;

/// @brief Method TurnOffGrav, addr 0x5881914, size 0x98, virtual false, abstract: false, final false
inline void TurnOffGrav() ;

/// @brief Method TurnOnGrav, addr 0x58819c4, size 0xc4, virtual false, abstract: false, final false
inline void TurnOnGrav() ;

/// @brief Method Update, addr 0x58825a4, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

/// [AsyncStateMachine(typeof(GREnemyBossMoon::<_GroundSlam>d__173))]
/// @brief Method _GroundSlam, addr 0x5883fc4, size 0xf0, virtual false, abstract: false, final false
inline void _GroundSlam(::UnityEngine::Transform*  slamCenter, float_t  duration, float_t  distance, float_t  hitVelocity) ;

constexpr bool const& __cordl_internal_get__BossHasRevealed_k__BackingField() const;

constexpr bool& __cordl_internal_get__BossHasRevealed_k__BackingField() ;

constexpr ::ArrayW<::GlobalNamespace::GRAbilityBase*> const& __cordl_internal_get_abilities() const;

constexpr ::ArrayW<::GlobalNamespace::GRAbilityBase*>& __cordl_internal_get_abilities() ;

constexpr ::GlobalNamespace::GRAbilityAgent* const& __cordl_internal_get_abilityAgent() const;

constexpr ::GlobalNamespace::GRAbilityAgent*& __cordl_internal_get_abilityAgent() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackQuickTentacle00() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackQuickTentacle00() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackQuickTentacle01() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackQuickTentacle01() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackQuickTentacle02() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackQuickTentacle02() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackQuickTentacle03() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackQuickTentacle03() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackTentacle00() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackTentacle00() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackTentacle01() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackTentacle01() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackTentacle02() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackTentacle02() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackTentacle03() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackTentacle03() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackTentacle04() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackTentacle04() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackTentacle05() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackTentacle05() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackTongue01() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackTongue01() ;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& __cordl_internal_get_abilityAttackTongueSwipe01() const;

constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& __cordl_internal_get_abilityAttackTongueSwipe01() ;

constexpr ::GlobalNamespace::GRAbilityDie* const& __cordl_internal_get_abilityDie() const;

constexpr ::GlobalNamespace::GRAbilityDie*& __cordl_internal_get_abilityDie() ;

constexpr ::GlobalNamespace::GRAbilityDie* const& __cordl_internal_get_abilityDieIdle() const;

constexpr ::GlobalNamespace::GRAbilityDie*& __cordl_internal_get_abilityDieIdle() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityExposed() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityExposed() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityExposedIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityExposedIdle() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityHiddenIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityHiddenIdle() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityIdle() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityNextPhase() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityNextPhase() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityRetreatEnd() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityRetreatEnd() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityRetreatIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityRetreatIdle() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityRetreatStart() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityRetreatStart() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityReveal() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityReveal() ;

constexpr ::GlobalNamespace::GRAbilityDie* const& __cordl_internal_get_abilityRunaway() const;

constexpr ::GlobalNamespace::GRAbilityDie*& __cordl_internal_get_abilityRunaway() ;

constexpr ::GlobalNamespace::GRAbilitySummon* const& __cordl_internal_get_abilitySummon01() const;

constexpr ::GlobalNamespace::GRAbilitySummon*& __cordl_internal_get_abilitySummon01() ;

constexpr ::GlobalNamespace::GRAbilitySummon* const& __cordl_internal_get_abilitySummon02() const;

constexpr ::GlobalNamespace::GRAbilitySummon*& __cordl_internal_get_abilitySummon02() ;

constexpr ::GlobalNamespace::GRAbilitySummon* const& __cordl_internal_get_abilitySummon03() const;

constexpr ::GlobalNamespace::GRAbilitySummon*& __cordl_internal_get_abilitySummon03() ;

constexpr ::GlobalNamespace::GRAbilitySummon* const& __cordl_internal_get_abilitySummon04() const;

constexpr ::GlobalNamespace::GRAbilitySummon*& __cordl_internal_get_abilitySummon04() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilitySummonEnd() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilitySummonEnd() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilitySummonStart() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilitySummonStart() ;

constexpr ::UnityW<::GlobalNamespace::GRAdaptiveMusicController> const& __cordl_internal_get_adaptiveMusicController() const;

constexpr ::UnityW<::GlobalNamespace::GRAdaptiveMusicController>& __cordl_internal_get_adaptiveMusicController() ;

constexpr ::UnityW<::GlobalNamespace::GameAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::GlobalNamespace::GameAgent>& __cordl_internal_get_agent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_always() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_always() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr int32_t const& __cordl_internal_get_attacksAfterSummon() const;

constexpr int32_t& __cordl_internal_get_attacksAfterSummon() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_bodyRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_bodyRenderer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_bones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_bones() ;

constexpr ::UnityW<::GlobalNamespace::CameraShakeDispatcher> const& __cordl_internal_get_cameraShaker() const;

constexpr ::UnityW<::GlobalNamespace::CameraShakeDispatcher>& __cordl_internal_get_cameraShaker() ;

constexpr bool const& __cordl_internal_get_canChaseJump() const;

constexpr bool& __cordl_internal_get_canChaseJump() ;

constexpr float_t const& __cordl_internal_get_chaseJumpDistance() const;

constexpr float_t& __cordl_internal_get_chaseJumpDistance() ;

constexpr float_t const& __cordl_internal_get_chaseJumpMinInterval() const;

constexpr float_t& __cordl_internal_get_chaseJumpMinInterval() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr int32_t const& __cordl_internal_get_consecutiveCombos() const;

constexpr int32_t& __cordl_internal_get_consecutiveCombos() ;

constexpr ::GlobalNamespace::GRAbilityBase* const& __cordl_internal_get_currAbility() const;

constexpr ::GlobalNamespace::GRAbilityBase*& __cordl_internal_get_currAbility() ;

constexpr ::GlobalNamespace::GREnemyBossMoon_Behavior const& __cordl_internal_get_currBehavior() const;

constexpr ::GlobalNamespace::GREnemyBossMoon_Behavior& __cordl_internal_get_currBehavior() ;

constexpr ::GlobalNamespace::GREnemyBossMoon_BodyState const& __cordl_internal_get_currBodyState() const;

constexpr ::GlobalNamespace::GREnemyBossMoon_BodyState& __cordl_internal_get_currBodyState() ;

constexpr ::GlobalNamespace::GRAbilitySummon* const& __cordl_internal_get_currSummon() const;

constexpr ::GlobalNamespace::GRAbilitySummon*& __cordl_internal_get_currSummon() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_currentGravActivator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_currentGravActivator() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_damagedSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_damagedSound() ;

constexpr int32_t const& __cordl_internal_get_damagedSoundIndex() const;

constexpr int32_t& __cordl_internal_get_damagedSoundIndex() ;

constexpr float_t const& __cordl_internal_get_damagedSoundVolume() const;

constexpr float_t& __cordl_internal_get_damagedSoundVolume() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get_damagedSounds() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get_damagedSounds() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_defaultBodyMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_defaultBodyMaterials() ;

constexpr ::UnityW<::GlobalNamespace::GREnemy> const& __cordl_internal_get_enemy() const;

constexpr ::UnityW<::GlobalNamespace::GREnemy>& __cordl_internal_get_enemy() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonEye>>* const& __cordl_internal_get_eyes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonEye>>*& __cordl_internal_get_eyes() ;

constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume> const& __cordl_internal_get_eyesPushVolume() const;

constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>& __cordl_internal_get_eyesPushVolume() ;

constexpr bool const& __cordl_internal_get_firstTimeReveal() const;

constexpr bool& __cordl_internal_get_firstTimeReveal() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxDamaged() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxDamaged() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gravActivators() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gravActivators() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTransform() ;

constexpr float_t const& __cordl_internal_get_hearingRadius() const;

constexpr float_t& __cordl_internal_get_hearingRadius() ;

constexpr ::UnityW<::GlobalNamespace::GameHittable> const& __cordl_internal_get_hittable() const;

constexpr ::UnityW<::GlobalNamespace::GameHittable>& __cordl_internal_get_hittable() ;

constexpr int32_t const& __cordl_internal_get_hp() const;

constexpr int32_t& __cordl_internal_get_hp() ;

constexpr int32_t const& __cordl_internal_get_internalPhaseIndex() const;

constexpr int32_t& __cordl_internal_get_internalPhaseIndex() ;

constexpr float_t const& __cordl_internal_get_knockbackImpulse() const;

constexpr float_t& __cordl_internal_get_knockbackImpulse() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_knockbackTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_knockbackTransform() ;

constexpr ::GlobalNamespace::GREnemyBossMoon_Behavior const& __cordl_internal_get_lastBehavior() const;

constexpr ::GlobalNamespace::GREnemyBossMoon_Behavior& __cordl_internal_get_lastBehavior() ;

constexpr float_t const& __cordl_internal_get_lastHitPlayerTime() const;

constexpr float_t& __cordl_internal_get_lastHitPlayerTime() ;

constexpr double_t const& __cordl_internal_get_lastJumpEndtime() const;

constexpr double_t& __cordl_internal_get_lastJumpEndtime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastSeenTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastSeenTargetPosition() ;

constexpr double_t const& __cordl_internal_get_lastSeenTargetTime() const;

constexpr double_t& __cordl_internal_get_lastSeenTargetTime() ;

constexpr float_t const& __cordl_internal_get_lastStaggerTime() const;

constexpr float_t& __cordl_internal_get_lastStaggerTime() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_LootPhase*>* const& __cordl_internal_get_lootPhases() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_LootPhase*>*& __cordl_internal_get_lootPhases() ;

constexpr float_t const& __cordl_internal_get_minChaseJumpDistance() const;

constexpr float_t& __cordl_internal_get_minChaseJumpDistance() ;

constexpr float_t const& __cordl_internal_get_minTimeBetweenHits() const;

constexpr float_t& __cordl_internal_get_minTimeBetweenHits() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>* const& __cordl_internal_get_phases() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>*& __cordl_internal_get_phases() ;

constexpr bool const& __cordl_internal_get_restAfterAttack() const;

constexpr bool& __cordl_internal_get_restAfterAttack() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_searchPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_searchPosition() ;

constexpr ::GlobalNamespace::GRSenseLineOfSight* const& __cordl_internal_get_senseLineOfSight() const;

constexpr ::GlobalNamespace::GRSenseLineOfSight*& __cordl_internal_get_senseLineOfSight() ;

constexpr ::GlobalNamespace::GRSenseNearby* const& __cordl_internal_get_senseNearby() const;

constexpr ::GlobalNamespace::GRSenseNearby*& __cordl_internal_get_senseNearby() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonColliderHelper>>* const& __cordl_internal_get_shockColliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonColliderHelper>>*& __cordl_internal_get_shockColliders() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_shockedBodyMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_shockedBodyMaterials() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>>* const& __cordl_internal_get_squishVolumes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>>*& __cordl_internal_get_squishVolumes() ;

constexpr float_t const& __cordl_internal_get_staggerImmuneTime() const;

constexpr float_t& __cordl_internal_get_staggerImmuneTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_trackedEntities() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_trackedEntities() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& __cordl_internal_get_trackedGameEntities() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& __cordl_internal_get_trackedGameEntities() ;

constexpr bool const& __cordl_internal_get_triggerNextMusicTransition() const;

constexpr bool& __cordl_internal_get_triggerNextMusicTransition() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_tryHitPlayerCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_tryHitPlayerCoroutine() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_tryShockPlayerCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_tryShockPlayerCoroutine() ;

constexpr float_t const& __cordl_internal_get_waitInRetreat() const;

constexpr float_t& __cordl_internal_get_waitInRetreat() ;

constexpr void __cordl_internal_set__BossHasRevealed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_abilities(::ArrayW<::GlobalNamespace::GRAbilityBase*>  value) ;

constexpr void __cordl_internal_set_abilityAgent(::GlobalNamespace::GRAbilityAgent*  value) ;

constexpr void __cordl_internal_set_abilityAttackQuickTentacle00(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackQuickTentacle01(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackQuickTentacle02(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackQuickTentacle03(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackTentacle00(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackTentacle01(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackTentacle02(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackTentacle03(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackTentacle04(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackTentacle05(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackTongue01(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityAttackTongueSwipe01(::GlobalNamespace::GRBossMoonTentacleAttack*  value) ;

constexpr void __cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value) ;

constexpr void __cordl_internal_set_abilityDieIdle(::GlobalNamespace::GRAbilityDie*  value) ;

constexpr void __cordl_internal_set_abilityExposed(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityExposedIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityHiddenIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityNextPhase(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityRetreatEnd(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityRetreatIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityRetreatStart(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityReveal(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityRunaway(::GlobalNamespace::GRAbilityDie*  value) ;

constexpr void __cordl_internal_set_abilitySummon01(::GlobalNamespace::GRAbilitySummon*  value) ;

constexpr void __cordl_internal_set_abilitySummon02(::GlobalNamespace::GRAbilitySummon*  value) ;

constexpr void __cordl_internal_set_abilitySummon03(::GlobalNamespace::GRAbilitySummon*  value) ;

constexpr void __cordl_internal_set_abilitySummon04(::GlobalNamespace::GRAbilitySummon*  value) ;

constexpr void __cordl_internal_set_abilitySummonEnd(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilitySummonStart(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_adaptiveMusicController(::UnityW<::GlobalNamespace::GRAdaptiveMusicController>  value) ;

constexpr void __cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value) ;

constexpr void __cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_attacksAfterSummon(int32_t  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bodyRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_cameraShaker(::UnityW<::GlobalNamespace::CameraShakeDispatcher>  value) ;

constexpr void __cordl_internal_set_canChaseJump(bool  value) ;

constexpr void __cordl_internal_set_chaseJumpDistance(float_t  value) ;

constexpr void __cordl_internal_set_chaseJumpMinInterval(float_t  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_consecutiveCombos(int32_t  value) ;

constexpr void __cordl_internal_set_currAbility(::GlobalNamespace::GRAbilityBase*  value) ;

constexpr void __cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  value) ;

constexpr void __cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyBossMoon_BodyState  value) ;

constexpr void __cordl_internal_set_currSummon(::GlobalNamespace::GRAbilitySummon*  value) ;

constexpr void __cordl_internal_set_currentGravActivator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_damagedSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_damagedSoundIndex(int32_t  value) ;

constexpr void __cordl_internal_set_damagedSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_damagedSounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set_defaultBodyMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_eyes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonEye>>*  value) ;

constexpr void __cordl_internal_set_eyesPushVolume(::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  value) ;

constexpr void __cordl_internal_set_firstTimeReveal(bool  value) ;

constexpr void __cordl_internal_set_fxDamaged(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_gravActivators(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hearingRadius(float_t  value) ;

constexpr void __cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value) ;

constexpr void __cordl_internal_set_hp(int32_t  value) ;

constexpr void __cordl_internal_set_internalPhaseIndex(int32_t  value) ;

constexpr void __cordl_internal_set_knockbackImpulse(float_t  value) ;

constexpr void __cordl_internal_set_knockbackTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lastBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  value) ;

constexpr void __cordl_internal_set_lastHitPlayerTime(float_t  value) ;

constexpr void __cordl_internal_set_lastJumpEndtime(double_t  value) ;

constexpr void __cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastSeenTargetTime(double_t  value) ;

constexpr void __cordl_internal_set_lastStaggerTime(float_t  value) ;

constexpr void __cordl_internal_set_lootPhases(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_LootPhase*>*  value) ;

constexpr void __cordl_internal_set_minChaseJumpDistance(float_t  value) ;

constexpr void __cordl_internal_set_minTimeBetweenHits(float_t  value) ;

constexpr void __cordl_internal_set_phases(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>*  value) ;

constexpr void __cordl_internal_set_restAfterAttack(bool  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_searchPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value) ;

constexpr void __cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value) ;

constexpr void __cordl_internal_set_shockColliders(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonColliderHelper>>*  value) ;

constexpr void __cordl_internal_set_shockedBodyMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_squishVolumes(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>>*  value) ;

constexpr void __cordl_internal_set_staggerImmuneTime(float_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_trackedEntities(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_trackedGameEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value) ;

constexpr void __cordl_internal_set_triggerNextMusicTransition(bool  value) ;

constexpr void __cordl_internal_set_tryHitPlayerCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_tryShockPlayerCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_waitInRetreat(float_t  value) ;

/// @brief Method .ctor, addr 0x5884a10, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>* getStaticF_tempPotentialAttacks() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_tempRigs() ;

/// [CompilerGenerated]
/// @brief Method get_BossHasRevealed, addr 0x587f688, size 0x8, virtual false, abstract: false, final false
inline bool get_BossHasRevealed() ;

/// @brief Method get_CurrAbility, addr 0x587f698, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRAbilityBase* get_CurrAbility() ;

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

static inline void setStaticF_tempPotentialAttacks(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  value) ;

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_BossHasRevealed, addr 0x587f690, size 0x8, virtual false, abstract: false, final false
inline void set_BossHasRevealed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyBossMoon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyBossMoon(GREnemyBossMoon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyBossMoon(GREnemyBossMoon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1941};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field agent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameAgent>  ___agent;

/// @brief Field enemy, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemy>  ___enemy;

/// @brief Field hittable, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameHittable>  ___hittable;

/// [SerializeField]
/// @brief Field attributes, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field phases, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>*  ___phases;

/// @brief Field internalPhaseIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ___internalPhaseIndex;

/// @brief Field lootPhases, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_LootPhase*>*  ___lootPhases;

/// @brief Field senseNearby, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseNearby*  ___senseNearby;

/// @brief Field senseLineOfSight, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseLineOfSight*  ___senseLineOfSight;

/// @brief Field eyes, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonEye>>*  ___eyes;

/// @brief Field eyesPushVolume, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  ___eyesPushVolume;

/// @brief Field anim, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// @brief Field abilityReveal, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityReveal;

/// @brief Field firstTimeReveal, offset: 0x90, size: 0x1, def value: None
 bool  ___firstTimeReveal;

/// [CompilerGenerated]
/// @brief Field <BossHasRevealed>k__BackingField, offset: 0x91, size: 0x1, def value: None
 bool  ____BossHasRevealed_k__BackingField;

/// @brief Field abilityIdle, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityIdle;

/// @brief Field abilityHiddenIdle, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityHiddenIdle;

/// @brief Field abilityAttackTentacle00, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackTentacle00;

/// @brief Field abilityAttackTentacle01, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackTentacle01;

/// @brief Field abilityAttackTentacle02, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackTentacle02;

/// @brief Field abilityAttackTentacle03, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackTentacle03;

/// @brief Field abilityAttackTentacle04, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackTentacle04;

/// @brief Field abilityAttackTentacle05, offset: 0xd0, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackTentacle05;

/// @brief Field abilityAttackQuickTentacle00, offset: 0xd8, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackQuickTentacle00;

/// @brief Field abilityAttackQuickTentacle01, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackQuickTentacle01;

/// @brief Field abilityAttackQuickTentacle02, offset: 0xe8, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackQuickTentacle02;

/// @brief Field abilityAttackQuickTentacle03, offset: 0xf0, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackQuickTentacle03;

/// @brief Field abilityAttackTongue01, offset: 0xf8, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackTongue01;

/// @brief Field abilityAttackTongueSwipe01, offset: 0x100, size: 0x8, def value: None
 ::GlobalNamespace::GRBossMoonTentacleAttack*  ___abilityAttackTongueSwipe01;

/// @brief Field abilitySummonStart, offset: 0x108, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilitySummonStart;

/// @brief Field abilitySummonEnd, offset: 0x110, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilitySummonEnd;

/// @brief Field abilitySummon01, offset: 0x118, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilitySummon*  ___abilitySummon01;

/// @brief Field abilitySummon02, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilitySummon*  ___abilitySummon02;

/// @brief Field abilitySummon03, offset: 0x128, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilitySummon*  ___abilitySummon03;

/// @brief Field abilitySummon04, offset: 0x130, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilitySummon*  ___abilitySummon04;

/// @brief Field abilityRetreatStart, offset: 0x138, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityRetreatStart;

/// @brief Field abilityRetreatEnd, offset: 0x140, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityRetreatEnd;

/// @brief Field abilityRetreatIdle, offset: 0x148, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityRetreatIdle;

/// @brief Field abilityExposed, offset: 0x150, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityExposed;

/// @brief Field abilityExposedIdle, offset: 0x158, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityExposedIdle;

/// @brief Field abilityDie, offset: 0x160, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityDie*  ___abilityDie;

/// @brief Field abilityDieIdle, offset: 0x168, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityDie*  ___abilityDieIdle;

/// @brief Field abilityRunaway, offset: 0x170, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityDie*  ___abilityRunaway;

/// @brief Field abilityNextPhase, offset: 0x178, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityNextPhase;

/// @brief Field abilities, offset: 0x180, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GRAbilityBase*>  ___abilities;

/// @brief Field currAbility, offset: 0x188, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityBase*  ___currAbility;

/// @brief Field currSummon, offset: 0x190, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilitySummon*  ___currSummon;

/// @brief Field abilityAgent, offset: 0x198, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityAgent*  ___abilityAgent;

/// @brief Field bones, offset: 0x1a0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___bones;

/// @brief Field always, offset: 0x1a8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___always;

/// @brief Field headTransform, offset: 0x1b0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headTransform;

/// @brief Field audioSource, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field damagedSound, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___damagedSound;

/// @brief Field damagedSoundVolume, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___damagedSoundVolume;

/// @brief Field damagedSounds, offset: 0x1d0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ___damagedSounds;

/// @brief Field damagedSoundIndex, offset: 0x1d8, size: 0x4, def value: None
 int32_t  ___damagedSoundIndex;

/// @brief Field fxDamaged, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxDamaged;

/// @brief Field gravActivators, offset: 0x1e8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gravActivators;

/// @brief Field currentGravActivator, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___currentGravActivator;

/// @brief Field bodyRenderer, offset: 0x1f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___bodyRenderer;

/// @brief Field defaultBodyMaterials, offset: 0x200, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___defaultBodyMaterials;

/// @brief Field shockedBodyMaterials, offset: 0x208, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___shockedBodyMaterials;

/// @brief Field lastStaggerTime, offset: 0x210, size: 0x4, def value: None
 float_t  ___lastStaggerTime;

/// @brief Field staggerImmuneTime, offset: 0x214, size: 0x4, def value: None
 float_t  ___staggerImmuneTime;

/// @brief Field target, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [ReadOnly]
/// @brief Field hp, offset: 0x220, size: 0x4, def value: None
 int32_t  ___hp;

/// [ReadOnly]
/// @brief Field currBehavior, offset: 0x224, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyBossMoon_Behavior  ___currBehavior;

/// [ReadOnly]
/// @brief Field currBodyState, offset: 0x228, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyBossMoon_BodyState  ___currBodyState;

/// [ReadOnly]
/// @brief Field targetPlayer, offset: 0x230, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// [ReadOnly]
/// @brief Field lastSeenTargetPosition, offset: 0x238, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastSeenTargetPosition;

/// [ReadOnly]
/// @brief Field lastSeenTargetTime, offset: 0x248, size: 0x8, def value: None
 double_t  ___lastSeenTargetTime;

/// [ReadOnly]
/// @brief Field searchPosition, offset: 0x250, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___searchPosition;

/// @brief Field lastBehavior, offset: 0x25c, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyBossMoon_Behavior  ___lastBehavior;

/// @brief Field restAfterAttack, offset: 0x260, size: 0x1, def value: None
 bool  ___restAfterAttack;

/// @brief Field consecutiveCombos, offset: 0x264, size: 0x4, def value: None
 int32_t  ___consecutiveCombos;

/// @brief Field attacksAfterSummon, offset: 0x268, size: 0x4, def value: None
 int32_t  ___attacksAfterSummon;

/// @brief Field waitInRetreat, offset: 0x26c, size: 0x4, def value: None
 float_t  ___waitInRetreat;

/// @brief Field lastJumpEndtime, offset: 0x270, size: 0x8, def value: None
 double_t  ___lastJumpEndtime;

/// @brief Field canChaseJump, offset: 0x278, size: 0x1, def value: None
 bool  ___canChaseJump;

/// @brief Field chaseJumpDistance, offset: 0x27c, size: 0x4, def value: None
 float_t  ___chaseJumpDistance;

/// @brief Field chaseJumpMinInterval, offset: 0x280, size: 0x4, def value: None
 float_t  ___chaseJumpMinInterval;

/// @brief Field minChaseJumpDistance, offset: 0x284, size: 0x4, def value: None
 float_t  ___minChaseJumpDistance;

/// @brief Field knockbackImpulse, offset: 0x288, size: 0x4, def value: None
 float_t  ___knockbackImpulse;

/// @brief Field knockbackTransform, offset: 0x290, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___knockbackTransform;

/// @brief Field rigidBody, offset: 0x298, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field colliders, offset: 0x2a0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// @brief Field lastHitPlayerTime, offset: 0x2a8, size: 0x4, def value: None
 float_t  ___lastHitPlayerTime;

/// @brief Field minTimeBetweenHits, offset: 0x2ac, size: 0x4, def value: None
 float_t  ___minTimeBetweenHits;

/// @brief Field hearingRadius, offset: 0x2b0, size: 0x4, def value: None
 float_t  ___hearingRadius;

/// @brief Field shockColliders, offset: 0x2b8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonColliderHelper>>*  ___shockColliders;

/// @brief Field squishVolumes, offset: 0x2c0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>>*  ___squishVolumes;

/// @brief Field cameraShaker, offset: 0x2c8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CameraShakeDispatcher>  ___cameraShaker;

/// @brief Field trackedEntities, offset: 0x2d0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___trackedEntities;

/// @brief Field trackedGameEntities, offset: 0x2d8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  ___trackedGameEntities;

/// @brief Field adaptiveMusicController, offset: 0x2e0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAdaptiveMusicController>  ___adaptiveMusicController;

/// @brief Field triggerNextMusicTransition, offset: 0x2e8, size: 0x1, def value: None
 bool  ___triggerNextMusicTransition;

/// @brief Field tryHitPlayerCoroutine, offset: 0x2f0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___tryHitPlayerCoroutine;

/// @brief Field tryShockPlayerCoroutine, offset: 0x2f8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___tryShockPlayerCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___agent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___enemy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___hittable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___attributes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___phases) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___internalPhaseIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___lootPhases) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___senseNearby) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___senseLineOfSight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___eyes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___eyesPushVolume) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___anim) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityReveal) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___firstTimeReveal) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ____BossHasRevealed_k__BackingField) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityIdle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityHiddenIdle) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackTentacle00) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackTentacle01) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackTentacle02) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackTentacle03) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackTentacle04) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackTentacle05) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackQuickTentacle00) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackQuickTentacle01) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackQuickTentacle02) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackQuickTentacle03) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackTongue01) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAttackTongueSwipe01) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilitySummonStart) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilitySummonEnd) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilitySummon01) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilitySummon02) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilitySummon03) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilitySummon04) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityRetreatStart) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityRetreatEnd) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityRetreatIdle) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityExposed) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityExposedIdle) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityDie) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityDieIdle) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityRunaway) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityNextPhase) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilities) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___currAbility) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___currSummon) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___abilityAgent) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___bones) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___always) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___headTransform) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___audioSource) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___damagedSound) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___damagedSoundVolume) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___damagedSounds) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___damagedSoundIndex) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___fxDamaged) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___gravActivators) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___currentGravActivator) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___bodyRenderer) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___defaultBodyMaterials) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___shockedBodyMaterials) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___lastStaggerTime) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___staggerImmuneTime) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___target) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___hp) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___currBehavior) == 0x224, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___currBodyState) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___targetPlayer) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___lastSeenTargetPosition) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___lastSeenTargetTime) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___searchPosition) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___lastBehavior) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___restAfterAttack) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___consecutiveCombos) == 0x264, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___attacksAfterSummon) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___waitInRetreat) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___lastJumpEndtime) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___canChaseJump) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___chaseJumpDistance) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___chaseJumpMinInterval) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___minChaseJumpDistance) == 0x284, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___knockbackImpulse) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___knockbackTransform) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___rigidBody) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___colliders) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___lastHitPlayerTime) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___minTimeBetweenHits) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___hearingRadius) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___shockColliders) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___squishVolumes) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___cameraShaker) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___trackedEntities) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___trackedGameEntities) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___adaptiveMusicController) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___triggerNextMusicTransition) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___tryHitPlayerCoroutine) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon, ___tryShockPlayerCoroutine) == 0x2f8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoon) == 0x300, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyBossMoon/<TryShockPlayer>d__169
class CORDL_TYPE GREnemyBossMoon__TryShockPlayer_d__169 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GREnemyBossMoon>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5884f9c, size 0xe4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5885080, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5885088, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x58850c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5884f98, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5883f88, size 0x28, virtual false, abstract: false, final false
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
constexpr GREnemyBossMoon__TryShockPlayer_d__169() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon__TryShockPlayer_d__169", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyBossMoon__TryShockPlayer_d__169(GREnemyBossMoon__TryShockPlayer_d__169 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon__TryShockPlayer_d__169", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyBossMoon__TryShockPlayer_d__169(GREnemyBossMoon__TryShockPlayer_d__169 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1939};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemyBossMoon>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyBossMoon/<TryHitPlayer>d__166
class CORDL_TYPE GREnemyBossMoon__TryHitPlayer_d__166 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GREnemyBossMoon>  __4__this;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::GlobalNamespace::GRPlayer>  player;

/// @brief Field useImpulse, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useImpulse, put=__cordl_internal_set_useImpulse)) bool  useImpulse;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5884b9c, size 0x3b4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5884f50, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5884f58, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5884f90, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5884b98, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get_player() ;

constexpr bool const& __cordl_internal_get_useImpulse() const;

constexpr bool& __cordl_internal_get_useImpulse() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set_useImpulse(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5883ea8, size 0x28, virtual false, abstract: false, final false
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
constexpr GREnemyBossMoon__TryHitPlayer_d__166() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon__TryHitPlayer_d__166", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyBossMoon__TryHitPlayer_d__166(GREnemyBossMoon__TryHitPlayer_d__166 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon__TryHitPlayer_d__166", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyBossMoon__TryHitPlayer_d__166(GREnemyBossMoon__TryHitPlayer_d__166 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1938};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ___player;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemyBossMoon>  _____4__this;

/// @brief Field useImpulse, offset: 0x30, size: 0x1, def value: None
 bool  ___useImpulse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166, ___useImpulse) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaTagScripts.GhostReactor.GREnemyType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyBossMoon/LootPhase
class CORDL_TYPE GREnemyBossMoon_LootPhase : public ::System::Object {
public:
// Declarations
/// @brief Field enemyType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_enemyType, put=__cordl_internal_set_enemyType)) ::GorillaTagScripts::GhostReactor::GREnemyType  enemyType;

/// @brief Field lootTable, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lootTable, put=__cordl_internal_set_lootTable)) ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  lootTable;

static inline ::GlobalNamespace::GREnemyBossMoon_LootPhase* New_ctor() ;

constexpr ::GorillaTagScripts::GhostReactor::GREnemyType const& __cordl_internal_get_enemyType() const;

constexpr ::GorillaTagScripts::GhostReactor::GREnemyType& __cordl_internal_get_enemyType() ;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& __cordl_internal_get_lootTable() const;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& __cordl_internal_get_lootTable() ;

constexpr void __cordl_internal_set_enemyType(::GorillaTagScripts::GhostReactor::GREnemyType  value) ;

constexpr void __cordl_internal_set_lootTable(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value) ;

/// @brief Method .ctor, addr 0x5884b90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyBossMoon_LootPhase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon_LootPhase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyBossMoon_LootPhase(GREnemyBossMoon_LootPhase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon_LootPhase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyBossMoon_LootPhase(GREnemyBossMoon_LootPhase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1935};

/// @brief Field enemyType, offset: 0x10, size: 0x4, def value: None
 ::GorillaTagScripts::GhostReactor::GREnemyType  ___enemyType;

/// @brief Field lootTable, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  ___lootTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_LootPhase, ___enemyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_LootPhase, ___lootTable) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoon_LootPhase) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyBossMoon/PhaseDef
class CORDL_TYPE GREnemyBossMoon_PhaseDef : public ::System::Object {
public:
// Declarations
/// @brief Field allowConsecutiveCombos, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowConsecutiveCombos, put=__cordl_internal_set_allowConsecutiveCombos)) bool  allowConsecutiveCombos;

/// @brief Field attacks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_attacks, put=__cordl_internal_set_attacks)) ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  attacks;

/// @brief Field attacksBetweenSummons, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_attacksBetweenSummons, put=__cordl_internal_set_attacksBetweenSummons)) int32_t  attacksBetweenSummons;

/// @brief Field comboAttackChance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_comboAttackChance, put=__cordl_internal_set_comboAttackChance)) float_t  comboAttackChance;

/// @brief Field comboAttacks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_comboAttacks, put=__cordl_internal_set_comboAttacks)) ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  comboAttacks;

/// @brief Field maxEnemiesForReveal, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxEnemiesForReveal, put=__cordl_internal_set_maxEnemiesForReveal)) int32_t  maxEnemiesForReveal;

/// @brief Field maxSimultaneousEnemies, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSimultaneousEnemies, put=__cordl_internal_set_maxSimultaneousEnemies)) int32_t  maxSimultaneousEnemies;

/// @brief Field minHP, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHP, put=__cordl_internal_set_minHP)) int32_t  minHP;

/// @brief Field randomSummonChance, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomSummonChance, put=__cordl_internal_set_randomSummonChance)) float_t  randomSummonChance;

/// @brief Field restAfterAttack, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_restAfterAttack, put=__cordl_internal_set_restAfterAttack)) bool  restAfterAttack;

/// @brief Field retreatAfterSummon, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_retreatAfterSummon, put=__cordl_internal_set_retreatAfterSummon)) bool  retreatAfterSummon;

/// @brief Field runawayAfterPhase, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_runawayAfterPhase, put=__cordl_internal_set_runawayAfterPhase)) bool  runawayAfterPhase;

/// @brief Field summons, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_summons, put=__cordl_internal_set_summons)) ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  summons;

static inline ::GlobalNamespace::GREnemyBossMoon_PhaseDef* New_ctor() ;

constexpr bool const& __cordl_internal_get_allowConsecutiveCombos() const;

constexpr bool& __cordl_internal_get_allowConsecutiveCombos() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>* const& __cordl_internal_get_attacks() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*& __cordl_internal_get_attacks() ;

constexpr int32_t const& __cordl_internal_get_attacksBetweenSummons() const;

constexpr int32_t& __cordl_internal_get_attacksBetweenSummons() ;

constexpr float_t const& __cordl_internal_get_comboAttackChance() const;

constexpr float_t& __cordl_internal_get_comboAttackChance() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>* const& __cordl_internal_get_comboAttacks() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*& __cordl_internal_get_comboAttacks() ;

constexpr int32_t const& __cordl_internal_get_maxEnemiesForReveal() const;

constexpr int32_t& __cordl_internal_get_maxEnemiesForReveal() ;

constexpr int32_t const& __cordl_internal_get_maxSimultaneousEnemies() const;

constexpr int32_t& __cordl_internal_get_maxSimultaneousEnemies() ;

constexpr int32_t const& __cordl_internal_get_minHP() const;

constexpr int32_t& __cordl_internal_get_minHP() ;

constexpr float_t const& __cordl_internal_get_randomSummonChance() const;

constexpr float_t& __cordl_internal_get_randomSummonChance() ;

constexpr bool const& __cordl_internal_get_restAfterAttack() const;

constexpr bool& __cordl_internal_get_restAfterAttack() ;

constexpr bool const& __cordl_internal_get_retreatAfterSummon() const;

constexpr bool& __cordl_internal_get_retreatAfterSummon() ;

constexpr bool const& __cordl_internal_get_runawayAfterPhase() const;

constexpr bool& __cordl_internal_get_runawayAfterPhase() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>* const& __cordl_internal_get_summons() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*& __cordl_internal_get_summons() ;

constexpr void __cordl_internal_set_allowConsecutiveCombos(bool  value) ;

constexpr void __cordl_internal_set_attacks(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  value) ;

constexpr void __cordl_internal_set_attacksBetweenSummons(int32_t  value) ;

constexpr void __cordl_internal_set_comboAttackChance(float_t  value) ;

constexpr void __cordl_internal_set_comboAttacks(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  value) ;

constexpr void __cordl_internal_set_maxEnemiesForReveal(int32_t  value) ;

constexpr void __cordl_internal_set_maxSimultaneousEnemies(int32_t  value) ;

constexpr void __cordl_internal_set_minHP(int32_t  value) ;

constexpr void __cordl_internal_set_randomSummonChance(float_t  value) ;

constexpr void __cordl_internal_set_restAfterAttack(bool  value) ;

constexpr void __cordl_internal_set_retreatAfterSummon(bool  value) ;

constexpr void __cordl_internal_set_runawayAfterPhase(bool  value) ;

constexpr void __cordl_internal_set_summons(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  value) ;

/// @brief Method .ctor, addr 0x5884b54, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyBossMoon_PhaseDef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon_PhaseDef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyBossMoon_PhaseDef(GREnemyBossMoon_PhaseDef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyBossMoon_PhaseDef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyBossMoon_PhaseDef(GREnemyBossMoon_PhaseDef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1934};

/// @brief Field minHP, offset: 0x10, size: 0x4, def value: None
 int32_t  ___minHP;

/// @brief Field attacks, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  ___attacks;

/// @brief Field comboAttacks, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  ___comboAttacks;

/// @brief Field restAfterAttack, offset: 0x28, size: 0x1, def value: None
 bool  ___restAfterAttack;

/// @brief Field comboAttackChance, offset: 0x2c, size: 0x4, def value: None
 float_t  ___comboAttackChance;

/// @brief Field allowConsecutiveCombos, offset: 0x30, size: 0x1, def value: None
 bool  ___allowConsecutiveCombos;

/// @brief Field summons, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  ___summons;

/// @brief Field maxSimultaneousEnemies, offset: 0x40, size: 0x4, def value: None
 int32_t  ___maxSimultaneousEnemies;

/// @brief Field maxEnemiesForReveal, offset: 0x44, size: 0x4, def value: None
 int32_t  ___maxEnemiesForReveal;

/// @brief Field attacksBetweenSummons, offset: 0x48, size: 0x4, def value: None
 int32_t  ___attacksBetweenSummons;

/// @brief Field retreatAfterSummon, offset: 0x4c, size: 0x1, def value: None
 bool  ___retreatAfterSummon;

/// @brief Field randomSummonChance, offset: 0x50, size: 0x4, def value: None
 float_t  ___randomSummonChance;

/// @brief Field runawayAfterPhase, offset: 0x54, size: 0x1, def value: None
 bool  ___runawayAfterPhase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___minHP) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___attacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___comboAttacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___restAfterAttack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___comboAttackChance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___allowConsecutiveCombos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___summons) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___maxSimultaneousEnemies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___maxEnemiesForReveal) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___attacksBetweenSummons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___retreatAfterSummon) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___randomSummonChance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon_PhaseDef, ___runawayAfterPhase) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoon_PhaseDef) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
