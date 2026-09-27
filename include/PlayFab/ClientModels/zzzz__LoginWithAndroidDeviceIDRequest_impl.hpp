#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithAndroidDeviceIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LoginWithAndroidDeviceIDRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequestParams_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::*)()>(&::PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_AndroidDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDevice;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_AndroidDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDevice;
}
constexpr void PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_set_AndroidDevice(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AndroidDevice = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_AndroidDeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDeviceId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_AndroidDeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDeviceId;
}
constexpr void PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_set_AndroidDeviceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AndroidDeviceId = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_CreateAccount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateAccount;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_CreateAccount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateAccount;
}
constexpr void PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_set_CreateAccount(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateAccount = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_EncryptedRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_EncryptedRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr void PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_set_EncryptedRequest(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptedRequest = value;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_InfoRequestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_InfoRequestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr void PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoRequestParameters = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_OS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OS;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_OS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OS;
}
constexpr void PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_set_OS(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OS = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_PlayerSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_PlayerSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr void PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_set_PlayerSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerSecret = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest* PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LoginWithAndroidDeviceIDRequest::LoginWithAndroidDeviceIDRequest()   {
}
