#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EmbeddableModHubConfigurationObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__EmbeddableModHubConfigurationObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject::*)(int64_t, ::StringW, ::ArrayW<::StringW>, ::StringW, ::StringW, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int64_t, int64_t, int64_t, int64_t, ::StringW, ::ArrayW<::System::Object*>)>(&::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9fec5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject::_ctor(int64_t  id, ::StringW  name, ::ArrayW<::StringW>  urls, ::StringW  style, ::StringW  css, bool  allow_subscribing, bool  allow_rating, bool  allow_reporting, bool  allow_downloading, bool  allow_commenting, bool  allow_filtering, bool  allow_searching, bool  allow_infinite_scroll, bool  allow_email_auth, bool  allow_sso_auth, bool  allow_steam_auth, bool  allow_PSN_auth, bool  allow_xbox_auth, bool  allow_egs_auth, bool  allow_discord_auth, bool  allow_google_auth, bool  show_collection, bool  show_comments, bool  show_guides, bool  show_user_avatars, bool  show_sort_tabs, bool  allow_links, bool  filter_right_side, bool  name_right_side, int64_t  results_per_page, int64_t  min_age, int64_t  date_added, int64_t  date_updated, ::StringW  company_name, ::ArrayW<::System::Object*>  agreement_urls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, name, urls, style, css, allow_subscribing, allow_rating, allow_reporting, allow_downloading, allow_commenting, allow_filtering, allow_searching, allow_infinite_scroll, allow_email_auth, allow_sso_auth, allow_steam_auth, allow_PSN_auth, allow_xbox_auth, allow_egs_auth, allow_discord_auth, allow_google_auth, show_collection, show_comments, show_guides, show_user_avatars, show_sort_tabs, allow_links, filter_right_side, name_right_side, results_per_page, min_age, date_added, date_updated, company_name, agreement_urls);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Urls", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Style", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Css", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowSubscribing", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowRating", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowReporting", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowDownloading", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowCommenting", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowFiltering", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowSearching", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowInfiniteScroll", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowEmailAuth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowSsoAuth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowSteamAuth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowPsnAuth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowXboxAuth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowEgsAuth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowDiscordAuth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowGoogleAuth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShowCollection", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShowComments", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShowGuides", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShowUserAvatars", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShowSortTabs", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllowLinks", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FilterRightSide", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameRightSide", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResultsPerPage", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MinAge", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompanyName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AgreementUrls", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject::EmbeddableModHubConfigurationObject(int64_t  Id, ::StringW  Name, ::ArrayW<::StringW>  Urls, ::StringW  Style, ::StringW  Css, bool  AllowSubscribing, bool  AllowRating, bool  AllowReporting, bool  AllowDownloading, bool  AllowCommenting, bool  AllowFiltering, bool  AllowSearching, bool  AllowInfiniteScroll, bool  AllowEmailAuth, bool  AllowSsoAuth, bool  AllowSteamAuth, bool  AllowPsnAuth, bool  AllowXboxAuth, bool  AllowEgsAuth, bool  AllowDiscordAuth, bool  AllowGoogleAuth, bool  ShowCollection, bool  ShowComments, bool  ShowGuides, bool  ShowUserAvatars, bool  ShowSortTabs, bool  AllowLinks, bool  FilterRightSide, bool  NameRightSide, int64_t  ResultsPerPage, int64_t  MinAge, int64_t  DateAdded, int64_t  DateUpdated, ::StringW  CompanyName, ::ArrayW<::System::Object*>  AgreementUrls) noexcept  {
this->Id = Id;
this->Name = Name;
this->Urls = Urls;
this->Style = Style;
this->Css = Css;
this->AllowSubscribing = AllowSubscribing;
this->AllowRating = AllowRating;
this->AllowReporting = AllowReporting;
this->AllowDownloading = AllowDownloading;
this->AllowCommenting = AllowCommenting;
this->AllowFiltering = AllowFiltering;
this->AllowSearching = AllowSearching;
this->AllowInfiniteScroll = AllowInfiniteScroll;
this->AllowEmailAuth = AllowEmailAuth;
this->AllowSsoAuth = AllowSsoAuth;
this->AllowSteamAuth = AllowSteamAuth;
this->AllowPsnAuth = AllowPsnAuth;
this->AllowXboxAuth = AllowXboxAuth;
this->AllowEgsAuth = AllowEgsAuth;
this->AllowDiscordAuth = AllowDiscordAuth;
this->AllowGoogleAuth = AllowGoogleAuth;
this->ShowCollection = ShowCollection;
this->ShowComments = ShowComments;
this->ShowGuides = ShowGuides;
this->ShowUserAvatars = ShowUserAvatars;
this->ShowSortTabs = ShowSortTabs;
this->AllowLinks = AllowLinks;
this->FilterRightSide = FilterRightSide;
this->NameRightSide = NameRightSide;
this->ResultsPerPage = ResultsPerPage;
this->MinAge = MinAge;
this->DateAdded = DateAdded;
this->DateUpdated = DateUpdated;
this->CompanyName = CompanyName;
this->AgreementUrls = AgreementUrls;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::EmbeddableModHubConfigurationObject::EmbeddableModHubConfigurationObject()   {
}
