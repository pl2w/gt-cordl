#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GuideObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GuideStatsObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GuideTagObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GuideObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GuideStatsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GuideTagObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GuideObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GuideObject::*)(int64_t, int64_t, ::StringW, ::Modio::API::SchemaDefinitions::LogoObject, ::Modio::API::SchemaDefinitions::UserObject, int64_t, int64_t, int64_t, int64_t, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, int64_t, ::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>, ::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>)>(&::Modio::API::SchemaDefinitions::GuideObject::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9fece6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GuideObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::LogoObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GuideObject::_ctor(int64_t  id, int64_t  game_id, ::StringW  game_name, ::Modio::API::SchemaDefinitions::LogoObject  logo, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  date_added, int64_t  date_updated, int64_t  date_live, int64_t  status, ::StringW  url, ::StringW  name, ::StringW  name_id, ::StringW  summary, ::StringW  description, int64_t  community_options, ::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>  tags, ::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GuideObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::LogoObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>>(), ::i2c::type_of<::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, game_id, game_name, logo, user, date_added, date_updated, date_live, status, url, name, name_id, summary, description, community_options, tags, stats);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Logo", ty: "::Modio::API::SchemaDefinitions::LogoObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Summary", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CommunityOptions", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Stats", ty: "::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GuideObject::GuideObject(int64_t  Id, int64_t  GameId, ::StringW  GameName, ::Modio::API::SchemaDefinitions::LogoObject  Logo, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateLive, int64_t  Status, ::StringW  Url, ::StringW  Name, ::StringW  NameId, ::StringW  Summary, ::StringW  Description, int64_t  CommunityOptions, ::ArrayW<::Modio::API::SchemaDefinitions::GuideTagObject>  Tags, ::ArrayW<::Modio::API::SchemaDefinitions::GuideStatsObject>  Stats) noexcept  {
this->Id = Id;
this->GameId = GameId;
this->GameName = GameName;
this->Logo = Logo;
this->User = User;
this->DateAdded = DateAdded;
this->DateUpdated = DateUpdated;
this->DateLive = DateLive;
this->Status = Status;
this->Url = Url;
this->Name = Name;
this->NameId = NameId;
this->Summary = Summary;
this->Description = Description;
this->CommunityOptions = CommunityOptions;
this->Tags = Tags;
this->Stats = Stats;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GuideObject::GuideObject()   {
}
