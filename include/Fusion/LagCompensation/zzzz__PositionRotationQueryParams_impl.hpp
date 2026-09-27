#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/PositionRotationQueryParams.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_impl.hpp"
#include "Fusion/LagCompensation/zzzz__PositionRotationQueryParams_def.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include "Fusion/zzzz__Hitbox_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::PositionRotationQueryParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::PositionRotationQueryParams::*)(::Fusion::LagCompensation::QueryParams, ::Fusion::Hitbox*)>(&::Fusion::LagCompensation::PositionRotationQueryParams::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x601be84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::PositionRotationQueryParams>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::QueryParams>(), ::i2c::type_of<::Fusion::Hitbox*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::LagCompensation::PositionRotationQueryParams::_ctor(::Fusion::LagCompensation::QueryParams  queryParams, ::Fusion::Hitbox*  hitbox)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::PositionRotationQueryParams>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::QueryParams>(), ::i2c::type_of<::Fusion::Hitbox*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, queryParams, hitbox);
}
// Ctor Parameters [CppParam { name: "QueryParams", ty: "::Fusion::LagCompensation::QueryParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hitbox", ty: "::UnityW<::Fusion::Hitbox>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensation::PositionRotationQueryParams::PositionRotationQueryParams(::Fusion::LagCompensation::QueryParams  QueryParams, ::UnityW<::Fusion::Hitbox>  Hitbox) noexcept  {
this->QueryParams = QueryParams;
this->Hitbox = Hitbox;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::PositionRotationQueryParams::PositionRotationQueryParams()   {
}
