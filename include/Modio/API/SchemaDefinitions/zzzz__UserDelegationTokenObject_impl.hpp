#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/UserDelegationTokenObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserDelegationTokenObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::UserDelegationTokenObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::UserDelegationTokenObject::*)(::StringW, ::StringW)>(&::Modio::API::SchemaDefinitions::UserDelegationTokenObject::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9fee7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::UserDelegationTokenObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::UserDelegationTokenObject::_ctor(::StringW  entity, ::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::UserDelegationTokenObject>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, entity, token);
}
// Ctor Parameters [CppParam { name: "Entity", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::UserDelegationTokenObject::UserDelegationTokenObject(::StringW  Entity, ::StringW  Token) noexcept  {
this->Entity = Entity;
this->Token = Token;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::UserDelegationTokenObject::UserDelegationTokenObject()   {
}
