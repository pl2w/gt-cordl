#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/States/CircularPatrol_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CircularPatrol_State)
namespace GorillaTagScripts::AI {
class AIEntity;
}
namespace GorillaTagScripts::AI {
class IState;
}
// Forward declare root types
namespace GorillaTagScripts::AI::States {
class CircularPatrol_State;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::AI::States::CircularPatrol_State*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AI::States::CircularPatrol_State*, "GorillaTagScripts.AI.States", "CircularPatrol_State");
// Dependencies System.Object
namespace GorillaTagScripts::AI::States {
// Is value type: false
// CS Name: GorillaTagScripts.AI.States.CircularPatrol_State
class CORDL_TYPE CircularPatrol_State : public ::System::Object {
public:
// Declarations
/// @brief Field angle, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_angle, put=__cordl_internal_set_angle)) float_t  angle;

/// @brief Field entity, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GorillaTagScripts::AI::AIEntity>  entity;

/// @brief Convert operator to "::GorillaTagScripts::AI::IState"
constexpr operator  ::GorillaTagScripts::AI::IState*() noexcept;

static inline ::GorillaTagScripts::AI::States::CircularPatrol_State* New_ctor(::GorillaTagScripts::AI::AIEntity*  entity) ;

/// @brief Method OnEnter, addr 0x5c48b60, size 0x4, virtual true, abstract: false, final true
inline void OnEnter() ;

/// @brief Method OnExit, addr 0x5c48b64, size 0x4, virtual true, abstract: false, final true
inline void OnExit() ;

/// @brief Method Tick, addr 0x5c48a88, size 0xd8, virtual true, abstract: false, final true
inline void Tick() ;

constexpr float_t const& __cordl_internal_get_angle() const;

constexpr float_t& __cordl_internal_get_angle() ;

constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity>& __cordl_internal_get_entity() ;

constexpr void __cordl_internal_set_angle(float_t  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GorillaTagScripts::AI::AIEntity>  value) ;

/// @brief Method .ctor, addr 0x5c48a58, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GorillaTagScripts::AI::AIEntity*  entity) ;

/// @brief Convert to "::GorillaTagScripts::AI::IState"
constexpr ::GorillaTagScripts::AI::IState* i___GorillaTagScripts__AI__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CircularPatrol_State() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CircularPatrol_State", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CircularPatrol_State(CircularPatrol_State && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CircularPatrol_State", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CircularPatrol_State(CircularPatrol_State const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4227};

/// @brief Field entity, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::AI::AIEntity>  ___entity;

/// @brief Field angle, offset: 0x18, size: 0x4, def value: None
 float_t  ___angle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::AI::States::CircularPatrol_State, ___entity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::States::CircularPatrol_State, ___angle) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::AI::States::CircularPatrol_State) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::AI::States
