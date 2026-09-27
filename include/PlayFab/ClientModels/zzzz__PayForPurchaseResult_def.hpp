#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PayForPurchaseResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__TransactionStatus_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PayForPurchaseResult)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class PayForPurchaseResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PayForPurchaseResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PayForPurchaseResult*, "PlayFab.ClientModels", "PayForPurchaseResult");
// Dependencies PlayFab.ClientModels.TransactionStatus, PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PayForPurchaseResult
class CORDL_TYPE PayForPurchaseResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field CreditApplied, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_CreditApplied, put=__cordl_internal_set_CreditApplied)) uint32_t  CreditApplied;

/// @brief Field OrderId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrderId, put=__cordl_internal_set_OrderId)) ::StringW  OrderId;

/// @brief Field ProviderData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProviderData, put=__cordl_internal_set_ProviderData)) ::StringW  ProviderData;

/// @brief Field ProviderToken, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProviderToken, put=__cordl_internal_set_ProviderToken)) ::StringW  ProviderToken;

/// @brief Field PurchaseConfirmationPageURL, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseConfirmationPageURL, put=__cordl_internal_set_PurchaseConfirmationPageURL)) ::StringW  PurchaseConfirmationPageURL;

/// @brief Field PurchaseCurrency, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseCurrency, put=__cordl_internal_set_PurchaseCurrency)) ::StringW  PurchaseCurrency;

/// @brief Field PurchasePrice, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_PurchasePrice, put=__cordl_internal_set_PurchasePrice)) uint32_t  PurchasePrice;

/// @brief Field Status, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::System::Nullable_1<::PlayFab::ClientModels::TransactionStatus>  Status;

/// @brief Field VCAmount, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_VCAmount, put=__cordl_internal_set_VCAmount)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  VCAmount;

/// @brief Field VirtualCurrency, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrency, put=__cordl_internal_set_VirtualCurrency)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  VirtualCurrency;

static inline ::PlayFab::ClientModels::PayForPurchaseResult* New_ctor() ;

constexpr uint32_t const& __cordl_internal_get_CreditApplied() const;

constexpr uint32_t& __cordl_internal_get_CreditApplied() ;

constexpr ::StringW const& __cordl_internal_get_OrderId() const;

constexpr ::StringW& __cordl_internal_get_OrderId() ;

constexpr ::StringW const& __cordl_internal_get_ProviderData() const;

constexpr ::StringW& __cordl_internal_get_ProviderData() ;

constexpr ::StringW const& __cordl_internal_get_ProviderToken() const;

constexpr ::StringW& __cordl_internal_get_ProviderToken() ;

constexpr ::StringW const& __cordl_internal_get_PurchaseConfirmationPageURL() const;

constexpr ::StringW& __cordl_internal_get_PurchaseConfirmationPageURL() ;

constexpr ::StringW const& __cordl_internal_get_PurchaseCurrency() const;

constexpr ::StringW& __cordl_internal_get_PurchaseCurrency() ;

constexpr uint32_t const& __cordl_internal_get_PurchasePrice() const;

constexpr uint32_t& __cordl_internal_get_PurchasePrice() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::TransactionStatus> const& __cordl_internal_get_Status() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::TransactionStatus>& __cordl_internal_get_Status() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_VCAmount() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_VCAmount() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_VirtualCurrency() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_VirtualCurrency() ;

constexpr void __cordl_internal_set_CreditApplied(uint32_t  value) ;

constexpr void __cordl_internal_set_OrderId(::StringW  value) ;

constexpr void __cordl_internal_set_ProviderData(::StringW  value) ;

constexpr void __cordl_internal_set_ProviderToken(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseConfirmationPageURL(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseCurrency(::StringW  value) ;

constexpr void __cordl_internal_set_PurchasePrice(uint32_t  value) ;

constexpr void __cordl_internal_set_Status(::System::Nullable_1<::PlayFab::ClientModels::TransactionStatus>  value) ;

constexpr void __cordl_internal_set_VCAmount(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

constexpr void __cordl_internal_set_VirtualCurrency(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84e0f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PayForPurchaseResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PayForPurchaseResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PayForPurchaseResult(PayForPurchaseResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PayForPurchaseResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PayForPurchaseResult(PayForPurchaseResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20175};

/// @brief Field CreditApplied, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___CreditApplied;

/// @brief Field OrderId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___OrderId;

/// @brief Field ProviderData, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ProviderData;

/// @brief Field ProviderToken, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___ProviderToken;

/// @brief Field PurchaseConfirmationPageURL, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___PurchaseConfirmationPageURL;

/// @brief Field PurchaseCurrency, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___PurchaseCurrency;

/// @brief Field PurchasePrice, offset: 0x50, size: 0x4, def value: None
 uint32_t  ___PurchasePrice;

/// @brief Field Status, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::TransactionStatus>  ___Status;

/// @brief Field VCAmount, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___VCAmount;

/// @brief Field VirtualCurrency, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___VirtualCurrency;

/// @brief Size padding 0x70 - 0x78 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___CreditApplied) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___OrderId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___ProviderData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___ProviderToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___PurchaseConfirmationPageURL) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___PurchaseCurrency) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___PurchasePrice) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___Status) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___VCAmount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PayForPurchaseResult, ___VirtualCurrency) == 0x70, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PayForPurchaseResult) == 0x70, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
