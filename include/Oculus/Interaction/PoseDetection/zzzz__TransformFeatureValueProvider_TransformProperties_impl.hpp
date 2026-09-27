#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureValueProvider_TransformProperties.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureValueProvider_TransformProperties_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransformFeatureValueProvider_TransformProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransformFeatureValueProvider_TransformProperties::*)(::UnityEngine::Pose, ::UnityEngine::Pose, ::Oculus::Interaction::Input::Handedness, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::TransformFeatureValueProvider_TransformProperties::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4a84b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TransformFeatureValueProvider_TransformProperties::_ctor(::UnityEngine::Pose  centerEyePos, ::UnityEngine::Pose  wristPose, ::Oculus::Interaction::Input::Handedness  handedness, ::UnityEngine::Vector3  trackingSystemUp, ::UnityEngine::Vector3  trackingSystemForward)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, centerEyePos, wristPose, handedness, trackingSystemUp, trackingSystemForward);
}
// Ctor Parameters [CppParam { name: "CenterEyePose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "WristPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Handedness", ty: "::Oculus::Interaction::Input::Handedness", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TrackingSystemUp", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TrackingSystemForward", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TransformFeatureValueProvider_TransformProperties::TransformFeatureValueProvider_TransformProperties(::UnityEngine::Pose  CenterEyePose, ::UnityEngine::Pose  WristPose, ::Oculus::Interaction::Input::Handedness  Handedness, ::UnityEngine::Vector3  TrackingSystemUp, ::UnityEngine::Vector3  TrackingSystemForward) noexcept  {
this->CenterEyePose = CenterEyePose;
this->WristPose = WristPose;
this->Handedness = Handedness;
this->TrackingSystemUp = TrackingSystemUp;
this->TrackingSystemForward = TrackingSystemForward;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransformFeatureValueProvider_TransformProperties::TransformFeatureValueProvider_TransformProperties()   {
}
