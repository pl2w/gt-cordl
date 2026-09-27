#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ThemeObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ThemeObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ThemeObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ThemeObject::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::ThemeObject::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fee5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ThemeObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ThemeObject::_ctor(::StringW  primary, ::StringW  dark, ::StringW  light, ::StringW  success, ::StringW  warning, ::StringW  danger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ThemeObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, primary, dark, light, success, warning, danger);
}
// Ctor Parameters [CppParam { name: "Primary", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Dark", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Light", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Success", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Warning", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Danger", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ThemeObject::ThemeObject(::StringW  Primary, ::StringW  Dark, ::StringW  Light, ::StringW  Success, ::StringW  Warning, ::StringW  Danger) noexcept  {
this->Primary = Primary;
this->Dark = Dark;
this->Light = Light;
this->Success = Success;
this->Warning = Warning;
this->Danger = Danger;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ThemeObject::ThemeObject()   {
}
