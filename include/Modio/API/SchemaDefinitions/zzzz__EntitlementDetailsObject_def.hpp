#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EntitlementDetailsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntitlementDetailsObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct EntitlementDetailsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::EntitlementDetailsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::EntitlementDetailsObject, "Modio.API.SchemaDefinitions", "EntitlementDetailsObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.EntitlementDetailsObject
struct CORDL_TYPE EntitlementDetailsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec7d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  tokens_allocated) ;

// Ctor Parameters []
// @brief default ctor
constexpr EntitlementDetailsObject() ;

// Ctor Parameters [CppParam { name: "TokensAllocated", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr EntitlementDetailsObject(int64_t  TokensAllocated) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field TokensAllocated, offset: 0x0, size: 0x8, def value: None
 int64_t  TokensAllocated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::EntitlementDetailsObject, TokensAllocated) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::EntitlementDetailsObject) == 0x8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
