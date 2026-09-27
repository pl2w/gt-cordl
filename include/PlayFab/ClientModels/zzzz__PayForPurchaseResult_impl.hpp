#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PayForPurchaseResult.hpp"
#include "PlayFab/ClientModels/zzzz__TransactionStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PayForPurchaseResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PayForPurchaseResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PayForPurchaseResult::*)()>(&::PlayFab::ClientModels::PayForPurchaseResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PayForPurchaseResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_CreditApplied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreditApplied;
}
constexpr uint32_t const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_CreditApplied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreditApplied;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_CreditApplied(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreditApplied = value;
}
constexpr ::StringW& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_OrderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr ::StringW const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_OrderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_OrderId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrderId = value;
}
constexpr ::StringW& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_ProviderData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderData;
}
constexpr ::StringW const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_ProviderData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderData;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_ProviderData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProviderData = value;
}
constexpr ::StringW& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_ProviderToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderToken;
}
constexpr ::StringW const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_ProviderToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderToken;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_ProviderToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProviderToken = value;
}
constexpr ::StringW& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_PurchaseConfirmationPageURL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseConfirmationPageURL;
}
constexpr ::StringW const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_PurchaseConfirmationPageURL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseConfirmationPageURL;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_PurchaseConfirmationPageURL(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseConfirmationPageURL = value;
}
constexpr ::StringW& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_PurchaseCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseCurrency;
}
constexpr ::StringW const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_PurchaseCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseCurrency;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_PurchaseCurrency(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseCurrency = value;
}
constexpr uint32_t& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_PurchasePrice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr uint32_t const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_PurchasePrice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasePrice;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_PurchasePrice(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchasePrice = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::TransactionStatus>& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::TransactionStatus> const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_Status(::System::Nullable_1<::PlayFab::ClientModels::TransactionStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_VCAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VCAmount;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_VCAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VCAmount;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_VCAmount(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VCAmount = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_VirtualCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_get_VirtualCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr void PlayFab::ClientModels::PayForPurchaseResult::__cordl_internal_set_VirtualCurrency(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrency = value;
}
inline void PlayFab::ClientModels::PayForPurchaseResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PayForPurchaseResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PayForPurchaseResult* PlayFab::ClientModels::PayForPurchaseResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PayForPurchaseResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PayForPurchaseResult::PayForPurchaseResult()   {
}
