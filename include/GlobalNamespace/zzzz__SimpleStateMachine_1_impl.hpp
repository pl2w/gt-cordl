#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleStateMachine_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleStateMachine_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename State>
constexpr State& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_currState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currState;
}
template<typename State>
constexpr State const& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_currState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currState;
}
template<typename State>
constexpr void GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_set_currState(State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currState = value;
}
template<typename State>
constexpr double_t& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_stateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
template<typename State>
constexpr double_t const& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_stateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
template<typename State>
constexpr void GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_set_stateStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStartTime = value;
}
template<typename State>
constexpr ::System::Action_1<State>*& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_onStateStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStateStart;
}
template<typename State>
constexpr ::System::Action_1<State>* const& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_onStateStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStateStart;
}
template<typename State>
constexpr void GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_set_onStateStart(::System::Action_1<State>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStateStart = value;
}
template<typename State>
constexpr ::System::Action_1<State>*& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_onStateEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStateEnd;
}
template<typename State>
constexpr ::System::Action_1<State>* const& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_onStateEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStateEnd;
}
template<typename State>
constexpr void GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_set_onStateEnd(::System::Action_1<State>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStateEnd = value;
}
template<typename State>
constexpr ::System::Action_1<State>*& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_onStateUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStateUpdate;
}
template<typename State>
constexpr ::System::Action_1<State>* const& GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_get_onStateUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStateUpdate;
}
template<typename State>
constexpr void GlobalNamespace::SimpleStateMachine_1<State>::__cordl_internal_set_onStateUpdate(::System::Action_1<State>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStateUpdate = value;
}
template<typename State>
inline void GlobalNamespace::SimpleStateMachine_1<State>::Setup(State  initialState, ::System::Action_1<State>*  onStateStart, ::System::Action_1<State>*  onStateEnd, ::System::Action_1<State>*  onStateUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleStateMachine_1<State>*>(),
                        {"Setup", {}, {::i2c::type_of<State>(), ::i2c::type_of<::System::Action_1<State>*>(), ::i2c::type_of<::System::Action_1<State>*>(), ::i2c::type_of<::System::Action_1<State>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState, onStateStart, onStateEnd, onStateUpdate);
}
template<typename State>
inline void GlobalNamespace::SimpleStateMachine_1<State>::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleStateMachine_1<State>*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename State>
inline void GlobalNamespace::SimpleStateMachine_1<State>::SetState(State  state, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleStateMachine_1<State>*>(),
                        {"SetState", {}, {::i2c::type_of<State>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, force);
}
template<typename State>
inline State GlobalNamespace::SimpleStateMachine_1<State>::GetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleStateMachine_1<State>*>(),
                        {"GetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<State>(this, ___internal_method);
}
template<typename State>
inline double_t GlobalNamespace::SimpleStateMachine_1<State>::GetStateStartTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleStateMachine_1<State>*>(),
                        {"GetStateStartTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
template<typename State>
inline bool GlobalNamespace::SimpleStateMachine_1<State>::IsStateFinished(double_t  currTime, float_t  stateDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleStateMachine_1<State>*>(),
                        {"IsStateFinished", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currTime, stateDuration);
}
template<typename State>
inline void GlobalNamespace::SimpleStateMachine_1<State>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleStateMachine_1<State>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename State>
inline ::GlobalNamespace::SimpleStateMachine_1<State>* GlobalNamespace::SimpleStateMachine_1<State>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleStateMachine_1<State>*>());
}
// Ctor Parameters []
template<typename State>
constexpr ::GlobalNamespace::SimpleStateMachine_1<State>::SimpleStateMachine_1()   {
}
