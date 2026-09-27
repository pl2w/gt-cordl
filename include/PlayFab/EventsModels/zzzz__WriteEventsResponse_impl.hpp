#pragma once
// IWYU pragma private; include "PlayFab/EventsModels/WriteEventsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/EventsModels/zzzz__WriteEventsResponse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::EventsModels::WriteEventsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::EventsModels::WriteEventsResponse::*)()>(&::PlayFab::EventsModels::WriteEventsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::EventsModels::WriteEventsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::EventsModels::WriteEventsResponse::__cordl_internal_get_AssignedEventIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssignedEventIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::EventsModels::WriteEventsResponse::__cordl_internal_get_AssignedEventIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AssignedEventIds;
}
constexpr void PlayFab::EventsModels::WriteEventsResponse::__cordl_internal_set_AssignedEventIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AssignedEventIds = value;
}
inline void PlayFab::EventsModels::WriteEventsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::EventsModels::WriteEventsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::EventsModels::WriteEventsResponse* PlayFab::EventsModels::WriteEventsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::EventsModels::WriteEventsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::EventsModels::WriteEventsResponse::WriteEventsResponse()   {
}
