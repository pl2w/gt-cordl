#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ErrorObject_EmbeddedError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorObject_EmbeddedError)
namespace Newtonsoft::Json::Linq {
class JObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct ErrorObject_EmbeddedError;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ErrorObject_EmbeddedError);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ErrorObject_EmbeddedError, "Modio.API.SchemaDefinitions", "ErrorObject/EmbeddedError");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ErrorObject/EmbeddedError
struct CORDL_TYPE ErrorObject_EmbeddedError {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec85c, size 0x38, virtual false, abstract: false, final false
inline void _ctor(int64_t  code, int64_t  errorRef, ::StringW  message, ::Newtonsoft::Json::Linq::JObject*  errors) ;

// Ctor Parameters []
// @brief default ctor
constexpr ErrorObject_EmbeddedError() ;

// Ctor Parameters [CppParam { name: "Code", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ErrorRef", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Errors", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: None, comment: None }]
constexpr ErrorObject_EmbeddedError(int64_t  Code, int64_t  ErrorRef, ::StringW  Message, ::Newtonsoft::Json::Linq::JObject*  Errors) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18119};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Code, offset: 0x0, size: 0x8, def value: None
 int64_t  Code;

/// @brief Field ErrorRef, offset: 0x8, size: 0x8, def value: None
 int64_t  ErrorRef;

/// @brief Field Message, offset: 0x10, size: 0x8, def value: None
 ::StringW  Message;

/// @brief Field Errors, offset: 0x18, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JObject*  Errors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ErrorObject_EmbeddedError, Code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ErrorObject_EmbeddedError, ErrorRef) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ErrorObject_EmbeddedError, Message) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ErrorObject_EmbeddedError, Errors) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ErrorObject_EmbeddedError) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
