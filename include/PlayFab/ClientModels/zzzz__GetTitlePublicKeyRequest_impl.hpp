#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTitlePublicKeyRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetTitlePublicKeyRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetTitlePublicKeyRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetTitlePublicKeyRequest::*)()>(&::PlayFab::ClientModels::GetTitlePublicKeyRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTitlePublicKeyRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetTitlePublicKeyRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetTitlePublicKeyRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::GetTitlePublicKeyRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetTitlePublicKeyRequest::__cordl_internal_get_TitleSharedSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleSharedSecret;
}
constexpr ::StringW const& PlayFab::ClientModels::GetTitlePublicKeyRequest::__cordl_internal_get_TitleSharedSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleSharedSecret;
}
constexpr void PlayFab::ClientModels::GetTitlePublicKeyRequest::__cordl_internal_set_TitleSharedSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleSharedSecret = value;
}
inline void PlayFab::ClientModels::GetTitlePublicKeyRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTitlePublicKeyRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetTitlePublicKeyRequest* PlayFab::ClientModels::GetTitlePublicKeyRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetTitlePublicKeyRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetTitlePublicKeyRequest::GetTitlePublicKeyRequest()   {
}
