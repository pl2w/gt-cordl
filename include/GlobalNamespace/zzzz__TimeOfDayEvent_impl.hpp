#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeOfDayEvent.hpp"
#include "GlobalNamespace/zzzz__TimeEvent_impl.hpp"
#include "GlobalNamespace/zzzz__TimeOfDayEvent_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.get_currentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TimeOfDayEvent::*)()>(&::GlobalNamespace::TimeOfDayEvent::get_currentTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b23964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"get_currentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.get_timeStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TimeOfDayEvent::*)()>(&::GlobalNamespace::TimeOfDayEvent::get_timeStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b2396c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"get_timeStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.set_timeStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayEvent::*)(float_t)>(&::GlobalNamespace::TimeOfDayEvent::set_timeStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b23974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"set_timeStart", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.get_timeEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TimeOfDayEvent::*)()>(&::GlobalNamespace::TimeOfDayEvent::get_timeEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b23994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"get_timeEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.set_timeEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayEvent::*)(float_t)>(&::GlobalNamespace::TimeOfDayEvent::set_timeEnd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b2399c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"set_timeEnd", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.get_isOngoing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeOfDayEvent::*)()>(&::GlobalNamespace::TimeOfDayEvent::get_isOngoing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b239bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"get_isOngoing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayEvent::*)()>(&::GlobalNamespace::TimeOfDayEvent::Start)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5b239c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayEvent::*)()>(&::GlobalNamespace::TimeOfDayEvent::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b23b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.UpdateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayEvent::*)()>(&::GlobalNamespace::TimeOfDayEvent::UpdateTime)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b23b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"UpdateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::TimeOfDayEvent*)>(&::GlobalNamespace::TimeOfDayEvent::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b23cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeOfDayEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayEvent::*)()>(&::GlobalNamespace::TimeOfDayEvent::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b23d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__timeStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeStart;
}
constexpr float_t const& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__timeStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeStart;
}
constexpr void GlobalNamespace::TimeOfDayEvent::__cordl_internal_set__timeStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeStart = value;
}
constexpr float_t& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__timeEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeEnd;
}
constexpr float_t const& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__timeEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeEnd;
}
constexpr void GlobalNamespace::TimeOfDayEvent::__cordl_internal_set__timeEnd(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeEnd = value;
}
constexpr float_t& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__currentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTime;
}
constexpr float_t const& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__currentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTime;
}
constexpr void GlobalNamespace::TimeOfDayEvent::__cordl_internal_set__currentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTime = value;
}
constexpr double_t& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__currentSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSeconds;
}
constexpr double_t const& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__currentSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSeconds;
}
constexpr void GlobalNamespace::TimeOfDayEvent::__cordl_internal_set__currentSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSeconds = value;
}
constexpr double_t& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__totalSecondsInRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalSecondsInRange;
}
constexpr double_t const& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__totalSecondsInRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalSecondsInRange;
}
constexpr void GlobalNamespace::TimeOfDayEvent::__cordl_internal_set__totalSecondsInRange(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalSecondsInRange = value;
}
constexpr float_t& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__elapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsed;
}
constexpr float_t const& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__elapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsed;
}
constexpr void GlobalNamespace::TimeOfDayEvent::__cordl_internal_set__elapsed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elapsed = value;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__dayNightManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dayNightManager;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& GlobalNamespace::TimeOfDayEvent::__cordl_internal_get__dayNightManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dayNightManager;
}
constexpr void GlobalNamespace::TimeOfDayEvent::__cordl_internal_set__dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dayNightManager = value;
}
inline float_t GlobalNamespace::TimeOfDayEvent::get_currentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"get_currentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::TimeOfDayEvent::get_timeStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"get_timeStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayEvent::set_timeStart(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"set_timeStart", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TimeOfDayEvent::get_timeEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"get_timeEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayEvent::set_timeEnd(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"set_timeEnd", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TimeOfDayEvent::get_isOngoing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"get_isOngoing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayEvent::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayEvent::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayEvent::UpdateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"UpdateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TimeOfDayEvent::op_Implicit_bool(::GlobalNamespace::TimeOfDayEvent*  ev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::TimeOfDayEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ev);
}
inline void GlobalNamespace::TimeOfDayEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimeOfDayEvent* GlobalNamespace::TimeOfDayEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimeOfDayEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeOfDayEvent::TimeOfDayEvent()   {
}
