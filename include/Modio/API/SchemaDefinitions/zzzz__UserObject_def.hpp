#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/UserObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__AvatarObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserObject)
namespace Modio::API::SchemaDefinitions {
struct AvatarObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::UserObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::UserObject, "Modio.API.SchemaDefinitions", "UserObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.AvatarObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.UserObject
struct CORDL_TYPE UserObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fedd38, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, ::StringW  name_id, ::StringW  username, ::StringW  display_name_portal, int64_t  date_online, int64_t  date_joined, ::Modio::API::SchemaDefinitions::AvatarObject  avatar, ::StringW  timezone, ::StringW  language, ::StringW  profile_url) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Username", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DisplayNamePortal", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateOnline", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateJoined", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Avatar", ty: "::Modio::API::SchemaDefinitions::AvatarObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Timezone", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Language", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ProfileUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr UserObject(int64_t  Id, ::StringW  NameId, ::StringW  Username, ::StringW  DisplayNamePortal, int64_t  DateOnline, int64_t  DateJoined, ::Modio::API::SchemaDefinitions::AvatarObject  Avatar, ::StringW  Timezone, ::StringW  Language, ::StringW  ProfileUrl) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field NameId, offset: 0x8, size: 0x8, def value: None
 ::StringW  NameId;

/// @brief Field Username, offset: 0x10, size: 0x8, def value: None
 ::StringW  Username;

/// @brief Field DisplayNamePortal, offset: 0x18, size: 0x8, def value: None
 ::StringW  DisplayNamePortal;

/// @brief Field DateOnline, offset: 0x20, size: 0x8, def value: None
 int64_t  DateOnline;

/// @brief Field DateJoined, offset: 0x28, size: 0x8, def value: None
 int64_t  DateJoined;

/// @brief Field Avatar, offset: 0x30, size: 0x20, def value: None
 ::Modio::API::SchemaDefinitions::AvatarObject  Avatar;

/// @brief Field Timezone, offset: 0x50, size: 0x8, def value: None
 ::StringW  Timezone;

/// @brief Field Language, offset: 0x58, size: 0x8, def value: None
 ::StringW  Language;

/// @brief Field ProfileUrl, offset: 0x60, size: 0x8, def value: None
 ::StringW  ProfileUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, NameId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, Username) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, DisplayNamePortal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, DateOnline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, DateJoined) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, Avatar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, Timezone) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, Language) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserObject, ProfileUrl) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::UserObject) == 0x68, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
