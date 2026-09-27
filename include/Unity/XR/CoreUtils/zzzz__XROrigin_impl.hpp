#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/XROrigin.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_TrackingOriginMode_impl.hpp"
#include "UnityEngine/XR/zzzz__TrackingOriginModeFlags_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__ARTrackablesParentTransformChangedEventArgs_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_TrackingOriginMode_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/zzzz__TrackingOriginModeFlags_def.hpp"
#include "UnityEngine/XR/zzzz__XRInputSubsystem_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_Camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_Camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3faf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_Camera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_Camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Camera*)>(&::Unity::XR::CoreUtils::XROrigin::set_Camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3faf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_Camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_TrackablesParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_TrackablesParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3faf88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_TrackablesParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_TrackablesParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Transform*)>(&::Unity::XR::CoreUtils::XROrigin::set_TrackablesParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3faf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_TrackablesParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.add_TrackablesParentTransformChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*)>(&::Unity::XR::CoreUtils::XROrigin::add_TrackablesParentTransformChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb3faf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"add_TrackablesParentTransformChanged", {}, {::i2c::type_of<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.remove_TrackablesParentTransformChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*)>(&::Unity::XR::CoreUtils::XROrigin::remove_TrackablesParentTransformChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb3fb048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"remove_TrackablesParentTransformChanged", {}, {::i2c::type_of<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_Origin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fb0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_Origin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::GameObject*)>(&::Unity::XR::CoreUtils::XROrigin::set_Origin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CameraFloorOffsetObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_CameraFloorOffsetObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fb108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CameraFloorOffsetObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_CameraFloorOffsetObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::GameObject*)>(&::Unity::XR::CoreUtils::XROrigin::set_CameraFloorOffsetObject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb3fb110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_CameraFloorOffsetObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_RequestedTrackingOriginMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XROrigin_TrackingOriginMode (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_RequestedTrackingOriginMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fb1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_RequestedTrackingOriginMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_RequestedTrackingOriginMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::GlobalNamespace::XROrigin_TrackingOriginMode)>(&::Unity::XR::CoreUtils::XROrigin::set_RequestedTrackingOriginMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fb1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_RequestedTrackingOriginMode", {}, {::i2c::type_of<::GlobalNamespace::XROrigin_TrackingOriginMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CameraYOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_CameraYOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fb268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CameraYOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_CameraYOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(float_t)>(&::Unity::XR::CoreUtils::XROrigin::set_CameraYOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fb270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_CameraYOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CurrentTrackingOriginMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::TrackingOriginModeFlags (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_CurrentTrackingOriginMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fb278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CurrentTrackingOriginMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.set_CurrentTrackingOriginMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::XR::TrackingOriginModeFlags)>(&::Unity::XR::CoreUtils::XROrigin::set_CurrentTrackingOriginMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fb280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_CurrentTrackingOriginMode", {}, {::i2c::type_of<::UnityEngine::XR::TrackingOriginModeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_OriginInCameraSpacePos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_OriginInCameraSpacePos)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb3fb288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_OriginInCameraSpacePos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CameraInOriginSpacePos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_CameraInOriginSpacePos)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb3fb2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CameraInOriginSpacePos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.get_CameraInOriginSpaceHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::get_CameraInOriginSpaceHeight)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fb330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CameraInOriginSpaceHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MoveOffsetHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::MoveOffsetHeight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb3fb12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MoveOffsetHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MoveOffsetHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(float_t)>(&::Unity::XR::CoreUtils::XROrigin::MoveOffsetHeight)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb3fb344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MoveOffsetHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.TryInitializeCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::TryInitializeCamera)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb3fb1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"TryInitializeCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.SetupCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::SetupCamera)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xb3fb3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"SetupCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.SetupCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::XR::XRInputSubsystem*)>(&::Unity::XR::CoreUtils::XROrigin::SetupCamera)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xb3fb710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"SetupCamera", {}, {::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnInputSubsystemTrackingOriginUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::XR::XRInputSubsystem*)>(&::Unity::XR::CoreUtils::XROrigin::OnInputSubsystemTrackingOriginUpdated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb3fb9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnInputSubsystemTrackingOriginUpdated", {}, {::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.RepeatInitializeCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::RepeatInitializeCamera)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb3fb6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"RepeatInitializeCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.RotateAroundCameraUsingOriginUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(float_t)>(&::Unity::XR::CoreUtils::XROrigin::RotateAroundCameraUsingOriginUp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb3fba54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"RotateAroundCameraUsingOriginUp", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.RotateAroundCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3, float_t)>(&::Unity::XR::CoreUtils::XROrigin::RotateAroundCameraPosition)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb3fba98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"RotateAroundCameraPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MatchOriginUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::XROrigin::MatchOriginUp)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb3fbbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MatchOriginUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MatchOriginUpCameraForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::XROrigin::MatchOriginUpCameraForward)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xb3fbd78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MatchOriginUpCameraForward", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MatchOriginUpOriginForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::XROrigin::MatchOriginUpOriginForward)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb3fbfd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MatchOriginUpOriginForward", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.MoveCameraToWorldLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)(::UnityEngine::Vector3)>(&::Unity::XR::CoreUtils::XROrigin::MoveCameraToWorldLocation)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb3fc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MoveCameraToWorldLocation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::Awake)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0xb3fc220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.GetCameraOriginPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::GetCameraOriginPose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb3fc618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"GetCameraOriginPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb3fc73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnDisable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb3fc7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnBeforeRender)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb3fc884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnBeforeRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnValidate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb3fc9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.ConvertTrackingOriginModeToFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::TrackingOriginModeFlags (*)(::GlobalNamespace::XROrigin_TrackingOriginMode)>(&::Unity::XR::CoreUtils::XROrigin::ConvertTrackingOriginModeToFlag)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb3fb9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"ConvertTrackingOriginModeToFlag", {}, {::i2c::type_of<::GlobalNamespace::XROrigin_TrackingOriginMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3fcca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::OnDestroy)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb3fcca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb3fce58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin._OnValidate_g__IsModeStale_60_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin::*)()>(&::Unity::XR::CoreUtils::XROrigin::_OnValidate_g__IsModeStale_60_0)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb3fcaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"<OnValidate>g__IsModeStale|60_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_Camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_Camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Camera;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Camera = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get__TrackablesParent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackablesParent_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get__TrackablesParent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackablesParent_k__BackingField;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set__TrackablesParent_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackablesParent_k__BackingField = value;
}
constexpr ::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_TrackablesParentTransformChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackablesParentTransformChanged;
}
constexpr ::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_TrackablesParentTransformChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrackablesParentTransformChanged;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_TrackablesParentTransformChanged(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrackablesParentTransformChanged = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_OriginBaseGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginBaseGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_OriginBaseGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginBaseGameObject;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_OriginBaseGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginBaseGameObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraFloorOffsetObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraFloorOffsetObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraFloorOffsetObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraFloorOffsetObject;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_CameraFloorOffsetObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraFloorOffsetObject = value;
}
constexpr ::GlobalNamespace::XROrigin_TrackingOriginMode& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_RequestedTrackingOriginMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedTrackingOriginMode;
}
constexpr ::GlobalNamespace::XROrigin_TrackingOriginMode const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_RequestedTrackingOriginMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RequestedTrackingOriginMode;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_RequestedTrackingOriginMode(::GlobalNamespace::XROrigin_TrackingOriginMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RequestedTrackingOriginMode = value;
}
constexpr float_t& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraYOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraYOffset;
}
constexpr float_t const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraYOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraYOffset;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_CameraYOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraYOffset = value;
}
constexpr ::UnityEngine::XR::TrackingOriginModeFlags& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get__CurrentTrackingOriginMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentTrackingOriginMode_k__BackingField;
}
constexpr ::UnityEngine::XR::TrackingOriginModeFlags const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get__CurrentTrackingOriginMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentTrackingOriginMode_k__BackingField;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set__CurrentTrackingOriginMode_k__BackingField(::UnityEngine::XR::TrackingOriginModeFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentTrackingOriginMode_k__BackingField = value;
}
constexpr bool& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraInitialized;
}
constexpr bool const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraInitialized;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_CameraInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraInitialized = value;
}
constexpr bool& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraInitializing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraInitializing;
}
constexpr bool const& Unity::XR::CoreUtils::XROrigin::__cordl_internal_get_m_CameraInitializing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraInitializing;
}
constexpr void Unity::XR::CoreUtils::XROrigin::__cordl_internal_set_m_CameraInitializing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraInitializing = value;
}
inline void Unity::XR::CoreUtils::XROrigin::setStaticF_s_InputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_InputSubsystems", ::Unity::XR::CoreUtils::XROrigin*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* Unity::XR::CoreUtils::XROrigin::getStaticF_s_InputSubsystems()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>*, "s_InputSubsystems", ::Unity::XR::CoreUtils::XROrigin*>();
}
inline ::UnityW<::UnityEngine::Camera> Unity::XR::CoreUtils::XROrigin::get_Camera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_Camera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_Camera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_Camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::XR::CoreUtils::XROrigin::get_TrackablesParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_TrackablesParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_TrackablesParent(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_TrackablesParent", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::XROrigin::add_TrackablesParentTransformChanged(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"add_TrackablesParentTransformChanged", {}, {::i2c::type_of<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::XROrigin::remove_TrackablesParentTransformChanged(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"remove_TrackablesParentTransformChanged", {}, {::i2c::type_of<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::XROrigin::get_Origin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_Origin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_Origin(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> Unity::XR::CoreUtils::XROrigin::get_CameraFloorOffsetObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CameraFloorOffsetObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_CameraFloorOffsetObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_CameraFloorOffsetObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XROrigin_TrackingOriginMode Unity::XR::CoreUtils::XROrigin::get_RequestedTrackingOriginMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_RequestedTrackingOriginMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XROrigin_TrackingOriginMode>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_RequestedTrackingOriginMode(::GlobalNamespace::XROrigin_TrackingOriginMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_RequestedTrackingOriginMode", {}, {::i2c::type_of<::GlobalNamespace::XROrigin_TrackingOriginMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::XR::CoreUtils::XROrigin::get_CameraYOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CameraYOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_CameraYOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_CameraYOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::TrackingOriginModeFlags Unity::XR::CoreUtils::XROrigin::get_CurrentTrackingOriginMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CurrentTrackingOriginMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::TrackingOriginModeFlags>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::set_CurrentTrackingOriginMode(::UnityEngine::XR::TrackingOriginModeFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"set_CurrentTrackingOriginMode", {}, {::i2c::type_of<::UnityEngine::XR::TrackingOriginModeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::XROrigin::get_OriginInCameraSpacePos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_OriginInCameraSpacePos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::XR::CoreUtils::XROrigin::get_CameraInOriginSpacePos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CameraInOriginSpacePos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t Unity::XR::CoreUtils::XROrigin::get_CameraInOriginSpaceHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"get_CameraInOriginSpaceHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::MoveOffsetHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MoveOffsetHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::MoveOffsetHeight(float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MoveOffsetHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, y);
}
inline void Unity::XR::CoreUtils::XROrigin::TryInitializeCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"TryInitializeCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::XROrigin::SetupCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"SetupCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::XROrigin::SetupCamera(::UnityEngine::XR::XRInputSubsystem*  inputSubsystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"SetupCamera", {}, {::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inputSubsystem);
}
inline void Unity::XR::CoreUtils::XROrigin::OnInputSubsystemTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem*  inputSubsystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnInputSubsystemTrackingOriginUpdated", {}, {::i2c::type_of<::UnityEngine::XR::XRInputSubsystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputSubsystem);
}
inline ::System::Collections::IEnumerator* Unity::XR::CoreUtils::XROrigin::RepeatInitializeCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"RepeatInitializeCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::XROrigin::RotateAroundCameraUsingOriginUp(float_t  angleDegrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"RotateAroundCameraUsingOriginUp", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, angleDegrees);
}
inline bool Unity::XR::CoreUtils::XROrigin::RotateAroundCameraPosition(::UnityEngine::Vector3  vector, float_t  angleDegrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"RotateAroundCameraPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vector, angleDegrees);
}
inline bool Unity::XR::CoreUtils::XROrigin::MatchOriginUp(::UnityEngine::Vector3  destinationUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MatchOriginUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destinationUp);
}
inline bool Unity::XR::CoreUtils::XROrigin::MatchOriginUpCameraForward(::UnityEngine::Vector3  destinationUp, ::UnityEngine::Vector3  destinationForward)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MatchOriginUpCameraForward", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destinationUp, destinationForward);
}
inline bool Unity::XR::CoreUtils::XROrigin::MatchOriginUpOriginForward(::UnityEngine::Vector3  destinationUp, ::UnityEngine::Vector3  destinationForward)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MatchOriginUpOriginForward", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destinationUp, destinationForward);
}
inline bool Unity::XR::CoreUtils::XROrigin::MoveCameraToWorldLocation(::UnityEngine::Vector3  desiredWorldLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"MoveCameraToWorldLocation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desiredWorldLocation);
}
inline void Unity::XR::CoreUtils::XROrigin::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Unity::XR::CoreUtils::XROrigin::GetCameraOriginPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"GetCameraOriginPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnBeforeRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::TrackingOriginModeFlags Unity::XR::CoreUtils::XROrigin::ConvertTrackingOriginModeToFlag(::GlobalNamespace::XROrigin_TrackingOriginMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"ConvertTrackingOriginModeToFlag", {}, {::i2c::type_of<::GlobalNamespace::XROrigin_TrackingOriginMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::TrackingOriginModeFlags>(nullptr, ___internal_method, mode);
}
inline void Unity::XR::CoreUtils::XROrigin::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::XROrigin::_OnValidate_g__IsModeStale_60_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin*>(),
                        {"<OnValidate>g__IsModeStale|60_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::XROrigin* Unity::XR::CoreUtils::XROrigin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::XROrigin*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::XROrigin::XROrigin()   {
}
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::*)(int32_t)>(&::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb3fba2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::*)()>(&::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3fcf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::*)()>(&::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb3fcf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::*)()>(&::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fcfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::*)()>(&::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb3fcfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::*)()>(&::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3fcfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::__cordl_internal_set___4__this(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48* Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::XROrigin__RepeatInitializeCamera_d__48::XROrigin__RepeatInitializeCamera_d__48()   {
}
