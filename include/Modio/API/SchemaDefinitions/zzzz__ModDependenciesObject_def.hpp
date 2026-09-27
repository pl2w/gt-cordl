#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModDependenciesObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MetadataKvpObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModMediaObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModPlatformsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModStatsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModTagObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModDependenciesObject)
namespace Modio::API::SchemaDefinitions {
struct LogoObject;
}
namespace Modio::API::SchemaDefinitions {
struct MetadataKvpObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModMediaObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModPlatformsObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModStatsObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModTagObject;
}
namespace Modio::API::SchemaDefinitions {
struct ModfileObject;
}
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModDependenciesObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModDependenciesObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModDependenciesObject, "Modio.API.SchemaDefinitions", "ModDependenciesObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies Modio.API.SchemaDefinitions.LogoObject, Modio.API.SchemaDefinitions.MetadataKvpObject, Modio.API.SchemaDefinitions.ModMediaObject, Modio.API.SchemaDefinitions.ModPlatformsObject, Modio.API.SchemaDefinitions.ModStatsObject, Modio.API.SchemaDefinitions.ModTagObject, Modio.API.SchemaDefinitions.ModfileObject, Modio.API.SchemaDefinitions.UserObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModDependenciesObject
struct CORDL_TYPE ModDependenciesObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed2b0, size 0x210, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, int64_t  game_id, int64_t  status, int64_t  visible, ::Modio::API::SchemaDefinitions::UserObject  submitted_by, int64_t  date_added, int64_t  date_updated, int64_t  date_live, int64_t  maturity_option, int64_t  community_options, int64_t  monetization_options, int64_t  stock, int64_t  price, int64_t  tax, ::Modio::API::SchemaDefinitions::LogoObject  logo, ::StringW  homepage_url, ::StringW  name, ::StringW  name_id, ::StringW  summary, ::StringW  description, ::StringW  description_plaintext, ::StringW  metadata_blob, ::StringW  profile_url, ::Modio::API::SchemaDefinitions::ModMediaObject  media, ::Modio::API::SchemaDefinitions::ModfileObject  modfile, bool  dependencies, ::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>  platforms, ::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>  metadata_kvp, ::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>  tags, ::Modio::API::SchemaDefinitions::ModStatsObject  stats, int64_t  dependency_depth) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModDependenciesObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visible", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SubmittedBy", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaturityOption", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MonetizationOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Stock", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Price", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tax", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Logo", ty: "::Modio::API::SchemaDefinitions::LogoObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "HomepageUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DescriptionPlaintext", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ProfileUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Media", ty: "::Modio::API::SchemaDefinitions::ModMediaObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Modfile", ty: "::Modio::API::SchemaDefinitions::ModfileObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Dependencies", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "MetadataKvp", ty: "::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Stats", ty: "::Modio::API::SchemaDefinitions::ModStatsObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "DependencyDepth", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ModDependenciesObject(int64_t  Id, int64_t  GameId, int64_t  Status, int64_t  Visible, ::Modio::API::SchemaDefinitions::UserObject  SubmittedBy, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateLive, int64_t  MaturityOption, int64_t  CommunityOptions, int64_t  MonetizationOptions, int64_t  Stock, int64_t  Price, int64_t  Tax, ::Modio::API::SchemaDefinitions::LogoObject  Logo, ::StringW  HomepageUrl, ::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Description, ::StringW  DescriptionPlaintext, ::StringW  MetadataBlob, ::StringW  ProfileUrl, ::Modio::API::SchemaDefinitions::ModMediaObject  Media, ::Modio::API::SchemaDefinitions::ModfileObject  Modfile, bool  Dependencies, ::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>  Platforms, ::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>  MetadataKvp, ::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>  Tags, ::Modio::API::SchemaDefinitions::ModStatsObject  Stats, int64_t  DependencyDepth) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18145};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x270};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field GameId, offset: 0x8, size: 0x8, def value: None
 int64_t  GameId;

/// @brief Field Status, offset: 0x10, size: 0x8, def value: None
 int64_t  Status;

/// @brief Field Visible, offset: 0x18, size: 0x8, def value: None
 int64_t  Visible;

/// @brief Field SubmittedBy, offset: 0x20, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  SubmittedBy;

/// @brief Field DateAdded, offset: 0x88, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field DateUpdated, offset: 0x90, size: 0x8, def value: None
 int64_t  DateUpdated;

/// @brief Field DateLive, offset: 0x98, size: 0x8, def value: None
 int64_t  DateLive;

/// @brief Field MaturityOption, offset: 0xa0, size: 0x8, def value: None
 int64_t  MaturityOption;

/// @brief Field CommunityOptions, offset: 0xa8, size: 0x8, def value: None
 int64_t  CommunityOptions;

/// @brief Field MonetizationOptions, offset: 0xb0, size: 0x8, def value: None
 int64_t  MonetizationOptions;

/// @brief Field Stock, offset: 0xb8, size: 0x8, def value: None
 int64_t  Stock;

/// @brief Field Price, offset: 0xc0, size: 0x8, def value: None
 int64_t  Price;

/// @brief Field Tax, offset: 0xc8, size: 0x8, def value: None
 int64_t  Tax;

/// @brief Field Logo, offset: 0xd0, size: 0x28, def value: None
 ::Modio::API::SchemaDefinitions::LogoObject  Logo;

/// @brief Field HomepageUrl, offset: 0xf8, size: 0x8, def value: None
 ::StringW  HomepageUrl;

/// @brief Field Name, offset: 0x100, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field NameId, offset: 0x108, size: 0x8, def value: None
 ::StringW  NameId;

/// @brief Field Summary, offset: 0x110, size: 0x8, def value: None
 ::StringW  Summary;

/// @brief Field Description, offset: 0x118, size: 0x8, def value: None
 ::StringW  Description;

/// @brief Field DescriptionPlaintext, offset: 0x120, size: 0x8, def value: None
 ::StringW  DescriptionPlaintext;

/// @brief Field MetadataBlob, offset: 0x128, size: 0x8, def value: None
 ::StringW  MetadataBlob;

/// @brief Field ProfileUrl, offset: 0x130, size: 0x8, def value: None
 ::StringW  ProfileUrl;

/// @brief Field Media, offset: 0x138, size: 0x18, def value: None
 ::Modio::API::SchemaDefinitions::ModMediaObject  Media;

/// @brief Field Modfile, offset: 0x150, size: 0x90, def value: None
 ::Modio::API::SchemaDefinitions::ModfileObject  Modfile;

/// @brief Field Dependencies, offset: 0x1e0, size: 0x1, def value: None
 bool  Dependencies;

/// @brief Field Platforms, offset: 0x1e8, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>  Platforms;

/// @brief Field MetadataKvp, offset: 0x1f0, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>  MetadataKvp;

/// @brief Field Tags, offset: 0x1f8, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>  Tags;

/// @brief Field Stats, offset: 0x200, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::ModStatsObject  Stats;

/// @brief Field DependencyDepth, offset: 0x268, size: 0x8, def value: None
 int64_t  DependencyDepth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, GameId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Visible) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, SubmittedBy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, DateAdded) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, DateUpdated) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, DateLive) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, MaturityOption) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, CommunityOptions) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, MonetizationOptions) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Stock) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Price) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Tax) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Logo) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, HomepageUrl) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Name) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, NameId) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Summary) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Description) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, DescriptionPlaintext) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, MetadataBlob) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, ProfileUrl) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Media) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Modfile) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Dependencies) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Platforms) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, MetadataKvp) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Tags) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, Stats) == 0x200, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependenciesObject, DependencyDepth) == 0x268, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModDependenciesObject) == 0x270, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
