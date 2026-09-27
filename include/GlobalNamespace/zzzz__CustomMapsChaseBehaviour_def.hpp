#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsChaseBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CustomMapsBehaviourBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomMapsChaseBehaviour)
namespace GT_CustomMapSupportRuntime {
class AIAgent;
}
namespace GlobalNamespace {
class CustomMapsAIBehaviourController;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsChaseBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsChaseBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsChaseBehaviour*, "", "CustomMapsChaseBehaviour");
// Dependencies CustomMapsBehaviourBase, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsChaseBehaviour
class CORDL_TYPE CustomMapsChaseBehaviour : public ::GlobalNamespace::CustomMapsBehaviourBase {
public:
// Declarations
/// @brief Field controller, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_controller, put=__cordl_internal_set_controller)) ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  controller;

/// @brief Field isChasing, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isChasing, put=__cordl_internal_set_isChasing)) bool  isChasing;

/// @brief Field loseSightDist, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_loseSightDist, put=__cordl_internal_set_loseSightDist)) float_t  loseSightDist;

/// @brief Field loseSightDistSq, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_loseSightDistSq, put=__cordl_internal_set_loseSightDistSq)) float_t  loseSightDistSq;

/// @brief Field navMeshAgent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_navMeshAgent, put=__cordl_internal_set_navMeshAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navMeshAgent;

/// @brief Field rememberLoseSightPos, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_rememberLoseSightPos, put=__cordl_internal_set_rememberLoseSightPos)) bool  rememberLoseSightPos;

/// @brief Field sightOffset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_sightOffset, put=__cordl_internal_set_sightOffset)) ::UnityEngine::Vector3  sightOffset;

/// @brief Field stopDistSq, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_stopDistSq, put=__cordl_internal_set_stopDistSq)) float_t  stopDistSq;

/// @brief Method CanContinueExecuting, addr 0x59c2efc, size 0x90, virtual true, abstract: false, final false
inline bool CanContinueExecuting() ;

/// @brief Method CanExecute, addr 0x59c2e5c, size 0xa0, virtual true, abstract: false, final false
inline bool CanExecute() ;

/// @brief Method Execute, addr 0x59c3034, size 0xc8, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method IsTargetInChaseRange, addr 0x59c2f8c, size 0xa8, virtual false, abstract: false, final false
inline bool IsTargetInChaseRange(::by_ref<bool>  withinStopDist) ;

/// @brief Method IsTargetVisible, addr 0x59c30fc, size 0x8c, virtual false, abstract: false, final false
inline bool IsTargetVisible() ;

/// @brief Method NetExecute, addr 0x59c31f4, size 0x4, virtual true, abstract: false, final false
inline void NetExecute() ;

static inline ::GlobalNamespace::CustomMapsChaseBehaviour* New_ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIController, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings) ;

/// @brief Method OnTriggerEnter, addr 0x59c3200, size 0x4, virtual true, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  otherCollider) ;

/// @brief Method ResetBehavior, addr 0x59c31f8, size 0x8, virtual true, abstract: false, final false
inline void ResetBehavior() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController> const& __cordl_internal_get_controller() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>& __cordl_internal_get_controller() ;

constexpr bool const& __cordl_internal_get_isChasing() const;

constexpr bool& __cordl_internal_get_isChasing() ;

constexpr float_t const& __cordl_internal_get_loseSightDist() const;

constexpr float_t& __cordl_internal_get_loseSightDist() ;

constexpr float_t const& __cordl_internal_get_loseSightDistSq() const;

constexpr float_t& __cordl_internal_get_loseSightDistSq() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navMeshAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navMeshAgent() ;

constexpr bool const& __cordl_internal_get_rememberLoseSightPos() const;

constexpr bool& __cordl_internal_get_rememberLoseSightPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_sightOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_sightOffset() ;

constexpr float_t const& __cordl_internal_get_stopDistSq() const;

constexpr float_t& __cordl_internal_get_stopDistSq() ;

constexpr void __cordl_internal_set_controller(::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  value) ;

constexpr void __cordl_internal_set_isChasing(bool  value) ;

constexpr void __cordl_internal_set_loseSightDist(float_t  value) ;

constexpr void __cordl_internal_set_loseSightDistSq(float_t  value) ;

constexpr void __cordl_internal_set_navMeshAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_rememberLoseSightPos(bool  value) ;

constexpr void __cordl_internal_set_sightOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_stopDistSq(float_t  value) ;

/// @brief Method .ctor, addr 0x59c2df0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::CustomMapsAIBehaviourController*  AIController, ::GT_CustomMapSupportRuntime::AIAgent*  agentSettings) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsChaseBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsChaseBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsChaseBehaviour(CustomMapsChaseBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsChaseBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsChaseBehaviour(CustomMapsChaseBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2673};

/// @brief Field navMeshAgent, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navMeshAgent;

/// @brief Field controller, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsAIBehaviourController>  ___controller;

/// @brief Field loseSightDist, offset: 0x20, size: 0x4, def value: None
 float_t  ___loseSightDist;

/// @brief Field loseSightDistSq, offset: 0x24, size: 0x4, def value: None
 float_t  ___loseSightDistSq;

/// @brief Field sightOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___sightOffset;

/// @brief Field rememberLoseSightPos, offset: 0x34, size: 0x1, def value: None
 bool  ___rememberLoseSightPos;

/// @brief Field stopDistSq, offset: 0x38, size: 0x4, def value: None
 float_t  ___stopDistSq;

/// @brief Field isChasing, offset: 0x3c, size: 0x1, def value: None
 bool  ___isChasing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsChaseBehaviour, ___navMeshAgent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsChaseBehaviour, ___controller) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsChaseBehaviour, ___loseSightDist) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsChaseBehaviour, ___loseSightDistSq) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsChaseBehaviour, ___sightOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsChaseBehaviour, ___rememberLoseSightPos) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsChaseBehaviour, ___stopDistSq) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsChaseBehaviour, ___isChasing) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsChaseBehaviour) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
