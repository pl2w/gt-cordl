#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BoxOverlapQueryParams.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__BoxOverlapQueryParams_def.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::BoxOverlapQueryParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BoxOverlapQueryParams::*)(::Fusion::LagCompensation::QueryParams, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, int32_t)>(&::Fusion::LagCompensation::BoxOverlapQueryParams::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x601ceec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQueryParams>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::QueryParams>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::LagCompensation::BoxOverlapQueryParams::_ctor(::Fusion::LagCompensation::QueryParams  queryParams, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  extents, ::UnityEngine::Quaternion  rotation, int32_t  staticHitsCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQueryParams>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LagCompensation::QueryParams>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, queryParams, center, extents, rotation, staticHitsCapacity);
}
// Ctor Parameters [CppParam { name: "QueryParams", ty: "::Fusion::LagCompensation::QueryParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Extents", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StaticHitsCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LagCompensation::BoxOverlapQueryParams::BoxOverlapQueryParams(::Fusion::LagCompensation::QueryParams  QueryParams, ::UnityEngine::Vector3  Center, ::UnityEngine::Vector3  Extents, ::UnityEngine::Quaternion  Rotation, int32_t  StaticHitsCapacity) noexcept  {
this->QueryParams = QueryParams;
this->Center = Center;
this->Extents = Extents;
this->Rotation = Rotation;
this->StaticHitsCapacity = StaticHitsCapacity;
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::BoxOverlapQueryParams::BoxOverlapQueryParams()   {
}
