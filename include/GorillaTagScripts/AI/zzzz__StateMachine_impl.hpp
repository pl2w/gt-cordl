#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/StateMachine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/AI/zzzz__StateMachine_def.hpp"
#include "GorillaTagScripts/AI/zzzz__IState_def.hpp"
#include "GorillaTagScripts/AI/zzzz__StateMachine_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::StateMachine::*)()>(&::GorillaTagScripts::AI::StateMachine::Tick)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c47f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::StateMachine::*)(::GorillaTagScripts::AI::IState*)>(&::GorillaTagScripts::AI::StateMachine::SetState)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5c48240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"SetState", {}, {::i2c::type_of<::GorillaTagScripts::AI::IState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine.GetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::AI::IState* (::GorillaTagScripts::AI::StateMachine::*)()>(&::GorillaTagScripts::AI::StateMachine::GetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c48404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"GetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine.AddTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::StateMachine::*)(::GorillaTagScripts::AI::IState*, ::GorillaTagScripts::AI::IState*, ::System::Func_1<bool>*)>(&::GorillaTagScripts::AI::StateMachine::AddTransition)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5c4840c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"AddTransition", {}, {::i2c::type_of<::GorillaTagScripts::AI::IState*>(), ::i2c::type_of<::GorillaTagScripts::AI::IState*>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine.AddAnyTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::StateMachine::*)(::GorillaTagScripts::AI::IState*, ::System::Func_1<bool>*)>(&::GorillaTagScripts::AI::StateMachine::AddAnyTransition)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c48604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"AddAnyTransition", {}, {::i2c::type_of<::GorillaTagScripts::AI::IState*>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine.GetTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::AI::StateMachine_Transition* (::GorillaTagScripts::AI::StateMachine::*)()>(&::GorillaTagScripts::AI::StateMachine::GetTransition)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5c47ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"GetTransition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::StateMachine::*)()>(&::GorillaTagScripts::AI::StateMachine::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c486ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTagScripts::AI::IState*& GorillaTagScripts::AI::StateMachine::__cordl_internal_get__currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr ::GorillaTagScripts::AI::IState* const& GorillaTagScripts::AI::StateMachine::__cordl_internal_get__currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentState;
}
constexpr void GorillaTagScripts::AI::StateMachine::__cordl_internal_set__currentState(::GorillaTagScripts::AI::IState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentState = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*>*& GorillaTagScripts::AI::StateMachine::__cordl_internal_get__transitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*>* const& GorillaTagScripts::AI::StateMachine::__cordl_internal_get__transitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transitions;
}
constexpr void GorillaTagScripts::AI::StateMachine::__cordl_internal_set__transitions(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transitions = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*& GorillaTagScripts::AI::StateMachine::__cordl_internal_get__currentTransitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTransitions;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>* const& GorillaTagScripts::AI::StateMachine::__cordl_internal_get__currentTransitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTransitions;
}
constexpr void GorillaTagScripts::AI::StateMachine::__cordl_internal_set__currentTransitions(::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTransitions = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*& GorillaTagScripts::AI::StateMachine::__cordl_internal_get__anyTransitions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anyTransitions;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>* const& GorillaTagScripts::AI::StateMachine::__cordl_internal_get__anyTransitions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anyTransitions;
}
constexpr void GorillaTagScripts::AI::StateMachine::__cordl_internal_set__anyTransitions(::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anyTransitions = value;
}
inline void GorillaTagScripts::AI::StateMachine::setStaticF_EmptyTransitions(::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*, "EmptyTransitions", ::GorillaTagScripts::AI::StateMachine*>(std::forward<::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>* GorillaTagScripts::AI::StateMachine::getStaticF_EmptyTransitions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GorillaTagScripts::AI::StateMachine_Transition*>*, "EmptyTransitions", ::GorillaTagScripts::AI::StateMachine*>();
}
inline void GorillaTagScripts::AI::StateMachine::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::StateMachine::SetState(::GorillaTagScripts::AI::IState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"SetState", {}, {::i2c::type_of<::GorillaTagScripts::AI::IState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::GorillaTagScripts::AI::IState* GorillaTagScripts::AI::StateMachine::GetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"GetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::AI::IState*>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::StateMachine::AddTransition(::GorillaTagScripts::AI::IState*  from, ::GorillaTagScripts::AI::IState*  to, ::System::Func_1<bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"AddTransition", {}, {::i2c::type_of<::GorillaTagScripts::AI::IState*>(), ::i2c::type_of<::GorillaTagScripts::AI::IState*>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, predicate);
}
inline void GorillaTagScripts::AI::StateMachine::AddAnyTransition(::GorillaTagScripts::AI::IState*  state, ::System::Func_1<bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"AddAnyTransition", {}, {::i2c::type_of<::GorillaTagScripts::AI::IState*>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, predicate);
}
inline ::GorillaTagScripts::AI::StateMachine_Transition* GorillaTagScripts::AI::StateMachine::GetTransition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {"GetTransition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::AI::StateMachine_Transition*>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::StateMachine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::AI::StateMachine* GorillaTagScripts::AI::StateMachine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::AI::StateMachine*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::AI::StateMachine::StateMachine()   {
}
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine_Transition.get_Condition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<bool>* (::GorillaTagScripts::AI::StateMachine_Transition::*)()>(&::GorillaTagScripts::AI::StateMachine_Transition::get_Condition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c48888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine_Transition*>(),
                        {"get_Condition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine_Transition.get_To
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::AI::IState* (::GorillaTagScripts::AI::StateMachine_Transition::*)()>(&::GorillaTagScripts::AI::StateMachine_Transition::get_To)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c48890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine_Transition*>(),
                        {"get_To", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::StateMachine_Transition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::StateMachine_Transition::*)(::GorillaTagScripts::AI::IState*, ::System::Func_1<bool>*)>(&::GorillaTagScripts::AI::StateMachine_Transition::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c485c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine_Transition*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTagScripts::AI::IState*>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& GorillaTagScripts::AI::StateMachine_Transition::__cordl_internal_get__Condition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Condition_k__BackingField;
}
constexpr ::System::Func_1<bool>* const& GorillaTagScripts::AI::StateMachine_Transition::__cordl_internal_get__Condition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Condition_k__BackingField;
}
constexpr void GorillaTagScripts::AI::StateMachine_Transition::__cordl_internal_set__Condition_k__BackingField(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Condition_k__BackingField = value;
}
constexpr ::GorillaTagScripts::AI::IState*& GorillaTagScripts::AI::StateMachine_Transition::__cordl_internal_get__To_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____To_k__BackingField;
}
constexpr ::GorillaTagScripts::AI::IState* const& GorillaTagScripts::AI::StateMachine_Transition::__cordl_internal_get__To_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____To_k__BackingField;
}
constexpr void GorillaTagScripts::AI::StateMachine_Transition::__cordl_internal_set__To_k__BackingField(::GorillaTagScripts::AI::IState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____To_k__BackingField = value;
}
inline ::System::Func_1<bool>* GorillaTagScripts::AI::StateMachine_Transition::get_Condition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine_Transition*>(),
                        {"get_Condition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*>(this, ___internal_method);
}
inline ::GorillaTagScripts::AI::IState* GorillaTagScripts::AI::StateMachine_Transition::get_To()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine_Transition*>(),
                        {"get_To", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::AI::IState*>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::StateMachine_Transition::_ctor(::GorillaTagScripts::AI::IState*  to, ::System::Func_1<bool>*  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::StateMachine_Transition*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTagScripts::AI::IState*>(), ::i2c::type_of<::System::Func_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, to, condition);
}
inline ::GorillaTagScripts::AI::StateMachine_Transition* GorillaTagScripts::AI::StateMachine_Transition::New_ctor(::GorillaTagScripts::AI::IState*  to, ::System::Func_1<bool>*  condition)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::AI::StateMachine_Transition*>(to, condition));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::AI::StateMachine_Transition::StateMachine_Transition()   {
}
