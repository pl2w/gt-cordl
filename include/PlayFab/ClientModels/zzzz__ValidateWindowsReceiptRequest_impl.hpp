#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValidateWindowsReceiptRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ValidateWindowsReceiptRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ValidateWindowsReceiptRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ValidateWindowsReceiptRequest::*)()>(&::PlayFab::ClientModels::ValidateWindowsReceiptRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateWindowsReceiptRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_get_CurrencyCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrencyCode;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_get_CurrencyCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrencyCode;
}
constexpr void PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_set_CurrencyCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrencyCode = value;
}
constexpr uint32_t& PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_get_PurchasePrice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr uint32_t const& PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_get_PurchasePrice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr void PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_set_PurchasePrice(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchasePrice = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_get_Receipt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Receipt;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_get_Receipt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Receipt;
}
constexpr void PlayFab::ClientModels::ValidateWindowsReceiptRequest::__cordl_internal_set_Receipt(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Receipt = value;
}
inline void PlayFab::ClientModels::ValidateWindowsReceiptRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateWindowsReceiptRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ValidateWindowsReceiptRequest* PlayFab::ClientModels::ValidateWindowsReceiptRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ValidateWindowsReceiptRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ValidateWindowsReceiptRequest::ValidateWindowsReceiptRequest()   {
}
