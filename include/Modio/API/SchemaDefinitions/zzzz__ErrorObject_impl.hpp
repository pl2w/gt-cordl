#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ErrorObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ErrorObject_EmbeddedError_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ErrorObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ErrorObject_EmbeddedError_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::ErrorObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::ErrorObject::*)(::GlobalNamespace::ErrorObject_EmbeddedError)>(&::Modio::API::SchemaDefinitions::ErrorObject::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fec840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ErrorObject>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ErrorObject_EmbeddedError>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::ErrorObject::_ctor(::GlobalNamespace::ErrorObject_EmbeddedError  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::ErrorObject>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ErrorObject_EmbeddedError>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, error);
}
// Ctor Parameters [CppParam { name: "Error", ty: "::GlobalNamespace::ErrorObject_EmbeddedError", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::ErrorObject::ErrorObject(::GlobalNamespace::ErrorObject_EmbeddedError  Error) noexcept  {
this->Error = Error;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::ErrorObject::ErrorObject()   {
}
