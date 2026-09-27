#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithGameCenterRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LoginWithGameCenterRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequestParams_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LoginWithGameCenterRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LoginWithGameCenterRequest::*)()>(&::PlayFab::ClientModels::LoginWithGameCenterRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithGameCenterRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_CreateAccount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateAccount;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_CreateAccount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateAccount;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_CreateAccount(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateAccount = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_EncryptedRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_EncryptedRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_EncryptedRequest(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptedRequest = value;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_InfoRequestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_InfoRequestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoRequestParameters = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_PlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_PlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_PlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerId = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_PlayerSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_PlayerSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_PlayerSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerSecret = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_PublicKeyUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKeyUrl;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_PublicKeyUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKeyUrl;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_PublicKeyUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PublicKeyUrl = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_Salt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Salt;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_Salt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Salt;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_Salt(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Salt = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_Signature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Signature;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_Signature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Signature;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_Signature(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Signature = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_Timestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_Timestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_Timestamp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timestamp = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::LoginWithGameCenterRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ClientModels::LoginWithGameCenterRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithGameCenterRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LoginWithGameCenterRequest* PlayFab::ClientModels::LoginWithGameCenterRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LoginWithGameCenterRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LoginWithGameCenterRequest::LoginWithGameCenterRequest()   {
}
