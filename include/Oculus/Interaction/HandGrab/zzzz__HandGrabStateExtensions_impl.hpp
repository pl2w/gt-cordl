#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabStateExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabStateExtensions_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabState_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateExtensions.GetVisualWristPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&::Oculus::Interaction::HandGrab::HandGrabStateExtensions::GetVisualWristPose)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xa4e3454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateExtensions*>(),
                        {"GetVisualWristPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateExtensions.GetTargetGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&::Oculus::Interaction::HandGrab::HandGrabStateExtensions::GetTargetGrabPose)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa4db3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateExtensions*>(),
                        {"GetTargetGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabStateExtensions::GetVisualWristPose(::Oculus::Interaction::HandGrab::IHandGrabState*  grabState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateExtensions*>(),
                        {"GetVisualWristPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, grabState);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabStateExtensions::GetTargetGrabPose(::Oculus::Interaction::HandGrab::IHandGrabState*  grabState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateExtensions*>(),
                        {"GetTargetGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, grabState);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabStateExtensions::HandGrabStateExtensions()   {
}
