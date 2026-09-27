#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ProxyTransformerObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ProxyTransformerObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ProxyTransformerObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ProxyTransformerObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ProxyTransformerObject, "Modio.API.SchemaDefinitions", "ProxyTransformerObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ProxyTransformerObject
struct CORDL_TYPE ProxyTransformerObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee17c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(bool  success) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProxyTransformerObject() ;

// Ctor Parameters [CppParam { name: "Success", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ProxyTransformerObject(bool  Success) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18165};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Success, offset: 0x0, size: 0x1, def value: None
 bool  Success;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ProxyTransformerObject, Success) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ProxyTransformerObject) == 0x1, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
