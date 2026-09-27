#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/StateMachine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StateMachine)
namespace GorillaTagScripts::AI {
class IState;
}
namespace GorillaTagScripts::AI {
class StateMachine_Transition;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GorillaTagScripts::AI {
class StateMachine;
}
namespace GorillaTagScripts::AI {
class StateMachine_Transition;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::AI::StateMachine*);
MARK_REF_T(::GorillaTagScripts::AI::StateMachine_Transition*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AI::StateMachine*, "GorillaTagScripts.AI", "StateMachine");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::AI::StateMachine_Transition*, "GorillaTagScripts.AI", "StateMachine/Transition");
// Dependencies System.Object
namespace GorillaTagScripts::AI {
// Is value type: false
// CS Name: GorillaTagScripts.AI.StateMachine
class CORDL_TYPE StateMachine : public ::System::Object {
public:
// Declarations
using Transition = ::GorillaTagScripts::AI::StateMachine_Transition;

/// @brief Field EmptyTransitions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyTransitions, put=setStaticF_EmptyTransitions)) ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  EmptyTransitions;

/// @brief Field _anyTransitions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__anyTransitions, put=__cordl_internal_set__anyTransitions)) ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  _anyTransitions;

/// @brief Field _currentState, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentState, put=__cordl_internal_set__currentState)) ::GorillaTagScripts::AI::IState*  _currentState;

/// @brief Field _currentTransitions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTransitions, put=__cordl_internal_set__currentTransitions)) ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  _currentTransitions;

/// @brief Field _transitions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__transitions, put=__cordl_internal_set__transitions)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*>*  _transitions;

/// @brief Method AddAnyTransition, addr 0x5c48604, size 0xe8, virtual false, abstract: false, final false
inline void AddAnyTransition(::GorillaTagScripts::AI::IState*  state, ::System::Func_1<bool>*  predicate) ;

/// @brief Method AddTransition, addr 0x5c4840c, size 0x1b4, virtual false, abstract: false, final false
inline void AddTransition(::GorillaTagScripts::AI::IState*  from, ::GorillaTagScripts::AI::IState*  to, ::System::Func_1<bool>*  predicate) ;

/// @brief Method GetState, addr 0x5c48404, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTagScripts::AI::IState* GetState() ;

/// @brief Method GetTransition, addr 0x5c47ffc, size 0x244, virtual false, abstract: false, final false
inline ::GorillaTagScripts::AI::StateMachine_Transition* GetTransition() ;

static inline ::GorillaTagScripts::AI::StateMachine* New_ctor() ;

/// @brief Method SetState, addr 0x5c48240, size 0x1c4, virtual false, abstract: false, final false
inline void SetState(::GorillaTagScripts::AI::IState*  state) ;

/// @brief Method Tick, addr 0x5c47f3c, size 0xc0, virtual false, abstract: false, final false
inline void Tick() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>* const& __cordl_internal_get__anyTransitions() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*& __cordl_internal_get__anyTransitions() ;

constexpr ::GorillaTagScripts::AI::IState* const& __cordl_internal_get__currentState() const;

constexpr ::GorillaTagScripts::AI::IState*& __cordl_internal_get__currentState() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>* const& __cordl_internal_get__currentTransitions() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*& __cordl_internal_get__currentTransitions() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*>* const& __cordl_internal_get__transitions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*>*& __cordl_internal_get__transitions() ;

constexpr void __cordl_internal_set__anyTransitions(::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  value) ;

constexpr void __cordl_internal_set__currentState(::GorillaTagScripts::AI::IState*  value) ;

constexpr void __cordl_internal_set__currentTransitions(::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  value) ;

constexpr void __cordl_internal_set__transitions(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*>*  value) ;

/// @brief Method .ctor, addr 0x5c486ec, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>* getStaticF_EmptyTransitions() ;

static inline void setStaticF_EmptyTransitions(::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine(StateMachine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine(StateMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4225};

/// @brief Field _currentState, offset: 0x10, size: 0x8, def value: None
 ::GorillaTagScripts::AI::IState*  ____currentState;

/// @brief Field _transitions, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*>*  ____transitions;

/// @brief Field _currentTransitions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  ____currentTransitions;

/// @brief Field _anyTransitions, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  ____anyTransitions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::AI::StateMachine, ____currentState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::StateMachine, ____transitions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::StateMachine, ____currentTransitions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::StateMachine, ____anyTransitions) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::AI::StateMachine) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::AI
// Dependencies System.Object
namespace GorillaTagScripts::AI {
// Is value type: false
// CS Name: GorillaTagScripts.AI.StateMachine/Transition
class CORDL_TYPE StateMachine_Transition : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Condition)) ::System::Func_1<bool>*  Condition;

 __declspec(property(get=get_To)) ::GorillaTagScripts::AI::IState*  To;

/// @brief Field <Condition>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Condition_k__BackingField, put=__cordl_internal_set__Condition_k__BackingField)) ::System::Func_1<bool>*  _Condition_k__BackingField;

/// @brief Field <To>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__To_k__BackingField, put=__cordl_internal_set__To_k__BackingField)) ::GorillaTagScripts::AI::IState*  _To_k__BackingField;

static inline ::GorillaTagScripts::AI::StateMachine_Transition* New_ctor(::GorillaTagScripts::AI::IState*  to, ::System::Func_1<bool>*  condition) ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get__Condition_k__BackingField() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get__Condition_k__BackingField() ;

constexpr ::GorillaTagScripts::AI::IState* const& __cordl_internal_get__To_k__BackingField() const;

constexpr ::GorillaTagScripts::AI::IState*& __cordl_internal_get__To_k__BackingField() ;

constexpr void __cordl_internal_set__Condition_k__BackingField(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set__To_k__BackingField(::GorillaTagScripts::AI::IState*  value) ;

/// @brief Method .ctor, addr 0x5c485c0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::GorillaTagScripts::AI::IState*  to, ::System::Func_1<bool>*  condition) ;

/// [CompilerGenerated]
/// @brief Method get_Condition, addr 0x5c48888, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<bool>* get_Condition() ;

/// [CompilerGenerated]
/// @brief Method get_To, addr 0x5c48890, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTagScripts::AI::IState* get_To() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_Transition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_Transition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_Transition(StateMachine_Transition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_Transition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_Transition(StateMachine_Transition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4224};

/// [CompilerGenerated]
/// @brief Field <Condition>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<bool>*  ____Condition_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <To>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::GorillaTagScripts::AI::IState*  ____To_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::AI::StateMachine_Transition, ____Condition_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::AI::StateMachine_Transition, ____To_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::AI::StateMachine_Transition) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::AI
