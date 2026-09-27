#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPhotonAuthenticationTokenResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPhotonAuthenticationTokenResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult::*)()>(&::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetPhotonAuthenticationTokenResult::__cordl_internal_get_PhotonCustomAuthenticationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhotonCustomAuthenticationToken;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPhotonAuthenticationTokenResult::__cordl_internal_get_PhotonCustomAuthenticationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PhotonCustomAuthenticationToken;
}
constexpr void PlayFab::ClientModels::GetPhotonAuthenticationTokenResult::__cordl_internal_set_PhotonCustomAuthenticationToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PhotonCustomAuthenticationToken = value;
}
inline void PlayFab::ClientModels::GetPhotonAuthenticationTokenResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult* PlayFab::ClientModels::GetPhotonAuthenticationTokenResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPhotonAuthenticationTokenResult::GetPhotonAuthenticationTokenResult()   {
}
