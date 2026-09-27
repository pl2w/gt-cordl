#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CatalogItemBundleInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CatalogItemBundleInfo)
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
class CatalogItemBundleInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CatalogItemBundleInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CatalogItemBundleInfo*, "PlayFab.ClientModels", "CatalogItemBundleInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CatalogItemBundleInfo
class CORDL_TYPE CatalogItemBundleInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field BundledItems, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BundledItems, put=__cordl_internal_set_BundledItems)) ::System::Collections::Generic::List_1<::StringW>*  BundledItems;

/// @brief Field BundledResultTables, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BundledResultTables, put=__cordl_internal_set_BundledResultTables)) ::System::Collections::Generic::List_1<::StringW>*  BundledResultTables;

/// @brief Field BundledVirtualCurrencies, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BundledVirtualCurrencies, put=__cordl_internal_set_BundledVirtualCurrencies)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  BundledVirtualCurrencies;

static inline ::PlayFab::ClientModels::CatalogItemBundleInfo* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_BundledItems() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_BundledItems() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_BundledResultTables() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_BundledResultTables() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_BundledVirtualCurrencies() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_BundledVirtualCurrencies() ;

constexpr void __cordl_internal_set_BundledItems(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_BundledResultTables(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_BundledVirtualCurrencies(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84da98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CatalogItemBundleInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CatalogItemBundleInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CatalogItemBundleInfo(CatalogItemBundleInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CatalogItemBundleInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CatalogItemBundleInfo(CatalogItemBundleInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19963};

/// @brief Field BundledItems, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___BundledItems;

/// @brief Field BundledResultTables, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___BundledResultTables;

/// @brief Field BundledVirtualCurrencies, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___BundledVirtualCurrencies;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CatalogItemBundleInfo, ___BundledItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItemBundleInfo, ___BundledResultTables) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItemBundleInfo, ___BundledVirtualCurrencies) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CatalogItemBundleInfo) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
