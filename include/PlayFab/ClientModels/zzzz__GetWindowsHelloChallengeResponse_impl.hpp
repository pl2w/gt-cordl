#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetWindowsHelloChallengeResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetWindowsHelloChallengeResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetWindowsHelloChallengeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetWindowsHelloChallengeResponse::*)()>(&::PlayFab::ClientModels::GetWindowsHelloChallengeResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84deb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetWindowsHelloChallengeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetWindowsHelloChallengeResponse::__cordl_internal_get_Challenge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Challenge;
}
constexpr ::StringW const& PlayFab::ClientModels::GetWindowsHelloChallengeResponse::__cordl_internal_get_Challenge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Challenge;
}
constexpr void PlayFab::ClientModels::GetWindowsHelloChallengeResponse::__cordl_internal_set_Challenge(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Challenge = value;
}
inline void PlayFab::ClientModels::GetWindowsHelloChallengeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetWindowsHelloChallengeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetWindowsHelloChallengeResponse* PlayFab::ClientModels::GetWindowsHelloChallengeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetWindowsHelloChallengeResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetWindowsHelloChallengeResponse::GetWindowsHelloChallengeResponse()   {
}
