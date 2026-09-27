#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CatalogItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CatalogItem)
namespace PlayFab::ClientModels {
class CatalogItemBundleInfo;
}
namespace PlayFab::ClientModels {
class CatalogItemConsumableInfo;
}
namespace PlayFab::ClientModels {
class CatalogItemContainerInfo;
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
class CatalogItem;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CatalogItem*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CatalogItem*, "PlayFab.ClientModels", "CatalogItem");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CatalogItem
class CORDL_TYPE CatalogItem : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Bundle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Bundle, put=__cordl_internal_set_Bundle)) ::PlayFab::ClientModels::CatalogItemBundleInfo*  Bundle;

/// @brief Field CanBecomeCharacter, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_CanBecomeCharacter, put=__cordl_internal_set_CanBecomeCharacter)) bool  CanBecomeCharacter;

/// @brief Field CatalogVersion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field Consumable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Consumable, put=__cordl_internal_set_Consumable)) ::PlayFab::ClientModels::CatalogItemConsumableInfo*  Consumable;

/// @brief Field Container, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Container, put=__cordl_internal_set_Container)) ::PlayFab::ClientModels::CatalogItemContainerInfo*  Container;

/// @brief Field CustomData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomData, put=__cordl_internal_set_CustomData)) ::StringW  CustomData;

/// @brief Field Description, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Description, put=__cordl_internal_set_Description)) ::StringW  Description;

/// @brief Field DisplayName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field InitialLimitedEditionCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_InitialLimitedEditionCount, put=__cordl_internal_set_InitialLimitedEditionCount)) int32_t  InitialLimitedEditionCount;

/// @brief Field IsLimitedEdition, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsLimitedEdition, put=__cordl_internal_set_IsLimitedEdition)) bool  IsLimitedEdition;

/// @brief Field IsStackable, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsStackable, put=__cordl_internal_set_IsStackable)) bool  IsStackable;

/// @brief Field IsTradable, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsTradable, put=__cordl_internal_set_IsTradable)) bool  IsTradable;

/// @brief Field ItemClass, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemClass, put=__cordl_internal_set_ItemClass)) ::StringW  ItemClass;

/// @brief Field ItemId, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemId, put=__cordl_internal_set_ItemId)) ::StringW  ItemId;

/// @brief Field ItemImageUrl, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemImageUrl, put=__cordl_internal_set_ItemImageUrl)) ::StringW  ItemImageUrl;

/// @brief Field RealCurrencyPrices, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_RealCurrencyPrices, put=__cordl_internal_set_RealCurrencyPrices)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  RealCurrencyPrices;

/// @brief Field Tags, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::System::Collections::Generic::List_1<::StringW>*  Tags;

/// @brief Field VirtualCurrencyPrices, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrencyPrices, put=__cordl_internal_set_VirtualCurrencyPrices)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  VirtualCurrencyPrices;

static inline ::PlayFab::ClientModels::CatalogItem* New_ctor() ;

constexpr ::PlayFab::ClientModels::CatalogItemBundleInfo* const& __cordl_internal_get_Bundle() const;

constexpr ::PlayFab::ClientModels::CatalogItemBundleInfo*& __cordl_internal_get_Bundle() ;

constexpr bool const& __cordl_internal_get_CanBecomeCharacter() const;

constexpr bool& __cordl_internal_get_CanBecomeCharacter() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::PlayFab::ClientModels::CatalogItemConsumableInfo* const& __cordl_internal_get_Consumable() const;

constexpr ::PlayFab::ClientModels::CatalogItemConsumableInfo*& __cordl_internal_get_Consumable() ;

constexpr ::PlayFab::ClientModels::CatalogItemContainerInfo* const& __cordl_internal_get_Container() const;

constexpr ::PlayFab::ClientModels::CatalogItemContainerInfo*& __cordl_internal_get_Container() ;

constexpr ::StringW const& __cordl_internal_get_CustomData() const;

constexpr ::StringW& __cordl_internal_get_CustomData() ;

constexpr ::StringW const& __cordl_internal_get_Description() const;

constexpr ::StringW& __cordl_internal_get_Description() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr int32_t const& __cordl_internal_get_InitialLimitedEditionCount() const;

constexpr int32_t& __cordl_internal_get_InitialLimitedEditionCount() ;

constexpr bool const& __cordl_internal_get_IsLimitedEdition() const;

constexpr bool& __cordl_internal_get_IsLimitedEdition() ;

constexpr bool const& __cordl_internal_get_IsStackable() const;

constexpr bool& __cordl_internal_get_IsStackable() ;

constexpr bool const& __cordl_internal_get_IsTradable() const;

constexpr bool& __cordl_internal_get_IsTradable() ;

constexpr ::StringW const& __cordl_internal_get_ItemClass() const;

constexpr ::StringW& __cordl_internal_get_ItemClass() ;

constexpr ::StringW const& __cordl_internal_get_ItemId() const;

constexpr ::StringW& __cordl_internal_get_ItemId() ;

constexpr ::StringW const& __cordl_internal_get_ItemImageUrl() const;

constexpr ::StringW& __cordl_internal_get_ItemImageUrl() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_RealCurrencyPrices() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_RealCurrencyPrices() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Tags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Tags() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_VirtualCurrencyPrices() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_VirtualCurrencyPrices() ;

constexpr void __cordl_internal_set_Bundle(::PlayFab::ClientModels::CatalogItemBundleInfo*  value) ;

constexpr void __cordl_internal_set_CanBecomeCharacter(bool  value) ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_Consumable(::PlayFab::ClientModels::CatalogItemConsumableInfo*  value) ;

constexpr void __cordl_internal_set_Container(::PlayFab::ClientModels::CatalogItemContainerInfo*  value) ;

constexpr void __cordl_internal_set_CustomData(::StringW  value) ;

constexpr void __cordl_internal_set_Description(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_InitialLimitedEditionCount(int32_t  value) ;

constexpr void __cordl_internal_set_IsLimitedEdition(bool  value) ;

constexpr void __cordl_internal_set_IsStackable(bool  value) ;

constexpr void __cordl_internal_set_IsTradable(bool  value) ;

constexpr void __cordl_internal_set_ItemClass(::StringW  value) ;

constexpr void __cordl_internal_set_ItemId(::StringW  value) ;

constexpr void __cordl_internal_set_ItemImageUrl(::StringW  value) ;

constexpr void __cordl_internal_set_RealCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

constexpr void __cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_VirtualCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84da90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CatalogItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CatalogItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CatalogItem(CatalogItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CatalogItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CatalogItem(CatalogItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19962};

/// @brief Field Bundle, offset: 0x10, size: 0x8, def value: None
 ::PlayFab::ClientModels::CatalogItemBundleInfo*  ___Bundle;

/// @brief Field CanBecomeCharacter, offset: 0x18, size: 0x1, def value: None
 bool  ___CanBecomeCharacter;

/// @brief Field CatalogVersion, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field Consumable, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::CatalogItemConsumableInfo*  ___Consumable;

/// @brief Field Container, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::ClientModels::CatalogItemContainerInfo*  ___Container;

/// @brief Field CustomData, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___CustomData;

/// @brief Field Description, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Description;

/// @brief Field DisplayName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field InitialLimitedEditionCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ___InitialLimitedEditionCount;

/// @brief Field IsLimitedEdition, offset: 0x54, size: 0x1, def value: None
 bool  ___IsLimitedEdition;

/// @brief Field IsStackable, offset: 0x55, size: 0x1, def value: None
 bool  ___IsStackable;

/// @brief Field IsTradable, offset: 0x56, size: 0x1, def value: None
 bool  ___IsTradable;

/// @brief Field ItemClass, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___ItemClass;

/// @brief Field ItemId, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___ItemId;

/// @brief Field ItemImageUrl, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___ItemImageUrl;

/// @brief Field RealCurrencyPrices, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___RealCurrencyPrices;

/// @brief Field Tags, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Tags;

/// @brief Field VirtualCurrencyPrices, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___VirtualCurrencyPrices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___Bundle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___CanBecomeCharacter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___CatalogVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___Consumable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___Container) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___CustomData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___Description) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___DisplayName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___InitialLimitedEditionCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___IsLimitedEdition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___IsStackable) == 0x55, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___IsTradable) == 0x56, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___ItemClass) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___ItemId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___ItemImageUrl) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___RealCurrencyPrices) == 0x70, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___Tags) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItem, ___VirtualCurrencyPrices) == 0x80, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CatalogItem) == 0x88, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
