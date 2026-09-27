#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MetadataKvpObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModMediaObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModPlatformsObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModStatsObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModTagObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MetadataKvpObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModMediaObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModPlatformsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModStatsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModTagObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModObject::*)(int64_t, int64_t, int64_t, int64_t, ::Modio::API::SchemaDefinitions::UserObject, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, int64_t, ::Modio::API::SchemaDefinitions::LogoObject, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::Modio::API::SchemaDefinitions::ModMediaObject, ::Modio::API::SchemaDefinitions::ModfileObject, bool, ::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>, ::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>, ::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>, ::Modio::API::SchemaDefinitions::ModStatsObject)>(&::Modio::API::SchemaDefinitions::ModObject::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9fed6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::LogoObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ModMediaObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ModfileObject>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ModStatsObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModObject.GetHiddenModObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::API::SchemaDefinitions::ModObject (*)(int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::ModObject::GetHiddenModObject)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x9fed8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModObject>(),
                        {"GetHiddenModObject", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModObject::_ctor(int64_t  id, int64_t  game_id, int64_t  status, int64_t  visible, ::Modio::API::SchemaDefinitions::UserObject  submitted_by, int64_t  date_added, int64_t  date_updated, int64_t  date_live, int64_t  maturity_option, int64_t  community_options, int64_t  monetization_options, int64_t  credit_options, int64_t  stock, int64_t  price, int64_t  tax, ::Modio::API::SchemaDefinitions::LogoObject  logo, ::StringW  homepage_url, ::StringW  name, ::StringW  name_id, ::StringW  summary, ::StringW  description, ::StringW  description_plaintext, ::StringW  metadata_blob, ::StringW  profile_url, ::Modio::API::SchemaDefinitions::ModMediaObject  media, ::Modio::API::SchemaDefinitions::ModfileObject  modfile, bool  dependencies, ::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>  platforms, ::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>  metadata_kvp, ::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>  tags, ::Modio::API::SchemaDefinitions::ModStatsObject  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::LogoObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ModMediaObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ModfileObject>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::ModStatsObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, game_id, status, visible, submitted_by, date_added, date_updated, date_live, maturity_option, community_options, monetization_options, credit_options, stock, price, tax, logo, homepage_url, name, name_id, summary, description, description_plaintext, metadata_blob, profile_url, media, modfile, dependencies, platforms, metadata_kvp, tags, stats);
}
inline ::Modio::API::SchemaDefinitions::ModObject Modio::API::SchemaDefinitions::ModObject::GetHiddenModObject(int64_t  modId, int64_t  modFileId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModObject>(),
                        {"GetHiddenModObject", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::API::SchemaDefinitions::ModObject>(nullptr, ___internal_method, modId, modFileId);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Visible", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SubmittedBy", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaturityOption", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MonetizationOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CreditOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Stock", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Price", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tax", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Logo", ty: "::Modio::API::SchemaDefinitions::LogoObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HomepageUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DescriptionPlaintext", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MetadataBlob", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ProfileUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Media", ty: "::Modio::API::SchemaDefinitions::ModMediaObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Modfile", ty: "::Modio::API::SchemaDefinitions::ModfileObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Dependencies", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Platforms", ty: "::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MetadataKvp", ty: "::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Stats", ty: "::Modio::API::SchemaDefinitions::ModStatsObject", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModObject::ModObject(int64_t  Id, int64_t  GameId, int64_t  Status, int64_t  Visible, ::Modio::API::SchemaDefinitions::UserObject  SubmittedBy, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateLive, int64_t  MaturityOption, int64_t  CommunityOptions, int64_t  MonetizationOptions, int64_t  CreditOptions, int64_t  Stock, int64_t  Price, int64_t  Tax, ::Modio::API::SchemaDefinitions::LogoObject  Logo, ::StringW  HomepageUrl, ::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Description, ::StringW  DescriptionPlaintext, ::StringW  MetadataBlob, ::StringW  ProfileUrl, ::Modio::API::SchemaDefinitions::ModMediaObject  Media, ::Modio::API::SchemaDefinitions::ModfileObject  Modfile, bool  Dependencies, ::ArrayW<::Modio::API::SchemaDefinitions::ModPlatformsObject>  Platforms, ::ArrayW<::Modio::API::SchemaDefinitions::MetadataKvpObject>  MetadataKvp, ::ArrayW<::Modio::API::SchemaDefinitions::ModTagObject>  Tags, ::Modio::API::SchemaDefinitions::ModStatsObject  Stats) noexcept  {
this->Id = Id;
this->GameId = GameId;
this->Status = Status;
this->Visible = Visible;
this->SubmittedBy = SubmittedBy;
this->DateAdded = DateAdded;
this->DateUpdated = DateUpdated;
this->DateLive = DateLive;
this->MaturityOption = MaturityOption;
this->CommunityOptions = CommunityOptions;
this->MonetizationOptions = MonetizationOptions;
this->CreditOptions = CreditOptions;
this->Stock = Stock;
this->Price = Price;
this->Tax = Tax;
this->Logo = Logo;
this->HomepageUrl = HomepageUrl;
this->Name = Name;
this->NameId = NameId;
this->Summary = Summary;
this->Description = Description;
this->DescriptionPlaintext = DescriptionPlaintext;
this->MetadataBlob = MetadataBlob;
this->ProfileUrl = ProfileUrl;
this->Media = Media;
this->Modfile = Modfile;
this->Dependencies = Dependencies;
this->Platforms = Platforms;
this->MetadataKvp = MetadataKvp;
this->Tags = Tags;
this->Stats = Stats;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModObject::ModObject()   {
}
