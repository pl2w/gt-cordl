#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/StandardVelocityCalculator_SamplePoseData.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__StandardVelocityCalculator_SamplePoseData_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardVelocityCalculator_SamplePoseData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardVelocityCalculator_SamplePoseData::*)(::UnityEngine::Pose, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::StandardVelocityCalculator_SamplePoseData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa498098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardVelocityCalculator_SamplePoseData::_ctor(::UnityEngine::Pose  transformPose, ::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity, float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, transformPose, linearVelocity, angularVelocity, time);
}
// Ctor Parameters [CppParam { name: "TransformPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LinearVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StandardVelocityCalculator_SamplePoseData::StandardVelocityCalculator_SamplePoseData(::UnityEngine::Pose  TransformPose, ::UnityEngine::Vector3  LinearVelocity, ::UnityEngine::Vector3  AngularVelocity, float_t  Time) noexcept  {
this->TransformPose = TransformPose;
this->LinearVelocity = LinearVelocity;
this->AngularVelocity = AngularVelocity;
this->Time = Time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardVelocityCalculator_SamplePoseData::StandardVelocityCalculator_SamplePoseData()   {
}
