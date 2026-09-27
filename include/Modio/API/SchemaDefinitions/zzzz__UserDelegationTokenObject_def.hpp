#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/UserDelegationTokenObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UserDelegationTokenObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct UserDelegationTokenObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::UserDelegationTokenObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::UserDelegationTokenObject, "Modio.API.SchemaDefinitions", "UserDelegationTokenObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.UserDelegationTokenObject
struct CORDL_TYPE UserDelegationTokenObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee7fc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  entity, ::StringW  token) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserDelegationTokenObject() ;

// Ctor Parameters [CppParam { name: "Entity", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr UserDelegationTokenObject(::StringW  Entity, ::StringW  Token) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Entity, offset: 0x0, size: 0x8, def value: None
 ::StringW  Entity;

/// @brief Field Token, offset: 0x8, size: 0x8, def value: None
 ::StringW  Token;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::UserDelegationTokenObject, Entity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserDelegationTokenObject, Token) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::UserDelegationTokenObject) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
