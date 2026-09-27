#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventPhaseListener.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhaseListener_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhaseListener_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhase_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::OnEnable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5ca2254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener.OnEnableDefered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::OnEnableDefered)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ca23a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"OnEnableDefered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener.OnPhaseChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::*)(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::OnPhaseChange)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5ca2438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"OnPhaseChange", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ca2524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener.DebugStartCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::DebugStartCountdown)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ca25e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"DebugStartCountdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca2630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_get__onBefore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onBefore;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_get__onBefore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onBefore;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_set__onBefore(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onBefore = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_get__onDuring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onDuring;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_get__onDuring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onDuring;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_set__onDuring(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onDuring = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_get__onAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAfter;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_get__onAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onAfter;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_set__onAfter(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onAfter = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_get__onNoEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onNoEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_get__onNoEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onNoEvent;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::__cordl_internal_set__onNoEvent(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onNoEvent = value;
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::OnEnableDefered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"OnEnableDefered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::OnPhaseChange(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"OnPhaseChange", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::DebugStartCountdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {"DebugStartCountdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener* GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener::ScheduledEventPhaseListener()   {
}
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::*)(int32_t)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ca2410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ca2638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ca263c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca2724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ca272c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca2764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener>& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener> const& GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5* GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhaseListener__OnEnableDefered_d__5::ScheduledEventPhaseListener__OnEnableDefered_d__5()   {
}
