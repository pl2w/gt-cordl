#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/EntitlementDetailsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__EntitlementDetailsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::EntitlementDetailsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::EntitlementDetailsObject::*)(int64_t)>(&::Modio::API::SchemaDefinitions::EntitlementDetailsObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fec7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EntitlementDetailsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::EntitlementDetailsObject::_ctor(int64_t  tokens_allocated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::EntitlementDetailsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tokens_allocated);
}
// Ctor Parameters [CppParam { name: "TokensAllocated", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::EntitlementDetailsObject::EntitlementDetailsObject(int64_t  TokensAllocated) noexcept  {
this->TokensAllocated = TokensAllocated;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::EntitlementDetailsObject::EntitlementDetailsObject()   {
}
