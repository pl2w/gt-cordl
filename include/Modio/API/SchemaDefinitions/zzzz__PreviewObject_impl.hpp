#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/PreviewObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PreviewObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::PreviewObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::PreviewObject::*)(::StringW, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::PreviewObject::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9fee150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::PreviewObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::PreviewObject::_ctor(::StringW  resource_url, int64_t  date_added, int64_t  date_updated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::PreviewObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, resource_url, date_added, date_updated);
}
// Ctor Parameters [CppParam { name: "ResourceUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::PreviewObject::PreviewObject(::StringW  ResourceUrl, int64_t  DateAdded, int64_t  DateUpdated) noexcept  {
this->ResourceUrl = ResourceUrl;
this->DateAdded = DateAdded;
this->DateUpdated = DateUpdated;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::PreviewObject::PreviewObject()   {
}
