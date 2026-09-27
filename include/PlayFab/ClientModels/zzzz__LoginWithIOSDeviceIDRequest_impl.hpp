#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithIOSDeviceIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LoginWithIOSDeviceIDRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequestParams_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LoginWithIOSDeviceIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::*)()>(&::PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithIOSDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_CreateAccount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateAccount;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_CreateAccount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreateAccount;
}
constexpr void PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_set_CreateAccount(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreateAccount = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_DeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_DeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceId;
}
constexpr void PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_set_DeviceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceId = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_DeviceModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceModel;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_DeviceModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceModel;
}
constexpr void PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_set_DeviceModel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceModel = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_EncryptedRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_EncryptedRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr void PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_set_EncryptedRequest(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptedRequest = value;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_InfoRequestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_InfoRequestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr void PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoRequestParameters = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_OS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OS;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_OS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OS;
}
constexpr void PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_set_OS(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OS = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_PlayerSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_PlayerSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr void PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_set_PlayerSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerSecret = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithIOSDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LoginWithIOSDeviceIDRequest* PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LoginWithIOSDeviceIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LoginWithIOSDeviceIDRequest::LoginWithIOSDeviceIDRequest()   {
}
