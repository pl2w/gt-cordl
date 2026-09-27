#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformJointData.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformJointData_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformJointData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformJointData::*)()>(&::Oculus::Interaction::PoseDetection::TransformJointData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a6b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformJointData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_IsValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsValid;
}
constexpr bool const& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_IsValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsValid;
}
constexpr void Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_set_IsValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsValid = value;
}
constexpr ::Oculus::Interaction::Input::Handedness& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_Handedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Handedness;
}
constexpr ::Oculus::Interaction::Input::Handedness const& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_Handedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Handedness;
}
constexpr void Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_set_Handedness(::Oculus::Interaction::Input::Handedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Handedness = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_CenterEyePose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterEyePose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_CenterEyePose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterEyePose;
}
constexpr void Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_set_CenterEyePose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CenterEyePose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_WristPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WristPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_WristPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WristPose;
}
constexpr void Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_set_WristPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WristPose = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_TrackingSystemUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingSystemUp;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_TrackingSystemUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingSystemUp;
}
constexpr void Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_set_TrackingSystemUp(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackingSystemUp = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_TrackingSystemForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingSystemForward;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_get_TrackingSystemForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackingSystemForward;
}
constexpr void Oculus::Interaction::PoseDetection::TransformJointData::__cordl_internal_set_TrackingSystemForward(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackingSystemForward = value;
}
inline void Oculus::Interaction::PoseDetection::TransformJointData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformJointData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformJointData* Oculus::Interaction::PoseDetection::TransformJointData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformJointData*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformJointData::TransformJointData()   {
}
