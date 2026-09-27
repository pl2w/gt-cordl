#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleStateMachine_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimpleStateMachine_1)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename State>
class SimpleStateMachine_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::SimpleStateMachine_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::SimpleStateMachine_1, "", "SimpleStateMachine`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename State>
// Is value type: false
// CS Name: SimpleStateMachine`1<State>
class CORDL_TYPE SimpleStateMachine_1 : public ::System::Object {
public:
// Declarations
/// @brief Field currState, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_currState, put=__cordl_internal_set_currState)) State  currState;

/// @brief Field onStateEnd, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStateEnd, put=__cordl_internal_set_onStateEnd)) ::System::Action_1<State>*  onStateEnd;

/// @brief Field onStateStart, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStateStart, put=__cordl_internal_set_onStateStart)) ::System::Action_1<State>*  onStateStart;

/// @brief Field onStateUpdate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStateUpdate, put=__cordl_internal_set_onStateUpdate)) ::System::Action_1<State>*  onStateUpdate;

/// @brief Field stateStartTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) double_t  stateStartTime;

/// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline State GetState() ;

/// @brief Method GetStateStartTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline double_t GetStateStartTime() ;

/// @brief Method IsStateFinished, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsStateFinished(double_t  currTime, float_t  stateDuration) ;

static inline ::GlobalNamespace::SimpleStateMachine_1<State>* New_ctor() ;

/// @brief Method SetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetState(State  state, bool  force) ;

/// @brief Method Setup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Setup(State  initialState, ::System::Action_1<State>*  onStateStart, ::System::Action_1<State>*  onStateEnd, ::System::Action_1<State>*  onStateUpdate) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Update() ;

constexpr State const& __cordl_internal_get_currState() const;

constexpr State& __cordl_internal_get_currState() ;

constexpr ::System::Action_1<State>* const& __cordl_internal_get_onStateEnd() const;

constexpr ::System::Action_1<State>*& __cordl_internal_get_onStateEnd() ;

constexpr ::System::Action_1<State>* const& __cordl_internal_get_onStateStart() const;

constexpr ::System::Action_1<State>*& __cordl_internal_get_onStateStart() ;

constexpr ::System::Action_1<State>* const& __cordl_internal_get_onStateUpdate() const;

constexpr ::System::Action_1<State>*& __cordl_internal_get_onStateUpdate() ;

constexpr double_t const& __cordl_internal_get_stateStartTime() const;

constexpr double_t& __cordl_internal_get_stateStartTime() ;

constexpr void __cordl_internal_set_currState(State  value) ;

constexpr void __cordl_internal_set_onStateEnd(::System::Action_1<State>*  value) ;

constexpr void __cordl_internal_set_onStateStart(::System::Action_1<State>*  value) ;

constexpr void __cordl_internal_set_onStateUpdate(::System::Action_1<State>*  value) ;

constexpr void __cordl_internal_set_stateStartTime(double_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleStateMachine_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleStateMachine_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleStateMachine_1(SimpleStateMachine_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleStateMachine_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleStateMachine_1(SimpleStateMachine_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1926};

/// @brief Field currState, offset: 0x10, size: 0x8, def value: None
 State  ___currState;

/// @brief Field stateStartTime, offset: 0x18, size: 0x8, def value: None
 double_t  ___stateStartTime;

/// @brief Field onStateStart, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<State>*  ___onStateStart;

/// @brief Field onStateEnd, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<State>*  ___onStateEnd;

/// @brief Field onStateUpdate, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<State>*  ___onStateUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
