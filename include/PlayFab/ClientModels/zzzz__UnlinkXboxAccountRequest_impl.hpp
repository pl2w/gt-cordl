#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkXboxAccountRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlinkXboxAccountRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlinkXboxAccountRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlinkXboxAccountRequest::*)()>(&::PlayFab::ClientModels::UnlinkXboxAccountRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkXboxAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UnlinkXboxAccountRequest::__cordl_internal_get_XboxToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxToken;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlinkXboxAccountRequest::__cordl_internal_get_XboxToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxToken;
}
constexpr void PlayFab::ClientModels::UnlinkXboxAccountRequest::__cordl_internal_set_XboxToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XboxToken = value;
}
inline void PlayFab::ClientModels::UnlinkXboxAccountRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkXboxAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlinkXboxAccountRequest* PlayFab::ClientModels::UnlinkXboxAccountRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlinkXboxAccountRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlinkXboxAccountRequest::UnlinkXboxAccountRequest()   {
}
