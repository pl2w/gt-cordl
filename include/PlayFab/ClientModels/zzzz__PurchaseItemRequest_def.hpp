#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PurchaseItemRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PurchaseItemRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class PurchaseItemRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::PurchaseItemRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::PurchaseItemRequest*, "PlayFab.ClientModels", "PurchaseItemRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.PurchaseItemRequest
class CORDL_TYPE PurchaseItemRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field CharacterId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field ItemId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ItemId, put=__cordl_internal_set_ItemId)) ::StringW  ItemId;

/// @brief Field Price, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Price, put=__cordl_internal_set_Price)) int32_t  Price;

/// @brief Field StoreId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StoreId, put=__cordl_internal_set_StoreId)) ::StringW  StoreId;

/// @brief Field VirtualCurrency, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_VirtualCurrency, put=__cordl_internal_set_VirtualCurrency)) ::StringW  VirtualCurrency;

static inline ::PlayFab::ClientModels::PurchaseItemRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_ItemId() const;

constexpr ::StringW& __cordl_internal_get_ItemId() ;

constexpr int32_t const& __cordl_internal_get_Price() const;

constexpr int32_t& __cordl_internal_get_Price() ;

constexpr ::StringW const& __cordl_internal_get_StoreId() const;

constexpr ::StringW& __cordl_internal_get_StoreId() ;

constexpr ::StringW const& __cordl_internal_get_VirtualCurrency() const;

constexpr ::StringW& __cordl_internal_get_VirtualCurrency() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_ItemId(::StringW  value) ;

constexpr void __cordl_internal_set_Price(int32_t  value) ;

constexpr void __cordl_internal_set_StoreId(::StringW  value) ;

constexpr void __cordl_internal_set_VirtualCurrency(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e128, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PurchaseItemRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PurchaseItemRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PurchaseItemRequest(PurchaseItemRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PurchaseItemRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PurchaseItemRequest(PurchaseItemRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20182};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field CharacterId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field ItemId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___ItemId;

/// @brief Field Price, offset: 0x30, size: 0x4, def value: None
 int32_t  ___Price;

/// @brief Field StoreId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___StoreId;

/// @brief Field VirtualCurrency, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___VirtualCurrency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::PurchaseItemRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PurchaseItemRequest, ___CharacterId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PurchaseItemRequest, ___ItemId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PurchaseItemRequest, ___Price) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PurchaseItemRequest, ___StoreId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::PurchaseItemRequest, ___VirtualCurrency) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::PurchaseItemRequest) == 0x48, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
