#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegisterWithWindowsHelloRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RegisterWithWindowsHelloRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequestParams_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RegisterWithWindowsHelloRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RegisterWithWindowsHelloRequest::*)()>(&::PlayFab::ClientModels::RegisterWithWindowsHelloRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegisterWithWindowsHelloRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_DeviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceName;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_DeviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceName;
}
constexpr void PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_set_DeviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceName = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_EncryptedRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_EncryptedRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptedRequest;
}
constexpr void PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_set_EncryptedRequest(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptedRequest = value;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_InfoRequestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_InfoRequestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr void PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoRequestParameters = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_PlayerSecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_PlayerSecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerSecret;
}
constexpr void PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_set_PlayerSecret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerSecret = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_PublicKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKey;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_PublicKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKey;
}
constexpr void PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_set_PublicKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PublicKey = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_UserName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserName;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_get_UserName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserName;
}
constexpr void PlayFab::ClientModels::RegisterWithWindowsHelloRequest::__cordl_internal_set_UserName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserName = value;
}
inline void PlayFab::ClientModels::RegisterWithWindowsHelloRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegisterWithWindowsHelloRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RegisterWithWindowsHelloRequest* PlayFab::ClientModels::RegisterWithWindowsHelloRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RegisterWithWindowsHelloRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RegisterWithWindowsHelloRequest::RegisterWithWindowsHelloRequest()   {
}
