#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SetPlayerSecretRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__SetPlayerSecretRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::SetPlayerSecretRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::SetPlayerSecretRequest::*)()>(&::PlayFab::ClientModels::SetPlayerSecretRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SetPlayerSecretRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::SetPlayerSecretRequest::__cordl_internal_get_EncryptedRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr ::StringW const& PlayFab::ClientModels::SetPlayerSecretRequest::__cordl_internal_get_EncryptedRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr void PlayFab::ClientModels::SetPlayerSecretRequest::__cordl_internal_set_EncryptedRequest(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptedRequest = value;
}
constexpr ::StringW& PlayFab::ClientModels::SetPlayerSecretRequest::__cordl_internal_get_PlayerSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr ::StringW const& PlayFab::ClientModels::SetPlayerSecretRequest::__cordl_internal_get_PlayerSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr void PlayFab::ClientModels::SetPlayerSecretRequest::__cordl_internal_set_PlayerSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerSecret = value;
}
inline void PlayFab::ClientModels::SetPlayerSecretRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SetPlayerSecretRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::SetPlayerSecretRequest* PlayFab::ClientModels::SetPlayerSecretRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::SetPlayerSecretRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::SetPlayerSecretRequest::SetPlayerSecretRequest()   {
}
