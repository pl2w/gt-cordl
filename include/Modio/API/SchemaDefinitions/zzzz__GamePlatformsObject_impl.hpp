#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GamePlatformsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GamePlatformsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GamePlatformsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GamePlatformsObject::*)(::StringW, ::StringW, bool, bool)>(&::Modio::API::SchemaDefinitions::GamePlatformsObject::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fecb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GamePlatformsObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GamePlatformsObject::_ctor(::StringW  platform, ::StringW  label, bool  moderated, bool  locked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GamePlatformsObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, platform, label, moderated, locked);
}
// Ctor Parameters [CppParam { name: "Platform", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Label", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Moderated", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Locked", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GamePlatformsObject::GamePlatformsObject(::StringW  Platform, ::StringW  Label, bool  Moderated, bool  Locked) noexcept  {
this->Platform = Platform;
this->Label = Label;
this->Moderated = Moderated;
this->Locked = Locked;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GamePlatformsObject::GamePlatformsObject()   {
}
