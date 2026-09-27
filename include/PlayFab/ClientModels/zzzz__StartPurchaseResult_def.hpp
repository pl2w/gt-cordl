#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StartPurchaseResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StartPurchaseResult)
namespace PlayFab::ClientModels {
class CartItem;
}
namespace PlayFab::ClientModels {
class PaymentOption;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class StartPurchaseResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::StartPurchaseResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::StartPurchaseResult*, "PlayFab.ClientModels", "StartPurchaseResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.StartPurchaseResult
class CORDL_TYPE StartPurchaseResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Contents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Contents, put=__cordl_internal_set_Contents)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>*  Contents;

/// @brief Field OrderId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrderId, put=__cordl_internal_set_OrderId)) ::StringW  OrderId;

/// @brief Field PaymentOptions, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PaymentOptions, put=__cordl_internal_set_PaymentOptions)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>*  PaymentOptions;

/// @brief Field VirtualCurrencyBalances, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrencyBalances, put=__cordl_internal_set_VirtualCurrencyBalances)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  VirtualCurrencyBalances;

static inline ::PlayFab::ClientModels::StartPurchaseResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>* const& __cordl_internal_get_Contents() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>*& __cordl_internal_get_Contents() ;

constexpr ::StringW const& __cordl_internal_get_OrderId() const;

constexpr ::StringW& __cordl_internal_get_OrderId() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>* const& __cordl_internal_get_PaymentOptions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>*& __cordl_internal_get_PaymentOptions() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& __cordl_internal_get_VirtualCurrencyBalances() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& __cordl_internal_get_VirtualCurrencyBalances() ;

constexpr void __cordl_internal_set_Contents(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>*  value) ;

constexpr void __cordl_internal_set_OrderId(::StringW  value) ;

constexpr void __cordl_internal_set_PaymentOptions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>*  value) ;

constexpr void __cordl_internal_set_VirtualCurrencyBalances(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84e268, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartPurchaseResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartPurchaseResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StartPurchaseResult(StartPurchaseResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartPurchaseResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartPurchaseResult(StartPurchaseResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20225};

/// @brief Field Contents, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CartItem*>*  ___Contents;

/// @brief Field OrderId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___OrderId;

/// @brief Field PaymentOptions, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PaymentOption*>*  ___PaymentOptions;

/// @brief Field VirtualCurrencyBalances, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  ___VirtualCurrencyBalances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::StartPurchaseResult, ___Contents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartPurchaseResult, ___OrderId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartPurchaseResult, ___PaymentOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartPurchaseResult, ___VirtualCurrencyBalances) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::StartPurchaseResult) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
