#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithFacebookInstantGamesIdRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LoginWithFacebookInstantGamesIdRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequestParams_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::*)()>(&::PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_CreateAccount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateAccount;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_CreateAccount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateAccount;
}
constexpr void PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_set_CreateAccount(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateAccount = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_EncryptedRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_EncryptedRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr void PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_set_EncryptedRequest(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptedRequest = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_FacebookInstantGamesSignature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesSignature;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_FacebookInstantGamesSignature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesSignature;
}
constexpr void PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_set_FacebookInstantGamesSignature(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookInstantGamesSignature = value;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_InfoRequestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_InfoRequestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr void PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoRequestParameters = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_PlayerSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_PlayerSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr void PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_set_PlayerSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerSecret = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest* PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LoginWithFacebookInstantGamesIdRequest::LoginWithFacebookInstantGamesIdRequest()   {
}
