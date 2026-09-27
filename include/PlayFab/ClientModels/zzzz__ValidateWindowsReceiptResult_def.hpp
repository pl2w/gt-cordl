#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValidateWindowsReceiptResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(ValidateWindowsReceiptResult)
namespace PlayFab::ClientModels {
class PurchaseReceiptFulfillment;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class ValidateWindowsReceiptResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ValidateWindowsReceiptResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ValidateWindowsReceiptResult*, "PlayFab.ClientModels", "ValidateWindowsReceiptResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ValidateWindowsReceiptResult
class CORDL_TYPE ValidateWindowsReceiptResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Fulfillments, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Fulfillments, put=__cordl_internal_set_Fulfillments)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*  Fulfillments;

static inline ::PlayFab::ClientModels::ValidateWindowsReceiptResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>* const& __cordl_internal_get_Fulfillments() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*& __cordl_internal_get_Fulfillments() ;

constexpr void __cordl_internal_set_Fulfillments(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*  value) ;

/// @brief Method .ctor, addr 0xa84e540, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidateWindowsReceiptResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidateWindowsReceiptResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidateWindowsReceiptResult(ValidateWindowsReceiptResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidateWindowsReceiptResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidateWindowsReceiptResult(ValidateWindowsReceiptResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20322};

/// @brief Field Fulfillments, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PurchaseReceiptFulfillment*>*  ___Fulfillments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ValidateWindowsReceiptResult, ___Fulfillments) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ValidateWindowsReceiptResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
