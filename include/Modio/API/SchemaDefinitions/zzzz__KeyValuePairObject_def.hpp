#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/KeyValuePairObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(KeyValuePairObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct KeyValuePairObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::KeyValuePairObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::KeyValuePairObject, "Modio.API.SchemaDefinitions", "KeyValuePairObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.KeyValuePairObject
struct CORDL_TYPE KeyValuePairObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed0d8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyValuePairObject() ;

// Ctor Parameters [CppParam { name: "Key", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr KeyValuePairObject(::StringW  Key, ::StringW  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Key, offset: 0x0, size: 0x8, def value: None
 ::StringW  Key;

/// @brief Field Value, offset: 0x8, size: 0x8, def value: None
 ::StringW  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::KeyValuePairObject, Key) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::KeyValuePairObject, Value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::KeyValuePairObject) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
