#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EntitlementFulfillmentObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__EntitlementDetailsObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntitlementFulfillmentObject)
namespace Modio::API::SchemaDefinitions {
struct EntitlementDetailsObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct EntitlementFulfillmentObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject, "Modio.API.SchemaDefinitions", "EntitlementFulfillmentObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.EntitlementDetailsObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.EntitlementFulfillmentObject
struct CORDL_TYPE EntitlementFulfillmentObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec7e0, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  transaction_id, int64_t  transaction_state, ::StringW  sku_id, bool  entitlement_consumed, int64_t  entitlement_type, ::Modio::API::SchemaDefinitions::EntitlementDetailsObject  details) ;

// Ctor Parameters []
// @brief default ctor
constexpr EntitlementFulfillmentObject() ;

// Ctor Parameters [CppParam { name: "TransactionId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "TransactionState", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SkuId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "EntitlementConsumed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "EntitlementType", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Details", ty: "::Modio::API::SchemaDefinitions::EntitlementDetailsObject", modifiers: "", def_value: None, comment: None }]
constexpr EntitlementFulfillmentObject(::StringW  TransactionId, int64_t  TransactionState, ::StringW  SkuId, bool  EntitlementConsumed, int64_t  EntitlementType, ::Modio::API::SchemaDefinitions::EntitlementDetailsObject  Details) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18118};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field TransactionId, offset: 0x0, size: 0x8, def value: None
 ::StringW  TransactionId;

/// @brief Field TransactionState, offset: 0x8, size: 0x8, def value: None
 int64_t  TransactionState;

/// @brief Field SkuId, offset: 0x10, size: 0x8, def value: None
 ::StringW  SkuId;

/// @brief Field EntitlementConsumed, offset: 0x18, size: 0x1, def value: None
 bool  EntitlementConsumed;

/// @brief Field EntitlementType, offset: 0x20, size: 0x8, def value: None
 int64_t  EntitlementType;

/// @brief Field Details, offset: 0x28, size: 0x8, def value: None
 ::Modio::API::SchemaDefinitions::EntitlementDetailsObject  Details;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject, TransactionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject, TransactionState) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject, SkuId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject, EntitlementConsumed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject, EntitlementType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject, Details) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::EntitlementFulfillmentObject) == 0x30, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
