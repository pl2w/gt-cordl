#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModPlatformsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModPlatformsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ModPlatformsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ModPlatformsObject::*)(::StringW, int64_t)>(&::Modio::API::SchemaDefinitions::ModPlatformsObject::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fede4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModPlatformsObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ModPlatformsObject::_ctor(::StringW  platform, int64_t  modfile_live)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ModPlatformsObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, platform, modfile_live);
}
// Ctor Parameters [CppParam { name: "Platform", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModfileLive", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ModPlatformsObject::ModPlatformsObject(::StringW  Platform, int64_t  ModfileLive) noexcept  {
this->Platform = Platform;
this->ModfileLive = ModfileLive;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ModPlatformsObject::ModPlatformsObject()   {
}
