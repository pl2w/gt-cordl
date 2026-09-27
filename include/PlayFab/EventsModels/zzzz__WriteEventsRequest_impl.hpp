#pragma once
// IWYU pragma private; include "PlayFab/EventsModels/WriteEventsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/EventsModels/zzzz__WriteEventsRequest_def.hpp"
#include "PlayFab/EventsModels/zzzz__EventContents_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::EventsModels::WriteEventsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::EventsModels::WriteEventsRequest::*)()>(&::PlayFab::EventsModels::WriteEventsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::EventsModels::WriteEventsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>*& PlayFab::EventsModels::WriteEventsRequest::__cordl_internal_get_Events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>* const& PlayFab::EventsModels::WriteEventsRequest::__cordl_internal_get_Events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Events;
}
constexpr void PlayFab::EventsModels::WriteEventsRequest::__cordl_internal_set_Events(::System::Collections::Generic::List_1<::PlayFab::EventsModels::EventContents*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Events = value;
}
inline void PlayFab::EventsModels::WriteEventsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::EventsModels::WriteEventsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::EventsModels::WriteEventsRequest* PlayFab::EventsModels::WriteEventsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::EventsModels::WriteEventsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::EventsModels::WriteEventsRequest::WriteEventsRequest()   {
}
