#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPaymentTokenRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPaymentTokenRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPaymentTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPaymentTokenRequest::*)()>(&::PlayFab::ClientModels::GetPaymentTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPaymentTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetPaymentTokenRequest::__cordl_internal_get_TokenProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenProvider;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPaymentTokenRequest::__cordl_internal_get_TokenProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenProvider;
}
constexpr void PlayFab::ClientModels::GetPaymentTokenRequest::__cordl_internal_set_TokenProvider(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TokenProvider = value;
}
inline void PlayFab::ClientModels::GetPaymentTokenRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPaymentTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPaymentTokenRequest* PlayFab::ClientModels::GetPaymentTokenRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPaymentTokenRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPaymentTokenRequest::GetPaymentTokenRequest()   {
}
