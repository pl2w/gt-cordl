#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RedeemCouponResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(RedeemCouponResult)
namespace PlayFab::ClientModels {
class ItemInstance;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class RedeemCouponResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RedeemCouponResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RedeemCouponResult*, "PlayFab.ClientModels", "RedeemCouponResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RedeemCouponResult
class CORDL_TYPE RedeemCouponResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field GrantedItems, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GrantedItems, put=__cordl_internal_set_GrantedItems)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  GrantedItems;

static inline ::PlayFab::ClientModels::RedeemCouponResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>* const& __cordl_internal_get_GrantedItems() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*& __cordl_internal_get_GrantedItems() ;

constexpr void __cordl_internal_set_GrantedItems(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  value) ;

/// @brief Method .ctor, addr 0xa84e150, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RedeemCouponResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RedeemCouponResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RedeemCouponResult(RedeemCouponResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RedeemCouponResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RedeemCouponResult(RedeemCouponResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20188};

/// @brief Field GrantedItems, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemInstance*>*  ___GrantedItems;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RedeemCouponResult, ___GrantedItems) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RedeemCouponResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
