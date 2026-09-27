#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyPhantom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GREnemyPhantom_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyPhantom_BodyState_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyPhantom)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class GRAbilityAttackLatchOn;
}
namespace GlobalNamespace {
class GRAbilityChase;
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
class GRAbilityWatch;
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
struct GREnemyPhantom_Behavior;
}
namespace GlobalNamespace {
struct GREnemyPhantom_BodyState;
}
namespace GlobalNamespace {
class GRPatrolPath;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GRSenseNearby;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GameLight;
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
class GREnemyPhantom;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GREnemyPhantom*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyPhantom*, "", "GREnemyPhantom");
// Dependencies GREnemyPhantom::Behavior, GREnemyPhantom::BodyState, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GREnemyPhantom
class CORDL_TYPE GREnemyPhantom : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Behavior = ::GlobalNamespace::GREnemyPhantom_Behavior;

using BodyState = ::GlobalNamespace::GREnemyPhantom_BodyState;

/// @brief Field abilityAlert, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAlert, put=__cordl_internal_set_abilityAlert)) ::GlobalNamespace::GRAbilityWatch*  abilityAlert;

/// @brief Field abilityAttack, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityAttack, put=__cordl_internal_set_abilityAttack)) ::GlobalNamespace::GRAbilityAttackLatchOn*  abilityAttack;

/// @brief Field abilityChase, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityChase, put=__cordl_internal_set_abilityChase)) ::GlobalNamespace::GRAbilityChase*  abilityChase;

/// @brief Field abilityIdle, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityIdle, put=__cordl_internal_set_abilityIdle)) ::GlobalNamespace::GRAbilityIdle*  abilityIdle;

/// @brief Field abilityInvestigate, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityInvestigate, put=__cordl_internal_set_abilityInvestigate)) ::GlobalNamespace::GRAbilityMoveToTarget*  abilityInvestigate;

/// @brief Field abilityJump, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityJump, put=__cordl_internal_set_abilityJump)) ::GlobalNamespace::GRAbilityJump*  abilityJump;

/// @brief Field abilityMine, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityMine, put=__cordl_internal_set_abilityMine)) ::GlobalNamespace::GRAbilityIdle*  abilityMine;

/// @brief Field abilityRage, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityRage, put=__cordl_internal_set_abilityRage)) ::GlobalNamespace::GRAbilityWatch*  abilityRage;

/// @brief Field abilityReturn, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_abilityReturn, put=__cordl_internal_set_abilityReturn)) ::GlobalNamespace::GRAbilityMoveToTarget*  abilityReturn;

/// @brief Field agent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::GlobalNamespace::GameAgent>  agent;

/// @brief Field always, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_always, put=__cordl_internal_set_always)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  always;

/// @brief Field anim, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

/// @brief Field armor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_armor, put=__cordl_internal_set_armor)) ::UnityW<::GlobalNamespace::GRArmorEnemy>  armor;

/// @brief Field attackLight, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_attackLight, put=__cordl_internal_set_attackLight)) ::UnityW<::GlobalNamespace::GameLight>  attackLight;

/// @brief Field attackRange, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackRange, put=__cordl_internal_set_attackRange)) float_t  attackRange;

/// @brief Field attributes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field audioSource, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field behaviorEndTime, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorEndTime, put=__cordl_internal_set_behaviorEndTime)) double_t  behaviorEndTime;

/// @brief Field behaviorStartTime, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviorStartTime, put=__cordl_internal_set_behaviorStartTime)) double_t  behaviorStartTime;

/// @brief Field bones, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bones, put=__cordl_internal_set_bones)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  bones;

/// @brief Field colliders, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field coreMarker, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_coreMarker, put=__cordl_internal_set_coreMarker)) ::UnityW<::UnityEngine::Transform>  coreMarker;

/// @brief Field corePrefab, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_corePrefab, put=__cordl_internal_set_corePrefab)) ::UnityW<::GlobalNamespace::GRCollectible>  corePrefab;

/// @brief Field currBehavior, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBehavior, put=__cordl_internal_set_currBehavior)) ::GlobalNamespace::GREnemyPhantom_Behavior  currBehavior;

/// @brief Field currBodyState, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_currBodyState, put=__cordl_internal_set_currBodyState)) ::GlobalNamespace::GREnemyPhantom_BodyState  currBodyState;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field headTransform, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_headTransform, put=__cordl_internal_set_headTransform)) ::UnityW<::UnityEngine::Transform>  headTransform;

/// @brief Field hearingRadius, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_hearingRadius, put=__cordl_internal_set_hearingRadius)) float_t  hearingRadius;

/// @brief Field hp, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_hp, put=__cordl_internal_set_hp)) int32_t  hp;

/// @brief Field idleLocation, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleLocation, put=__cordl_internal_set_idleLocation)) ::UnityW<::UnityEngine::Transform>  idleLocation;

/// @brief Field investigateLocation, offset 0x140, size 0x10 
 __declspec(property(get=__cordl_internal_get_investigateLocation, put=__cordl_internal_set_investigateLocation)) ::System::Nullable_1<::UnityEngine::Vector3>  investigateLocation;

/// @brief Field lastStateChange, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastStateChange, put=__cordl_internal_set_lastStateChange)) double_t  lastStateChange;

/// @brief Field navAgent, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_navAgent, put=__cordl_internal_set_navAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navAgent;

/// @brief Field negativeLight, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_negativeLight, put=__cordl_internal_set_negativeLight)) ::UnityW<::GlobalNamespace::GameLight>  negativeLight;

/// @brief Field nextPatrolNode, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPatrolNode, put=__cordl_internal_set_nextPatrolNode)) int32_t  nextPatrolNode;

/// @brief Field patrolPath, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrolPath, put=__cordl_internal_set_patrolPath)) ::UnityW<::GlobalNamespace::GRPatrolPath>  patrolPath;

/// @brief Field rigidBody, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field rigsNearby, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigsNearby, put=__cordl_internal_set_rigsNearby)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigsNearby;

/// @brief Field searchPosition, offset 0x170, size 0xc 
 __declspec(property(get=__cordl_internal_get_searchPosition, put=__cordl_internal_set_searchPosition)) ::UnityEngine::Vector3  searchPosition;

/// @brief Field senseLineOfSight, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseLineOfSight, put=__cordl_internal_set_senseLineOfSight)) ::GlobalNamespace::GRSenseLineOfSight*  senseLineOfSight;

/// @brief Field senseNearby, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_senseNearby, put=__cordl_internal_set_senseNearby)) ::GlobalNamespace::GRSenseNearby*  senseNearby;

/// @brief Field soundAlert, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundAlert, put=__cordl_internal_set_soundAlert)) ::GlobalNamespace::AbilitySound*  soundAlert;

/// @brief Field soundAttack, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundAttack, put=__cordl_internal_set_soundAttack)) ::GlobalNamespace::AbilitySound*  soundAttack;

/// @brief Field soundChase, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundChase, put=__cordl_internal_set_soundChase)) ::GlobalNamespace::AbilitySound*  soundChase;

/// @brief Field soundMine, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundMine, put=__cordl_internal_set_soundMine)) ::GlobalNamespace::AbilitySound*  soundMine;

/// @brief Field soundRage, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundRage, put=__cordl_internal_set_soundRage)) ::GlobalNamespace::AbilitySound*  soundRage;

/// @brief Field soundReturn, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundReturn, put=__cordl_internal_set_soundReturn)) ::GlobalNamespace::AbilitySound*  soundReturn;

/// @brief Field target, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field tempRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRigs, put=setStaticF_tempRigs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  tempRigs;

/// @brief Convert operator to "::GlobalNamespace::IGameAgentComponent"
constexpr operator  ::GlobalNamespace::IGameAgentComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr operator  ::GlobalNamespace::IGameEntityDebugComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr operator  ::GlobalNamespace::IGameEntitySerialize*() noexcept;

/// @brief Method Awake, addr 0x589151c, size 0x208, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChooseNewBehavior, addr 0x5892608, size 0x1c0, virtual false, abstract: false, final false
inline void ChooseNewBehavior() ;

/// @brief Method GetDebugTextLines, addr 0x589336c, size 0x18c, virtual true, abstract: false, final true
inline void GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings) ;

static inline ::GlobalNamespace::GREnemyPhantom* New_ctor() ;

/// @brief Method OnAgentJumpRequested, addr 0x58924f4, size 0x30, virtual false, abstract: false, final false
inline void OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale) ;

/// @brief Method OnDestroy, addr 0x5891e70, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEntityDestroy, addr 0x5891e68, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5891724, size 0x580, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5891e6c, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnEntityThink, addr 0x58927c8, size 0x34c, virtual true, abstract: false, final true
inline void OnEntityThink(float_t  dt) ;

/// @brief Method OnGameEntityDeserialize, addr 0x589357c, size 0xbc, virtual true, abstract: false, final true
inline void OnGameEntityDeserialize(::System::IO::BinaryReader*  reader) ;

/// @brief Method OnGameEntitySerialize, addr 0x58934f8, size 0x84, virtual true, abstract: false, final true
inline void OnGameEntitySerialize(::System::IO::BinaryWriter*  writer) ;

/// @brief Method OnNetworkBehaviorStateChange, addr 0x5892524, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBehaviorStateChange(uint8_t  newState) ;

/// @brief Method OnNetworkBodyStateChange, addr 0x589253c, size 0x18, virtual false, abstract: false, final false
inline void OnNetworkBodyStateChange(uint8_t  newState) ;

/// @brief Method OnTriggerEnter, addr 0x5893068, size 0x304, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method OnUpdate, addr 0x58925b8, size 0x50, virtual false, abstract: false, final false
inline void OnUpdate(float_t  dt) ;

/// @brief Method OnUpdateAuthority, addr 0x5892b14, size 0x3a0, virtual false, abstract: false, final false
inline void OnUpdateAuthority(float_t  dt) ;

/// @brief Method OnUpdateRemote, addr 0x5892eb4, size 0x84, virtual false, abstract: false, final false
inline void OnUpdateRemote(float_t  dt) ;

/// @brief Method RefreshBody, addr 0x5892564, size 0x38, virtual false, abstract: false, final false
inline void RefreshBody() ;

/// @brief Method SetBehavior, addr 0x5891fdc, size 0x46c, virtual false, abstract: false, final false
inline void SetBehavior(::GlobalNamespace::GREnemyPhantom_Behavior  newBehavior, bool  force) ;

/// @brief Method SetBodyState, addr 0x5892448, size 0xac, virtual false, abstract: false, final false
inline void SetBodyState(::GlobalNamespace::GREnemyPhantom_BodyState  newBodyState, bool  force) ;

/// @brief Method SetHP, addr 0x589255c, size 0x8, virtual false, abstract: false, final false
inline void SetHP(int32_t  hp) ;

/// @brief Method SetNextPatrolNode, addr 0x5892554, size 0x8, virtual false, abstract: false, final false
inline void SetNextPatrolNode(int32_t  nextPatrolNode) ;

/// @brief Method SetPatrolPath, addr 0x5891f48, size 0x94, virtual false, abstract: false, final false
inline void SetPatrolPath(int64_t  createData) ;

/// @brief Method Setup, addr 0x5891ca4, size 0x1c4, virtual false, abstract: false, final false
inline void Setup(int64_t  createData) ;

/// @brief Method Update, addr 0x589259c, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAlert, addr 0x5892f38, size 0x130, virtual false, abstract: false, final false
inline void UpdateAlert(float_t  dt) ;

constexpr ::GlobalNamespace::GRAbilityWatch* const& __cordl_internal_get_abilityAlert() const;

constexpr ::GlobalNamespace::GRAbilityWatch*& __cordl_internal_get_abilityAlert() ;

constexpr ::GlobalNamespace::GRAbilityAttackLatchOn* const& __cordl_internal_get_abilityAttack() const;

constexpr ::GlobalNamespace::GRAbilityAttackLatchOn*& __cordl_internal_get_abilityAttack() ;

constexpr ::GlobalNamespace::GRAbilityChase* const& __cordl_internal_get_abilityChase() const;

constexpr ::GlobalNamespace::GRAbilityChase*& __cordl_internal_get_abilityChase() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityIdle() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityIdle() ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_abilityInvestigate() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_abilityInvestigate() ;

constexpr ::GlobalNamespace::GRAbilityJump* const& __cordl_internal_get_abilityJump() const;

constexpr ::GlobalNamespace::GRAbilityJump*& __cordl_internal_get_abilityJump() ;

constexpr ::GlobalNamespace::GRAbilityIdle* const& __cordl_internal_get_abilityMine() const;

constexpr ::GlobalNamespace::GRAbilityIdle*& __cordl_internal_get_abilityMine() ;

constexpr ::GlobalNamespace::GRAbilityWatch* const& __cordl_internal_get_abilityRage() const;

constexpr ::GlobalNamespace::GRAbilityWatch*& __cordl_internal_get_abilityRage() ;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& __cordl_internal_get_abilityReturn() const;

constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& __cordl_internal_get_abilityReturn() ;

constexpr ::UnityW<::GlobalNamespace::GameAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::GlobalNamespace::GameAgent>& __cordl_internal_get_agent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_always() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_always() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& __cordl_internal_get_armor() const;

constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& __cordl_internal_get_armor() ;

constexpr ::UnityW<::GlobalNamespace::GameLight> const& __cordl_internal_get_attackLight() const;

constexpr ::UnityW<::GlobalNamespace::GameLight>& __cordl_internal_get_attackLight() ;

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

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_coreMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_coreMarker() ;

constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& __cordl_internal_get_corePrefab() const;

constexpr ::UnityW<::GlobalNamespace::GRCollectible>& __cordl_internal_get_corePrefab() ;

constexpr ::GlobalNamespace::GREnemyPhantom_Behavior const& __cordl_internal_get_currBehavior() const;

constexpr ::GlobalNamespace::GREnemyPhantom_Behavior& __cordl_internal_get_currBehavior() ;

constexpr ::GlobalNamespace::GREnemyPhantom_BodyState const& __cordl_internal_get_currBodyState() const;

constexpr ::GlobalNamespace::GREnemyPhantom_BodyState& __cordl_internal_get_currBodyState() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headTransform() ;

constexpr float_t const& __cordl_internal_get_hearingRadius() const;

constexpr float_t& __cordl_internal_get_hearingRadius() ;

constexpr int32_t const& __cordl_internal_get_hp() const;

constexpr int32_t& __cordl_internal_get_hp() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_idleLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_idleLocation() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_investigateLocation() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_investigateLocation() ;

constexpr double_t const& __cordl_internal_get_lastStateChange() const;

constexpr double_t& __cordl_internal_get_lastStateChange() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navAgent() ;

constexpr ::UnityW<::GlobalNamespace::GameLight> const& __cordl_internal_get_negativeLight() const;

constexpr ::UnityW<::GlobalNamespace::GameLight>& __cordl_internal_get_negativeLight() ;

constexpr int32_t const& __cordl_internal_get_nextPatrolNode() const;

constexpr int32_t& __cordl_internal_get_nextPatrolNode() ;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& __cordl_internal_get_patrolPath() const;

constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& __cordl_internal_get_patrolPath() ;

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

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundAlert() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundAlert() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundAttack() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundAttack() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundChase() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundChase() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundMine() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundMine() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundRage() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundRage() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundReturn() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundReturn() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_abilityAlert(::GlobalNamespace::GRAbilityWatch*  value) ;

constexpr void __cordl_internal_set_abilityAttack(::GlobalNamespace::GRAbilityAttackLatchOn*  value) ;

constexpr void __cordl_internal_set_abilityChase(::GlobalNamespace::GRAbilityChase*  value) ;

constexpr void __cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

constexpr void __cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value) ;

constexpr void __cordl_internal_set_abilityMine(::GlobalNamespace::GRAbilityIdle*  value) ;

constexpr void __cordl_internal_set_abilityRage(::GlobalNamespace::GRAbilityWatch*  value) ;

constexpr void __cordl_internal_set_abilityReturn(::GlobalNamespace::GRAbilityMoveToTarget*  value) ;

constexpr void __cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value) ;

constexpr void __cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value) ;

constexpr void __cordl_internal_set_attackLight(::UnityW<::GlobalNamespace::GameLight>  value) ;

constexpr void __cordl_internal_set_attackRange(float_t  value) ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_behaviorEndTime(double_t  value) ;

constexpr void __cordl_internal_set_behaviorStartTime(double_t  value) ;

constexpr void __cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_coreMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_corePrefab(::UnityW<::GlobalNamespace::GRCollectible>  value) ;

constexpr void __cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyPhantom_Behavior  value) ;

constexpr void __cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyPhantom_BodyState  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hearingRadius(float_t  value) ;

constexpr void __cordl_internal_set_hp(int32_t  value) ;

constexpr void __cordl_internal_set_idleLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_lastStateChange(double_t  value) ;

constexpr void __cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_negativeLight(::UnityW<::GlobalNamespace::GameLight>  value) ;

constexpr void __cordl_internal_set_nextPatrolNode(int32_t  value) ;

constexpr void __cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rigsNearby(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_searchPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value) ;

constexpr void __cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value) ;

constexpr void __cordl_internal_set_soundAlert(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_soundAttack(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_soundChase(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_soundMine(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_soundRage(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_soundReturn(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5893638, size 0x14, virtual false, abstract: false, final false
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

static inline void setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GREnemyPhantom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GREnemyPhantom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GREnemyPhantom(GREnemyPhantom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GREnemyPhantom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GREnemyPhantom(GREnemyPhantom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1962};

/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// @brief Field agent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameAgent>  ___agent;

/// @brief Field armor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRArmorEnemy>  ___armor;

/// @brief Field attributes, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field anim, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

/// @brief Field senseNearby, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseNearby*  ___senseNearby;

/// @brief Field senseLineOfSight, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::GRSenseLineOfSight*  ___senseLineOfSight;

/// @brief Field abilityMine, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityMine;

/// @brief Field soundMine, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundMine;

/// @brief Field abilityIdle, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityIdle*  ___abilityIdle;

/// @brief Field abilityRage, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityWatch*  ___abilityRage;

/// @brief Field soundRage, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundRage;

/// @brief Field abilityAlert, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityWatch*  ___abilityAlert;

/// @brief Field soundAlert, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundAlert;

/// @brief Field abilityChase, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityChase*  ___abilityChase;

/// @brief Field soundChase, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundChase;

/// @brief Field abilityReturn, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___abilityReturn;

/// @brief Field soundReturn, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundReturn;

/// @brief Field abilityAttack, offset: 0xb0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityAttackLatchOn*  ___abilityAttack;

/// @brief Field soundAttack, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundAttack;

/// @brief Field abilityInvestigate, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityMoveToTarget*  ___abilityInvestigate;

/// @brief Field abilityJump, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityJump*  ___abilityJump;

/// @brief Field bones, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___bones;

/// @brief Field always, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___always;

/// @brief Field coreMarker, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___coreMarker;

/// @brief Field corePrefab, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRCollectible>  ___corePrefab;

/// @brief Field headTransform, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headTransform;

/// @brief Field attackRange, offset: 0xf8, size: 0x4, def value: None
 float_t  ___attackRange;

/// @brief Field hearingRadius, offset: 0xfc, size: 0x4, def value: None
 float_t  ___hearingRadius;

/// @brief Field rigsNearby, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___rigsNearby;

/// @brief Field attackLight, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameLight>  ___attackLight;

/// @brief Field negativeLight, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameLight>  ___negativeLight;

/// [ReadOnly]
/// [SerializeField]
/// @brief Field patrolPath, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPatrolPath>  ___patrolPath;

/// @brief Field idleLocation, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___idleLocation;

/// @brief Field navAgent, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navAgent;

/// @brief Field audioSource, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field lastStateChange, offset: 0x138, size: 0x8, def value: None
 double_t  ___lastStateChange;

/// @brief Field investigateLocation, offset: 0x140, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ___investigateLocation;

/// @brief Field target, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// [ReadOnly]
/// @brief Field hp, offset: 0x158, size: 0x4, def value: None
 int32_t  ___hp;

/// [ReadOnly]
/// @brief Field currBehavior, offset: 0x15c, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyPhantom_Behavior  ___currBehavior;

/// [ReadOnly]
/// @brief Field behaviorEndTime, offset: 0x160, size: 0x8, def value: None
 double_t  ___behaviorEndTime;

/// [ReadOnly]
/// @brief Field currBodyState, offset: 0x168, size: 0x4, def value: None
 ::GlobalNamespace::GREnemyPhantom_BodyState  ___currBodyState;

/// [ReadOnly]
/// @brief Field nextPatrolNode, offset: 0x16c, size: 0x4, def value: None
 int32_t  ___nextPatrolNode;

/// [ReadOnly]
/// @brief Field searchPosition, offset: 0x170, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___searchPosition;

/// [ReadOnly]
/// @brief Field behaviorStartTime, offset: 0x180, size: 0x8, def value: None
 double_t  ___behaviorStartTime;

/// @brief Field rigidBody, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// @brief Field colliders, offset: 0x190, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___agent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___armor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___attributes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___anim) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___senseNearby) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___senseLineOfSight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___abilityMine) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___soundMine) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___abilityIdle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___abilityRage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___soundRage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___abilityAlert) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___soundAlert) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___abilityChase) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___soundChase) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___abilityReturn) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___soundReturn) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___abilityAttack) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___soundAttack) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___abilityInvestigate) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___abilityJump) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___bones) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___always) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___coreMarker) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___corePrefab) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___headTransform) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___attackRange) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___hearingRadius) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___rigsNearby) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___attackLight) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___negativeLight) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___patrolPath) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___idleLocation) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___navAgent) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___audioSource) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___lastStateChange) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___investigateLocation) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___target) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___hp) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___currBehavior) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___behaviorEndTime) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___currBodyState) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___nextPatrolNode) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___searchPosition) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___behaviorStartTime) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___rigidBody) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyPhantom, ___colliders) == 0x190, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyPhantom) == 0x198, "Size mismatch!");

} // namespace end def GlobalNamespace
