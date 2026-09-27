#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AgreementVersionObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AgreementVersionObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AgreementVersionObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::AgreementVersionObject::*)(int64_t, bool, bool, int64_t, ::Modio::API::SchemaDefinitions::UserObject, int64_t, int64_t, int64_t, ::StringW, ::StringW, ::StringW, ::Newtonsoft::Json::Linq::JObject*)>(&::Modio::API::SchemaDefinitions::AgreementVersionObject::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9fec414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AgreementVersionObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::AgreementVersionObject::_ctor(int64_t  id, bool  is_active, bool  is_latest, int64_t  type, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  date_added, int64_t  date_updated, int64_t  date_live, ::StringW  name, ::StringW  changelog, ::StringW  description, ::Newtonsoft::Json::Linq::JObject*  adjacent_versions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AgreementVersionObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, is_active, is_latest, type, user, date_added, date_updated, date_live, name, changelog, description, adjacent_versions);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsActive", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsLatest", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Type", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Changelog", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AdjacentVersions", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::AgreementVersionObject::AgreementVersionObject(int64_t  Id, bool  IsActive, bool  IsLatest, int64_t  Type, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateLive, ::StringW  Name, ::StringW  Changelog, ::StringW  Description, ::Newtonsoft::Json::Linq::JObject*  AdjacentVersions) noexcept  {
this->Id = Id;
this->IsActive = IsActive;
this->IsLatest = IsLatest;
this->Type = Type;
this->User = User;
this->DateAdded = DateAdded;
this->DateUpdated = DateUpdated;
this->DateLive = DateLive;
this->Name = Name;
this->Changelog = Changelog;
this->Description = Description;
this->AdjacentVersions = AdjacentVersions;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::AgreementVersionObject::AgreementVersionObject()   {
}
