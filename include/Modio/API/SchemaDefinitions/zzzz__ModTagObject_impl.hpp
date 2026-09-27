#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModTagObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModTagObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModTagObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModTagObject::*)(::StringW, ::StringW, int64_t)>(&::Modio::API::SchemaDefinitions::ModTagObject::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9fede74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModTagObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModTagObject::_ctor(::StringW  name, ::StringW  name_localized, int64_t  date_added)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModTagObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, name_localized, date_added);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NameLocalized", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModTagObject::ModTagObject(::StringW  Name, ::StringW  NameLocalized, int64_t  DateAdded) noexcept  {
this->Name = Name;
this->NameLocalized = NameLocalized;
this->DateAdded = DateAdded;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModTagObject::ModTagObject()   {
}
