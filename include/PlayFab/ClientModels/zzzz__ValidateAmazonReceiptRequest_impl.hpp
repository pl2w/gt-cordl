#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValidateAmazonReceiptRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ValidateAmazonReceiptRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ValidateAmazonReceiptRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ValidateAmazonReceiptRequest::*)()>(&::PlayFab::ClientModels::ValidateAmazonReceiptRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateAmazonReceiptRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_CurrencyCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrencyCode;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_CurrencyCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrencyCode;
}
constexpr void PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_set_CurrencyCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrencyCode = value;
}
constexpr int32_t& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_PurchasePrice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr int32_t const& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_PurchasePrice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr void PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_set_PurchasePrice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchasePrice = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_ReceiptId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiptId;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_ReceiptId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiptId;
}
constexpr void PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_set_ReceiptId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiptId = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_UserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_get_UserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr void PlayFab::ClientModels::ValidateAmazonReceiptRequest::__cordl_internal_set_UserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserId = value;
}
inline void PlayFab::ClientModels::ValidateAmazonReceiptRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateAmazonReceiptRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ValidateAmazonReceiptRequest* PlayFab::ClientModels::ValidateAmazonReceiptRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ValidateAmazonReceiptRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ValidateAmazonReceiptRequest::ValidateAmazonReceiptRequest()   {
}
