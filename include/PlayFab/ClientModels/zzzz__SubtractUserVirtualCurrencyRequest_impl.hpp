#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SubtractUserVirtualCurrencyRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__SubtractUserVirtualCurrencyRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::*)()>(&::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::__cordl_internal_get_Amount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Amount;
}
constexpr int32_t const& PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::__cordl_internal_get_Amount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Amount;
}
constexpr void PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::__cordl_internal_set_Amount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Amount = value;
}
constexpr ::StringW& PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::__cordl_internal_get_VirtualCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr ::StringW const& PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::__cordl_internal_get_VirtualCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr void PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::__cordl_internal_set_VirtualCurrency(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrency = value;
}
inline void PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest* PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest()   {
}
