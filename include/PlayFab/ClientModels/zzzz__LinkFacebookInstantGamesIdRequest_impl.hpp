#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkFacebookInstantGamesIdRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkFacebookInstantGamesIdRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::*)()>(&::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::__cordl_internal_get_FacebookInstantGamesSignature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesSignature;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::__cordl_internal_get_FacebookInstantGamesSignature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesSignature;
}
constexpr void PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::__cordl_internal_set_FacebookInstantGamesSignature(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookInstantGamesSignature = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
inline void PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest* PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkFacebookInstantGamesIdRequest::LinkFacebookInstantGamesIdRequest()   {
}
