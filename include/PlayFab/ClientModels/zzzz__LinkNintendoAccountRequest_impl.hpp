#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkNintendoAccountRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkNintendoAccountRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkNintendoAccountRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkNintendoAccountRequest::*)()>(&::PlayFab::ClientModels::LinkNintendoAccountRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkNintendoAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkNintendoAccountRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkNintendoAccountRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkNintendoAccountRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkNintendoAccountRequest::__cordl_internal_get_IdentityToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IdentityToken;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkNintendoAccountRequest::__cordl_internal_get_IdentityToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IdentityToken;
}
constexpr void PlayFab::ClientModels::LinkNintendoAccountRequest::__cordl_internal_set_IdentityToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IdentityToken = value;
}
inline void PlayFab::ClientModels::LinkNintendoAccountRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkNintendoAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkNintendoAccountRequest* PlayFab::ClientModels::LinkNintendoAccountRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkNintendoAccountRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkNintendoAccountRequest::LinkNintendoAccountRequest()   {
}
