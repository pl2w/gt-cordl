#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PurchaseReceiptFulfillment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PurchaseReceiptFulfillment)
namespace PlayFab::ClientModels {
class ItemInstance;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class PurchaseReceiptFulfillment;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PurchaseReceiptFulfillment*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PurchaseReceiptFulfillment*, "PlayFab.ClientModels", "PurchaseReceiptFulfillment");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PurchaseReceiptFulfillment
class CORDL_TYPE PurchaseReceiptFulfillment : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FulfilledItems, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FulfilledItems, put=__cordl_internal_set_FulfilledItems)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  FulfilledItems;

/// @brief Field RecordedPriceSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordedPriceSource, put=__cordl_internal_set_RecordedPriceSource)) ::StringW  RecordedPriceSource;

/// @brief Field RecordedTransactionCurrency, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordedTransactionCurrency, put=__cordl_internal_set_RecordedTransactionCurrency)) ::StringW  RecordedTransactionCurrency;

/// @brief Field RecordedTransactionTotal, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_RecordedTransactionTotal, put=__cordl_internal_set_RecordedTransactionTotal)) ::System::Nullable_1<uint32_t>  RecordedTransactionTotal;

static inline ::PlayFab::ClientModels::PurchaseReceiptFulfillment* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& __cordl_internal_get_FulfilledItems() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& __cordl_internal_get_FulfilledItems() ;

constexpr ::StringW const& __cordl_internal_get_RecordedPriceSource() const;

constexpr ::StringW& __cordl_internal_get_RecordedPriceSource() ;

constexpr ::StringW const& __cordl_internal_get_RecordedTransactionCurrency() const;

constexpr ::StringW& __cordl_internal_get_RecordedTransactionCurrency() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_RecordedTransactionTotal() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_RecordedTransactionTotal() ;

constexpr void __cordl_internal_set_FulfilledItems(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value) ;

constexpr void __cordl_internal_set_RecordedPriceSource(::StringW  value) ;

constexpr void __cordl_internal_set_RecordedTransactionCurrency(::StringW  value) ;

constexpr void __cordl_internal_set_RecordedTransactionTotal(::System::Nullable_1<uint32_t>  value) ;

/// @brief Method .ctor, addr 0xa84e138, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PurchaseReceiptFulfillment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PurchaseReceiptFulfillment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PurchaseReceiptFulfillment(PurchaseReceiptFulfillment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PurchaseReceiptFulfillment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PurchaseReceiptFulfillment(PurchaseReceiptFulfillment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20184};

/// @brief Field FulfilledItems, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  ___FulfilledItems;

/// @brief Field RecordedPriceSource, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___RecordedPriceSource;

/// @brief Field RecordedTransactionCurrency, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___RecordedTransactionCurrency;

/// @brief Field RecordedTransactionTotal, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___RecordedTransactionTotal;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PurchaseReceiptFulfillment, ___FulfilledItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PurchaseReceiptFulfillment, ___RecordedPriceSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PurchaseReceiptFulfillment, ___RecordedTransactionCurrency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PurchaseReceiptFulfillment, ___RecordedTransactionTotal) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PurchaseReceiptFulfillment) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
