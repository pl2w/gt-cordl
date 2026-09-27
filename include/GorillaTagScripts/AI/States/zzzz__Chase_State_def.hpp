#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/States/Chase_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Chase_State)
namespace GorillaTagScripts::AI {
class AIEntity;
}
namespace GorillaTagScripts::AI {
class IState;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::AI::States {
class Chase_State;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::AI::States::Chase_State*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AI::States::Chase_State*, "GorillaTagScripts.AI.States", "Chase_State");
// Dependencies System.Object
namespace GorillaTagScripts::AI::States {
// Is value type: false
// CS Name: GorillaTagScripts.AI.States.Chase_State
class CORDL_TYPE Chase_State : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FollowTarget, put=set_FollowTarget)) ::UnityW<::UnityEngine::Transform>  FollowTarget;

/// @brief Field <FollowTarget>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__FollowTarget_k__BackingField, put=__cordl_internal_set__FollowTarget_k__BackingField)) ::UnityW<::UnityEngine::Transform>  _FollowTarget_k__BackingField;

/// @brief Field agent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  agent;

/// @brief Field chaseOver, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_chaseOver, put=__cordl_internal_set_chaseOver)) bool  chaseOver;

/// @brief Field entity, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GorillaTagScripts::AI::AIEntity>  entity;

/// @brief Convert operator to "::GorillaTagScripts::AI::IState"
constexpr operator  ::GorillaTagScripts::AI::IState*() noexcept;

static inline ::GorillaTagScripts::AI::States::Chase_State* New_ctor(::GorillaTagScripts::AI::AIEntity*  entity) ;

/// @brief Method OnEnter, addr 0x5c48964, size 0xe8, virtual true, abstract: false, final true
inline void OnEnter() ;

/// @brief Method OnExit, addr 0x5c48a4c, size 0xc, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x5c488f8, size 0x6c, virtual true, abstract: false, final true
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__FollowTarget_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__FollowTarget_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_agent() ;

constexpr bool const& __cordl_internal_get_chaseOver() const;

constexpr bool& __cordl_internal_get_chaseOver() ;

constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity>& __cordl_internal_get_entity() ;

constexpr void __cordl_internal_set__FollowTarget_k__BackingField(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_agent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_chaseOver(bool  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GorillaTagScripts::AI::AIEntity>  value) ;

/// @brief Method .ctor, addr 0x5c488a8, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::GorillaTagScripts::AI::AIEntity*  entity) ;

/// [CompilerGenerated]
/// @brief Method get_FollowTarget, addr 0x5c48898, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_FollowTarget() ;

/// @brief Convert to "::GorillaTagScripts::AI::IState"
constexpr ::GorillaTagScripts::AI::IState* i___GorillaTagScripts__AI__IState() noexcept;

/// [CompilerGenerated]
/// @brief Method set_FollowTarget, addr 0x5c488a0, size 0x8, virtual false, abstract: false, final false
inline void set_FollowTarget(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Chase_State() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Chase_State", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Chase_State(Chase_State && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Chase_State", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Chase_State(Chase_State const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4226};

/// @brief Field entity, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::AI::AIEntity>  ___entity;

/// @brief Field agent, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___agent;

/// [CompilerGenerated]
/// @brief Field <FollowTarget>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____FollowTarget_k__BackingField;

/// @brief Field chaseOver, offset: 0x28, size: 0x1, def value: None
 bool  ___chaseOver;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::AI::States::Chase_State, ___entity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::States::Chase_State, ___agent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::States::Chase_State, ____FollowTarget_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::States::Chase_State, ___chaseOver) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::AI::States::Chase_State) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::AI::States
