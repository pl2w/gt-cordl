#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AvatarObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__AvatarObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::AvatarObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::AvatarObject::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::AvatarObject::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fec4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AvatarObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::AvatarObject::_ctor(::StringW  filename, ::StringW  original, ::StringW  thumb_50x50, ::StringW  thumb_100x100)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::AvatarObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, filename, original, thumb_50x50, thumb_100x100);
}
// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Original", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Thumb50X50", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Thumb100X100", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::AvatarObject::AvatarObject(::StringW  Filename, ::StringW  Original, ::StringW  Thumb50X50, ::StringW  Thumb100X100) noexcept  {
this->Filename = Filename;
this->Original = Original;
this->Thumb50X50 = Thumb50X50;
this->Thumb100X100 = Thumb100X100;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::AvatarObject::AvatarObject()   {
}
