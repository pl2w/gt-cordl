#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConfirmPurchaseResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConfirmPurchaseResult)
namespace PlayFab::ClientModels {
class ItemInstance;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class ConfirmPurchaseResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ConfirmPurchaseResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ConfirmPurchaseResult*, "PlayFab.ClientModels", "ConfirmPurchaseResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.DateTime
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ConfirmPurchaseResult
class CORDL_TYPE ConfirmPurchaseResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Items, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Items, put=__cordl_internal_set_Items)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  Items;

/// @brief Field OrderId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrderId, put=__cordl_internal_set_OrderId)) ::StringW  OrderId;

/// @brief Field PurchaseDate, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchaseDate, put=__cordl_internal_set_PurchaseDate)) ::System::DateTime  PurchaseDate;

static inline ::PlayFab::ClientModels::ConfirmPurchaseResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& __cordl_internal_get_Items() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& __cordl_internal_get_Items() ;

constexpr ::StringW const& __cordl_internal_get_OrderId() const;

constexpr ::StringW& __cordl_internal_get_OrderId() ;

constexpr ::System::DateTime const& __cordl_internal_get_PurchaseDate() const;

constexpr ::System::DateTime& __cordl_internal_get_PurchaseDate() ;

constexpr void __cordl_internal_set_Items(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value) ;

constexpr void __cordl_internal_set_OrderId(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseDate(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0xa84dad8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfirmPurchaseResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfirmPurchaseResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfirmPurchaseResult(ConfirmPurchaseResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfirmPurchaseResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfirmPurchaseResult(ConfirmPurchaseResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19972};

/// @brief Field Items, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  ___Items;

/// @brief Field OrderId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___OrderId;

/// @brief Field PurchaseDate, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ___PurchaseDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ConfirmPurchaseResult, ___Items) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ConfirmPurchaseResult, ___OrderId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ConfirmPurchaseResult, ___PurchaseDate) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ConfirmPurchaseResult) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
