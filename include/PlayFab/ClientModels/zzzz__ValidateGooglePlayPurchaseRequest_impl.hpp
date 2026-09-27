#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValidateGooglePlayPurchaseRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ValidateGooglePlayPurchaseRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::*)()>(&::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_CurrencyCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrencyCode;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_CurrencyCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrencyCode;
}
constexpr void PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_set_CurrencyCode(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrencyCode = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_PurchasePrice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_PurchasePrice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr void PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_set_PurchasePrice(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchasePrice = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_ReceiptJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiptJson;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_ReceiptJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiptJson;
}
constexpr void PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_set_ReceiptJson(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiptJson = value;
}
constexpr ::StringW& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_Signature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Signature;
}
constexpr ::StringW const& PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_get_Signature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Signature;
}
constexpr void PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::__cordl_internal_set_Signature(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Signature = value;
}
inline void PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest* PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest::ValidateGooglePlayPurchaseRequest()   {
}
