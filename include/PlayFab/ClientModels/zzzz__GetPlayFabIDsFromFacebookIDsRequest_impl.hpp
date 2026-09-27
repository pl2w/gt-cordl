#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromFacebookIDsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromFacebookIDsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest::__cordl_internal_get_FacebookIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest::__cordl_internal_get_FacebookIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookIDs;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest::__cordl_internal_set_FacebookIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookIDs = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest* PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest()   {
}
