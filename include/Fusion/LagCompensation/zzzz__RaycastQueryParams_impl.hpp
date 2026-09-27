#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/RaycastQueryParams.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__RaycastQueryParams_def.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastQueryParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::RaycastQueryParams::*)(::Fusion::LagCompensation::QueryParams, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::Fusion::LagCompensation::RaycastQueryParams::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x601e3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastQueryParams>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::QueryParams>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::LagCompensation::RaycastQueryParams::_ctor(::Fusion::LagCompensation::QueryParams  queryParams, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, int32_t  staticHitsCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastQueryParams>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::QueryParams>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, queryParams, origin, direction, length, staticHitsCapacity);
}
// Ctor Parameters [CppParam { name: "QueryParams", ty: "::Fusion::LagCompensation::QueryParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Length", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StaticHitsCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensation::RaycastQueryParams::RaycastQueryParams(::Fusion::LagCompensation::QueryParams  QueryParams, ::UnityEngine::Vector3  Origin, ::UnityEngine::Vector3  Direction, float_t  Length, int32_t  StaticHitsCapacity) noexcept  {
this->QueryParams = QueryParams;
this->Origin = Origin;
this->Direction = Direction;
this->Length = Length;
this->StaticHitsCapacity = StaticHitsCapacity;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::RaycastQueryParams::RaycastQueryParams()   {
}
