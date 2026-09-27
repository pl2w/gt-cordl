#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventControlledObject.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventControlledObject_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventPhase_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c9ea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::OnDestroy)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c9ebac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject.MatchesPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::*)(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::MatchesPhase)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c9ece8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>(),
                        {"MatchesPhase", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::*)()>(&::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9ed3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_get_enableBefore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableBefore;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_get_enableBefore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableBefore;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_set_enableBefore(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableBefore = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_get_enableDuring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDuring;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_get_enableDuring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableDuring;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_set_enableDuring(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableDuring = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_get_enableAfter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableAfter;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_get_enableAfter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableAfter;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_set_enableAfter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableAfter = value;
}
constexpr bool& GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_get_enableIfNoEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableIfNoEvent;
}
constexpr bool const& GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_get_enableIfNoEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableIfNoEvent;
}
constexpr void GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::__cordl_internal_set_enableIfNoEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableIfNoEvent = value;
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::MatchesPhase(::GorillaNetworking::ScheduledEvents::ScheduledEventPhase  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>(),
                        {"MatchesPhase", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, phase);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject* GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventControlledObject::ScheduledEventControlledObject()   {
}
