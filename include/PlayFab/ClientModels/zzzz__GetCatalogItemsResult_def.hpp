#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCatalogItemsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetCatalogItemsResult)
namespace PlayFab::ClientModels {
class CatalogItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetCatalogItemsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetCatalogItemsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetCatalogItemsResult*, "PlayFab.ClientModels", "GetCatalogItemsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetCatalogItemsResult
class CORDL_TYPE GetCatalogItemsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Catalog, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Catalog, put=__cordl_internal_set_Catalog)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*  Catalog;

static inline ::PlayFab::ClientModels::GetCatalogItemsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>* const& __cordl_internal_get_Catalog() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*& __cordl_internal_get_Catalog() ;

constexpr void __cordl_internal_set_Catalog(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*  value) ;

/// @brief Method .ctor, addr 0xa84dbe0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetCatalogItemsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetCatalogItemsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetCatalogItemsResult(GetCatalogItemsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetCatalogItemsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetCatalogItemsResult(GetCatalogItemsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20011};

/// @brief Field Catalog, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*  ___Catalog;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetCatalogItemsResult, ___Catalog) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetCatalogItemsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
