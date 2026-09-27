#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameMonetizationTeamObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameOtherUrlsObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GamePlatformsObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameStatsObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionLocalizedObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__HeaderImageObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__IconObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ThemeObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameMonetizationTeamObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameOtherUrlsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GamePlatformsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameStatsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionLocalizedObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__HeaderImageObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__IconObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ThemeObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GameObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GameObject::*)(int64_t, int64_t, ::Newtonsoft::Json::Linq::JObject*, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, ::Modio::API::SchemaDefinitions::GameMonetizationTeamObject, int64_t, int64_t, int64_t, int64_t, ::StringW, ::StringW, ::Modio::API::SchemaDefinitions::IconObject, ::Modio::API::SchemaDefinitions::LogoObject, ::Modio::API::SchemaDefinitions::HeaderImageObject, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>, ::Modio::API::SchemaDefinitions::GameStatsObject, ::Modio::API::SchemaDefinitions::ThemeObject, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>)>(&::Modio::API::SchemaDefinitions::GameObject::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9fec94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::GameMonetizationTeamObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::IconObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::LogoObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::HeaderImageObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::GameStatsObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ThemeObject>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GameObject::_ctor(int64_t  id, int64_t  status, ::Newtonsoft::Json::Linq::JObject*  submittedBy, int64_t  dateAdded, int64_t  dateUpdated, int64_t  dateLive, int64_t  presentationOption, int64_t  submissionOption, int64_t  dependencyOption, int64_t  curationOption, int64_t  communityOptions, int64_t  monetizationOptions, ::Modio::API::SchemaDefinitions::GameMonetizationTeamObject  monetizationTeam, int64_t  revenueOptions, int64_t  maxStock, int64_t  apiAccessOptions, int64_t  maturityOptions, ::StringW  ugcName, ::StringW  tokenName, ::Modio::API::SchemaDefinitions::IconObject  icon, ::Modio::API::SchemaDefinitions::LogoObject  logo, ::Modio::API::SchemaDefinitions::HeaderImageObject  header, ::StringW  name, ::StringW  nameId, ::StringW  summary, ::StringW  instructions, ::StringW  instructionsUrl, ::StringW  profileUrl, ::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>  otherUrls, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  tagOptions, ::Modio::API::SchemaDefinitions::GameStatsObject  stats, ::Modio::API::SchemaDefinitions::ThemeObject  theme, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  platforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::GameMonetizationTeamObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::IconObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::LogoObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::HeaderImageObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::GameStatsObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ThemeObject>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, status, submittedBy, dateAdded, dateUpdated, dateLive, presentationOption, submissionOption, dependencyOption, curationOption, communityOptions, monetizationOptions, monetizationTeam, revenueOptions, maxStock, apiAccessOptions, maturityOptions, ugcName, tokenName, icon, logo, header, name, nameId, summary, instructions, instructionsUrl, profileUrl, otherUrls, tagOptions, stats, theme, platforms);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SubmittedBy", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PresentationOption", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SubmissionOption", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DependencyOption", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CurationOption", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MonetizationOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MonetizationTeam", ty: "::Modio::API::SchemaDefinitions::GameMonetizationTeamObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RevenueOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxStock", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ApiAccessOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaturityOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UgcName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Icon", ty: "::Modio::API::SchemaDefinitions::IconObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Logo", ty: "::Modio::API::SchemaDefinitions::LogoObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Header", ty: "::Modio::API::SchemaDefinitions::HeaderImageObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Instructions", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InstructionsUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ProfileUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "OtherUrls", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TagOptions", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Stats", ty: "::Modio::API::SchemaDefinitions::GameStatsObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Theme", ty: "::Modio::API::SchemaDefinitions::ThemeObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GameObject::GameObject(int64_t  Id, int64_t  Status, ::Newtonsoft::Json::Linq::JObject*  SubmittedBy, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateLive, int64_t  PresentationOption, int64_t  SubmissionOption, int64_t  DependencyOption, int64_t  CurationOption, int64_t  CommunityOptions, int64_t  MonetizationOptions, ::Modio::API::SchemaDefinitions::GameMonetizationTeamObject  MonetizationTeam, int64_t  RevenueOptions, int64_t  MaxStock, int64_t  ApiAccessOptions, int64_t  MaturityOptions, ::StringW  UgcName, ::StringW  TokenName, ::Modio::API::SchemaDefinitions::IconObject  Icon, ::Modio::API::SchemaDefinitions::LogoObject  Logo, ::Modio::API::SchemaDefinitions::HeaderImageObject  Header, ::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Instructions, ::StringW  InstructionsUrl, ::StringW  ProfileUrl, ::ArrayW<::Modio::API::SchemaDefinitions::GameOtherUrlsObject>  OtherUrls, ::ArrayW<::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject>  TagOptions, ::Modio::API::SchemaDefinitions::GameStatsObject  Stats, ::Modio::API::SchemaDefinitions::ThemeObject  Theme, ::ArrayW<::Modio::API::SchemaDefinitions::GamePlatformsObject>  Platforms) noexcept  {
this->Id = Id;
this->Status = Status;
this->SubmittedBy = SubmittedBy;
this->DateAdded = DateAdded;
this->DateUpdated = DateUpdated;
this->DateLive = DateLive;
this->PresentationOption = PresentationOption;
this->SubmissionOption = SubmissionOption;
this->DependencyOption = DependencyOption;
this->CurationOption = CurationOption;
this->CommunityOptions = CommunityOptions;
this->MonetizationOptions = MonetizationOptions;
this->MonetizationTeam = MonetizationTeam;
this->RevenueOptions = RevenueOptions;
this->MaxStock = MaxStock;
this->ApiAccessOptions = ApiAccessOptions;
this->MaturityOptions = MaturityOptions;
this->UgcName = UgcName;
this->TokenName = TokenName;
this->Icon = Icon;
this->Logo = Logo;
this->Header = Header;
this->Name = Name;
this->NameId = NameId;
this->Summary = Summary;
this->Instructions = Instructions;
this->InstructionsUrl = InstructionsUrl;
this->ProfileUrl = ProfileUrl;
this->OtherUrls = OtherUrls;
this->TagOptions = TagOptions;
this->Stats = Stats;
this->Theme = Theme;
this->Platforms = Platforms;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GameObject::GameObject()   {
}
