#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventActivation.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventActivation_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventActivation_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhase_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::OnEnable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c9df90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation.SubscribeWhenReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::SubscribeWhenReady)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c9e04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"SubscribeWhenReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::Subscribe)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5c9e0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"Subscribe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::OnDisable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c9e430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation.OnPhaseChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::*)(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::OnPhaseChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9e738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"OnPhaseChanged", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation.OnSubphaseChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::*)(int32_t)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::OnSubphaseChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c9e740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"OnSubphaseChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation.ApplyAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::ApplyAll)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c9e3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"ApplyAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c9e848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>& GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::ArrayW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*> const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_set_nodes(::ArrayW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_get_subscribed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribed;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_get_subscribed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribed;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_set_subscribed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribed = value;
}
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase& GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_get_currentPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPhase;
}
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventPhase const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_get_currentPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPhase;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_set_currentPhase(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPhase = value;
}
constexpr int32_t& GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_get_currentSubphase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSubphase;
}
constexpr int32_t const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_get_currentSubphase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSubphase;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::__cordl_internal_set_currentSubphase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSubphase = value;
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaNetworking::ScheduledEvents::ScheduledEventActivation::SubscribeWhenReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"SubscribeWhenReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::Subscribe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"Subscribe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::OnPhaseChanged(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"OnPhaseChanged", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::OnSubphaseChanged(int32_t  subphase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"OnSubphaseChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subphase);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::ApplyAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {"ApplyAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation* GorillaNetworking::ScheduledEvents::ScheduledEventActivation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation::ScheduledEventActivation()   {
}
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::*)(int32_t)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c9e248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9e954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::MoveNext)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5c9e958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9ea50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c9ea58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9ea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation>& GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation> const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::__cordl_internal_set___4__this(::UnityW<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6* GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation__SubscribeWhenReady_d__6::ScheduledEventActivation__SubscribeWhenReady_d__6()   {
}
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget.MatchesPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::*)(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::MatchesPhase)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c9e85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>(),
                        {"MatchesPhase", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::*)(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase, int32_t)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::IsActive)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c9e8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>(),
                        {"IsActive", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::*)(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase, int32_t)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::Apply)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c9e758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>(),
                        {"Apply", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9e94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_enableBefore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableBefore;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_enableBefore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableBefore;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_set_enableBefore(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableBefore = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_enableDuring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDuring;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_enableDuring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDuring;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_set_enableDuring(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableDuring = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_enableAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableAfter;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_enableAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableAfter;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_set_enableAfter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableAfter = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_enableIfNoEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableIfNoEvent;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_enableIfNoEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableIfNoEvent;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_set_enableIfNoEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableIfNoEvent = value;
}
constexpr ::ArrayW<int32_t>& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_duringSubphases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duringSubphases;
}
constexpr ::ArrayW<int32_t> const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_duringSubphases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duringSubphases;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_set_duringSubphases(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duringSubphases = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_onActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onActivate;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_onActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onActivate;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_set_onActivate(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onActivate = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_onDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDeactivate;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_get_onDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onDeactivate;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::__cordl_internal_set_onDeactivate(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onDeactivate = value;
}
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::MatchesPhase(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>(),
                        {"MatchesPhase", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, phase);
}
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::IsActive(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase, int32_t  subphase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>(),
                        {"IsActive", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, phase, subphase);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::Apply(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase, int32_t  subphase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>(),
                        {"Apply", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase, subphase);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget* GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventActivation_ScheduledEventActivationTarget::ScheduledEventActivation_ScheduledEventActivationTarget()   {
}
