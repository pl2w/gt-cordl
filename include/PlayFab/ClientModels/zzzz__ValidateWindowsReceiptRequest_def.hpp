#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValidateWindowsReceiptRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidateWindowsReceiptRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class ValidateWindowsReceiptRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ValidateWindowsReceiptRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ValidateWindowsReceiptRequest*, "PlayFab.ClientModels", "ValidateWindowsReceiptRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ValidateWindowsReceiptRequest
class CORDL_TYPE ValidateWindowsReceiptRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field CurrencyCode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CurrencyCode, put=__cordl_internal_set_CurrencyCode)) ::StringW  CurrencyCode;

/// @brief Field PurchasePrice, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PurchasePrice, put=__cordl_internal_set_PurchasePrice)) uint32_t  PurchasePrice;

/// @brief Field Receipt, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Receipt, put=__cordl_internal_set_Receipt)) ::StringW  Receipt;

static inline ::PlayFab::ClientModels::ValidateWindowsReceiptRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::StringW const& __cordl_internal_get_CurrencyCode() const;

constexpr ::StringW& __cordl_internal_get_CurrencyCode() ;

constexpr uint32_t const& __cordl_internal_get_PurchasePrice() const;

constexpr uint32_t& __cordl_internal_get_PurchasePrice() ;

constexpr ::StringW const& __cordl_internal_get_Receipt() const;

constexpr ::StringW& __cordl_internal_get_Receipt() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CurrencyCode(::StringW  value) ;

constexpr void __cordl_internal_set_PurchasePrice(uint32_t  value) ;

constexpr void __cordl_internal_set_Receipt(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e538, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidateWindowsReceiptRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidateWindowsReceiptRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidateWindowsReceiptRequest(ValidateWindowsReceiptRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidateWindowsReceiptRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidateWindowsReceiptRequest(ValidateWindowsReceiptRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20321};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field CurrencyCode, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CurrencyCode;

/// @brief Field PurchasePrice, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___PurchasePrice;

/// @brief Field Receipt, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___Receipt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ValidateWindowsReceiptRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ValidateWindowsReceiptRequest, ___CurrencyCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ValidateWindowsReceiptRequest, ___PurchasePrice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ValidateWindowsReceiptRequest, ___Receipt) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ValidateWindowsReceiptRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
