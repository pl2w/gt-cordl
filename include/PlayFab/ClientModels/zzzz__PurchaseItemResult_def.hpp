#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PurchaseItemResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(PurchaseItemResult)
namespace PlayFab::ClientModels {
class ItemInstance;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class PurchaseItemResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PurchaseItemResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PurchaseItemResult*, "PlayFab.ClientModels", "PurchaseItemResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PurchaseItemResult
class CORDL_TYPE PurchaseItemResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Items, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Items, put=__cordl_internal_set_Items)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  Items;

static inline ::PlayFab::ClientModels::PurchaseItemResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& __cordl_internal_get_Items() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& __cordl_internal_get_Items() ;

constexpr void __cordl_internal_set_Items(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value) ;

/// @brief Method .ctor, addr 0xa84e130, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PurchaseItemResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PurchaseItemResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PurchaseItemResult(PurchaseItemResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PurchaseItemResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PurchaseItemResult(PurchaseItemResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20183};

/// @brief Field Items, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  ___Items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PurchaseItemResult, ___Items) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PurchaseItemResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
