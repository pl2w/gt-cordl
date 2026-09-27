#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/AIEntity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AIEntity)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GorillaTagScripts::AI {
class AIEntity___c__DisplayClass19_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::AI {
class AIEntity;
}
namespace GorillaTagScripts::AI {
class AIEntity___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::AI::AIEntity*);
MARK_REF_T(::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AI::AIEntity*, "GorillaTagScripts.AI", "AIEntity");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0*, "GorillaTagScripts.AI", "AIEntity/<>c__DisplayClass19_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::AI {
// Is value type: false
// CS Name: GorillaTagScripts.AI.AIEntity
class CORDL_TYPE AIEntity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass19_0 = ::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0;

/// @brief Field angularSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_angularSpeed, put=__cordl_internal_set_angularSpeed)) float_t  angularSpeed;

/// @brief Field animator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field attackDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackDistance, put=__cordl_internal_set_attackDistance)) float_t  attackDistance;

/// @brief Field circleCenter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_circleCenter, put=__cordl_internal_set_circleCenter)) ::UnityW<::UnityEngine::Transform>  circleCenter;

/// @brief Field circleRadius, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_circleRadius, put=__cordl_internal_set_circleRadius)) float_t  circleRadius;

/// @brief Field defaultSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultSpeed, put=__cordl_internal_set_defaultSpeed)) float_t  defaultSpeed;

/// @brief Field fleeRang, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_fleeRang, put=__cordl_internal_set_fleeRang)) float_t  fleeRang;

/// @brief Field fleeSpeed, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fleeSpeed, put=__cordl_internal_set_fleeSpeed)) float_t  fleeSpeed;

/// @brief Field fleeSpeedMult, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_fleeSpeedMult, put=__cordl_internal_set_fleeSpeedMult)) float_t  fleeSpeedMult;

/// @brief Field followTarget, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_followTarget, put=__cordl_internal_set_followTarget)) ::UnityW<::UnityEngine::Transform>  followTarget;

/// @brief Field minChaseRange, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_minChaseRange, put=__cordl_internal_set_minChaseRange)) float_t  minChaseRange;

/// @brief Field navMeshAgent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_navMeshAgent, put=__cordl_internal_set_navMeshAgent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  navMeshAgent;

/// @brief Field navMeshSampleRange, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_navMeshSampleRange, put=__cordl_internal_set_navMeshSampleRange)) float_t  navMeshSampleRange;

/// @brief Field patrolSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_patrolSpeed, put=__cordl_internal_set_patrolSpeed)) float_t  patrolSpeed;

/// @brief Field targetIsOnNavMesh, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_targetIsOnNavMesh, put=__cordl_internal_set_targetIsOnNavMesh)) bool  targetIsOnNavMesh;

/// @brief Field targetPlayer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetPlayer, put=__cordl_internal_set_targetPlayer)) ::GlobalNamespace::NetPlayer*  targetPlayer;

/// @brief Field waypoints, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_waypoints, put=__cordl_internal_set_waypoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  waypoints;

/// @brief Field waypointsContainer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_waypointsContainer, put=__cordl_internal_set_waypointsContainer)) ::UnityW<::UnityEngine::GameObject>  waypointsContainer;

/// @brief Method Awake, addr 0x5c470f8, size 0x1c4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ChooseClosestTarget, addr 0x5c47884, size 0x4e0, virtual false, abstract: false, final false
inline void ChooseClosestTarget() ;

/// @brief Method ChooseRandomTarget, addr 0x5c472bc, size 0x5c0, virtual false, abstract: false, final false
inline void ChooseRandomTarget() ;

static inline ::GorillaTagScripts::AI::AIEntity* New_ctor() ;

constexpr float_t const& __cordl_internal_get_angularSpeed() const;

constexpr float_t& __cordl_internal_get_angularSpeed() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_attackDistance() const;

constexpr float_t& __cordl_internal_get_attackDistance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_circleCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_circleCenter() ;

constexpr float_t const& __cordl_internal_get_circleRadius() const;

constexpr float_t& __cordl_internal_get_circleRadius() ;

constexpr float_t const& __cordl_internal_get_defaultSpeed() const;

constexpr float_t& __cordl_internal_get_defaultSpeed() ;

constexpr float_t const& __cordl_internal_get_fleeRang() const;

constexpr float_t& __cordl_internal_get_fleeRang() ;

constexpr float_t const& __cordl_internal_get_fleeSpeed() const;

constexpr float_t& __cordl_internal_get_fleeSpeed() ;

constexpr float_t const& __cordl_internal_get_fleeSpeedMult() const;

constexpr float_t& __cordl_internal_get_fleeSpeedMult() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followTarget() ;

constexpr float_t const& __cordl_internal_get_minChaseRange() const;

constexpr float_t& __cordl_internal_get_minChaseRange() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_navMeshAgent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_navMeshAgent() ;

constexpr float_t const& __cordl_internal_get_navMeshSampleRange() const;

constexpr float_t& __cordl_internal_get_navMeshSampleRange() ;

constexpr float_t const& __cordl_internal_get_patrolSpeed() const;

constexpr float_t& __cordl_internal_get_patrolSpeed() ;

constexpr bool const& __cordl_internal_get_targetIsOnNavMesh() const;

constexpr bool& __cordl_internal_get_targetIsOnNavMesh() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_targetPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_targetPlayer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_waypoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_waypoints() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waypointsContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waypointsContainer() ;

constexpr void __cordl_internal_set_angularSpeed(float_t  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_attackDistance(float_t  value) ;

constexpr void __cordl_internal_set_circleCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_circleRadius(float_t  value) ;

constexpr void __cordl_internal_set_defaultSpeed(float_t  value) ;

constexpr void __cordl_internal_set_fleeRang(float_t  value) ;

constexpr void __cordl_internal_set_fleeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_fleeSpeedMult(float_t  value) ;

constexpr void __cordl_internal_set_followTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_minChaseRange(float_t  value) ;

constexpr void __cordl_internal_set_navMeshAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_navMeshSampleRange(float_t  value) ;

constexpr void __cordl_internal_set_patrolSpeed(float_t  value) ;

constexpr void __cordl_internal_set_targetIsOnNavMesh(bool  value) ;

constexpr void __cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_waypoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_waypointsContainer(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5c47d64, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AIEntity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AIEntity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AIEntity(AIEntity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AIEntity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AIEntity(AIEntity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4222};

/// @brief Field waypointsContainer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waypointsContainer;

/// @brief Field circleCenter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___circleCenter;

/// @brief Field circleRadius, offset: 0x30, size: 0x4, def value: None
 float_t  ___circleRadius;

/// @brief Field angularSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ___angularSpeed;

/// @brief Field patrolSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___patrolSpeed;

/// @brief Field fleeSpeed, offset: 0x3c, size: 0x4, def value: None
 float_t  ___fleeSpeed;

/// @brief Field navMeshAgent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___navMeshAgent;

/// @brief Field animator, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field fleeRang, offset: 0x50, size: 0x4, def value: None
 float_t  ___fleeRang;

/// @brief Field fleeSpeedMult, offset: 0x54, size: 0x4, def value: None
 float_t  ___fleeSpeedMult;

/// @brief Field minChaseRange, offset: 0x58, size: 0x4, def value: None
 float_t  ___minChaseRange;

/// @brief Field attackDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___attackDistance;

/// @brief Field navMeshSampleRange, offset: 0x60, size: 0x4, def value: None
 float_t  ___navMeshSampleRange;

/// @brief Field waypoints, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___waypoints;

/// @brief Field defaultSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ___defaultSpeed;

/// @brief Field followTarget, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___followTarget;

/// @brief Field targetPlayer, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___targetPlayer;

/// @brief Field targetIsOnNavMesh, offset: 0x88, size: 0x1, def value: None
 bool  ___targetIsOnNavMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___waypointsContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___circleCenter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___circleRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___angularSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___patrolSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___fleeSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___navMeshAgent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___animator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___fleeRang) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___fleeSpeedMult) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___minChaseRange) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___attackDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___navMeshSampleRange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___waypoints) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___defaultSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___followTarget) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___targetPlayer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::AIEntity, ___targetIsOnNavMesh) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::AI::AIEntity) == 0x90, "Size mismatch!");

} // namespace end def GorillaTagScripts::AI
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::AI {
// Is value type: false
// CS Name: GorillaTagScripts.AI.AIEntity/<>c__DisplayClass19_0
class CORDL_TYPE AIEntity___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field randomTarget, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomTarget, put=__cordl_internal_set_randomTarget)) int32_t  randomTarget;

static inline ::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <ChooseRandomTarget>b__0, addr 0x5c47df4, size 0x148, virtual false, abstract: false, final false
inline bool _ChooseRandomTarget_b__0(::GlobalNamespace::RigContainer*  x) ;

constexpr int32_t const& __cordl_internal_get_randomTarget() const;

constexpr int32_t& __cordl_internal_get_randomTarget() ;

constexpr void __cordl_internal_set_randomTarget(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c4787c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AIEntity___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AIEntity___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AIEntity___c__DisplayClass19_0(AIEntity___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AIEntity___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AIEntity___c__DisplayClass19_0(AIEntity___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4221};

/// @brief Field randomTarget, offset: 0x10, size: 0x4, def value: None
 int32_t  ___randomTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0, ___randomTarget) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::AI::AIEntity___c__DisplayClass19_0) == 0x18, "Size mismatch!");

} // namespace end def GorillaTagScripts::AI
