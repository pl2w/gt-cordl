#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PurchaseReceiptFulfillment.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PurchaseReceiptFulfillment_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PurchaseReceiptFulfillment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PurchaseReceiptFulfillment::*)()>(&::PlayFab::ClientModels::PurchaseReceiptFulfillment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_get_FulfilledItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FulfilledItems;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_get_FulfilledItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FulfilledItems;
}
constexpr void PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_set_FulfilledItems(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FulfilledItems = value;
}
constexpr ::StringW& PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_get_RecordedPriceSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordedPriceSource;
}
constexpr ::StringW const& PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_get_RecordedPriceSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordedPriceSource;
}
constexpr void PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_set_RecordedPriceSource(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordedPriceSource = value;
}
constexpr ::StringW& PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_get_RecordedTransactionCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordedTransactionCurrency;
}
constexpr ::StringW const& PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_get_RecordedTransactionCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordedTransactionCurrency;
}
constexpr void PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_set_RecordedTransactionCurrency(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordedTransactionCurrency = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_get_RecordedTransactionTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordedTransactionTotal;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_get_RecordedTransactionTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RecordedTransactionTotal;
}
constexpr void PlayFab::ClientModels::PurchaseReceiptFulfillment::__cordl_internal_set_RecordedTransactionTotal(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RecordedTransactionTotal = value;
}
inline void PlayFab::ClientModels::PurchaseReceiptFulfillment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PurchaseReceiptFulfillment* PlayFab::ClientModels::PurchaseReceiptFulfillment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PurchaseReceiptFulfillment::PurchaseReceiptFulfillment()   {
}
