#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/States/Patrol_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Patrol_State)
namespace GorillaTagScripts::AI {
class AIEntity;
}
namespace GorillaTagScripts::AI {
class IState;
}
namespace UnityEngine::AI {
class NavMeshAgent;
}
// Forward declare root types
namespace GorillaTagScripts::AI::States {
class Patrol_State;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::AI::States::Patrol_State*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AI::States::Patrol_State*, "GorillaTagScripts.AI.States", "Patrol_State");
// Dependencies System.Object
namespace GorillaTagScripts::AI::States {
// Is value type: false
// CS Name: GorillaTagScripts.AI.States.Patrol_State
class CORDL_TYPE Patrol_State : public ::System::Object {
public:
// Declarations
/// @brief Field agent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::UnityW<::UnityEngine::AI::NavMeshAgent>  agent;

/// @brief Field entity, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GorillaTagScripts::AI::AIEntity>  entity;

/// @brief Convert operator to "::GorillaTagScripts::AI::IState"
constexpr operator  ::GorillaTagScripts::AI::IState*() noexcept;

static inline ::GorillaTagScripts::AI::States::Patrol_State* New_ctor(::GorillaTagScripts::AI::AIEntity*  entity) ;

/// @brief Method OnEnter, addr 0x5c48ca4, size 0x16c, virtual true, abstract: false, final true
inline void OnEnter() ;

/// @brief Method OnExit, addr 0x5c48e10, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x5c48bb8, size 0xec, virtual true, abstract: false, final true
inline void Tick() ;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& __cordl_internal_get_agent() const;

constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& __cordl_internal_get_agent() ;

constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity>& __cordl_internal_get_entity() ;

constexpr void __cordl_internal_set_agent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GorillaTagScripts::AI::AIEntity>  value) ;

/// @brief Method .ctor, addr 0x5c48b68, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::GorillaTagScripts::AI::AIEntity*  entity) ;

/// @brief Convert to "::GorillaTagScripts::AI::IState"
constexpr ::GorillaTagScripts::AI::IState* i___GorillaTagScripts__AI__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Patrol_State() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Patrol_State", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Patrol_State(Patrol_State && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Patrol_State", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Patrol_State(Patrol_State const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4228};

/// @brief Field entity, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::AI::AIEntity>  ___entity;

/// @brief Field agent, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AI::NavMeshAgent>  ___agent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::AI::States::Patrol_State, ___entity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::States::Patrol_State, ___agent) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::AI::States::Patrol_State) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::AI::States
