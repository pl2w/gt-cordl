#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromTwitchIDsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromTwitchIDsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84ddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest::__cordl_internal_get_TwitchIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwitchIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest::__cordl_internal_get_TwitchIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwitchIds;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest::__cordl_internal_set_TwitchIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwitchIds = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest* PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsRequest::GetPlayFabIDsFromTwitchIDsRequest()   {
}
