#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkTwitchAccountRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkTwitchAccountRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkTwitchAccountRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkTwitchAccountRequest::*)()>(&::PlayFab::ClientModels::LinkTwitchAccountRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkTwitchAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LinkTwitchAccountRequest::__cordl_internal_get_AccessToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccessToken;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkTwitchAccountRequest::__cordl_internal_get_AccessToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccessToken;
}
constexpr void PlayFab::ClientModels::LinkTwitchAccountRequest::__cordl_internal_set_AccessToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AccessToken = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkTwitchAccountRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkTwitchAccountRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkTwitchAccountRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
inline void PlayFab::ClientModels::LinkTwitchAccountRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkTwitchAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkTwitchAccountRequest* PlayFab::ClientModels::LinkTwitchAccountRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkTwitchAccountRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkTwitchAccountRequest::LinkTwitchAccountRequest()   {
}
