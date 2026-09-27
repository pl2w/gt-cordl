#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerCombinedInfoRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequestParams_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerCombinedInfoRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerCombinedInfoRequest::*)()>(&::PlayFab::ClientModels::GetPlayerCombinedInfoRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerCombinedInfoRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& PlayFab::ClientModels::GetPlayerCombinedInfoRequest::__cordl_internal_get_InfoRequestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& PlayFab::ClientModels::GetPlayerCombinedInfoRequest::__cordl_internal_get_InfoRequestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequest::__cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoRequestParameters = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetPlayerCombinedInfoRequest::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPlayerCombinedInfoRequest::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoRequest::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::GetPlayerCombinedInfoRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerCombinedInfoRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerCombinedInfoRequest* PlayFab::ClientModels::GetPlayerCombinedInfoRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerCombinedInfoRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest()   {
}
