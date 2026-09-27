#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/WriteTitleEventRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__WriteTitleEventRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::WriteTitleEventRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::WriteTitleEventRequest::*)()>(&::PlayFab::ClientModels::WriteTitleEventRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::WriteTitleEventRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& PlayFab::ClientModels::WriteTitleEventRequest::__cordl_internal_get_Body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Body;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& PlayFab::ClientModels::WriteTitleEventRequest::__cordl_internal_get_Body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Body;
}
constexpr void PlayFab::ClientModels::WriteTitleEventRequest::__cordl_internal_set_Body(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Body = value;
}
constexpr ::StringW& PlayFab::ClientModels::WriteTitleEventRequest::__cordl_internal_get_EventName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventName;
}
constexpr ::StringW const& PlayFab::ClientModels::WriteTitleEventRequest::__cordl_internal_get_EventName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventName;
}
constexpr void PlayFab::ClientModels::WriteTitleEventRequest::__cordl_internal_set_EventName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventName = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::WriteTitleEventRequest::__cordl_internal_get_Timestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::WriteTitleEventRequest::__cordl_internal_get_Timestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr void PlayFab::ClientModels::WriteTitleEventRequest::__cordl_internal_set_Timestamp(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timestamp = value;
}
inline void PlayFab::ClientModels::WriteTitleEventRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::WriteTitleEventRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::WriteTitleEventRequest* PlayFab::ClientModels::WriteTitleEventRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::WriteTitleEventRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::WriteTitleEventRequest::WriteTitleEventRequest()   {
}
