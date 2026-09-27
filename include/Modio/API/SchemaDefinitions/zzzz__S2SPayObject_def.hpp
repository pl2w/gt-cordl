#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/S2SPayObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(S2SPayObject)
namespace Newtonsoft::Json::Linq {
class JObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct S2SPayObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::S2SPayObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::S2SPayObject, "Modio.API.SchemaDefinitions", "S2SPayObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.S2SPayObject
struct CORDL_TYPE S2SPayObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee1f8, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int64_t  transaction_id, ::StringW  gateway_uuid, int64_t  gross_amount, int64_t  net_amount, int64_t  platform_fee, int64_t  gateway_fee, ::StringW  transaction_type, ::Newtonsoft::Json::Linq::JObject*  meta, int64_t  purchase_date) ;

// Ctor Parameters []
// @brief default ctor
constexpr S2SPayObject() ;

// Ctor Parameters [CppParam { name: "TransactionId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GatewayUuid", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "GrossAmount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NetAmount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlatformFee", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GatewayFee", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TransactionType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Meta", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PurchaseDate", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr S2SPayObject(int64_t  TransactionId, ::StringW  GatewayUuid, int64_t  GrossAmount, int64_t  NetAmount, int64_t  PlatformFee, int64_t  GatewayFee, ::StringW  TransactionType, ::Newtonsoft::Json::Linq::JObject*  Meta, int64_t  PurchaseDate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18168};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

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
 ::Newtonsoft::Json::Linq::JObject*  Meta;

/// @brief Field PurchaseDate, offset: 0x40, size: 0x8, def value: None
 int64_t  PurchaseDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::S2SPayObject, TransactionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::S2SPayObject, GatewayUuid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::S2SPayObject, GrossAmount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::S2SPayObject, NetAmount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::S2SPayObject, PlatformFee) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::S2SPayObject, GatewayFee) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::S2SPayObject, TransactionType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::S2SPayObject, Meta) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::S2SPayObject, PurchaseDate) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::S2SPayObject) == 0x48, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
