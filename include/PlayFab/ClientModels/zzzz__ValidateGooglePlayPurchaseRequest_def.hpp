#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ValidateGooglePlayPurchaseRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidateGooglePlayPurchaseRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class ValidateGooglePlayPurchaseRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest*, "PlayFab.ClientModels", "ValidateGooglePlayPurchaseRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.ValidateGooglePlayPurchaseRequest
class CORDL_TYPE ValidateGooglePlayPurchaseRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CatalogVersion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CatalogVersion, put=__cordl_internal_set_CatalogVersion)) ::StringW  CatalogVersion;

/// @brief Field CurrencyCode, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CurrencyCode, put=__cordl_internal_set_CurrencyCode)) ::StringW  CurrencyCode;

/// @brief Field PurchasePrice, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_PurchasePrice, put=__cordl_internal_set_PurchasePrice)) ::System::Nullable_1<uint32_t>  PurchasePrice;

/// @brief Field ReceiptJson, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReceiptJson, put=__cordl_internal_set_ReceiptJson)) ::StringW  ReceiptJson;

/// @brief Field Signature, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Signature, put=__cordl_internal_set_Signature)) ::StringW  Signature;

static inline ::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CatalogVersion() const;

constexpr ::StringW& __cordl_internal_get_CatalogVersion() ;

constexpr ::StringW const& __cordl_internal_get_CurrencyCode() const;

constexpr ::StringW& __cordl_internal_get_CurrencyCode() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_PurchasePrice() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_PurchasePrice() ;

constexpr ::StringW const& __cordl_internal_get_ReceiptJson() const;

constexpr ::StringW& __cordl_internal_get_ReceiptJson() ;

constexpr ::StringW const& __cordl_internal_get_Signature() const;

constexpr ::StringW& __cordl_internal_get_Signature() ;

constexpr void __cordl_internal_set_CatalogVersion(::StringW  value) ;

constexpr void __cordl_internal_set_CurrencyCode(::StringW  value) ;

constexpr void __cordl_internal_set_PurchasePrice(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_ReceiptJson(::StringW  value) ;

constexpr void __cordl_internal_set_Signature(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e518, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidateGooglePlayPurchaseRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidateGooglePlayPurchaseRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidateGooglePlayPurchaseRequest(ValidateGooglePlayPurchaseRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidateGooglePlayPurchaseRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidateGooglePlayPurchaseRequest(ValidateGooglePlayPurchaseRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20317};

/// @brief Field CatalogVersion, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CatalogVersion;

/// @brief Field CurrencyCode, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CurrencyCode;

/// @brief Field PurchasePrice, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___PurchasePrice;

/// @brief Field ReceiptJson, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___ReceiptJson;

/// @brief Field Signature, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Signature;

/// @brief Size padding 0x40 - 0x48 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest, ___CatalogVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest, ___CurrencyCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest, ___PurchasePrice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest, ___ReceiptJson) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest, ___Signature) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::ValidateGooglePlayPurchaseRequest) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
