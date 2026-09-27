#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRig_VelocityTime.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VRRig_VelocityTime_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRRig_VelocityTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRig_VelocityTime::*)(::UnityEngine::Vector3, double_t)>(&::GlobalNamespace::VRRig_VelocityTime::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5745fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRig_VelocityTime>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VRRig_VelocityTime::_ctor(::UnityEngine::Vector3  velocity, double_t  velTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRig_VelocityTime>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, velocity, velTime);
}
// Ctor Parameters [CppParam { name: "vel", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VRRig_VelocityTime::VRRig_VelocityTime(::UnityEngine::Vector3  vel, double_t  time) noexcept  {
this->vel = vel;
this->time = time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRig_VelocityTime::VRRig_VelocityTime()   {
}
