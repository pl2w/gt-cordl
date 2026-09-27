#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/PayObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PayObject)
namespace Modio::API::SchemaDefinitions {
struct ModObject;
}
namespace Newtonsoft::Json::Linq {
class JArray;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct PayObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::PayObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::PayObject, "Modio.API.SchemaDefinitions", "PayObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.ModObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.PayObject
struct CORDL_TYPE PayObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee06c, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(int64_t  transaction_id, ::StringW  gateway_uuid, int64_t  gross_amount, int64_t  net_amount, int64_t  platform_fee, int64_t  gateway_fee, ::StringW  transaction_type, ::Newtonsoft::Json::Linq::JArray*  meta, int64_t  purchase_date, ::StringW  wallet_type, int64_t  balance, int64_t  deficit, ::StringW  payment_method_id, ::Modio::API::SchemaDefinitions::ModObject  mod) ;

// Ctor Parameters []
// @brief default ctor
constexpr PayObject() ;

// Ctor Parameters [CppParam { name: "TransactionId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GatewayUuid", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "GrossAmount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NetAmount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlatformFee", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GatewayFee", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TransactionType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Meta", ty: "::Newtonsoft::Json::Linq::JArray*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PurchaseDate", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "WalletType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Balance", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Deficit", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PaymentMethodId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Mod", ty: "::Modio::API::SchemaDefinitions::ModObject", modifiers: "", def_value: None, comment: None }]
constexpr PayObject(int64_t  TransactionId, ::StringW  GatewayUuid, int64_t  GrossAmount, int64_t  NetAmount, int64_t  PlatformFee, int64_t  GatewayFee, ::StringW  TransactionType, ::Newtonsoft::Json::Linq::JArray*  Meta, int64_t  PurchaseDate, ::StringW  WalletType, int64_t  Balance, int64_t  Deficit, ::StringW  PaymentMethodId, ::Modio::API::SchemaDefinitions::ModObject  Mod) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18163};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2d8};

/// @brief Field TransactionId, offset: 0x0, size: 0x8, def value: None
 int64_t  TransactionId;

/// @brief Field GatewayUuid, offset: 0x8, size: 0x8, def value: None
 ::StringW  GatewayUuid;

/// @brief Field GrossAmount, offset: 0x10, size: 0x8, def value: None
 int64_t  GrossAmount;

/// @brief Field NetAmount, offset: 0x18, size: 0x8, def value: None
 int64_t  NetAmount;

/// @brief Field PlatformFee, offset: 0x20, size: 0x8, def value: None
 int64_t  PlatformFee;

/// @brief Field GatewayFee, offset: 0x28, size: 0x8, def value: None
 int64_t  GatewayFee;

/// @brief Field TransactionType, offset: 0x30, size: 0x8, def value: None
 ::StringW  TransactionType;

/// @brief Field Meta, offset: 0x38, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JArray*  Meta;

/// @brief Field PurchaseDate, offset: 0x40, size: 0x8, def value: None
 int64_t  PurchaseDate;

/// @brief Field WalletType, offset: 0x48, size: 0x8, def value: None
 ::StringW  WalletType;

/// @brief Field Balance, offset: 0x50, size: 0x8, def value: None
 int64_t  Balance;

/// @brief Field Deficit, offset: 0x58, size: 0x8, def value: None
 int64_t  Deficit;

/// @brief Field PaymentMethodId, offset: 0x60, size: 0x8, def value: None
 ::StringW  PaymentMethodId;

/// @brief Field Mod, offset: 0x68, size: 0x270, def value: None
 ::Modio::API::SchemaDefinitions::ModObject  Mod;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, TransactionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, GatewayUuid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, GrossAmount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, NetAmount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, PlatformFee) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, GatewayFee) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, TransactionType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, Meta) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, PurchaseDate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, WalletType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, Balance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, Deficit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, PaymentMethodId) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PayObject, Mod) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::PayObject) == 0x2d8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
