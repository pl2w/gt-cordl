#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/HeaderImageObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__HeaderImageObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::HeaderImageObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::HeaderImageObject::*)(::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::HeaderImageObject::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9fecfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::HeaderImageObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::HeaderImageObject::_ctor(::StringW  filename, ::StringW  original)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::HeaderImageObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, filename, original);
}
// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Original", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::HeaderImageObject::HeaderImageObject(::StringW  Filename, ::StringW  Original) noexcept  {
this->Filename = Filename;
this->Original = Original;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::HeaderImageObject::HeaderImageObject()   {
}
