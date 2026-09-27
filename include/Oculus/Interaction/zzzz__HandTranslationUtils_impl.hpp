#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandTranslationUtils.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandSpace_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandsSpace_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__HandTranslationUtils_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandTranslationUtils.get_FixButtonStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (*)()>(&::Oculus::Interaction::HandTranslationUtils::get_FixButtonStyle)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa3feaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"get_FixButtonStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTranslationUtils.OpenXRHandJointToOVR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Oculus::Interaction::HandTranslationUtils::OpenXRHandJointToOVR)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa3feb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"OpenXRHandJointToOVR", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTranslationUtils.OVRHandRotationsToOpenXRPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Quaternion>, ::Oculus::Interaction::Input::Handedness, ::by_ref<::ArrayW<::UnityEngine::Pose>>)>(&::Oculus::Interaction::HandTranslationUtils::OVRHandRotationsToOpenXRPoses)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0xa3feba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"OVRHandRotationsToOpenXRPoses", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Pose>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTranslationUtils.OVRHandJointToOpenXR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandJointId (*)(int32_t)>(&::Oculus::Interaction::HandTranslationUtils::OVRHandJointToOpenXR)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa3ff34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"OVRHandJointToOpenXR", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTranslationUtils.TransformOVRToOpenXRPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandTranslationUtils::TransformOVRToOpenXRPosition)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa3ff36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"TransformOVRToOpenXRPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandTranslationUtils.TransformOVRToOpenXRRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandTranslationUtils::TransformOVRToOpenXRRotation)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa3ff49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"TransformOVRToOpenXRRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::HandTranslationUtils::setStaticF__openXRLeft(::GlobalNamespace::HandMirroring_HandSpace  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandMirroring_HandSpace, "_openXRLeft", ::Oculus::Interaction::HandTranslationUtils*>(std::forward<::GlobalNamespace::HandMirroring_HandSpace>(value));
}
inline ::GlobalNamespace::HandMirroring_HandSpace Oculus::Interaction::HandTranslationUtils::getStaticF__openXRLeft()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandMirroring_HandSpace, "_openXRLeft", ::Oculus::Interaction::HandTranslationUtils*>();
}
inline void Oculus::Interaction::HandTranslationUtils::setStaticF__openXRRight(::GlobalNamespace::HandMirroring_HandSpace  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandMirroring_HandSpace, "_openXRRight", ::Oculus::Interaction::HandTranslationUtils*>(std::forward<::GlobalNamespace::HandMirroring_HandSpace>(value));
}
inline ::GlobalNamespace::HandMirroring_HandSpace Oculus::Interaction::HandTranslationUtils::getStaticF__openXRRight()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandMirroring_HandSpace, "_openXRRight", ::Oculus::Interaction::HandTranslationUtils*>();
}
inline void Oculus::Interaction::HandTranslationUtils::setStaticF__ovrLeft(::GlobalNamespace::HandMirroring_HandSpace  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandMirroring_HandSpace, "_ovrLeft", ::Oculus::Interaction::HandTranslationUtils*>(std::forward<::GlobalNamespace::HandMirroring_HandSpace>(value));
}
inline ::GlobalNamespace::HandMirroring_HandSpace Oculus::Interaction::HandTranslationUtils::getStaticF__ovrLeft()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandMirroring_HandSpace, "_ovrLeft", ::Oculus::Interaction::HandTranslationUtils*>();
}
inline void Oculus::Interaction::HandTranslationUtils::setStaticF__ovrRight(::GlobalNamespace::HandMirroring_HandSpace  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandMirroring_HandSpace, "_ovrRight", ::Oculus::Interaction::HandTranslationUtils*>(std::forward<::GlobalNamespace::HandMirroring_HandSpace>(value));
}
inline ::GlobalNamespace::HandMirroring_HandSpace Oculus::Interaction::HandTranslationUtils::getStaticF__ovrRight()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandMirroring_HandSpace, "_ovrRight", ::Oculus::Interaction::HandTranslationUtils*>();
}
inline void Oculus::Interaction::HandTranslationUtils::setStaticF_openXRHands(::GlobalNamespace::HandMirroring_HandsSpace  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandMirroring_HandsSpace, "openXRHands", ::Oculus::Interaction::HandTranslationUtils*>(std::forward<::GlobalNamespace::HandMirroring_HandsSpace>(value));
}
inline ::GlobalNamespace::HandMirroring_HandsSpace Oculus::Interaction::HandTranslationUtils::getStaticF_openXRHands()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandMirroring_HandsSpace, "openXRHands", ::Oculus::Interaction::HandTranslationUtils*>();
}
inline void Oculus::Interaction::HandTranslationUtils::setStaticF_ovrHands(::GlobalNamespace::HandMirroring_HandsSpace  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::HandMirroring_HandsSpace, "ovrHands", ::Oculus::Interaction::HandTranslationUtils*>(std::forward<::GlobalNamespace::HandMirroring_HandsSpace>(value));
}
inline ::GlobalNamespace::HandMirroring_HandsSpace Oculus::Interaction::HandTranslationUtils::getStaticF_ovrHands()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::HandMirroring_HandsSpace, "ovrHands", ::Oculus::Interaction::HandTranslationUtils*>();
}
inline void Oculus::Interaction::HandTranslationUtils::setStaticF_HAND_JOINT_IDS_OpenXRtoOVR(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "HAND_JOINT_IDS_OpenXRtoOVR", ::Oculus::Interaction::HandTranslationUtils*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Oculus::Interaction::HandTranslationUtils::getStaticF_HAND_JOINT_IDS_OpenXRtoOVR()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "HAND_JOINT_IDS_OpenXRtoOVR", ::Oculus::Interaction::HandTranslationUtils*>();
}
inline ::UnityEngine::GUIStyle* Oculus::Interaction::HandTranslationUtils::get_FixButtonStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"get_FixButtonStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(nullptr, ___internal_method);
}
inline int32_t Oculus::Interaction::HandTranslationUtils::OpenXRHandJointToOVR(int32_t  openXRJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"OpenXRHandJointToOVR", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, openXRJointId);
}
inline bool Oculus::Interaction::HandTranslationUtils::OVRHandRotationsToOpenXRPoses(::ArrayW<::UnityEngine::Quaternion>  ovrJointRotations, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::ArrayW<::UnityEngine::Pose>>  targetPoses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"OVRHandRotationsToOpenXRPoses", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Pose>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ovrJointRotations, handedness, targetPoses);
}
inline ::Oculus::Interaction::Input::HandJointId Oculus::Interaction::HandTranslationUtils::OVRHandJointToOpenXR(int32_t  ovrJointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"OVRHandJointToOpenXR", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandJointId>(nullptr, ___internal_method, ovrJointId);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::HandTranslationUtils::TransformOVRToOpenXRPosition(::UnityEngine::Vector3  position, ::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"TransformOVRToOpenXRPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, position, handedness);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::HandTranslationUtils::TransformOVRToOpenXRRotation(::UnityEngine::Quaternion  rotation, ::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandTranslationUtils*>(),
                        {"TransformOVRToOpenXRRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, rotation, handedness);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandTranslationUtils::HandTranslationUtils()   {
}
