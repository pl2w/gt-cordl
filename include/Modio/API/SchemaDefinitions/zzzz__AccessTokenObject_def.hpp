#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AccessTokenObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessTokenObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct AccessTokenObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AccessTokenObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AccessTokenObject, "Modio.API.SchemaDefinitions", "AccessTokenObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AccessTokenObject
struct CORDL_TYPE AccessTokenObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec3a4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int64_t  code, ::StringW  access_token, int64_t  date_expires) ;

// Ctor Parameters []
// @brief default ctor
constexpr AccessTokenObject() ;

// Ctor Parameters [CppParam { name: "Code", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AccessToken", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateExpires", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr AccessTokenObject(int64_t  Code, ::StringW  AccessToken, int64_t  DateExpires) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18106};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Code, offset: 0x0, size: 0x8, def value: None
 int64_t  Code;

/// @brief Field AccessToken, offset: 0x8, size: 0x8, def value: None
 ::StringW  AccessToken;

/// @brief Field DateExpires, offset: 0x10, size: 0x8, def value: None
 int64_t  DateExpires;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AccessTokenObject, Code) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AccessTokenObject, AccessToken) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AccessTokenObject, DateExpires) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AccessTokenObject) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
