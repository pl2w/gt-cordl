#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkTwitchAccountRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlinkTwitchAccountRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlinkTwitchAccountRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlinkTwitchAccountRequest::*)()>(&::PlayFab::ClientModels::UnlinkTwitchAccountRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkTwitchAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UnlinkTwitchAccountRequest::__cordl_internal_get_AccessToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccessToken;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlinkTwitchAccountRequest::__cordl_internal_get_AccessToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccessToken;
}
constexpr void PlayFab::ClientModels::UnlinkTwitchAccountRequest::__cordl_internal_set_AccessToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AccessToken = value;
}
inline void PlayFab::ClientModels::UnlinkTwitchAccountRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkTwitchAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlinkTwitchAccountRequest* PlayFab::ClientModels::UnlinkTwitchAccountRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlinkTwitchAccountRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlinkTwitchAccountRequest::UnlinkTwitchAccountRequest()   {
}
