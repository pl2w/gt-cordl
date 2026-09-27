#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StartPurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StartPurchaseRequest)
namespace PlayFab::ClientModels {
class ItemPurchaseRequest;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class StartPurchaseRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::StartPurchaseRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::StartPurchaseRequest*, "PlayFab.ClientModels", "StartPurchaseRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.StartPurchaseRequest
class CORDL_TYPE StartPurchaseRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field Items, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Items, put=__cordl_internal_set_Items)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemPurchaseRequest*>*  Items;

/// @brief Field StoreId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_StoreId, put=__cordl_internal_set_StoreId)) ::StringW  StoreId;

static inline ::PlayFab::ClientModels::StartPurchaseRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemPurchaseRequest*>* const& __cordl_internal_get_Items() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemPurchaseRequest*>*& __cordl_internal_get_Items() ;

constexpr ::StringW const& __cordl_internal_get_StoreId() const;

constexpr ::StringW& __cordl_internal_get_StoreId() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_Items(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemPurchaseRequest*>*  value) ;

constexpr void __cordl_internal_set_StoreId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e260, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartPurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartPurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StartPurchaseRequest(StartPurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartPurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartPurchaseRequest(StartPurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20224};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field Items, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemPurchaseRequest*>*  ___Items;

/// @brief Field StoreId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___StoreId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::StartPurchaseRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartPurchaseRequest, ___Items) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::StartPurchaseRequest, ___StoreId) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::StartPurchaseRequest) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
