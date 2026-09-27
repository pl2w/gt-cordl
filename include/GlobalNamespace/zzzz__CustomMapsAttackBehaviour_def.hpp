#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsAttackBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__AttackType_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsAttackBehaviour_State_def.hpp"
#include "GlobalNamespace/zzzz__CustomMapsBehaviourBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomMapsAttackBehaviour)
namespace GT_CustomMapSupportRuntime {
class AIAgent;
}
namespace GlobalNamespace {
class CustomMapsAIBehaviourController;
}
namespace GlobalNamespace {
struct CustomMapsAttackBehaviour_State;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsAttackBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsAttackBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsAttackBehaviour*, "", "CustomMapsAttackBehaviour");
// Dependencies CustomMapsAttackBehaviour::State, CustomMapsBehaviourBase, GT_CustomMapSupportRuntime.AttackType, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsAttackBehaviour
class CORDL_TYPE CustomMapsAttackBehaviour : public ::GlobalNamespace::CustomMapsBehaviourBase {
public:
// Declarations
using State = ::GlobalNamespace::CustomMapsAttackBehaviour_State;

/// @brief Field animBlendTime, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_animBlendTime, put=__cordl_internal_set_animBlendTime)) float_t  animBlendTime;

/// @brief Field attackAnimName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_attackAnimName, put=__cordl_internal_set_attackAnimName)) ::StringW  attackAnimName;

/// @brief Field attackDist, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackDist, put=__cordl_internal_set_attackDist)) float_t  attackDist;

/// @brief Field attackDistSq, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackDistSq, put=__cordl_internal_set_attackDistSq)) float_t  attackDistSq;

/// @brief Field attackType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackType, put=__cordl_internal_set_attackType)) ::GT_CustomMapSupportRuntime::AttackType  attackType;

/// @brief Field controller, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_controller, put=__cordl_internal_set_controller)) ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  controller;

/// @brief Field damageAmount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_damageAmount, put=__cordl_internal_set_damageAmount)) float_t  damageAmount;

/// @brief Field damageDelayAfterPlayingAnimation, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_damageDelayAfterPlayingAnimation, put=__cordl_internal_set_damageDelayAfterPlayingAnimation)) float_t  damageDelayAfterPlayingAnimation;

/// @brief Field lastAttackTime, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAttackTime, put=__cordl_internal_set_lastAttackTime)) float_t  lastAttackTime;

/// @brief Field sightFOV, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightFOV, put=__cordl_internal_set_sightFOV)) float_t  sightFOV;

/// @brief Field sightMinDot, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightMinDot, put=__cordl_internal_set_sightMinDot)) float_t  sightMinDot;

/// @brief Field sightOffset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_sightOffset, put=__cordl_internal_set_sightOffset)) ::UnityEngine::Vector3  sightOffset;

/// @brief Field startTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Field state, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::CustomMapsAttackBehaviour_State  state;

/// @brief Field stopMovingToAttack, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_stopMovingToAttack, put=__cordl_internal_set_stopMovingToAttack)) bool  stopMovingToAttack;

/// @brief Field timeBetweenAttacks, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeBetweenAttacks, put=__cordl_internal_set_timeBetweenAttacks)) float_t  timeBetweenAttacks;

/// @brief Field turnSpeed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnSpeed, put=__cordl_internal_set_turnSpeed)) float_t  turnSpeed;

/// @brief Field useColliders, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_useColliders, put=__cordl_internal_set_useColliders)) bool  useColliders;

/// @brief Method CanContinueExecuting, addr 0x59c1c48, size 0xfc, virtual true, abstract: false, final false
inline bool CanContinueExecuting() ;

/// @brief Method CanExecute, addr 0x59c1518, size 0xb8, virtual true, abstract: false, final false
inline bool CanExecute() ;

/// @brief Method Execute, addr 0x59c2014, size 0xa8, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method FaceTarget, addr 0x59c20e8, size 0xc8, virtual false, abstract: false, final false
inline void FaceTarget() ;

/// @brief Method IsTargetInAttackRange, addr 0x59c15d0, size 0x14c, virtual false, abstract: false, final false
inline bool IsTargetInAttackRange(::GlobalNamespace::GRPlayer*  target) ;

/// @brief Method IsTargetVisible, addr 0x59c171c, size 0x8c, virtual false, abstract: false, final false
inline bool IsTargetVisible() ;

/// @brief Method NetExecute, addr 0x59c21b0, size 0x15c, virtual true, abstract: false, final false
inline void NetExecute() ;

static inline ::GlobalNamespace::CustomMapsAttackBehaviour* New_ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIController, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings) ;

/// @brief Method OnTriggerEnter, addr 0x59c2790, size 0x120, virtual true, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  otherCollider) ;

/// @brief Method ResetBehavior, addr 0x59c2788, size 0x8, virtual true, abstract: false, final false
inline void ResetBehavior() ;

/// @brief Method TriggerAttack, addr 0x59c230c, size 0x404, virtual false, abstract: false, final false
inline void TriggerAttack(::GlobalNamespace::GRPlayer*  targetPlayer) ;

constexpr float_t const& __cordl_internal_get_animBlendTime() const;

constexpr float_t& __cordl_internal_get_animBlendTime() ;

constexpr ::StringW const& __cordl_internal_get_attackAnimName() const;

constexpr ::StringW& __cordl_internal_get_attackAnimName() ;

constexpr float_t const& __cordl_internal_get_attackDist() const;

constexpr float_t& __cordl_internal_get_attackDist() ;

constexpr float_t const& __cordl_internal_get_attackDistSq() const;

constexpr float_t& __cordl_internal_get_attackDistSq() ;

constexpr ::GT_CustomMapSupportRuntime::AttackType const& __cordl_internal_get_attackType() const;

constexpr ::GT_CustomMapSupportRuntime::AttackType& __cordl_internal_get_attackType() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController> const& __cordl_internal_get_controller() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>& __cordl_internal_get_controller() ;

constexpr float_t const& __cordl_internal_get_damageAmount() const;

constexpr float_t& __cordl_internal_get_damageAmount() ;

constexpr float_t const& __cordl_internal_get_damageDelayAfterPlayingAnimation() const;

constexpr float_t& __cordl_internal_get_damageDelayAfterPlayingAnimation() ;

constexpr float_t const& __cordl_internal_get_lastAttackTime() const;

constexpr float_t& __cordl_internal_get_lastAttackTime() ;

constexpr float_t const& __cordl_internal_get_sightFOV() const;

constexpr float_t& __cordl_internal_get_sightFOV() ;

constexpr float_t const& __cordl_internal_get_sightMinDot() const;

constexpr float_t& __cordl_internal_get_sightMinDot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_sightOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_sightOffset() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr ::GlobalNamespace::CustomMapsAttackBehaviour_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::CustomMapsAttackBehaviour_State& __cordl_internal_get_state() ;

constexpr bool const& __cordl_internal_get_stopMovingToAttack() const;

constexpr bool& __cordl_internal_get_stopMovingToAttack() ;

constexpr float_t const& __cordl_internal_get_timeBetweenAttacks() const;

constexpr float_t& __cordl_internal_get_timeBetweenAttacks() ;

constexpr float_t const& __cordl_internal_get_turnSpeed() const;

constexpr float_t& __cordl_internal_get_turnSpeed() ;

constexpr bool const& __cordl_internal_get_useColliders() const;

constexpr bool& __cordl_internal_get_useColliders() ;

constexpr void __cordl_internal_set_animBlendTime(float_t  value) ;

constexpr void __cordl_internal_set_attackAnimName(::StringW  value) ;

constexpr void __cordl_internal_set_attackDist(float_t  value) ;

constexpr void __cordl_internal_set_attackDistSq(float_t  value) ;

constexpr void __cordl_internal_set_attackType(::GT_CustomMapSupportRuntime::AttackType  value) ;

constexpr void __cordl_internal_set_controller(::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  value) ;

constexpr void __cordl_internal_set_damageAmount(float_t  value) ;

constexpr void __cordl_internal_set_damageDelayAfterPlayingAnimation(float_t  value) ;

constexpr void __cordl_internal_set_lastAttackTime(float_t  value) ;

constexpr void __cordl_internal_set_sightFOV(float_t  value) ;

constexpr void __cordl_internal_set_sightMinDot(float_t  value) ;

constexpr void __cordl_internal_set_sightOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::CustomMapsAttackBehaviour_State  value) ;

constexpr void __cordl_internal_set_stopMovingToAttack(bool  value) ;

constexpr void __cordl_internal_set_timeBetweenAttacks(float_t  value) ;

constexpr void __cordl_internal_set_turnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_useColliders(bool  value) ;

/// @brief Method .ctor, addr 0x59c1408, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIController, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsAttackBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsAttackBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsAttackBehaviour(CustomMapsAttackBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsAttackBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsAttackBehaviour(CustomMapsAttackBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2672};

/// @brief Field controller, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  ___controller;

/// @brief Field state, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::CustomMapsAttackBehaviour_State  ___state;

/// @brief Field attackType, offset: 0x1c, size: 0x4, def value: None
 ::GT_CustomMapSupportRuntime::AttackType  ___attackType;

/// @brief Field attackDist, offset: 0x20, size: 0x4, def value: None
 float_t  ___attackDist;

/// @brief Field attackDistSq, offset: 0x24, size: 0x4, def value: None
 float_t  ___attackDistSq;

/// @brief Field stopMovingToAttack, offset: 0x28, size: 0x1, def value: None
 bool  ___stopMovingToAttack;

/// @brief Field useColliders, offset: 0x29, size: 0x1, def value: None
 bool  ___useColliders;

/// @brief Field damageAmount, offset: 0x2c, size: 0x4, def value: None
 float_t  ___damageAmount;

/// @brief Field sightOffset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___sightOffset;

/// @brief Field sightFOV, offset: 0x3c, size: 0x4, def value: None
 float_t  ___sightFOV;

/// @brief Field sightMinDot, offset: 0x40, size: 0x4, def value: None
 float_t  ___sightMinDot;

/// @brief Field attackAnimName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___attackAnimName;

/// @brief Field timeBetweenAttacks, offset: 0x50, size: 0x4, def value: None
 float_t  ___timeBetweenAttacks;

/// @brief Field damageDelayAfterPlayingAnimation, offset: 0x54, size: 0x4, def value: None
 float_t  ___damageDelayAfterPlayingAnimation;

/// @brief Field animBlendTime, offset: 0x58, size: 0x4, def value: None
 float_t  ___animBlendTime;

/// @brief Field startTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ___startTime;

/// @brief Field turnSpeed, offset: 0x60, size: 0x4, def value: None
 float_t  ___turnSpeed;

/// @brief Field lastAttackTime, offset: 0x64, size: 0x4, def value: None
 float_t  ___lastAttackTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___controller) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___attackType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___attackDist) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___attackDistSq) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___stopMovingToAttack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___useColliders) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___damageAmount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___sightOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___sightFOV) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___sightMinDot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___attackAnimName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___timeBetweenAttacks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___damageDelayAfterPlayingAnimation) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___animBlendTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___startTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___turnSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsAttackBehaviour, ___lastAttackTime) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsAttackBehaviour) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
