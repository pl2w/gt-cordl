#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GuideObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__GuideStatsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GuideTagObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GuideObject)
namespace Modio::API::SchemaDefinitions {
struct GuideStatsObject;
}
namespace Modio::API::SchemaDefinitions {
struct GuideTagObject;
}
namespace Modio::API::SchemaDefinitions {
struct LogoObject;
}
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GuideObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GuideObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GuideObject, "Modio.API.SchemaDefinitions", "GuideObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.GuideStatsObject, Modio.API.SchemaDefinitions.GuideTagObject, Modio.API.SchemaDefinitions.LogoObject, Modio.API.SchemaDefinitions.UserObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GuideObject
struct CORDL_TYPE GuideObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fece6c, size 0x130, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, int64_t  game_id, ::StringW  game_name, ::Modio::API::SchemaDefinitions::LogoObject  logo, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  date_added, int64_t  date_updated, int64_t  date_live, int64_t  status, ::StringW  url, ::StringW  name, ::StringW  name_id, ::StringW  summary, ::StringW  description, int64_t  community_options, ::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>  tags, ::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>  stats) ;

// Ctor Parameters []
// @brief default ctor
constexpr GuideObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Logo", ty: "::Modio::API::SchemaDefinitions::LogoObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Stats", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>", modifiers: "", def_value: None, comment: None }]
constexpr GuideObject(int64_t  Id, int64_t  GameId, ::StringW  GameName, ::Modio::API::SchemaDefinitions::LogoObject  Logo, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateLive, int64_t  Status, ::StringW  Url, ::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Description, int64_t  CommunityOptions, ::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>  Tags, ::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>  Stats) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18133};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x108};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field GameId, offset: 0x8, size: 0x8, def value: None
 int64_t  GameId;

/// @brief Field GameName, offset: 0x10, size: 0x8, def value: None
 ::StringW  GameName;

/// @brief Field Logo, offset: 0x18, size: 0x28, def value: None
 ::Modio::API::SchemaDefinitions::LogoObject  Logo;

/// @brief Field User, offset: 0x40, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  User;

/// @brief Field DateAdded, offset: 0xa8, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field DateUpdated, offset: 0xb0, size: 0x8, def value: None
 int64_t  DateUpdated;

/// @brief Field DateLive, offset: 0xb8, size: 0x8, def value: None
 int64_t  DateLive;

/// @brief Field Status, offset: 0xc0, size: 0x8, def value: None
 int64_t  Status;

/// @brief Field Url, offset: 0xc8, size: 0x8, def value: None
 ::StringW  Url;

/// @brief Field Name, offset: 0xd0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field NameId, offset: 0xd8, size: 0x8, def value: None
 ::StringW  NameId;

/// @brief Field Summary, offset: 0xe0, size: 0x8, def value: None
 ::StringW  Summary;

/// @brief Field Description, offset: 0xe8, size: 0x8, def value: None
 ::StringW  Description;

/// @brief Field CommunityOptions, offset: 0xf0, size: 0x8, def value: None
 int64_t  CommunityOptions;

/// @brief Field Tags, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>  Tags;

/// @brief Field Stats, offset: 0x100, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>  Stats;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, GameId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, GameName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, Logo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, User) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, DateAdded) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, DateUpdated) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, DateLive) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, Status) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, Url) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, Name) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, NameId) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, Summary) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, Description) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, CommunityOptions) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, Tags) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GuideObject, Stats) == 0x100, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GuideObject) == 0x108, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
