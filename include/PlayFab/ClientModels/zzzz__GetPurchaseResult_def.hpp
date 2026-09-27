#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPurchaseResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPurchaseResult)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPurchaseResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPurchaseResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPurchaseResult*, "PlayFab.ClientModels", "GetPurchaseResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPurchaseResult
class CORDL_TYPE GetPurchaseResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field OrderId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrderId, put=__cordl_internal_set_OrderId)) ::StringW  OrderId;

/// @brief Field PaymentProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PaymentProvider, put=__cordl_internal_set_PaymentProvider)) ::StringW  PaymentProvider;

/// @brief Field PurchaseDate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseDate, put=__cordl_internal_set_PurchaseDate)) ::System::DateTime  PurchaseDate;

/// @brief Field TransactionId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransactionId, put=__cordl_internal_set_TransactionId)) ::StringW  TransactionId;

/// @brief Field TransactionStatus, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransactionStatus, put=__cordl_internal_set_TransactionStatus)) ::StringW  TransactionStatus;

static inline ::PlayFab::ClientModels::GetPurchaseResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_OrderId() const;

constexpr ::StringW& __cordl_internal_get_OrderId() ;

constexpr ::StringW const& __cordl_internal_get_PaymentProvider() const;

constexpr ::StringW& __cordl_internal_get_PaymentProvider() ;

constexpr ::System::DateTime const& __cordl_internal_get_PurchaseDate() const;

constexpr ::System::DateTime& __cordl_internal_get_PurchaseDate() ;

constexpr ::StringW const& __cordl_internal_get_TransactionId() const;

constexpr ::StringW& __cordl_internal_get_TransactionId() ;

constexpr ::StringW const& __cordl_internal_get_TransactionStatus() const;

constexpr ::StringW& __cordl_internal_get_TransactionStatus() ;

constexpr void __cordl_internal_set_OrderId(::StringW  value) ;

constexpr void __cordl_internal_set_PaymentProvider(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseDate(::System::DateTime  value) ;

constexpr void __cordl_internal_set_TransactionId(::StringW  value) ;

constexpr void __cordl_internal_set_TransactionStatus(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84de08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPurchaseResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPurchaseResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPurchaseResult(GetPurchaseResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPurchaseResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPurchaseResult(GetPurchaseResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20080};

/// @brief Field OrderId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___OrderId;

/// @brief Field PaymentProvider, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PaymentProvider;

/// @brief Field PurchaseDate, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ___PurchaseDate;

/// @brief Field TransactionId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___TransactionId;

/// @brief Field TransactionStatus, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___TransactionStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPurchaseResult, ___OrderId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPurchaseResult, ___PaymentProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPurchaseResult, ___PurchaseDate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPurchaseResult, ___TransactionId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPurchaseResult, ___TransactionStatus) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPurchaseResult) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
