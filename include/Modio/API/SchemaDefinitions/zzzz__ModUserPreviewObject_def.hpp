#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModUserPreviewObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModUserPreviewObject)
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModUserPreviewObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModUserPreviewObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModUserPreviewObject, "Modio.API.SchemaDefinitions", "ModUserPreviewObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.UserObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModUserPreviewObject
struct CORDL_TYPE ModUserPreviewObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fedeb0, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::SchemaDefinitions::UserObject  user, ::Modio::API::SchemaDefinitions::UserObject  user_from, ::StringW  resource_url, bool  subscribed, int64_t  date_added) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModUserPreviewObject() ;

// Ctor Parameters [CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "UserFrom", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResourceUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Subscribed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ModUserPreviewObject(::Modio::API::SchemaDefinitions::UserObject  User, ::Modio::API::SchemaDefinitions::UserObject  UserFrom, ::StringW  ResourceUrl, bool  Subscribed, int64_t  DateAdded) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18157};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe8};

/// @brief Field User, offset: 0x0, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  User;

/// @brief Field UserFrom, offset: 0x68, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  UserFrom;

/// @brief Field ResourceUrl, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ResourceUrl;

/// @brief Field Subscribed, offset: 0xd8, size: 0x1, def value: None
 bool  Subscribed;

/// @brief Field DateAdded, offset: 0xe0, size: 0x8, def value: None
 int64_t  DateAdded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModUserPreviewObject, User) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModUserPreviewObject, UserFrom) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModUserPreviewObject, ResourceUrl) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModUserPreviewObject, Subscribed) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModUserPreviewObject, DateAdded) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModUserPreviewObject) == 0xe8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
