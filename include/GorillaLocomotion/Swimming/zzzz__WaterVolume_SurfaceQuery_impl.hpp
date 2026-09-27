#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterVolume_SurfaceQuery.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_SurfaceQuery_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WaterVolume_SurfaceQuery.get_surfacePlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (::GlobalNamespace::WaterVolume_SurfaceQuery::*)()>(&::GlobalNamespace::WaterVolume_SurfaceQuery::get_surfacePlane)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ce89b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterVolume_SurfaceQuery>(),
                        {"get_surfacePlane", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Plane GlobalNamespace::WaterVolume_SurfaceQuery::get_surfacePlane()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterVolume_SurfaceQuery>(),
                        {"get_surfacePlane", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "surfacePoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfaceNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery::WaterVolume_SurfaceQuery(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  maxDepth) noexcept  {
this->surfacePoint = surfacePoint;
this->surfaceNormal = surfaceNormal;
this->maxDepth = maxDepth;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery::WaterVolume_SurfaceQuery()   {
}
