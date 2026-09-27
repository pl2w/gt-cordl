#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkOpenIdConnectRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkOpenIdConnectRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkOpenIdConnectRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkOpenIdConnectRequest::*)()>(&::PlayFab::ClientModels::LinkOpenIdConnectRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkOpenIdConnectRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LinkOpenIdConnectRequest::__cordl_internal_get_ConnectionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionId;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkOpenIdConnectRequest::__cordl_internal_get_ConnectionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionId;
}
constexpr void PlayFab::ClientModels::LinkOpenIdConnectRequest::__cordl_internal_set_ConnectionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionId = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkOpenIdConnectRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkOpenIdConnectRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkOpenIdConnectRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkOpenIdConnectRequest::__cordl_internal_get_IdToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IdToken;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkOpenIdConnectRequest::__cordl_internal_get_IdToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IdToken;
}
constexpr void PlayFab::ClientModels::LinkOpenIdConnectRequest::__cordl_internal_set_IdToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IdToken = value;
}
inline void PlayFab::ClientModels::LinkOpenIdConnectRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkOpenIdConnectRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkOpenIdConnectRequest* PlayFab::ClientModels::LinkOpenIdConnectRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkOpenIdConnectRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkOpenIdConnectRequest::LinkOpenIdConnectRequest()   {
}
