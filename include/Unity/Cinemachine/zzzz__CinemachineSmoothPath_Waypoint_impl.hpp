#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSmoothPath_Waypoint.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSmoothPath_Waypoint_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineSmoothPath_Waypoint.get_AsVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::GlobalNamespace::CinemachineSmoothPath_Waypoint::*)()>(&::GlobalNamespace::CinemachineSmoothPath_Waypoint::get_AsVector4)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaed99f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSmoothPath_Waypoint>(),
                        {"get_AsVector4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineSmoothPath_Waypoint.FromVector4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineSmoothPath_Waypoint (*)(::UnityEngine::Vector4)>(&::GlobalNamespace::CinemachineSmoothPath_Waypoint::FromVector4)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaed99fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSmoothPath_Waypoint>(),
                        {"FromVector4", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector4 GlobalNamespace::CinemachineSmoothPath_Waypoint::get_AsVector4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSmoothPath_Waypoint>(),
                        {"get_AsVector4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineSmoothPath_Waypoint GlobalNamespace::CinemachineSmoothPath_Waypoint::FromVector4(::UnityEngine::Vector4  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSmoothPath_Waypoint>(),
                        {"FromVector4", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineSmoothPath_Waypoint>(nullptr, ___internal_method, v);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "roll", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineSmoothPath_Waypoint::CinemachineSmoothPath_Waypoint(::UnityEngine::Vector3  position, float_t  roll) noexcept  {
this->position = position;
this->roll = roll;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineSmoothPath_Waypoint::CinemachineSmoothPath_Waypoint()   {
}
