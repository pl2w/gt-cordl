#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkOpenIdConnectRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlinkOpenIdConnectRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlinkOpenIdConnectRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlinkOpenIdConnectRequest::*)()>(&::PlayFab::ClientModels::UnlinkOpenIdConnectRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkOpenIdConnectRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UnlinkOpenIdConnectRequest::__cordl_internal_get_ConnectionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlinkOpenIdConnectRequest::__cordl_internal_get_ConnectionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionId;
}
constexpr void PlayFab::ClientModels::UnlinkOpenIdConnectRequest::__cordl_internal_set_ConnectionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionId = value;
}
inline void PlayFab::ClientModels::UnlinkOpenIdConnectRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkOpenIdConnectRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlinkOpenIdConnectRequest* PlayFab::ClientModels::UnlinkOpenIdConnectRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlinkOpenIdConnectRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlinkOpenIdConnectRequest::UnlinkOpenIdConnectRequest()   {
}
