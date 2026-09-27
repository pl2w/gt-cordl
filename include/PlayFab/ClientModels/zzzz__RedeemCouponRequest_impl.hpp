#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RedeemCouponRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RedeemCouponRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RedeemCouponRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RedeemCouponRequest::*)()>(&::PlayFab::ClientModels::RedeemCouponRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RedeemCouponRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::RedeemCouponRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::RedeemCouponRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::RedeemCouponRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::RedeemCouponRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::RedeemCouponRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::RedeemCouponRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::RedeemCouponRequest::__cordl_internal_get_CouponCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CouponCode;
}
constexpr ::StringW const& PlayFab::ClientModels::RedeemCouponRequest::__cordl_internal_get_CouponCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CouponCode;
}
constexpr void PlayFab::ClientModels::RedeemCouponRequest::__cordl_internal_set_CouponCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CouponCode = value;
}
inline void PlayFab::ClientModels::RedeemCouponRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RedeemCouponRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RedeemCouponRequest* PlayFab::ClientModels::RedeemCouponRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RedeemCouponRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RedeemCouponRequest::RedeemCouponRequest()   {
}
