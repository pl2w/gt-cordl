#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/IconObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__IconObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::IconObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::IconObject::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::IconObject::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9fed004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::IconObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::IconObject::_ctor(::StringW  filename, ::StringW  original, ::StringW  thumb_64x64, ::StringW  thumb_128x128, ::StringW  thumb_256x256)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::IconObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, filename, original, thumb_64x64, thumb_128x128, thumb_256x256);
}
// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Original", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Thumb64X64", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Thumb128X128", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Thumb256X256", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::IconObject::IconObject(::StringW  Filename, ::StringW  Original, ::StringW  Thumb64X64, ::StringW  Thumb128X128, ::StringW  Thumb256X256) noexcept  {
this->Filename = Filename;
this->Original = Original;
this->Thumb64X64 = Thumb64X64;
this->Thumb128X128 = Thumb128X128;
this->Thumb256X256 = Thumb256X256;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::IconObject::IconObject()   {
}
