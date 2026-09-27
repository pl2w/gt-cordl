#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CartItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CartItem)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class CartItem;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CartItem*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CartItem*, "PlayFab.ClientModels", "CartItem");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CartItem
class CORDL_TYPE CartItem : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Description, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Description, put=__cordl_internal_set_Description)) ::StringW  Description;

/// @brief Field DisplayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field ItemClass, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemClass, put=__cordl_internal_set_ItemClass)) ::StringW  ItemClass;

/// @brief Field ItemId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemId, put=__cordl_internal_set_ItemId)) ::StringW  ItemId;

/// @brief Field ItemInstanceId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemInstanceId, put=__cordl_internal_set_ItemInstanceId)) ::StringW  ItemInstanceId;

/// @brief Field RealCurrencyPrices, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_RealCurrencyPrices, put=__cordl_internal_set_RealCurrencyPrices)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  RealCurrencyPrices;

/// @brief Field VCAmount, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_VCAmount, put=__cordl_internal_set_VCAmount)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  VCAmount;

/// @brief Field VirtualCurrencyPrices, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrencyPrices, put=__cordl_internal_set_VirtualCurrencyPrices)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  VirtualCurrencyPrices;

static inline ::PlayFab::ClientModels::CartItem* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Description() const;

constexpr ::StringW& __cordl_internal_get_Description() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::StringW const& __cordl_internal_get_ItemClass() const;

constexpr ::StringW& __cordl_internal_get_ItemClass() ;

constexpr ::StringW const& __cordl_internal_get_ItemId() const;

constexpr ::StringW& __cordl_internal_get_ItemId() ;

constexpr ::StringW const& __cordl_internal_get_ItemInstanceId() const;

constexpr ::StringW& __cordl_internal_get_ItemInstanceId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_RealCurrencyPrices() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_RealCurrencyPrices() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_VCAmount() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_VCAmount() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_VirtualCurrencyPrices() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_VirtualCurrencyPrices() ;

constexpr void __cordl_internal_set_Description(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_ItemClass(::StringW  value) ;

constexpr void __cordl_internal_set_ItemId(::StringW  value) ;

constexpr void __cordl_internal_set_ItemInstanceId(::StringW  value) ;

constexpr void __cordl_internal_set_RealCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

constexpr void __cordl_internal_set_VCAmount(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

constexpr void __cordl_internal_set_VirtualCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84da88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CartItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CartItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CartItem(CartItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CartItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CartItem(CartItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19961};

/// @brief Field Description, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Description;

/// @brief Field DisplayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field ItemClass, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ItemClass;

/// @brief Field ItemId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ItemId;

/// @brief Field ItemInstanceId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ItemInstanceId;

/// @brief Field RealCurrencyPrices, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___RealCurrencyPrices;

/// @brief Field VCAmount, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___VCAmount;

/// @brief Field VirtualCurrencyPrices, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___VirtualCurrencyPrices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CartItem, ___Description) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CartItem, ___DisplayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CartItem, ___ItemClass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CartItem, ___ItemId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CartItem, ___ItemInstanceId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CartItem, ___RealCurrencyPrices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CartItem, ___VCAmount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CartItem, ___VirtualCurrencyPrices) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CartItem) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
