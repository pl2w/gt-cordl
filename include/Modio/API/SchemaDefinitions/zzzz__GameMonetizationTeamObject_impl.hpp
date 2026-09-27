#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameMonetizationTeamObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__GameMonetizationTeamObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::GameMonetizationTeamObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::GameMonetizationTeamObject::*)(int64_t)>(&::Modio::API::SchemaDefinitions::GameMonetizationTeamObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fec944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameMonetizationTeamObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::GameMonetizationTeamObject::_ctor(int64_t  team_id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::GameMonetizationTeamObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, team_id);
}
// Ctor Parameters [CppParam { name: "TeamId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::GameMonetizationTeamObject::GameMonetizationTeamObject(int64_t  TeamId) noexcept  {
this->TeamId = TeamId;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::GameMonetizationTeamObject::GameMonetizationTeamObject()   {
}
