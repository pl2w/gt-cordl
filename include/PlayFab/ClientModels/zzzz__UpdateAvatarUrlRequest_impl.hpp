#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateAvatarUrlRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UpdateAvatarUrlRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UpdateAvatarUrlRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UpdateAvatarUrlRequest::*)()>(&::PlayFab::ClientModels::UpdateAvatarUrlRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateAvatarUrlRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UpdateAvatarUrlRequest::__cordl_internal_get_ImageUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageUrl;
}
constexpr ::StringW const& PlayFab::ClientModels::UpdateAvatarUrlRequest::__cordl_internal_get_ImageUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageUrl;
}
constexpr void PlayFab::ClientModels::UpdateAvatarUrlRequest::__cordl_internal_set_ImageUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImageUrl = value;
}
inline void PlayFab::ClientModels::UpdateAvatarUrlRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateAvatarUrlRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UpdateAvatarUrlRequest* PlayFab::ClientModels::UpdateAvatarUrlRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UpdateAvatarUrlRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UpdateAvatarUrlRequest::UpdateAvatarUrlRequest()   {
}
