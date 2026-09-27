#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerTimeEvent.hpp"
#include "GlobalNamespace/zzzz__ServerTimeEvent_EventTime_impl.hpp"
#include "GlobalNamespace/zzzz__TimeEvent_impl.hpp"
#include "GlobalNamespace/zzzz__ServerTimeEvent_def.hpp"
#include "GlobalNamespace/zzzz__ServerTimeEvent_EventTime_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerTimeEvent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerTimeEvent::*)()>(&::GlobalNamespace::ServerTimeEvent::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b2369c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeEvent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerTimeEvent.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerTimeEvent::*)()>(&::GlobalNamespace::ServerTimeEvent::Update)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5b23720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeEvent*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerTimeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerTimeEvent::*)()>(&::GlobalNamespace::ServerTimeEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b2394c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::ServerTimeEvent_EventTime>& GlobalNamespace::ServerTimeEvent::__cordl_internal_get_times()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___times;
}
constexpr ::ArrayW<::GlobalNamespace::ServerTimeEvent_EventTime> const& GlobalNamespace::ServerTimeEvent::__cordl_internal_get_times() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___times;
}
constexpr void GlobalNamespace::ServerTimeEvent::__cordl_internal_set_times(::ArrayW<::GlobalNamespace::ServerTimeEvent_EventTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___times = value;
}
constexpr float_t& GlobalNamespace::ServerTimeEvent::__cordl_internal_get_queryTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queryTime;
}
constexpr float_t const& GlobalNamespace::ServerTimeEvent::__cordl_internal_get_queryTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queryTime;
}
constexpr void GlobalNamespace::ServerTimeEvent::__cordl_internal_set_queryTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queryTime = value;
}
constexpr float_t& GlobalNamespace::ServerTimeEvent::__cordl_internal_get_lastQueryTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQueryTime;
}
constexpr float_t const& GlobalNamespace::ServerTimeEvent::__cordl_internal_get_lastQueryTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastQueryTime;
}
constexpr void GlobalNamespace::ServerTimeEvent::__cordl_internal_set_lastQueryTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastQueryTime = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ServerTimeEvent_EventTime>*& GlobalNamespace::ServerTimeEvent::__cordl_internal_get_eventTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventTimes;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::ServerTimeEvent_EventTime>* const& GlobalNamespace::ServerTimeEvent::__cordl_internal_get_eventTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventTimes;
}
constexpr void GlobalNamespace::ServerTimeEvent::__cordl_internal_set_eventTimes(::System::Collections::Generic::HashSet_1<::GlobalNamespace::ServerTimeEvent_EventTime>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventTimes = value;
}
inline void GlobalNamespace::ServerTimeEvent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeEvent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerTimeEvent::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeEvent*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerTimeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ServerTimeEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ServerTimeEvent* GlobalNamespace::ServerTimeEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ServerTimeEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerTimeEvent::ServerTimeEvent()   {
}
