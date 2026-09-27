#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModDependantsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModDependantsObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModDependantsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModDependantsObject::*)(int64_t, ::StringW, ::StringW, int64_t, int64_t, int64_t, int64_t, ::Modio::API::SchemaDefinitions::LogoObject)>(&::Modio::API::SchemaDefinitions::ModDependantsObject::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9fed22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModDependantsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::LogoObject>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModDependantsObject::_ctor(int64_t  mod_id, ::StringW  name, ::StringW  name_id, int64_t  status, int64_t  visible, int64_t  date_added, int64_t  date_updated, ::Modio::API::SchemaDefinitions::LogoObject  logo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModDependantsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::LogoObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mod_id, name, name_id, status, visible, date_added, date_updated, logo);
}
// Ctor Parameters [CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Visible", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Logo", ty: "::Modio::API::SchemaDefinitions::LogoObject", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModDependantsObject::ModDependantsObject(int64_t  ModId, ::StringW  Name, ::StringW  NameId, int64_t  Status, int64_t  Visible, int64_t  DateAdded, int64_t  DateUpdated, ::Modio::API::SchemaDefinitions::LogoObject  Logo) noexcept  {
this->ModId = ModId;
this->Name = Name;
this->NameId = NameId;
this->Status = Status;
this->Visible = Visible;
this->DateAdded = DateAdded;
this->DateUpdated = DateUpdated;
this->Logo = Logo;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModDependantsObject::ModDependantsObject()   {
}
