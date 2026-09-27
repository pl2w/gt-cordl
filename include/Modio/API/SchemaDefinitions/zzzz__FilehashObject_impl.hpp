#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/FilehashObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__FilehashObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::FilehashObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::FilehashObject::*)(::StringW)>(&::Modio::API::SchemaDefinitions::FilehashObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fec894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::FilehashObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::FilehashObject::_ctor(::StringW  md5)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::FilehashObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, md5);
}
// Ctor Parameters [CppParam { name: "Md5", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::FilehashObject::FilehashObject(::StringW  Md5) noexcept  {
this->Md5 = Md5;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::FilehashObject::FilehashObject()   {
}
