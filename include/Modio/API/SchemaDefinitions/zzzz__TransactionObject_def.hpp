#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TransactionObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__LineItemsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PaymentMethodObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransactionObject)
namespace Modio::API::SchemaDefinitions {
struct LineItemsObject;
}
namespace Modio::API::SchemaDefinitions {
struct PaymentMethodObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct TransactionObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::TransactionObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::TransactionObject, "Modio.API.SchemaDefinitions", "TransactionObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.LineItemsObject, Modio.API.SchemaDefinitions.PaymentMethodObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.TransactionObject
struct CORDL_TYPE TransactionObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee660, size 0x124, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, ::StringW  gateway_uuid, ::StringW  gateway_name, int64_t  account_id, int64_t  gross_amount, int64_t  net_amount, int64_t  platform_fee, int64_t  gateway_fee, int64_t  tax, ::StringW  tax_type, ::StringW  currency, int64_t  tokens, ::StringW  transaction_type, ::StringW  monetization_type, ::StringW  purchase_date, ::StringW  created_at, ::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>  payment_method, ::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>  line_items) ;

// Ctor Parameters []
// @brief default ctor
constexpr TransactionObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GatewayUuid", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "GatewayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "AccountId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GrossAmount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NetAmount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlatformFee", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GatewayFee", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tax", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TaxType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Currency", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tokens", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TransactionType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "MonetizationType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "PurchaseDate", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "CreatedAt", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "PaymentMethod", ty: "::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "LineItems", ty: "::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>", modifiers: "", def_value: None, comment: None }]
constexpr TransactionObject(int64_t  Id, ::StringW  GatewayUuid, ::StringW  GatewayName, int64_t  AccountId, int64_t  GrossAmount, int64_t  NetAmount, int64_t  PlatformFee, int64_t  GatewayFee, int64_t  Tax, ::StringW  TaxType, ::StringW  Currency, int64_t  Tokens, ::StringW  TransactionType, ::StringW  MonetizationType, ::StringW  PurchaseDate, ::StringW  CreatedAt, ::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>  PaymentMethod, ::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>  LineItems) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18182};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field GatewayUuid, offset: 0x8, size: 0x8, def value: None
 ::StringW  GatewayUuid;

/// @brief Field GatewayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  GatewayName;

/// @brief Field AccountId, offset: 0x18, size: 0x8, def value: None
 int64_t  AccountId;

/// @brief Field GrossAmount, offset: 0x20, size: 0x8, def value: None
 int64_t  GrossAmount;

/// @brief Field NetAmount, offset: 0x28, size: 0x8, def value: None
 int64_t  NetAmount;

/// @brief Field PlatformFee, offset: 0x30, size: 0x8, def value: None
 int64_t  PlatformFee;

/// @brief Field GatewayFee, offset: 0x38, size: 0x8, def value: None
 int64_t  GatewayFee;

/// @brief Field Tax, offset: 0x40, size: 0x8, def value: None
 int64_t  Tax;

/// @brief Field TaxType, offset: 0x48, size: 0x8, def value: None
 ::StringW  TaxType;

/// @brief Field Currency, offset: 0x50, size: 0x8, def value: None
 ::StringW  Currency;

/// @brief Field Tokens, offset: 0x58, size: 0x8, def value: None
 int64_t  Tokens;

/// @brief Field TransactionType, offset: 0x60, size: 0x8, def value: None
 ::StringW  TransactionType;

/// @brief Field MonetizationType, offset: 0x68, size: 0x8, def value: None
 ::StringW  MonetizationType;

/// @brief Field PurchaseDate, offset: 0x70, size: 0x8, def value: None
 ::StringW  PurchaseDate;

/// @brief Field CreatedAt, offset: 0x78, size: 0x8, def value: None
 ::StringW  CreatedAt;

/// @brief Field PaymentMethod, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::PaymentMethodObject>  PaymentMethod;

/// @brief Field LineItems, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::LineItemsObject>  LineItems;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, GatewayUuid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, GatewayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, AccountId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, GrossAmount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, NetAmount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, PlatformFee) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, GatewayFee) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, Tax) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, TaxType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, Currency) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, Tokens) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, TransactionType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, MonetizationType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, PurchaseDate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, CreatedAt) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, PaymentMethod) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TransactionObject, LineItems) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::TransactionObject) == 0x90, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
