#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventMatchmaking.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventMatchmaking_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "GorillaNetworking/ScheduledEvents/zzzz__ScheduledEventInfo_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking.GracePeriodEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo, ::System::DateTime)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::GracePeriodEnded)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ca1d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"GracePeriodEnded", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking.ResolveCreateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo, ::System::DateTime, bool)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::ResolveCreateState)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ca1e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"ResolveCreateState", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking.ResolveSearchState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo, ::System::DateTime, bool)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::ResolveSearchState)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ca1fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"ResolveSearchState", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking.HasSeenScheduledEventRecently
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::HasSeenScheduledEventRecently)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ca2070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"HasSeenScheduledEventRecently", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking.MarkSeenScheduledEventNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::MarkSeenScheduledEventNow)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ca2194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"MarkSeenScheduledEventNow", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking.ApplyScheduledEventStateToHashes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ExitGames::Client::Photon::Hashtable*, ::by_ref<::ExitGames::Client::Photon::Hashtable*>)>(&::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::ApplyScheduledEventStateToHashes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ca2244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"ApplyScheduledEventStateToHashes", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::by_ref<::ExitGames::Client::Photon::Hashtable*>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::GracePeriodEnded(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo  e, ::System::DateTime  serverNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"GracePeriodEnded", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, e, serverNow);
}
inline ::StringW GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::ResolveCreateState(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo  e, ::System::DateTime  serverNow, bool  creatorSeenRecently)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"ResolveCreateState", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, e, serverNow, creatorSeenRecently);
}
inline ::StringW GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::ResolveSearchState(::GorillaNetworking::ScheduledEvents::ScheduledEventInfo  e, ::System::DateTime  serverNow, bool  joinerSeenRecently)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"ResolveSearchState", {}, {::i2c::type_of<::GorillaNetworking::ScheduledEvents::ScheduledEventInfo>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, e, serverNow, joinerSeenRecently);
}
inline bool GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::HasSeenScheduledEventRecently(::System::DateTime  serverNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"HasSeenScheduledEventRecently", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, serverNow);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::MarkSeenScheduledEventNow(::System::DateTime  serverNow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"MarkSeenScheduledEventNow", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, serverNow);
}
inline void GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::ApplyScheduledEventStateToHashes(::ExitGames::Client::Photon::Hashtable*  createProps, ::by_ref<::ExitGames::Client::Photon::Hashtable*>  searchFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking*>(),
                        {"ApplyScheduledEventStateToHashes", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::by_ref<::ExitGames::Client::Photon::Hashtable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, createProps, searchFilter);
}
// Ctor Parameters []
constexpr ::GorillaNetworking::ScheduledEvents::ScheduledEventMatchmaking::ScheduledEventMatchmaking()   {
}
