#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameUserPreviewObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameUserPreviewObject)
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GameUserPreviewObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GameUserPreviewObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GameUserPreviewObject, "Modio.API.SchemaDefinitions", "GameUserPreviewObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.UserObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameUserPreviewObject
struct CORDL_TYPE GameUserPreviewObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecdfc, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::SchemaDefinitions::UserObject  user, ::Modio::API::SchemaDefinitions::UserObject  user_from, ::StringW  resource_url, int64_t  date_added) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameUserPreviewObject() ;

// Ctor Parameters [CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "UserFrom", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResourceUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr GameUserPreviewObject(::Modio::API::SchemaDefinitions::UserObject  User, ::Modio::API::SchemaDefinitions::UserObject  UserFrom, ::StringW  ResourceUrl, int64_t  DateAdded) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18132};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe0};

/// @brief Field User, offset: 0x0, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  User;

/// @brief Field UserFrom, offset: 0x68, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  UserFrom;

/// @brief Field ResourceUrl, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ResourceUrl;

/// @brief Field DateAdded, offset: 0xd8, size: 0x8, def value: None
 int64_t  DateAdded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GameUserPreviewObject, User) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameUserPreviewObject, UserFrom) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameUserPreviewObject, ResourceUrl) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameUserPreviewObject, DateAdded) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GameUserPreviewObject) == 0xe0, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
