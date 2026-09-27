#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkGoogleAccountRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlinkGoogleAccountRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlinkGoogleAccountRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlinkGoogleAccountRequest::*)()>(&::PlayFab::ClientModels::UnlinkGoogleAccountRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkGoogleAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::UnlinkGoogleAccountRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkGoogleAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlinkGoogleAccountRequest* PlayFab::ClientModels::UnlinkGoogleAccountRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlinkGoogleAccountRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlinkGoogleAccountRequest::UnlinkGoogleAccountRequest()   {
}
