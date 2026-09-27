#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CatalogItemContainerInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CatalogItemContainerInfo)
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
class CatalogItemContainerInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CatalogItemContainerInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CatalogItemContainerInfo*, "PlayFab.ClientModels", "CatalogItemContainerInfo");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CatalogItemContainerInfo
class CORDL_TYPE CatalogItemContainerInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ItemContents, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemContents, put=__cordl_internal_set_ItemContents)) ::System::Collections::Generic::List_1<::StringW>*  ItemContents;

/// @brief Field KeyItemId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyItemId, put=__cordl_internal_set_KeyItemId)) ::StringW  KeyItemId;

/// @brief Field ResultTableContents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResultTableContents, put=__cordl_internal_set_ResultTableContents)) ::System::Collections::Generic::List_1<::StringW>*  ResultTableContents;

/// @brief Field VirtualCurrencyContents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrencyContents, put=__cordl_internal_set_VirtualCurrencyContents)) ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  VirtualCurrencyContents;

static inline ::PlayFab::ClientModels::CatalogItemContainerInfo* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_ItemContents() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ItemContents() ;

constexpr ::StringW const& __cordl_internal_get_KeyItemId() const;

constexpr ::StringW& __cordl_internal_get_KeyItemId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_ResultTableContents() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ResultTableContents() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& __cordl_internal_get_VirtualCurrencyContents() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& __cordl_internal_get_VirtualCurrencyContents() ;

constexpr void __cordl_internal_set_ItemContents(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_KeyItemId(::StringW  value) ;

constexpr void __cordl_internal_set_ResultTableContents(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_VirtualCurrencyContents(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value) ;

/// @brief Method .ctor, addr 0xa84daa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CatalogItemContainerInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CatalogItemContainerInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CatalogItemContainerInfo(CatalogItemContainerInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CatalogItemContainerInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CatalogItemContainerInfo(CatalogItemContainerInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19965};

/// @brief Field ItemContents, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___ItemContents;

/// @brief Field KeyItemId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___KeyItemId;

/// @brief Field ResultTableContents, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___ResultTableContents;

/// @brief Field VirtualCurrencyContents, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  ___VirtualCurrencyContents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CatalogItemContainerInfo, ___ItemContents) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItemContainerInfo, ___KeyItemId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItemContainerInfo, ___ResultTableContents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CatalogItemContainerInfo, ___VirtualCurrencyContents) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CatalogItemContainerInfo) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
