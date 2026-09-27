#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ItemPurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ItemPurchaseRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class ItemPurchaseRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ItemPurchaseRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ItemPurchaseRequest*, "PlayFab.ClientModels", "ItemPurchaseRequest");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ItemPurchaseRequest
class CORDL_TYPE ItemPurchaseRequest : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Annotation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Annotation, put=__cordl_internal_set_Annotation)) ::StringW  Annotation;

/// @brief Field ItemId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemId, put=__cordl_internal_set_ItemId)) ::StringW  ItemId;

/// @brief Field Quantity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Quantity, put=__cordl_internal_set_Quantity)) uint32_t  Quantity;

/// @brief Field UpgradeFromItems, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_UpgradeFromItems, put=__cordl_internal_set_UpgradeFromItems)) ::System::Collections::Generic::List_1<::StringW>*  UpgradeFromItems;

static inline ::PlayFab::ClientModels::ItemPurchaseRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Annotation() const;

constexpr ::StringW& __cordl_internal_get_Annotation() ;

constexpr ::StringW const& __cordl_internal_get_ItemId() const;

constexpr ::StringW& __cordl_internal_get_ItemId() ;

constexpr uint32_t const& __cordl_internal_get_Quantity() const;

constexpr uint32_t& __cordl_internal_get_Quantity() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_UpgradeFromItems() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_UpgradeFromItems() ;

constexpr void __cordl_internal_set_Annotation(::StringW  value) ;

constexpr void __cordl_internal_set_ItemId(::StringW  value) ;

constexpr void __cordl_internal_set_Quantity(uint32_t  value) ;

constexpr void __cordl_internal_set_UpgradeFromItems(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84ded8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ItemPurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ItemPurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ItemPurchaseRequest(ItemPurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ItemPurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ItemPurchaseRequest(ItemPurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20106};

/// @brief Field Annotation, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Annotation;

/// @brief Field ItemId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ItemId;

/// @brief Field Quantity, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___Quantity;

/// @brief Field UpgradeFromItems, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___UpgradeFromItems;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ItemPurchaseRequest, ___Annotation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemPurchaseRequest, ___ItemId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemPurchaseRequest, ___Quantity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemPurchaseRequest, ___UpgradeFromItems) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ItemPurchaseRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
