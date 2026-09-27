#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StoreItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StoreItem)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class StoreItem;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::StoreItem*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::StoreItem*, "PlayFab.ClientModels", "StoreItem");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.StoreItem
class CORDL_TYPE StoreItem : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field CustomData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomData, put=__cordl_internal_set_CustomData)) ::System::Object*  CustomData;

/// @brief Field DisplayPosition, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_DisplayPosition, put=__cordl_internal_set_DisplayPosition)) ::System::Nullable_1<uint32_t>  DisplayPosition;

/// @brief Field ItemId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemId, put=__cordl_internal_set_ItemId)) ::StringW  ItemId;

/// @brief Field RealCurrencyPrices, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RealCurrencyPrices, put=__cordl_internal_set_RealCurrencyPrices)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  RealCurrencyPrices;

/// @brief Field VirtualCurrencyPrices, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrencyPrices, put=__cordl_internal_set_VirtualCurrencyPrices)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  VirtualCurrencyPrices;

static inline ::PlayFab::ClientModels::StoreItem* New_ctor() ;

constexpr ::System::Object* const& __cordl_internal_get_CustomData() const;

constexpr ::System::Object*& __cordl_internal_get_CustomData() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_DisplayPosition() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_DisplayPosition() ;

constexpr ::StringW const& __cordl_internal_get_ItemId() const;

constexpr ::StringW& __cordl_internal_get_ItemId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_RealCurrencyPrices() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_RealCurrencyPrices() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_VirtualCurrencyPrices() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_VirtualCurrencyPrices() ;

constexpr void __cordl_internal_set_CustomData(::System::Object*  value) ;

constexpr void __cordl_internal_set_DisplayPosition(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_ItemId(::StringW  value) ;

constexpr void __cordl_internal_set_RealCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

constexpr void __cordl_internal_set_VirtualCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84e298, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreItem(StoreItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreItem(StoreItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20231};

/// @brief Field CustomData, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___CustomData;

/// @brief Field DisplayPosition, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___DisplayPosition;

/// @brief Field ItemId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ItemId;

/// @brief Field RealCurrencyPrices, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___RealCurrencyPrices;

/// @brief Field VirtualCurrencyPrices, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___VirtualCurrencyPrices;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::StoreItem, ___CustomData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StoreItem, ___DisplayPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StoreItem, ___ItemId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StoreItem, ___RealCurrencyPrices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StoreItem, ___VirtualCurrencyPrices) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::StoreItem) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
