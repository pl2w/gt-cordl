#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GuideTagObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GuideTagObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GuideTagObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GuideTagObject::*)(::StringW, int64_t, int64_t)>(&::Modio::API::SchemaDefinitions::GuideTagObject::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9fecfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GuideTagObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GuideTagObject::_ctor(::StringW  name, int64_t  date_added, int64_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GuideTagObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, date_added, count);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GuideTagObject::GuideTagObject(::StringW  Name, int64_t  DateAdded, int64_t  Count) noexcept  {
this->Name = Name;
this->DateAdded = DateAdded;
this->Count = Count;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GuideTagObject::GuideTagObject()   {
}
