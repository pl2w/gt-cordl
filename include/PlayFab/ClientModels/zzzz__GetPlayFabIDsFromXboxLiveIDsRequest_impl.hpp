#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromXboxLiveIDsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayFabIDsFromXboxLiveIDsRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::*)()>(&::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::__cordl_internal_get_Sandbox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sandbox;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::__cordl_internal_get_Sandbox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sandbox;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::__cordl_internal_set_Sandbox(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sandbox = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::__cordl_internal_get_XboxLiveAccountIDs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxLiveAccountIDs;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::__cordl_internal_get_XboxLiveAccountIDs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxLiveAccountIDs;
}
constexpr void PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::__cordl_internal_set_XboxLiveAccountIDs(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XboxLiveAccountIDs = value;
}
inline void PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest* PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest()   {
}
