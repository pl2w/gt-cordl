#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FrustumPlaneCuller_PlanePacket4.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_PlanePacket4_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FrustumPlaneCuller_PlanePacket4._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FrustumPlaneCuller_PlanePacket4::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, int32_t, int32_t)>(&::GlobalNamespace::FrustumPlaneCuller_PlanePacket4::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb1e9448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FrustumPlaneCuller_PlanePacket4::_ctor(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, int32_t  offset, int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FrustumPlaneCuller_PlanePacket4>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, planes, offset, limit);
}
// Ctor Parameters [CppParam { name: "nx", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ny", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nz", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "d", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nxAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nyAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nzAbs", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FrustumPlaneCuller_PlanePacket4::FrustumPlaneCuller_PlanePacket4(::Unity::Mathematics::float4  nx, ::Unity::Mathematics::float4  ny, ::Unity::Mathematics::float4  nz, ::Unity::Mathematics::float4  d, ::Unity::Mathematics::float4  nxAbs, ::Unity::Mathematics::float4  nyAbs, ::Unity::Mathematics::float4  nzAbs) noexcept  {
this->nx = nx;
this->ny = ny;
this->nz = nz;
this->d = d;
this->nxAbs = nxAbs;
this->nyAbs = nyAbs;
this->nzAbs = nzAbs;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FrustumPlaneCuller_PlanePacket4::FrustumPlaneCuller_PlanePacket4()   {
}
