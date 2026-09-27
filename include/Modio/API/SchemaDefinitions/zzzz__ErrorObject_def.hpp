#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ErrorObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__ErrorObject_EmbeddedError_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ErrorObject)
namespace GlobalNamespace {
struct ErrorObject_EmbeddedError;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ErrorObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ErrorObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ErrorObject, "Modio.API.SchemaDefinitions", "ErrorObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.ErrorObject::EmbeddedError
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ErrorObject
struct CORDL_TYPE ErrorObject {
public:
// Declarations
using EmbeddedError = ::GlobalNamespace::ErrorObject_EmbeddedError;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec840, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ErrorObject_EmbeddedError  error) ;

// Ctor Parameters []
// @brief default ctor
constexpr ErrorObject() ;

// Ctor Parameters [CppParam { name: "Error", ty: "::GlobalNamespace::ErrorObject_EmbeddedError", modifiers: "", def_value: None, comment: None }]
constexpr ErrorObject(::GlobalNamespace::ErrorObject_EmbeddedError  Error) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18120};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Error, offset: 0x0, size: 0x20, def value: None
 ::GlobalNamespace::ErrorObject_EmbeddedError  Error;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ErrorObject, Error) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ErrorObject) == 0x20, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
