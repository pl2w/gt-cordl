#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValidateIOSReceiptRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ValidateIOSReceiptRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ValidateIOSReceiptRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ValidateIOSReceiptRequest::*)()>(&::PlayFab::ClientModels::ValidateIOSReceiptRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateIOSReceiptRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_get_CurrencyCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrencyCode;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_get_CurrencyCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrencyCode;
}
constexpr void PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_set_CurrencyCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrencyCode = value;
}
constexpr int32_t& PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_get_PurchasePrice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr int32_t const& PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_get_PurchasePrice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr void PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_set_PurchasePrice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchasePrice = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_get_ReceiptData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiptData;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_get_ReceiptData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiptData;
}
constexpr void PlayFab::ClientModels::ValidateIOSReceiptRequest::__cordl_internal_set_ReceiptData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiptData = value;
}
inline void PlayFab::ClientModels::ValidateIOSReceiptRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateIOSReceiptRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ValidateIOSReceiptRequest* PlayFab::ClientModels::ValidateIOSReceiptRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ValidateIOSReceiptRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ValidateIOSReceiptRequest::ValidateIOSReceiptRequest()   {
}
