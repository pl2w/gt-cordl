#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetWindowsHelloChallengeRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetWindowsHelloChallengeRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetWindowsHelloChallengeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetWindowsHelloChallengeRequest::*)()>(&::PlayFab::ClientModels::GetWindowsHelloChallengeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetWindowsHelloChallengeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetWindowsHelloChallengeRequest::__cordl_internal_get_PublicKeyHint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKeyHint;
}
constexpr ::StringW const& PlayFab::ClientModels::GetWindowsHelloChallengeRequest::__cordl_internal_get_PublicKeyHint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKeyHint;
}
constexpr void PlayFab::ClientModels::GetWindowsHelloChallengeRequest::__cordl_internal_set_PublicKeyHint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PublicKeyHint = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetWindowsHelloChallengeRequest::__cordl_internal_get_TitleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetWindowsHelloChallengeRequest::__cordl_internal_get_TitleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitleId;
}
constexpr void PlayFab::ClientModels::GetWindowsHelloChallengeRequest::__cordl_internal_set_TitleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitleId = value;
}
inline void PlayFab::ClientModels::GetWindowsHelloChallengeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetWindowsHelloChallengeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetWindowsHelloChallengeRequest* PlayFab::ClientModels::GetWindowsHelloChallengeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetWindowsHelloChallengeRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetWindowsHelloChallengeRequest::GetWindowsHelloChallengeRequest()   {
}
