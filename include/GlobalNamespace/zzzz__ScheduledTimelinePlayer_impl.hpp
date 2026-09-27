#pragma once
// IWYU pragma private; include "GlobalNamespace/ScheduledTimelinePlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScheduledTimelinePlayer_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScheduledTimelinePlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScheduledTimelinePlayer::*)()>(&::GlobalNamespace::ScheduledTimelinePlayer::OnEnable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e06608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScheduledTimelinePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScheduledTimelinePlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScheduledTimelinePlayer::*)()>(&::GlobalNamespace::ScheduledTimelinePlayer::OnDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e066bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScheduledTimelinePlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScheduledTimelinePlayer.HandleScheduledEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScheduledTimelinePlayer::*)()>(&::GlobalNamespace::ScheduledTimelinePlayer::HandleScheduledEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e06718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScheduledTimelinePlayer*>(),
                        {"HandleScheduledEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScheduledTimelinePlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScheduledTimelinePlayer::*)()>(&::GlobalNamespace::ScheduledTimelinePlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e06730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScheduledTimelinePlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::ScheduledTimelinePlayer::__cordl_internal_get_timeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeline;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::ScheduledTimelinePlayer::__cordl_internal_get_timeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeline;
}
constexpr void GlobalNamespace::ScheduledTimelinePlayer::__cordl_internal_set_timeline(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeline = value;
}
constexpr int32_t& GlobalNamespace::ScheduledTimelinePlayer::__cordl_internal_get_eventHour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventHour;
}
constexpr int32_t const& GlobalNamespace::ScheduledTimelinePlayer::__cordl_internal_get_eventHour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventHour;
}
constexpr void GlobalNamespace::ScheduledTimelinePlayer::__cordl_internal_set_eventHour(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventHour = value;
}
constexpr int32_t& GlobalNamespace::ScheduledTimelinePlayer::__cordl_internal_get_scheduledEventID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledEventID;
}
constexpr int32_t const& GlobalNamespace::ScheduledTimelinePlayer::__cordl_internal_get_scheduledEventID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scheduledEventID;
}
constexpr void GlobalNamespace::ScheduledTimelinePlayer::__cordl_internal_set_scheduledEventID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scheduledEventID = value;
}
inline void GlobalNamespace::ScheduledTimelinePlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScheduledTimelinePlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScheduledTimelinePlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScheduledTimelinePlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScheduledTimelinePlayer::HandleScheduledEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScheduledTimelinePlayer*>(),
                        {"HandleScheduledEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScheduledTimelinePlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScheduledTimelinePlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScheduledTimelinePlayer* GlobalNamespace::ScheduledTimelinePlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScheduledTimelinePlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScheduledTimelinePlayer::ScheduledTimelinePlayer()   {
}
