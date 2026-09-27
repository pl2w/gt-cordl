#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RestoreIOSPurchasesResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(RestoreIOSPurchasesResult)
namespace PlayFab::ClientModels {
class PurchaseReceiptFulfillment;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class RestoreIOSPurchasesResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RestoreIOSPurchasesResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RestoreIOSPurchasesResult*, "PlayFab.ClientModels", "RestoreIOSPurchasesResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RestoreIOSPurchasesResult
class CORDL_TYPE RestoreIOSPurchasesResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Fulfillments, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Fulfillments, put=__cordl_internal_set_Fulfillments)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*  Fulfillments;

static inline ::PlayFab::ClientModels::RestoreIOSPurchasesResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>* const& __cordl_internal_get_Fulfillments() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*& __cordl_internal_get_Fulfillments() ;

constexpr void __cordl_internal_set_Fulfillments(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*  value) ;

/// @brief Method .ctor, addr 0xa84e1f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RestoreIOSPurchasesResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RestoreIOSPurchasesResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RestoreIOSPurchasesResult(RestoreIOSPurchasesResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RestoreIOSPurchasesResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RestoreIOSPurchasesResult(RestoreIOSPurchasesResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20210};

/// @brief Field Fulfillments, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*  ___Fulfillments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RestoreIOSPurchasesResult, ___Fulfillments) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RestoreIOSPurchasesResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
