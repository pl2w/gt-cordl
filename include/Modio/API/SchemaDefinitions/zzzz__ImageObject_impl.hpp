#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ImageObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ImageObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ImageObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ImageObject::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::ImageObject::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fed078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ImageObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ImageObject::_ctor(::StringW  filename, ::StringW  original, ::StringW  thumb_320x180, ::StringW  thumb_1280x720)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ImageObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, filename, original, thumb_320x180, thumb_1280x720);
}
// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Original", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Thumb320X180", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Thumb1280X720", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ImageObject::ImageObject(::StringW  Filename, ::StringW  Original, ::StringW  Thumb320X180, ::StringW  Thumb1280X720) noexcept  {
this->Filename = Filename;
this->Original = Original;
this->Thumb320X180 = Thumb320X180;
this->Thumb1280X720 = Thumb1280X720;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ImageObject::ImageObject()   {
}
