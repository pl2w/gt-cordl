#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__GameMonetizationTeamObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameOtherUrlsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GamePlatformsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameStatsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionLocalizedObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__HeaderImageObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__IconObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ThemeObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameObject)
namespace Modio::API::SchemaDefinitions {
struct GameMonetizationTeamObject;
}
namespace Modio::API::SchemaDefinitions {
struct GameOtherUrlsObject;
}
namespace Modio::API::SchemaDefinitions {
struct GamePlatformsObject;
}
namespace Modio::API::SchemaDefinitions {
struct GameStatsObject;
}
namespace Modio::API::SchemaDefinitions {
struct GameTagOptionLocalizedObject;
}
namespace Modio::API::SchemaDefinitions {
struct HeaderImageObject;
}
namespace Modio::API::SchemaDefinitions {
struct IconObject;
}
namespace Modio::API::SchemaDefinitions {
struct LogoObject;
}
namespace Modio::API::SchemaDefinitions {
struct ThemeObject;
}
namespace Newtonsoft::Json::Linq {
class JObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GameObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GameObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GameObject, "Modio.API.SchemaDefinitions", "GameObject");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies Modio.API.SchemaDefinitions.GameMonetizationTeamObject, Modio.API.SchemaDefinitions.GameOtherUrlsObject, Modio.API.SchemaDefinitions.GamePlatformsObject, Modio.API.SchemaDefinitions.GameStatsObject, Modio.API.SchemaDefinitions.GameTagOptionLocalizedObject, Modio.API.SchemaDefinitions.HeaderImageObject, Modio.API.SchemaDefinitions.IconObject, Modio.API.SchemaDefinitions.LogoObject, Modio.API.SchemaDefinitions.ThemeObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameObject
struct CORDL_TYPE GameObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec94c, size 0x214, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, int64_t  status, ::Newtonsoft::Json::Linq::JObject*  submittedBy, int64_t  dateAdded, int64_t  dateUpdated, int64_t  dateLive, int64_t  presentationOption, int64_t  submissionOption, int64_t  dependencyOption, int64_t  curationOption, int64_t  communityOptions, int64_t  monetizationOptions, ::Modio::API::SchemaDefinitions::GameMonetizationTeamObject  monetizationTeam, int64_t  revenueOptions, int64_t  maxStock, int64_t  apiAccessOptions, int64_t  maturityOptions, ::StringW  ugcName, ::StringW  tokenName, ::Modio::API::SchemaDefinitions::IconObject  icon, ::Modio::API::SchemaDefinitions::LogoObject  logo, ::Modio::API::SchemaDefinitions::HeaderImageObject  header, ::StringW  name, ::StringW  nameId, ::StringW  summary, ::StringW  instructions, ::StringW  instructionsUrl, ::StringW  profileUrl, ::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>  otherUrls, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  tagOptions, ::Modio::API::SchemaDefinitions::GameStatsObject  stats, ::Modio::API::SchemaDefinitions::ThemeObject  theme, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  platforms) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SubmittedBy", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PresentationOption", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SubmissionOption", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DependencyOption", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CurationOption", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MonetizationOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MonetizationTeam", ty: "::Modio::API::SchemaDefinitions::GameMonetizationTeamObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "RevenueOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxStock", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ApiAccessOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaturityOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UgcName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Icon", ty: "::Modio::API::SchemaDefinitions::IconObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Logo", ty: "::Modio::API::SchemaDefinitions::LogoObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Header", ty: "::Modio::API::SchemaDefinitions::HeaderImageObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Instructions", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "InstructionsUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ProfileUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "OtherUrls", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TagOptions", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Stats", ty: "::Modio::API::SchemaDefinitions::GameStatsObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Theme", ty: "::Modio::API::SchemaDefinitions::ThemeObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>", modifiers: "", def_value: None, comment: None }]
constexpr GameObject(int64_t  Id, int64_t  Status, ::Newtonsoft::Json::Linq::JObject*  SubmittedBy, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateLive, int64_t  PresentationOption, int64_t  SubmissionOption, int64_t  DependencyOption, int64_t  CurationOption, int64_t  CommunityOptions, int64_t  MonetizationOptions, ::Modio::API::SchemaDefinitions::GameMonetizationTeamObject  MonetizationTeam, int64_t  RevenueOptions, int64_t  MaxStock, int64_t  ApiAccessOptions, int64_t  MaturityOptions, ::StringW  UgcName, ::StringW  TokenName, ::Modio::API::SchemaDefinitions::IconObject  Icon, ::Modio::API::SchemaDefinitions::LogoObject  Logo, ::Modio::API::SchemaDefinitions::HeaderImageObject  Header, ::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Instructions, ::StringW  InstructionsUrl, ::StringW  ProfileUrl, ::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>  OtherUrls, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  TagOptions, ::Modio::API::SchemaDefinitions::GameStatsObject  Stats, ::Modio::API::SchemaDefinitions::ThemeObject  Theme, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  Platforms) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18124};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1a8};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field Status, offset: 0x8, size: 0x8, def value: None
 int64_t  Status;

/// @brief Field SubmittedBy, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JObject*  SubmittedBy;

/// @brief Field DateAdded, offset: 0x18, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field DateUpdated, offset: 0x20, size: 0x8, def value: None
 int64_t  DateUpdated;

/// @brief Field DateLive, offset: 0x28, size: 0x8, def value: None
 int64_t  DateLive;

/// @brief Field PresentationOption, offset: 0x30, size: 0x8, def value: None
 int64_t  PresentationOption;

/// @brief Field SubmissionOption, offset: 0x38, size: 0x8, def value: None
 int64_t  SubmissionOption;

/// @brief Field DependencyOption, offset: 0x40, size: 0x8, def value: None
 int64_t  DependencyOption;

/// @brief Field CurationOption, offset: 0x48, size: 0x8, def value: None
 int64_t  CurationOption;

/// @brief Field CommunityOptions, offset: 0x50, size: 0x8, def value: None
 int64_t  CommunityOptions;

/// @brief Field MonetizationOptions, offset: 0x58, size: 0x8, def value: None
 int64_t  MonetizationOptions;

/// @brief Field MonetizationTeam, offset: 0x60, size: 0x8, def value: None
 ::Modio::API::SchemaDefinitions::GameMonetizationTeamObject  MonetizationTeam;

/// @brief Field RevenueOptions, offset: 0x68, size: 0x8, def value: None
 int64_t  RevenueOptions;

/// @brief Field MaxStock, offset: 0x70, size: 0x8, def value: None
 int64_t  MaxStock;

/// @brief Field ApiAccessOptions, offset: 0x78, size: 0x8, def value: None
 int64_t  ApiAccessOptions;

/// @brief Field MaturityOptions, offset: 0x80, size: 0x8, def value: None
 int64_t  MaturityOptions;

/// @brief Field UgcName, offset: 0x88, size: 0x8, def value: None
 ::StringW  UgcName;

/// @brief Field TokenName, offset: 0x90, size: 0x8, def value: None
 ::StringW  TokenName;

/// @brief Field Icon, offset: 0x98, size: 0x28, def value: None
 ::Modio::API::SchemaDefinitions::IconObject  Icon;

/// @brief Field Logo, offset: 0xc0, size: 0x28, def value: None
 ::Modio::API::SchemaDefinitions::LogoObject  Logo;

/// @brief Field Header, offset: 0xe8, size: 0x10, def value: None
 ::Modio::API::SchemaDefinitions::HeaderImageObject  Header;

/// @brief Field Name, offset: 0xf8, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field NameId, offset: 0x100, size: 0x8, def value: None
 ::StringW  NameId;

/// @brief Field Summary, offset: 0x108, size: 0x8, def value: None
 ::StringW  Summary;

/// @brief Field Instructions, offset: 0x110, size: 0x8, def value: None
 ::StringW  Instructions;

/// @brief Field InstructionsUrl, offset: 0x118, size: 0x8, def value: None
 ::StringW  InstructionsUrl;

/// @brief Field ProfileUrl, offset: 0x120, size: 0x8, def value: None
 ::StringW  ProfileUrl;

/// @brief Field OtherUrls, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>  OtherUrls;

/// @brief Field TagOptions, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  TagOptions;

/// @brief Field Stats, offset: 0x138, size: 0x38, def value: None
 ::Modio::API::SchemaDefinitions::GameStatsObject  Stats;

/// @brief Field Theme, offset: 0x170, size: 0x30, def value: None
 ::Modio::API::SchemaDefinitions::ThemeObject  Theme;

/// @brief Field Platforms, offset: 0x1a0, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  Platforms;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Status) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, SubmittedBy) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, DateAdded) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, DateUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, DateLive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, PresentationOption) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, SubmissionOption) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, DependencyOption) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, CurationOption) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, CommunityOptions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, MonetizationOptions) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, MonetizationTeam) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, RevenueOptions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, MaxStock) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, ApiAccessOptions) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, MaturityOptions) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, UgcName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, TokenName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Icon) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Logo) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Header) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Name) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, NameId) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Summary) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Instructions) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, InstructionsUrl) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, ProfileUrl) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, OtherUrls) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, TagOptions) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Stats) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Theme) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameObject, Platforms) == 0x1a0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GameObject) == 0x1a8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
