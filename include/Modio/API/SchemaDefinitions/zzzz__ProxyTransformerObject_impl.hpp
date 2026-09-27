#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ProxyTransformerObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ProxyTransformerObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ProxyTransformerObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ProxyTransformerObject::*)(bool)>(&::Modio::API::SchemaDefinitions::ProxyTransformerObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fee17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ProxyTransformerObject>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ProxyTransformerObject::_ctor(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ProxyTransformerObject>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, success);
}
// Ctor Parameters [CppParam { name: "Success", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ProxyTransformerObject::ProxyTransformerObject(bool  Success) noexcept  {
this->Success = Success;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ProxyTransformerObject::ProxyTransformerObject()   {
}
