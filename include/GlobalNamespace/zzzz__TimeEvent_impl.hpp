#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeEvent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimeEvent_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeEvent.StartEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeEvent::*)()>(&::GlobalNamespace::TimeEvent::StartEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b23910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeEvent*>(),
                        {"StartEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeEvent.StopEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeEvent::*)()>(&::GlobalNamespace::TimeEvent::StopEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b23930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeEvent*>(),
                        {"StopEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeEvent::*)()>(&::GlobalNamespace::TimeEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2395c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TimeEvent::__cordl_internal_get_onEventStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEventStart;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TimeEvent::__cordl_internal_get_onEventStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEventStart;
}
constexpr void GlobalNamespace::TimeEvent::__cordl_internal_set_onEventStart(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEventStart = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TimeEvent::__cordl_internal_get_onEventStop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEventStop;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TimeEvent::__cordl_internal_get_onEventStop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEventStop;
}
constexpr void GlobalNamespace::TimeEvent::__cordl_internal_set_onEventStop(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEventStop = value;
}
constexpr bool& GlobalNamespace::TimeEvent::__cordl_internal_get__ongoing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ongoing;
}
constexpr bool const& GlobalNamespace::TimeEvent::__cordl_internal_get__ongoing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ongoing;
}
constexpr void GlobalNamespace::TimeEvent::__cordl_internal_set__ongoing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ongoing = value;
}
inline void GlobalNamespace::TimeEvent::StartEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeEvent*>(),
                        {"StartEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeEvent::StopEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeEvent*>(),
                        {"StopEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimeEvent* GlobalNamespace::TimeEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimeEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeEvent::TimeEvent()   {
}
