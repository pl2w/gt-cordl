#pragma once
// IWYU pragma private; include "Drawing/GeometryBuilder_CameraInfo.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "Drawing/zzzz__GeometryBuilder_CameraInfo_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GeometryBuilder_CameraInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeometryBuilder_CameraInfo::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::GeometryBuilder_CameraInfo::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x55cee9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeometryBuilder_CameraInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GeometryBuilder_CameraInfo::_ctor(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeometryBuilder_CameraInfo>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera);
}
// Ctor Parameters [CppParam { name: "cameraPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraRotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraDepthToPixelSize", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cameraIsOrthographic", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GeometryBuilder_CameraInfo::GeometryBuilder_CameraInfo(::Unity::Mathematics::float3  cameraPosition, ::Unity::Mathematics::quaternion  cameraRotation, ::Unity::Mathematics::float2  cameraDepthToPixelSize, bool  cameraIsOrthographic) noexcept  {
this->cameraPosition = cameraPosition;
this->cameraRotation = cameraRotation;
this->cameraDepthToPixelSize = cameraDepthToPixelSize;
this->cameraIsOrthographic = cameraIsOrthographic;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GeometryBuilder_CameraInfo::GeometryBuilder_CameraInfo()   {
}
