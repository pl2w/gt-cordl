#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ItemInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ItemInstance)
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
class ItemInstance;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ItemInstance*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ItemInstance*, "PlayFab.ClientModels", "ItemInstance");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ItemInstance
class CORDL_TYPE ItemInstance : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Annotation, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Annotation, put=__cordl_internal_set_Annotation)) ::StringW  Annotation;

/// @brief Field BundleContents, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BundleContents, put=__cordl_internal_set_BundleContents)) ::System::Collections::Generic::List_1<::StringW>*  BundleContents;

/// @brief Field BundleParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BundleParent, put=__cordl_internal_set_BundleParent)) ::StringW  BundleParent;

/// @brief Field CatalogVersion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field CustomData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomData, put=__cordl_internal_set_CustomData)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  CustomData;

/// @brief Field DisplayName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayName, put=__cordl_internal_set_DisplayName)) ::StringW  DisplayName;

/// @brief Field Expiration, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_Expiration, put=__cordl_internal_set_Expiration)) ::System::Nullable_1<::System::DateTime>  Expiration;

/// @brief Field ItemClass, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemClass, put=__cordl_internal_set_ItemClass)) ::StringW  ItemClass;

/// @brief Field ItemId, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemId, put=__cordl_internal_set_ItemId)) ::StringW  ItemId;

/// @brief Field ItemInstanceId, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemInstanceId, put=__cordl_internal_set_ItemInstanceId)) ::StringW  ItemInstanceId;

/// @brief Field PurchaseDate, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_PurchaseDate, put=__cordl_internal_set_PurchaseDate)) ::System::Nullable_1<::System::DateTime>  PurchaseDate;

/// @brief Field RemainingUses, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_RemainingUses, put=__cordl_internal_set_RemainingUses)) ::System::Nullable_1<int32_t>  RemainingUses;

/// @brief Field UnitCurrency, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnitCurrency, put=__cordl_internal_set_UnitCurrency)) ::StringW  UnitCurrency;

/// @brief Field UnitPrice, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_UnitPrice, put=__cordl_internal_set_UnitPrice)) uint32_t  UnitPrice;

/// @brief Field UsesIncrementedBy, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_UsesIncrementedBy, put=__cordl_internal_set_UsesIncrementedBy)) ::System::Nullable_1<int32_t>  UsesIncrementedBy;

static inline ::PlayFab::ClientModels::ItemInstance* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Annotation() const;

constexpr ::StringW& __cordl_internal_get_Annotation() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_BundleContents() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_BundleContents() ;

constexpr ::StringW const& __cordl_internal_get_BundleParent() const;

constexpr ::StringW& __cordl_internal_get_BundleParent() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_CustomData() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_CustomData() ;

constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

constexpr ::StringW& __cordl_internal_get_DisplayName() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_Expiration() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_Expiration() ;

constexpr ::StringW const& __cordl_internal_get_ItemClass() const;

constexpr ::StringW& __cordl_internal_get_ItemClass() ;

constexpr ::StringW const& __cordl_internal_get_ItemId() const;

constexpr ::StringW& __cordl_internal_get_ItemId() ;

constexpr ::StringW const& __cordl_internal_get_ItemInstanceId() const;

constexpr ::StringW& __cordl_internal_get_ItemInstanceId() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_PurchaseDate() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_PurchaseDate() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_RemainingUses() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_RemainingUses() ;

constexpr ::StringW const& __cordl_internal_get_UnitCurrency() const;

constexpr ::StringW& __cordl_internal_get_UnitCurrency() ;

constexpr uint32_t const& __cordl_internal_get_UnitPrice() const;

constexpr uint32_t& __cordl_internal_get_UnitPrice() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_UsesIncrementedBy() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_UsesIncrementedBy() ;

constexpr void __cordl_internal_set_Annotation(::StringW  value) ;

constexpr void __cordl_internal_set_BundleContents(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_BundleParent(::StringW  value) ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CustomData(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_DisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_Expiration(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_ItemClass(::StringW  value) ;

constexpr void __cordl_internal_set_ItemId(::StringW  value) ;

constexpr void __cordl_internal_set_ItemInstanceId(::StringW  value) ;

constexpr void __cordl_internal_set_PurchaseDate(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_RemainingUses(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_UnitCurrency(::StringW  value) ;

constexpr void __cordl_internal_set_UnitPrice(uint32_t  value) ;

constexpr void __cordl_internal_set_UsesIncrementedBy(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa84ded0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ItemInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ItemInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ItemInstance(ItemInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ItemInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ItemInstance(ItemInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20105};

/// @brief Field Annotation, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Annotation;

/// @brief Field BundleContents, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___BundleContents;

/// @brief Field BundleParent, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___BundleParent;

/// @brief Field CatalogVersion, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field CustomData, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___CustomData;

/// @brief Field DisplayName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___DisplayName;

/// @brief Field Expiration, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___Expiration;

/// @brief Field ItemClass, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___ItemClass;

/// @brief Field ItemId, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___ItemId;

/// @brief Field ItemInstanceId, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___ItemInstanceId;

/// @brief Field PurchaseDate, offset: 0x68, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___PurchaseDate;

/// @brief Field RemainingUses, offset: 0x78, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___RemainingUses;

/// @brief Field UnitCurrency, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___UnitCurrency;

/// @brief Field UnitPrice, offset: 0x90, size: 0x4, def value: None
 uint32_t  ___UnitPrice;

/// @brief Field UsesIncrementedBy, offset: 0x98, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___UsesIncrementedBy;

/// @brief Size padding 0x98 - 0xa8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___Annotation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___BundleContents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___BundleParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___CatalogVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___CustomData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___DisplayName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___Expiration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___ItemClass) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___ItemId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___ItemInstanceId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___PurchaseDate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___RemainingUses) == 0x78, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___UnitCurrency) == 0x88, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___UnitPrice) == 0x90, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ItemInstance, ___UsesIncrementedBy) == 0x98, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ItemInstance) == 0x98, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
