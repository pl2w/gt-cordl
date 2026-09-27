#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/TestScheduledEventSeenToggleButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__TestScheduledEventSeenToggleButton_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::*)()>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::Start)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ca276c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(),
                    {::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::*)()>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::Update)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ca28bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::*)()>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ca2900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(),
                    {::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton.RefreshFromPrefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::*)()>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::RefreshFromPrefs)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ca27a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(),
                        {"RefreshFromPrefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::*)()>(&::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca2a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::__cordl_internal_get_nextPollTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPollTime;
}
constexpr float_t const& GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::__cordl_internal_get_nextPollTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPollTime;
}
constexpr void GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::__cordl_internal_set_nextPollTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPollTime = value;
}
inline void GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::RefreshFromPrefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(),
                        {"RefreshFromPrefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton* GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::TestScheduledEventSeenToggleButton::TestScheduledEventSeenToggleButton()   {
}
