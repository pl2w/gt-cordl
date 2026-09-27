#pragma once
// IWYU pragma private; include "PlayFab/AuthenticationModels/ValidateEntityTokenRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/AuthenticationModels/zzzz__ValidateEntityTokenRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::AuthenticationModels::ValidateEntityTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::AuthenticationModels::ValidateEntityTokenRequest::*)()>(&::PlayFab::AuthenticationModels::ValidateEntityTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::AuthenticationModels::ValidateEntityTokenRequest::__cordl_internal_get_EntityToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr ::StringW const& PlayFab::AuthenticationModels::ValidateEntityTokenRequest::__cordl_internal_get_EntityToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr void PlayFab::AuthenticationModels::ValidateEntityTokenRequest::__cordl_internal_set_EntityToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityToken = value;
}
inline void PlayFab::AuthenticationModels::ValidateEntityTokenRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::AuthenticationModels::ValidateEntityTokenRequest* PlayFab::AuthenticationModels::ValidateEntityTokenRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::AuthenticationModels::ValidateEntityTokenRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::AuthenticationModels::ValidateEntityTokenRequest::ValidateEntityTokenRequest()   {
}
