#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModUserPreviewObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModUserPreviewObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModUserPreviewObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModUserPreviewObject::*)(::Modio::API::SchemaDefinitions::UserObject, ::Modio::API::SchemaDefinitions::UserObject, ::StringW, bool, int64_t)>(&::Modio::API::SchemaDefinitions::ModUserPreviewObject::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9fedeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModUserPreviewObject>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModUserPreviewObject::_ctor(::Modio::API::SchemaDefinitions::UserObject  user, ::Modio::API::SchemaDefinitions::UserObject  user_from, ::StringW  resource_url, bool  subscribed, int64_t  date_added)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModUserPreviewObject>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, user, user_from, resource_url, subscribed, date_added);
}
// Ctor Parameters [CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UserFrom", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResourceUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Subscribed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModUserPreviewObject::ModUserPreviewObject(::Modio::API::SchemaDefinitions::UserObject  User, ::Modio::API::SchemaDefinitions::UserObject  UserFrom, ::StringW  ResourceUrl, bool  Subscribed, int64_t  DateAdded) noexcept  {
this->User = User;
this->UserFrom = UserFrom;
this->ResourceUrl = ResourceUrl;
this->Subscribed = Subscribed;
this->DateAdded = DateAdded;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModUserPreviewObject::ModUserPreviewObject()   {
}
