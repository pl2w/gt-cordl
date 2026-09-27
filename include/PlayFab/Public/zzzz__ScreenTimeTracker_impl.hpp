#pragma once
// IWYU pragma private; include "PlayFab/Public/ScreenTimeTracker.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Public/zzzz__ScreenTimeTracker_def.hpp"
#include "PlayFab/EventsModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/EventsModels/zzzz__EventContents_def.hpp"
#include "PlayFab/EventsModels/zzzz__WriteEventsResponse_def.hpp"
#include "PlayFab/Public/zzzz__IScreenTimeTracker_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "PlayFab/zzzz__PlayFabEventsInstanceAPI_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)()>(&::PlayFab::Public::ScreenTimeTracker::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa840f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker.ClientSessionStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)(::StringW, ::StringW, ::StringW)>(&::PlayFab::Public::ScreenTimeTracker::ClientSessionStart)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa8410bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"ClientSessionStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)(bool)>(&::PlayFab::Public::ScreenTimeTracker::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0xa841404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)()>(&::PlayFab::Public::ScreenTimeTracker::Send)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa841840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"Send", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker.EventSentSuccessfulCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)(::PlayFab::EventsModels::WriteEventsResponse*)>(&::PlayFab::Public::ScreenTimeTracker::EventSentSuccessfulCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa841ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"EventSentSuccessfulCallback", {}, {::i2c::type_of<::PlayFab::EventsModels::WriteEventsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker.EventSentErrorCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)(::PlayFab::PlayFabError*)>(&::PlayFab::Public::ScreenTimeTracker::EventSentErrorCallback)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa841ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"EventSentErrorCallback", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)()>(&::PlayFab::Public::ScreenTimeTracker::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa841b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)()>(&::PlayFab::Public::ScreenTimeTracker::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa841b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)()>(&::PlayFab::Public::ScreenTimeTracker::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa841b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::ScreenTimeTracker.OnApplicationQuit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::ScreenTimeTracker::*)()>(&::PlayFab::Public::ScreenTimeTracker::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa841b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Guid& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_focusId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusId;
}
constexpr ::System::Guid const& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_focusId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusId;
}
constexpr void PlayFab::Public::ScreenTimeTracker::__cordl_internal_set_focusId(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusId = value;
}
constexpr ::System::Guid& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_gameSessionID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameSessionID;
}
constexpr ::System::Guid const& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_gameSessionID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameSessionID;
}
constexpr void PlayFab::Public::ScreenTimeTracker::__cordl_internal_set_gameSessionID(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameSessionID = value;
}
constexpr bool& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_initialFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFocus;
}
constexpr bool const& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_initialFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialFocus;
}
constexpr void PlayFab::Public::ScreenTimeTracker::__cordl_internal_set_initialFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialFocus = value;
}
constexpr bool& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_isSending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSending;
}
constexpr bool const& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_isSending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSending;
}
constexpr void PlayFab::Public::ScreenTimeTracker::__cordl_internal_set_isSending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSending = value;
}
constexpr ::System::DateTime& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_focusOffDateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusOffDateTime;
}
constexpr ::System::DateTime const& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_focusOffDateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusOffDateTime;
}
constexpr void PlayFab::Public::ScreenTimeTracker::__cordl_internal_set_focusOffDateTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusOffDateTime = value;
}
constexpr ::System::DateTime& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_focusOnDateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusOnDateTime;
}
constexpr ::System::DateTime const& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_focusOnDateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusOnDateTime;
}
constexpr void PlayFab::Public::ScreenTimeTracker::__cordl_internal_set_focusOnDateTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusOnDateTime = value;
}
constexpr ::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>*& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_eventsRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventsRequests;
}
constexpr ::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>* const& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_eventsRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventsRequests;
}
constexpr void PlayFab::Public::ScreenTimeTracker::__cordl_internal_set_eventsRequests(::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventsRequests = value;
}
constexpr ::PlayFab::EventsModels::EntityKey*& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_entityKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityKey;
}
constexpr ::PlayFab::EventsModels::EntityKey* const& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_entityKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityKey;
}
constexpr void PlayFab::Public::ScreenTimeTracker::__cordl_internal_set_entityKey(::PlayFab::EventsModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityKey = value;
}
constexpr ::PlayFab::PlayFabEventsInstanceAPI*& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_eventApi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventApi;
}
constexpr ::PlayFab::PlayFabEventsInstanceAPI* const& PlayFab::Public::ScreenTimeTracker::__cordl_internal_get_eventApi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventApi;
}
constexpr void PlayFab::Public::ScreenTimeTracker::__cordl_internal_set_eventApi(::PlayFab::PlayFabEventsInstanceAPI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventApi = value;
}
inline void PlayFab::Public::ScreenTimeTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::ScreenTimeTracker::ClientSessionStart(::StringW  entityId, ::StringW  entityType, ::StringW  playFabUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"ClientSessionStart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityId, entityType, playFabUserId);
}
inline void PlayFab::Public::ScreenTimeTracker::OnApplicationFocus(bool  isFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFocused);
}
inline void PlayFab::Public::ScreenTimeTracker::Send()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"Send", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::ScreenTimeTracker::EventSentSuccessfulCallback(::PlayFab::EventsModels::WriteEventsResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"EventSentSuccessfulCallback", {}, {::i2c::type_of<::PlayFab::EventsModels::WriteEventsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void PlayFab::Public::ScreenTimeTracker::EventSentErrorCallback(::PlayFab::PlayFabError*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"EventSentErrorCallback", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void PlayFab::Public::ScreenTimeTracker::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::ScreenTimeTracker::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::ScreenTimeTracker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::ScreenTimeTracker::OnApplicationQuit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::ScreenTimeTracker*>(),
                        {"OnApplicationQuit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Public::ScreenTimeTracker* PlayFab::Public::ScreenTimeTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Public::ScreenTimeTracker*>());
}
/// @brief Convert operator to "::PlayFab::Public::IScreenTimeTracker"
constexpr  PlayFab::Public::ScreenTimeTracker::operator ::PlayFab::Public::IScreenTimeTracker*() noexcept {
return static_cast<::PlayFab::Public::IScreenTimeTracker*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::Public::IScreenTimeTracker"
constexpr ::PlayFab::Public::IScreenTimeTracker* PlayFab::Public::ScreenTimeTracker::i___PlayFab__Public__IScreenTimeTracker() noexcept {
return static_cast<::PlayFab::Public::IScreenTimeTracker*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Public::ScreenTimeTracker::ScreenTimeTracker()   {
}
