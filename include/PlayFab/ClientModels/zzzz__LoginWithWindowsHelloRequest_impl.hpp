#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginWithWindowsHelloRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LoginWithWindowsHelloRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoRequestParams_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LoginWithWindowsHelloRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LoginWithWindowsHelloRequest::*)()>(&::PlayFab::ClientModels::LoginWithWindowsHelloRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithWindowsHelloRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_get_ChallengeSignature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChallengeSignature;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_get_ChallengeSignature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ChallengeSignature;
}
constexpr void PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_set_ChallengeSignature(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ChallengeSignature = value;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_get_InfoRequestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_get_InfoRequestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoRequestParameters;
}
constexpr void PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoRequestParameters = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_get_PublicKeyHint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKeyHint;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_get_PublicKeyHint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKeyHint;
}
constexpr void PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_set_PublicKeyHint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PublicKeyHint = value;
}
constexpr ::StringW& PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::LoginWithWindowsHelloRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ClientModels::LoginWithWindowsHelloRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LoginWithWindowsHelloRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LoginWithWindowsHelloRequest* PlayFab::ClientModels::LoginWithWindowsHelloRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LoginWithWindowsHelloRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LoginWithWindowsHelloRequest::LoginWithWindowsHelloRequest()   {
}
