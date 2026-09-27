#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/Entities/TestShark.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/AI/zzzz__AIEntity_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TestShark)
namespace GorillaTagScripts::AI::States {
class Chase_State;
}
namespace GorillaTagScripts::AI::States {
class CircularPatrol_State;
}
namespace GorillaTagScripts::AI::States {
class Patrol_State;
}
namespace GorillaTagScripts::AI {
class StateMachine;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GorillaTagScripts::AI::Entities {
class TestShark;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::AI::Entities::TestShark*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AI::Entities::TestShark*, "GorillaTagScripts.AI.Entities", "TestShark");
// Dependencies GorillaTagScripts.AI.AIEntity
namespace GorillaTagScripts::AI::Entities {
// Is value type: false
// CS Name: GorillaTagScripts.AI.Entities.TestShark
class CORDL_TYPE TestShark : public ::GorillaTagScripts::AI::AIEntity {
public:
// Declarations
/// @brief Field _stateMachine, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateMachine, put=__cordl_internal_set__stateMachine)) ::GorillaTagScripts::AI::StateMachine*  _stateMachine;

/// @brief Field chase, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_chase, put=__cordl_internal_set_chase)) ::GorillaTagScripts::AI::States::Chase_State*  chase;

/// @brief Field chasingTimer, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_chasingTimer, put=__cordl_internal_set_chasingTimer)) float_t  chasingTimer;

/// @brief Field circularPatrol, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_circularPatrol, put=__cordl_internal_set_circularPatrol)) ::GorillaTagScripts::AI::States::CircularPatrol_State*  circularPatrol;

/// @brief Field nextTimeToChasePlayer, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextTimeToChasePlayer, put=__cordl_internal_set_nextTimeToChasePlayer)) float_t  nextTimeToChasePlayer;

/// @brief Field patrol, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_patrol, put=__cordl_internal_set_patrol)) ::GorillaTagScripts::AI::States::Patrol_State*  patrol;

/// @brief Field shouldChase, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldChase, put=__cordl_internal_set_shouldChase)) bool  shouldChase;

/// @brief Method Awake, addr 0x5c48e14, size 0x1a4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTagScripts::AI::Entities::TestShark* New_ctor() ;

/// @brief Method Update, addr 0x5c490b0, size 0xcc, virtual false, abstract: false, final false
inline void Update() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__7_2, addr 0x5c49188, size 0x6c, virtual false, abstract: false, final false
inline bool _Awake_b__7_2() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__7_3, addr 0x5c491f4, size 0x18, virtual false, abstract: false, final false
inline bool _Awake_b__7_3() ;

/// [CompilerGenerated]
/// @brief Method <Awake>g__ShouldChase|7_0, addr 0x5c48fb8, size 0x7c, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* _Awake_g__ShouldChase_7_0() ;

/// [CompilerGenerated]
/// @brief Method <Awake>g__ShouldPatrol|7_1, addr 0x5c49034, size 0x7c, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* _Awake_g__ShouldPatrol_7_1() ;

constexpr ::GorillaTagScripts::AI::StateMachine* const& __cordl_internal_get__stateMachine() const;

constexpr ::GorillaTagScripts::AI::StateMachine*& __cordl_internal_get__stateMachine() ;

constexpr ::GorillaTagScripts::AI::States::Chase_State* const& __cordl_internal_get_chase() const;

constexpr ::GorillaTagScripts::AI::States::Chase_State*& __cordl_internal_get_chase() ;

constexpr float_t const& __cordl_internal_get_chasingTimer() const;

constexpr float_t& __cordl_internal_get_chasingTimer() ;

constexpr ::GorillaTagScripts::AI::States::CircularPatrol_State* const& __cordl_internal_get_circularPatrol() const;

constexpr ::GorillaTagScripts::AI::States::CircularPatrol_State*& __cordl_internal_get_circularPatrol() ;

constexpr float_t const& __cordl_internal_get_nextTimeToChasePlayer() const;

constexpr float_t& __cordl_internal_get_nextTimeToChasePlayer() ;

constexpr ::GorillaTagScripts::AI::States::Patrol_State* const& __cordl_internal_get_patrol() const;

constexpr ::GorillaTagScripts::AI::States::Patrol_State*& __cordl_internal_get_patrol() ;

constexpr bool const& __cordl_internal_get_shouldChase() const;

constexpr bool& __cordl_internal_get_shouldChase() ;

constexpr void __cordl_internal_set__stateMachine(::GorillaTagScripts::AI::StateMachine*  value) ;

constexpr void __cordl_internal_set_chase(::GorillaTagScripts::AI::States::Chase_State*  value) ;

constexpr void __cordl_internal_set_chasingTimer(float_t  value) ;

constexpr void __cordl_internal_set_circularPatrol(::GorillaTagScripts::AI::States::CircularPatrol_State*  value) ;

constexpr void __cordl_internal_set_nextTimeToChasePlayer(float_t  value) ;

constexpr void __cordl_internal_set_patrol(::GorillaTagScripts::AI::States::Patrol_State*  value) ;

constexpr void __cordl_internal_set_shouldChase(bool  value) ;

/// @brief Method .ctor, addr 0x5c4917c, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TestShark() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TestShark", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TestShark(TestShark && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TestShark", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TestShark(TestShark const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4229};

/// @brief Field nextTimeToChasePlayer, offset: 0x8c, size: 0x4, def value: None
 float_t  ___nextTimeToChasePlayer;

/// @brief Field chasingTimer, offset: 0x90, size: 0x4, def value: None
 float_t  ___chasingTimer;

/// @brief Field shouldChase, offset: 0x94, size: 0x1, def value: None
 bool  ___shouldChase;

/// @brief Field _stateMachine, offset: 0x98, size: 0x8, def value: None
 ::GorillaTagScripts::AI::StateMachine*  ____stateMachine;

/// @brief Field circularPatrol, offset: 0xa0, size: 0x8, def value: None
 ::GorillaTagScripts::AI::States::CircularPatrol_State*  ___circularPatrol;

/// @brief Field patrol, offset: 0xa8, size: 0x8, def value: None
 ::GorillaTagScripts::AI::States::Patrol_State*  ___patrol;

/// @brief Field chase, offset: 0xb0, size: 0x8, def value: None
 ::GorillaTagScripts::AI::States::Chase_State*  ___chase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::AI::Entities::TestShark, ___nextTimeToChasePlayer) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::Entities::TestShark, ___chasingTimer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::Entities::TestShark, ___shouldChase) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::Entities::TestShark, ____stateMachine) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::Entities::TestShark, ___circularPatrol) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::Entities::TestShark, ___patrol) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::Entities::TestShark, ___chase) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::AI::Entities::TestShark) == 0xb8, "Size mismatch!");

} // namespace end def GorillaTagScripts::AI::Entities
