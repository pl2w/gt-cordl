#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ITrackingToWorldTransformer.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::ITrackingToWorldTransformer.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Input::ITrackingToWorldTransformer::*)()>(&::Oculus::Interaction::Input::ITrackingToWorldTransformer::get_Transform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ITrackingToWorldTransformer.ToWorldPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::ITrackingToWorldTransformer::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Input::ITrackingToWorldTransformer::ToWorldPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ITrackingToWorldTransformer.ToTrackingPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::ITrackingToWorldTransformer::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::ITrackingToWorldTransformer::ToTrackingPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::ITrackingToWorldTransformer.get_WorldToTrackingWristJointFixup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::Input::ITrackingToWorldTransformer::*)()>(&::Oculus::Interaction::Input::ITrackingToWorldTransformer::get_WorldToTrackingWristJointFixup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Input::ITrackingToWorldTransformer::get_Transform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::ITrackingToWorldTransformer::ToWorldPose(::UnityEngine::Pose  poseRh)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, poseRh);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::ITrackingToWorldTransformer::ToTrackingPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  worldPose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, worldPose);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Input::ITrackingToWorldTransformer::get_WorldToTrackingWristJointFixup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
