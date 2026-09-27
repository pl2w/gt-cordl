#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetStoreItemsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ClientModels/zzzz__SourceType_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetStoreItemsResult)
namespace PlayFab::ClientModels {
class StoreItem;
}
namespace PlayFab::ClientModels {
class StoreMarketingModel;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetStoreItemsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetStoreItemsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetStoreItemsResult*, "PlayFab.ClientModels", "GetStoreItemsResult");
// Dependencies PlayFab.ClientModels.SourceType, PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetStoreItemsResult
class CORDL_TYPE GetStoreItemsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field MarketingData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MarketingData, put=__cordl_internal_set_MarketingData)) ::PlayFab::ClientModels::StoreMarketingModel*  MarketingData;

/// @brief Field Source, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::System::Nullable_1<::PlayFab::ClientModels::SourceType>  Source;

/// @brief Field Store, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Store, put=__cordl_internal_set_Store)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StoreItem*>*  Store;

/// @brief Field StoreId, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_StoreId, put=__cordl_internal_set_StoreId)) ::StringW  StoreId;

static inline ::PlayFab::ClientModels::GetStoreItemsResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::PlayFab::ClientModels::StoreMarketingModel* const& __cordl_internal_get_MarketingData() const;

constexpr ::PlayFab::ClientModels::StoreMarketingModel*& __cordl_internal_get_MarketingData() ;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::SourceType> const& __cordl_internal_get_Source() const;

constexpr ::System::Nullable_1<::PlayFab::ClientModels::SourceType>& __cordl_internal_get_Source() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StoreItem*>* const& __cordl_internal_get_Store() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StoreItem*>*& __cordl_internal_get_Store() ;

constexpr ::StringW const& __cordl_internal_get_StoreId() const;

constexpr ::StringW& __cordl_internal_get_StoreId() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_MarketingData(::PlayFab::ClientModels::StoreMarketingModel*  value) ;

constexpr void __cordl_internal_set_Source(::System::Nullable_1<::PlayFab::ClientModels::SourceType>  value) ;

constexpr void __cordl_internal_set_Store(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StoreItem*>*  value) ;

constexpr void __cordl_internal_set_StoreId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84de30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetStoreItemsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetStoreItemsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetStoreItemsResult(GetStoreItemsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetStoreItemsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetStoreItemsResult(GetStoreItemsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20085};

/// @brief Field CatalogVersion, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field MarketingData, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::StoreMarketingModel*  ___MarketingData;

/// @brief Field Source, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ClientModels::SourceType>  ___Source;

/// @brief Field Store, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StoreItem*>*  ___Store;

/// @brief Field StoreId, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___StoreId;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetStoreItemsResult, ___CatalogVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetStoreItemsResult, ___MarketingData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetStoreItemsResult, ___Source) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetStoreItemsResult, ___Store) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetStoreItemsResult, ___StoreId) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetStoreItemsResult) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
