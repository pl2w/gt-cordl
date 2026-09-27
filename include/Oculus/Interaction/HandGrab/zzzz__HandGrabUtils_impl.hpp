#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUtils_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUtils_HandGrabInteractableData_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUtils_HandGrabPoseData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUtils.CreateHandGrabInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> (*)(::UnityEngine::Transform*, ::StringW)>(&::Oculus::Interaction::HandGrab::HandGrabUtils::CreateHandGrabInteractable)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa4e22ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"CreateHandGrabInteractable", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUtils.CreateHandGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::HandGrabUtils::CreateHandGrabPose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4e245c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"CreateHandGrabPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUtils.MirrorHandGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::HandGrab::HandGrabPose*, ::Oculus::Interaction::HandGrab::HandGrabPose*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::HandGrabUtils::MirrorHandGrabPose)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0xa4e2534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"MirrorHandGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUtils.SaveHandGrabPoseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandGrabUtils_HandGrabPoseData (*)(::Oculus::Interaction::HandGrab::HandGrabPose*)>(&::Oculus::Interaction::HandGrab::HandGrabUtils::SaveHandGrabPoseData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4e28f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"SaveHandGrabPoseData", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUtils.LoadHandGrabPoseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::HandGrab::HandGrabPose*, ::GlobalNamespace::HandGrabUtils_HandGrabPoseData, ::UnityEngine::Transform*)>(&::Oculus::Interaction::HandGrab::HandGrabUtils::LoadHandGrabPoseData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa4e2a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"LoadHandGrabPoseData", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), ::i2c::type_of<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUtils.SaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData (*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabUtils::SaveData)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa4e2cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"SaveData", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUtils.LoadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*, ::GlobalNamespace::HandGrabUtils_HandGrabInteractableData)>(&::Oculus::Interaction::HandGrab::HandGrabUtils::LoadData)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xa4e2f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"LoadData", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabUtils.LoadHandGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> (*)(::Oculus::Interaction::HandGrab::HandGrabInteractable*, ::GlobalNamespace::HandGrabUtils_HandGrabPoseData)>(&::Oculus::Interaction::HandGrab::HandGrabUtils::LoadHandGrabPose)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa4e31c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"LoadHandGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable> Oculus::Interaction::HandGrab::HandGrabUtils::CreateHandGrabInteractable(::UnityEngine::Transform*  parent, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"CreateHandGrabInteractable", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>(nullptr, ___internal_method, parent, name);
}
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> Oculus::Interaction::HandGrab::HandGrabUtils::CreateHandGrabPose(::UnityEngine::Transform*  parent, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"CreateHandGrabPose", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>(nullptr, ___internal_method, parent, relativeTo);
}
inline void Oculus::Interaction::HandGrab::HandGrabUtils::MirrorHandGrabPose(::Oculus::Interaction::HandGrab::HandGrabPose*  originalPoint, ::Oculus::Interaction::HandGrab::HandGrabPose*  mirrorPoint, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"MirrorHandGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, originalPoint, mirrorPoint, relativeTo);
}
inline ::GlobalNamespace::HandGrabUtils_HandGrabPoseData Oculus::Interaction::HandGrab::HandGrabUtils::SaveHandGrabPoseData(::Oculus::Interaction::HandGrab::HandGrabPose*  handGrabPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"SaveHandGrabPoseData", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>(nullptr, ___internal_method, handGrabPose);
}
inline void Oculus::Interaction::HandGrab::HandGrabUtils::LoadHandGrabPoseData(::Oculus::Interaction::HandGrab::HandGrabPose*  handGrabPose, ::GlobalNamespace::HandGrabUtils_HandGrabPoseData  data, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"LoadHandGrabPoseData", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabPose*>(), ::i2c::type_of<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handGrabPose, data, relativeTo);
}
inline ::GlobalNamespace::HandGrabUtils_HandGrabInteractableData Oculus::Interaction::HandGrab::HandGrabUtils::SaveData(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"SaveData", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>(nullptr, ___internal_method, interactable);
}
inline void Oculus::Interaction::HandGrab::HandGrabUtils::LoadData(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, ::GlobalNamespace::HandGrabUtils_HandGrabInteractableData  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"LoadData", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<::GlobalNamespace::HandGrabUtils_HandGrabInteractableData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactable, data);
}
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> Oculus::Interaction::HandGrab::HandGrabUtils::LoadHandGrabPose(::Oculus::Interaction::HandGrab::HandGrabInteractable*  interactable, ::GlobalNamespace::HandGrabUtils_HandGrabPoseData  poseData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabUtils*>(),
                        {"LoadHandGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractable*>(), ::i2c::type_of<::GlobalNamespace::HandGrabUtils_HandGrabPoseData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>(nullptr, ___internal_method, interactable, poseData);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabUtils::HandGrabUtils()   {
}
