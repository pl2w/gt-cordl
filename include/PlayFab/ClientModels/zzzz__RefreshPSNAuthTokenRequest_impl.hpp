#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RefreshPSNAuthTokenRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RefreshPSNAuthTokenRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RefreshPSNAuthTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RefreshPSNAuthTokenRequest::*)()>(&::PlayFab::ClientModels::RefreshPSNAuthTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RefreshPSNAuthTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::RefreshPSNAuthTokenRequest::__cordl_internal_get_AuthCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthCode;
}
constexpr ::StringW const& PlayFab::ClientModels::RefreshPSNAuthTokenRequest::__cordl_internal_get_AuthCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthCode;
}
constexpr void PlayFab::ClientModels::RefreshPSNAuthTokenRequest::__cordl_internal_set_AuthCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthCode = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::RefreshPSNAuthTokenRequest::__cordl_internal_get_IssuerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IssuerId;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::RefreshPSNAuthTokenRequest::__cordl_internal_get_IssuerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IssuerId;
}
constexpr void PlayFab::ClientModels::RefreshPSNAuthTokenRequest::__cordl_internal_set_IssuerId(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IssuerId = value;
}
constexpr ::StringW& PlayFab::ClientModels::RefreshPSNAuthTokenRequest::__cordl_internal_get_RedirectUri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RedirectUri;
}
constexpr ::StringW const& PlayFab::ClientModels::RefreshPSNAuthTokenRequest::__cordl_internal_get_RedirectUri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RedirectUri;
}
constexpr void PlayFab::ClientModels::RefreshPSNAuthTokenRequest::__cordl_internal_set_RedirectUri(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RedirectUri = value;
}
inline void PlayFab::ClientModels::RefreshPSNAuthTokenRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RefreshPSNAuthTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RefreshPSNAuthTokenRequest* PlayFab::ClientModels::RefreshPSNAuthTokenRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RefreshPSNAuthTokenRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RefreshPSNAuthTokenRequest::RefreshPSNAuthTokenRequest()   {
}
