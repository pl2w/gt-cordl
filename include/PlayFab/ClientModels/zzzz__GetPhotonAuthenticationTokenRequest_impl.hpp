#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPhotonAuthenticationTokenRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPhotonAuthenticationTokenRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest::*)()>(&::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest::__cordl_internal_get_PhotonApplicationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhotonApplicationId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest::__cordl_internal_get_PhotonApplicationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhotonApplicationId;
}
constexpr void PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest::__cordl_internal_set_PhotonApplicationId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PhotonApplicationId = value;
}
inline void PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest* PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPhotonAuthenticationTokenRequest::GetPhotonAuthenticationTokenRequest()   {
}
