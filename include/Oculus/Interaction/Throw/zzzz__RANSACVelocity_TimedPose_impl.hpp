#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/RANSACVelocity_TimedPose.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__RANSACVelocity_TimedPose_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RANSACVelocity_TimedPose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RANSACVelocity_TimedPose::*)(float_t, ::UnityEngine::Pose)>(&::GlobalNamespace::RANSACVelocity_TimedPose::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa494474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RANSACVelocity_TimedPose>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RANSACVelocity_TimedPose::_ctor(float_t  time, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RANSACVelocity_TimedPose>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, time, pose);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RANSACVelocity_TimedPose::RANSACVelocity_TimedPose(float_t  time, ::UnityEngine::Pose  pose) noexcept  {
this->time = time;
this->pose = pose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RANSACVelocity_TimedPose::RANSACVelocity_TimedPose()   {
}
