#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/IBodyPose.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__IBodyPose_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__ISkeletonMapping_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::IBodyPose.add_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::IBodyPose::*)(::System::Action*)>(&::Oculus::Interaction::Body::PoseDetection::IBodyPose::add_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::IBodyPose.remove_WhenBodyPoseUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Body::PoseDetection::IBodyPose::*)(::System::Action*)>(&::Oculus::Interaction::Body::PoseDetection::IBodyPose::remove_WhenBodyPoseUpdated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::IBodyPose.get_SkeletonMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping* (::Oculus::Interaction::Body::PoseDetection::IBodyPose::*)()>(&::Oculus::Interaction::Body::PoseDetection::IBodyPose::get_SkeletonMapping)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::IBodyPose.GetJointPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::IBodyPose::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::PoseDetection::IBodyPose::GetJointPoseLocal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Body::PoseDetection::IBodyPose.GetJointPoseFromRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Body::PoseDetection::IBodyPose::*)(::Oculus::Interaction::Body::Input::BodyJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Body::PoseDetection::IBodyPose::GetJointPoseFromRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(),
                    {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Body::PoseDetection::IBodyPose::add_WhenBodyPoseUpdated(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Body::PoseDetection::IBodyPose::remove_WhenBodyPoseUpdated(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Body::Input::ISkeletonMapping* Oculus::Interaction::Body::PoseDetection::IBodyPose::get_SkeletonMapping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Body::Input::ISkeletonMapping*>(this, ___internal_method);
}
inline bool Oculus::Interaction::Body::PoseDetection::IBodyPose::GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
inline bool Oculus::Interaction::Body::PoseDetection::IBodyPose::GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyJointId, pose);
}
