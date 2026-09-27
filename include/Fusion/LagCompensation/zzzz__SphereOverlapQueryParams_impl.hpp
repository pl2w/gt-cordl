#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/SphereOverlapQueryParams.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__SphereOverlapQueryParams_def.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::SphereOverlapQueryParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::SphereOverlapQueryParams::*)(::Fusion::LagCompensation::QueryParams, ::UnityEngine::Vector3, float_t, int32_t)>(&::Fusion::LagCompensation::SphereOverlapQueryParams::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x601efac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQueryParams>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::QueryParams>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::LagCompensation::SphereOverlapQueryParams::_ctor(::Fusion::LagCompensation::QueryParams  queryParams, ::UnityEngine::Vector3  center, float_t  radius, int32_t  staticHitsCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQueryParams>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::QueryParams>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, queryParams, center, radius, staticHitsCapacity);
}
// Ctor Parameters [CppParam { name: "QueryParams", ty: "::Fusion::LagCompensation::QueryParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StaticHitsCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensation::SphereOverlapQueryParams::SphereOverlapQueryParams(::Fusion::LagCompensation::QueryParams  QueryParams, ::UnityEngine::Vector3  Center, float_t  Radius, int32_t  StaticHitsCapacity) noexcept  {
this->QueryParams = QueryParams;
this->Center = Center;
this->Radius = Radius;
this->StaticHitsCapacity = StaticHitsCapacity;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::SphereOverlapQueryParams::SphereOverlapQueryParams()   {
}
