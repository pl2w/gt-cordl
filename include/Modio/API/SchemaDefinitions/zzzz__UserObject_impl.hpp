#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/UserObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AvatarObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AvatarObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::UserObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::UserObject::*)(int64_t, ::StringW, ::StringW, ::StringW, int64_t, int64_t, ::Modio::API::SchemaDefinitions::AvatarObject, ::StringW, ::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::UserObject::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9fedd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::UserObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::AvatarObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::UserObject::_ctor(int64_t  id, ::StringW  name_id, ::StringW  username, ::StringW  display_name_portal, int64_t  date_online, int64_t  date_joined, ::Modio::API::SchemaDefinitions::AvatarObject  avatar, ::StringW  timezone, ::StringW  language, ::StringW  profile_url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::UserObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::AvatarObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, name_id, username, display_name_portal, date_online, date_joined, avatar, timezone, language, profile_url);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Username", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DisplayNamePortal", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateOnline", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateJoined", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Avatar", ty: "::Modio::API::SchemaDefinitions::AvatarObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Timezone", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Language", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ProfileUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::UserObject::UserObject(int64_t  Id, ::StringW  NameId, ::StringW  Username, ::StringW  DisplayNamePortal, int64_t  DateOnline, int64_t  DateJoined, ::Modio::API::SchemaDefinitions::AvatarObject  Avatar, ::StringW  Timezone, ::StringW  Language, ::StringW  ProfileUrl) noexcept  {
this->Id = Id;
this->NameId = NameId;
this->Username = Username;
this->DisplayNamePortal = DisplayNamePortal;
this->DateOnline = DateOnline;
this->DateJoined = DateJoined;
this->Avatar = Avatar;
this->Timezone = Timezone;
this->Language = Language;
this->ProfileUrl = ProfileUrl;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::UserObject::UserObject()   {
}
