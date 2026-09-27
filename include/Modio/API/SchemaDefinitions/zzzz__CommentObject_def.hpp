#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/CommentObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CommentObject)
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct CommentObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::CommentObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::CommentObject, "Modio.API.SchemaDefinitions", "CommentObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.UserObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.CommentObject
struct CORDL_TYPE CommentObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec528, size 0x98, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, int64_t  game_id, int64_t  mod_id, int64_t  resource_id, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  date_added, int64_t  reply_id, ::StringW  thread_position, int64_t  karma, int64_t  karma_guest, ::StringW  content, int64_t  options) ;

// Ctor Parameters []
// @brief default ctor
constexpr CommentObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResourceId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReplyId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ThreadPosition", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Karma", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "KarmaGuest", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Content", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Options", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr CommentObject(int64_t  Id, int64_t  GameId, int64_t  ModId, int64_t  ResourceId, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  DateAdded, int64_t  ReplyId, ::StringW  ThreadPosition, int64_t  Karma, int64_t  KarmaGuest, ::StringW  Content, int64_t  Options) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc0};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field GameId, offset: 0x8, size: 0x8, def value: None
 int64_t  GameId;

/// @brief Field ModId, offset: 0x10, size: 0x8, def value: None
 int64_t  ModId;

/// @brief Field ResourceId, offset: 0x18, size: 0x8, def value: None
 int64_t  ResourceId;

/// @brief Field User, offset: 0x20, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  User;

/// @brief Field DateAdded, offset: 0x88, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field ReplyId, offset: 0x90, size: 0x8, def value: None
 int64_t  ReplyId;

/// @brief Field ThreadPosition, offset: 0x98, size: 0x8, def value: None
 ::StringW  ThreadPosition;

/// @brief Field Karma, offset: 0xa0, size: 0x8, def value: None
 int64_t  Karma;

/// @brief Field KarmaGuest, offset: 0xa8, size: 0x8, def value: None
 int64_t  KarmaGuest;

/// @brief Field Content, offset: 0xb0, size: 0x8, def value: None
 ::StringW  Content;

/// @brief Field Options, offset: 0xb8, size: 0x8, def value: None
 int64_t  Options;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, GameId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, ModId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, ResourceId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, User) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, DateAdded) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, ReplyId) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, ThreadPosition) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, Karma) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, KarmaGuest) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, Content) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::CommentObject, Options) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::CommentObject) == 0xc0, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
