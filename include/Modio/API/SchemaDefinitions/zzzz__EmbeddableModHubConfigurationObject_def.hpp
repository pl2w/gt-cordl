#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EmbeddableModHubConfigurationObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EmbeddableModHubConfigurationObject)
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct EmbeddableModHubConfigurationObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, "Modio.API.SchemaDefinitions", "EmbeddableModHubConfigurationObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies System.Object
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.EmbeddableModHubConfigurationObject
struct CORDL_TYPE EmbeddableModHubConfigurationObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec5f8, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, ::StringW  name, ::ArrayW<::StringW>  urls, ::StringW  style, ::StringW  css, bool  allow_subscribing, bool  allow_rating, bool  allow_reporting, bool  allow_downloading, bool  allow_commenting, bool  allow_filtering, bool  allow_searching, bool  allow_infinite_scroll, bool  allow_email_auth, bool  allow_sso_auth, bool  allow_steam_auth, bool  allow_PSN_auth, bool  allow_xbox_auth, bool  allow_egs_auth, bool  allow_discord_auth, bool  allow_google_auth, bool  show_collection, bool  show_comments, bool  show_guides, bool  show_user_avatars, bool  show_sort_tabs, bool  allow_links, bool  filter_right_side, bool  name_right_side, int64_t  results_per_page, int64_t  min_age, int64_t  date_added, int64_t  date_updated, ::StringW  company_name, ::ArrayW<::System::Object*>  agreement_urls) ;

// Ctor Parameters []
// @brief default ctor
constexpr EmbeddableModHubConfigurationObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Urls", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Style", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Css", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowSubscribing", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowRating", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowReporting", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowDownloading", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowCommenting", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowFiltering", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowSearching", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowInfiniteScroll", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowEmailAuth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowSsoAuth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowSteamAuth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowPsnAuth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowXboxAuth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowEgsAuth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowDiscordAuth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowGoogleAuth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowCollection", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowComments", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowGuides", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowUserAvatars", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShowSortTabs", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AllowLinks", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "FilterRightSide", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameRightSide", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResultsPerPage", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MinAge", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CompanyName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "AgreementUrls", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: None, comment: None }]
constexpr EmbeddableModHubConfigurationObject(int64_t  Id, ::StringW  Name, ::ArrayW<::StringW>  Urls, ::StringW  Style, ::StringW  Css, bool  AllowSubscribing, bool  AllowRating, bool  AllowReporting, bool  AllowDownloading, bool  AllowCommenting, bool  AllowFiltering, bool  AllowSearching, bool  AllowInfiniteScroll, bool  AllowEmailAuth, bool  AllowSsoAuth, bool  AllowSteamAuth, bool  AllowPsnAuth, bool  AllowXboxAuth, bool  AllowEgsAuth, bool  AllowDiscordAuth, bool  AllowGoogleAuth, bool  ShowCollection, bool  ShowComments, bool  ShowGuides, bool  ShowUserAvatars, bool  ShowSortTabs, bool  AllowLinks, bool  FilterRightSide, bool  NameRightSide, int64_t  ResultsPerPage, int64_t  MinAge, int64_t  DateAdded, int64_t  DateUpdated, ::StringW  CompanyName, ::ArrayW<::System::Object*>  AgreementUrls) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18116};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field Name, offset: 0x8, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Urls, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  Urls;

/// @brief Field Style, offset: 0x18, size: 0x8, def value: None
 ::StringW  Style;

/// @brief Field Css, offset: 0x20, size: 0x8, def value: None
 ::StringW  Css;

/// @brief Field AllowSubscribing, offset: 0x28, size: 0x1, def value: None
 bool  AllowSubscribing;

/// @brief Field AllowRating, offset: 0x29, size: 0x1, def value: None
 bool  AllowRating;

/// @brief Field AllowReporting, offset: 0x2a, size: 0x1, def value: None
 bool  AllowReporting;

/// @brief Field AllowDownloading, offset: 0x2b, size: 0x1, def value: None
 bool  AllowDownloading;

/// @brief Field AllowCommenting, offset: 0x2c, size: 0x1, def value: None
 bool  AllowCommenting;

/// @brief Field AllowFiltering, offset: 0x2d, size: 0x1, def value: None
 bool  AllowFiltering;

/// @brief Field AllowSearching, offset: 0x2e, size: 0x1, def value: None
 bool  AllowSearching;

/// @brief Field AllowInfiniteScroll, offset: 0x2f, size: 0x1, def value: None
 bool  AllowInfiniteScroll;

/// @brief Field AllowEmailAuth, offset: 0x30, size: 0x1, def value: None
 bool  AllowEmailAuth;

/// @brief Field AllowSsoAuth, offset: 0x31, size: 0x1, def value: None
 bool  AllowSsoAuth;

/// @brief Field AllowSteamAuth, offset: 0x32, size: 0x1, def value: None
 bool  AllowSteamAuth;

/// @brief Field AllowPsnAuth, offset: 0x33, size: 0x1, def value: None
 bool  AllowPsnAuth;

/// @brief Field AllowXboxAuth, offset: 0x34, size: 0x1, def value: None
 bool  AllowXboxAuth;

/// @brief Field AllowEgsAuth, offset: 0x35, size: 0x1, def value: None
 bool  AllowEgsAuth;

/// @brief Field AllowDiscordAuth, offset: 0x36, size: 0x1, def value: None
 bool  AllowDiscordAuth;

/// @brief Field AllowGoogleAuth, offset: 0x37, size: 0x1, def value: None
 bool  AllowGoogleAuth;

/// @brief Field ShowCollection, offset: 0x38, size: 0x1, def value: None
 bool  ShowCollection;

/// @brief Field ShowComments, offset: 0x39, size: 0x1, def value: None
 bool  ShowComments;

/// @brief Field ShowGuides, offset: 0x3a, size: 0x1, def value: None
 bool  ShowGuides;

/// @brief Field ShowUserAvatars, offset: 0x3b, size: 0x1, def value: None
 bool  ShowUserAvatars;

/// @brief Field ShowSortTabs, offset: 0x3c, size: 0x1, def value: None
 bool  ShowSortTabs;

/// @brief Field AllowLinks, offset: 0x3d, size: 0x1, def value: None
 bool  AllowLinks;

/// @brief Field FilterRightSide, offset: 0x3e, size: 0x1, def value: None
 bool  FilterRightSide;

/// @brief Field NameRightSide, offset: 0x3f, size: 0x1, def value: None
 bool  NameRightSide;

/// @brief Field ResultsPerPage, offset: 0x40, size: 0x8, def value: None
 int64_t  ResultsPerPage;

/// @brief Field MinAge, offset: 0x48, size: 0x8, def value: None
 int64_t  MinAge;

/// @brief Field DateAdded, offset: 0x50, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field DateUpdated, offset: 0x58, size: 0x8, def value: None
 int64_t  DateUpdated;

/// @brief Field CompanyName, offset: 0x60, size: 0x8, def value: None
 ::StringW  CompanyName;

/// @brief Field AgreementUrls, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  AgreementUrls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, Urls) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, Style) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, Css) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowSubscribing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowRating) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowReporting) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowDownloading) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowCommenting) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowFiltering) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowSearching) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowInfiniteScroll) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowEmailAuth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowSsoAuth) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowSteamAuth) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowPsnAuth) == 0x33, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowXboxAuth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowEgsAuth) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowDiscordAuth) == 0x36, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowGoogleAuth) == 0x37, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, ShowCollection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, ShowComments) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, ShowGuides) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, ShowUserAvatars) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, ShowSortTabs) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AllowLinks) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, FilterRightSide) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, NameRightSide) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, ResultsPerPage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, MinAge) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, DateAdded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, DateUpdated) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, CompanyName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject, AgreementUrls) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject) == 0x70, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
