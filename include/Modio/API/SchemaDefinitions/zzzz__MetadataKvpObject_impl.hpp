#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/MetadataKvpObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MetadataKvpObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::MetadataKvpObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::MetadataKvpObject::*)(::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::MetadataKvpObject::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9fed1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MetadataKvpObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::MetadataKvpObject::_ctor(::StringW  metakey, ::StringW  metavalue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::MetadataKvpObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, metakey, metavalue);
}
// Ctor Parameters [CppParam { name: "Metakey", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Metavalue", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::MetadataKvpObject::MetadataKvpObject(::StringW  Metakey, ::StringW  Metavalue) noexcept  {
this->Metakey = Metakey;
this->Metavalue = Metavalue;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::MetadataKvpObject::MetadataKvpObject()   {
}
