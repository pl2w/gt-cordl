#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LCKCameraController.hpp"
#include "Liv/Lck/Tablet/zzzz__CameraMode_impl.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_impl.hpp"
#include "Liv/Lck/zzzz__UpdateTimingMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKCameraController_def.hpp"
#include "Liv/Lck/Smoothing/zzzz__LckStabilizer_def.hpp"
#include "Liv/Lck/Tablet/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKCameraController__OnQualityOptionSelected_d__49_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKCameraController__StopEchoIfActiveAsync_d__76_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKCameraController__ToggleOrientation_d__78_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LCKSettingsButtonsController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckNotificationController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckTopButtonsController_def.hpp"
#include "Liv/Lck/UI/zzzz__LckButton_def.hpp"
#include "Liv/Lck/UI/zzzz__LckDoubleButton_def.hpp"
#include "Liv/Lck/UI/zzzz__LckQualitySelector_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckCamera_def.hpp"
#include "Liv/Lck/zzzz__LckHeadsetCamera_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "Liv/Lck/zzzz__UpdateTimingMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.get_HmdTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::get_HmdTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d538e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"get_HmdTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.set_HmdTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::UnityEngine::Transform*)>(&::Liv::Lck::Tablet::LCKCameraController::set_HmdTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d53974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"set_HmdTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.get_CameraPositionUpdateTimingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::UpdateTimingMode (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::get_CameraPositionUpdateTimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5397c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"get_CameraPositionUpdateTimingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.set_CameraPositionUpdateTimingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::Liv::Lck::UpdateTimingMode)>(&::Liv::Lck::Tablet::LCKCameraController::set_CameraPositionUpdateTimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d53984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"set_CameraPositionUpdateTimingMode", {}, {::i2c::type_of<::Liv::Lck::UpdateTimingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::OnValidate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d5398c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.OnApplicationFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(bool)>(&::Liv::Lck::Tablet::LCKCameraController::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d53a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::Start)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x9d53ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::Awake)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d543c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.SetTabletLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::SetTabletLayer)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x9d53f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetTabletLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.OnQualityOptionSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::Liv::Lck::QualityOption)>(&::Liv::Lck::Tablet::LCKCameraController::OnQualityOptionSelected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d544c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnQualityOptionSelected", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.GetDescriptorForCurrentOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::CameraTrackDescriptor (::Liv::Lck::Tablet::LCKCameraController::*)(::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::Tablet::LCKCameraController::GetDescriptorForCurrentOrientation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d545a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"GetDescriptorForCurrentOrientation", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.UpdateCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::UpdateCameraPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d545ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"UpdateCameraPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::OnEnable)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9d54a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::OnDisable)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9d54d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::OnDestroy)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x9d55014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::LateUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d55454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d55468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::FixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d5547c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.SetSelfieCameraOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Liv::Lck::Tablet::LCKCameraController::SetSelfieCameraOrientation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d54304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetSelfieCameraOrientation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessSelfieFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(float_t)>(&::Liv::Lck::Tablet::LCKCameraController::ProcessSelfieFov)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d5548c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessSelfieFov", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessSelfieSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(float_t)>(&::Liv::Lck::Tablet::LCKCameraController::ProcessSelfieSmoothness)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d555bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessSelfieSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessFirstPersonFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(float_t)>(&::Liv::Lck::Tablet::LCKCameraController::ProcessFirstPersonFov)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d555ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessFirstPersonFov", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessFirstPersonSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(float_t)>(&::Liv::Lck::Tablet::LCKCameraController::ProcessFirstPersonSmoothness)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d55618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessFirstPersonSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessFirstCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::ProcessFirstCameraPosition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9d54614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessFirstCameraPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessThirdPersonFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(float_t)>(&::Liv::Lck::Tablet::LCKCameraController::ProcessThirdPersonFov)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d55648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdPersonFov", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessThirdPersonSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(float_t)>(&::Liv::Lck::Tablet::LCKCameraController::ProcessThirdPersonSmoothness)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d55674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdPersonSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessThirdPersonDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(float_t)>(&::Liv::Lck::Tablet::LCKCameraController::ProcessThirdPersonDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d556a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdPersonDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessThirdCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::ProcessThirdCameraPosition)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x9d5470c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdCameraPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.SetFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::Liv::Lck::Tablet::CameraMode, float_t)>(&::Liv::Lck::Tablet::LCKCameraController::SetFOV)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d556b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetFOV", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ToggleMicrophoneRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(bool)>(&::Liv::Lck::Tablet::LCKCameraController::ToggleMicrophoneRecording)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x9d4cf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ToggleMicrophoneRecording", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ToggleGameAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::ToggleGameAudio)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d5570c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ToggleGameAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ToggleRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::ToggleRecording)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9d557c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ToggleRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.SaveEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::SaveEcho)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x9d55998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SaveEcho", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.OnCaptureStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Tablet::LCKCameraController::OnCaptureStart)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d55c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnCaptureStart", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.OnCaptureStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Tablet::LCKCameraController::OnCaptureStopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d55cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnCaptureStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.SetOrientationQualityAndTopButtonsIsDisabledState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(bool)>(&::Liv::Lck::Tablet::LCKCameraController::SetOrientationQualityAndTopButtonsIsDisabledState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d5594c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetOrientationQualityAndTopButtonsIsDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.StopEchoIfActiveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::StopEchoIfActiveAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d55dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"StopEchoIfActiveAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.RestartEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::RestartEcho)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9d55f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"RestartEcho", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ToggleOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::ToggleOrientation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d56054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ToggleOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.GetCurrentModeCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::GetCurrentModeCamera)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9d560fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"GetCurrentModeCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.CalculateCorrectFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Tablet::LCKCameraController::*)(float_t)>(&::Liv::Lck::Tablet::LCKCameraController::CalculateCorrectFOV)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d554b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"CalculateCorrectFOV", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.GetCurrentModeFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::GetCurrentModeFOV)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"GetCurrentModeFOV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessSelfieFlip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::ProcessSelfieFlip)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d56258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessSelfieFlip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.SetMonitorScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::Liv::Lck::Tablet::CameraMode)>(&::Liv::Lck::Tablet::LCKCameraController::SetMonitorScale)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d56330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetMonitorScale", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.ProcessThirdPersonPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::ProcessThirdPersonPosition)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d56408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdPersonPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.CameraModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::Liv::Lck::Tablet::CameraMode)>(&::Liv::Lck::Tablet::LCKCameraController::CameraModeChanged)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d56424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"CameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController.SetActiveLckCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)(::StringW)>(&::Liv::Lck::Tablet::LCKCameraController::SetActiveLckCamera)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x9d54104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetActiveLckCamera", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Tablet::LCKCameraController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Tablet::LCKCameraController::*)()>(&::Liv::Lck::Tablet::LCKCameraController::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d566ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr bool& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__modifyRenderLayerAndCullingMasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modifyRenderLayerAndCullingMasks;
}
constexpr bool const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__modifyRenderLayerAndCullingMasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modifyRenderLayerAndCullingMasks;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__modifyRenderLayerAndCullingMasks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modifyRenderLayerAndCullingMasks = value;
}
constexpr ::StringW& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__tabletRenderingLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabletRenderingLayer;
}
constexpr ::StringW const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__tabletRenderingLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabletRenderingLayer;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__tabletRenderingLayer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tabletRenderingLayer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__objectsHiddenFromSelfieCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectsHiddenFromSelfieCamera;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__objectsHiddenFromSelfieCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectsHiddenFromSelfieCamera;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__objectsHiddenFromSelfieCamera(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectsHiddenFromSelfieCamera = value;
}
constexpr ::UnityW<::UnityEngine::ScriptableObject>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__qualityConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityConfig;
}
constexpr ::UnityW<::UnityEngine::ScriptableObject> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__qualityConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityConfig;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__qualityConfig(::UnityW<::UnityEngine::ScriptableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qualityConfig = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__hmdTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmdTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__hmdTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmdTransform;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__hmdTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmdTransform = value;
}
constexpr float_t& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonDistanceMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonDistanceMultiplier;
}
constexpr float_t const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonDistanceMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonDistanceMultiplier;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__thirdPersonDistanceMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonDistanceMultiplier = value;
}
constexpr float_t& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonHeightAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonHeightAngle;
}
constexpr float_t const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonHeightAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonHeightAngle;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__thirdPersonHeightAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonHeightAngle = value;
}
constexpr ::Liv::Lck::UpdateTimingMode& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__cameraPositionUpdateTimingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPositionUpdateTimingMode;
}
constexpr ::Liv::Lck::UpdateTimingMode const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__cameraPositionUpdateTimingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraPositionUpdateTimingMode;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__cameraPositionUpdateTimingMode(::Liv::Lck::UpdateTimingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraPositionUpdateTimingMode = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__settingsButtonsController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsButtonsController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__settingsButtonsController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsButtonsController;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__settingsButtonsController(::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsButtonsController = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__topButtonsController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__topButtonsController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsController;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__topButtonsController(::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topButtonsController = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__monitorTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__monitorTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorTransform;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__monitorTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monitorTransform = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckQualitySelector>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__qualitySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualitySelector;
}
constexpr ::UnityW<::Liv::Lck::UI::LckQualitySelector> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__qualitySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualitySelector;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__qualitySelector(::UnityW<::Liv::Lck::UI::LckQualitySelector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qualitySelector = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__notificationController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__notificationController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notificationController = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__selfieFOVDoubleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFOVDoubleButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__selfieFOVDoubleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFOVDoubleButton;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__selfieFOVDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieFOVDoubleButton = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__selfieSmoothingDoubleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieSmoothingDoubleButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__selfieSmoothingDoubleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieSmoothingDoubleButton;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__selfieSmoothingDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieSmoothingDoubleButton = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__firstPersonFOVDoubleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonFOVDoubleButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__firstPersonFOVDoubleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonFOVDoubleButton;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__firstPersonFOVDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonFOVDoubleButton = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__firstPersonSmoothingDoubleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonSmoothingDoubleButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__firstPersonSmoothingDoubleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonSmoothingDoubleButton;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__firstPersonSmoothingDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonSmoothingDoubleButton = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonFOVDoubleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonFOVDoubleButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonFOVDoubleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonFOVDoubleButton;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__thirdPersonFOVDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonFOVDoubleButton = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonSmoothingDoubleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonSmoothingDoubleButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonSmoothingDoubleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonSmoothingDoubleButton;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__thirdPersonSmoothingDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonSmoothingDoubleButton = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonDistanceDoubleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonDistanceDoubleButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonDistanceDoubleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonDistanceDoubleButton;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__thirdPersonDistanceDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonDistanceDoubleButton = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButton>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__orientationButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orientationButton;
}
constexpr ::UnityW<::Liv::Lck::UI::LckButton> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__orientationButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orientationButton;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__orientationButton(::UnityW<::Liv::Lck::UI::LckButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____orientationButton = value;
}
constexpr ::UnityW<::Liv::Lck::LckCamera>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__selfieCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieCamera;
}
constexpr ::UnityW<::Liv::Lck::LckCamera> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__selfieCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieCamera;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__selfieCamera(::UnityW<::Liv::Lck::LckCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieCamera = value;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__selfieStabilizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieStabilizer;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__selfieStabilizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieStabilizer;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__selfieStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieStabilizer = value;
}
constexpr ::UnityW<::Liv::Lck::LckCamera>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__firstPersonCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamera;
}
constexpr ::UnityW<::Liv::Lck::LckCamera> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__firstPersonCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamera;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__firstPersonCamera(::UnityW<::Liv::Lck::LckCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonCamera = value;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__firstPersonStabilizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonStabilizer;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__firstPersonStabilizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonStabilizer;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__firstPersonStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonStabilizer = value;
}
constexpr ::UnityW<::Liv::Lck::LckCamera>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonCamera;
}
constexpr ::UnityW<::Liv::Lck::LckCamera> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonCamera;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__thirdPersonCamera(::UnityW<::Liv::Lck::LckCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonCamera = value;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonStabilizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonStabilizer;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonStabilizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonStabilizer;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__thirdPersonStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonStabilizer = value;
}
constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera>& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__headsetCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCamera;
}
constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera> const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__headsetCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCamera;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__headsetCamera(::UnityW<::Liv::Lck::LckHeadsetCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headsetCamera = value;
}
constexpr float_t& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonDistance;
}
constexpr float_t const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__thirdPersonDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonDistance;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__thirdPersonDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonDistance = value;
}
constexpr bool& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__isThirdPersonFront()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isThirdPersonFront;
}
constexpr bool const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__isThirdPersonFront() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isThirdPersonFront;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__isThirdPersonFront(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isThirdPersonFront = value;
}
constexpr bool& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__isSelfieFront()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSelfieFront;
}
constexpr bool const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__isSelfieFront() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSelfieFront;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__isSelfieFront(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSelfieFront = value;
}
constexpr ::Liv::Lck::LckCameraOrientation& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__currentCameraOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraOrientation;
}
constexpr ::Liv::Lck::LckCameraOrientation const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__currentCameraOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraOrientation;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__currentCameraOrientation(::Liv::Lck::LckCameraOrientation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentCameraOrientation = value;
}
constexpr bool& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__justTransitioned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justTransitioned;
}
constexpr bool const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__justTransitioned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justTransitioned;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__justTransitioned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____justTransitioned = value;
}
constexpr bool& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__gameAudioRecordingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioRecordingEnabled;
}
constexpr bool const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__gameAudioRecordingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameAudioRecordingEnabled;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__gameAudioRecordingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameAudioRecordingEnabled = value;
}
constexpr ::Liv::Lck::Tablet::CameraMode& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__currentCameraMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraMode;
}
constexpr ::Liv::Lck::Tablet::CameraMode const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get__currentCameraMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraMode;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set__currentCameraMode(::Liv::Lck::Tablet::CameraMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentCameraMode = value;
}
constexpr ::System::Action_1<::Liv::Lck::Tablet::CameraMode>*& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get_OnCameraModeChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCameraModeChanged;
}
constexpr ::System::Action_1<::Liv::Lck::Tablet::CameraMode>* const& Liv::Lck::Tablet::LCKCameraController::__cordl_internal_get_OnCameraModeChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCameraModeChanged;
}
constexpr void Liv::Lck::Tablet::LCKCameraController::__cordl_internal_set_OnCameraModeChanged(::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCameraModeChanged = value;
}
inline void Liv::Lck::Tablet::LCKCameraController::setStaticF_ColliderButtonsInUse(bool  value)  {
::cordl_internals::setStaticField<bool, "ColliderButtonsInUse", ::Liv::Lck::Tablet::LCKCameraController*>(std::forward<bool>(value));
}
inline bool Liv::Lck::Tablet::LCKCameraController::getStaticF_ColliderButtonsInUse()  {
return ::cordl_internals::getStaticField<bool, "ColliderButtonsInUse", ::Liv::Lck::Tablet::LCKCameraController*>();
}
inline ::UnityW<::UnityEngine::Transform> Liv::Lck::Tablet::LCKCameraController::get_HmdTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"get_HmdTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::set_HmdTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"set_HmdTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::UpdateTimingMode Liv::Lck::Tablet::LCKCameraController::get_CameraPositionUpdateTimingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"get_CameraPositionUpdateTimingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::UpdateTimingMode>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::set_CameraPositionUpdateTimingMode(::Liv::Lck::UpdateTimingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"set_CameraPositionUpdateTimingMode", {}, {::i2c::type_of<::Liv::Lck::UpdateTimingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LCKCameraController::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::OnApplicationFocus(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnApplicationFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, focus);
}
inline void Liv::Lck::Tablet::LCKCameraController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::SetTabletLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetTabletLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::OnQualityOptionSelected(::Liv::Lck::QualityOption  qualityOption)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnQualityOptionSelected", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityOption);
}
inline ::Liv::Lck::CameraTrackDescriptor Liv::Lck::Tablet::LCKCameraController::GetDescriptorForCurrentOrientation(::Liv::Lck::CameraTrackDescriptor  descriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"GetDescriptorForCurrentOrientation", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::CameraTrackDescriptor>(this, ___internal_method, descriptor);
}
inline void Liv::Lck::Tablet::LCKCameraController::UpdateCameraPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"UpdateCameraPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::SetSelfieCameraOrientation(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetSelfieCameraOrientation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessSelfieFov(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessSelfieFov", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessSelfieSmoothness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessSelfieSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessFirstPersonFov(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessFirstPersonFov", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessFirstPersonSmoothness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessFirstPersonSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessFirstCameraPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessFirstCameraPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessThirdPersonFov(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdPersonFov", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessThirdPersonSmoothness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdPersonSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessThirdPersonDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdPersonDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessThirdCameraPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdCameraPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::SetFOV(::Liv::Lck::Tablet::CameraMode  mode, float_t  fov)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetFOV", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, fov);
}
inline void Liv::Lck::Tablet::LCKCameraController::ToggleMicrophoneRecording(bool  isMicOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ToggleMicrophoneRecording", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isMicOn);
}
inline void Liv::Lck::Tablet::LCKCameraController::ToggleGameAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ToggleGameAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::ToggleRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ToggleRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::SaveEcho()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SaveEcho", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::OnCaptureStart(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnCaptureStart", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LCKCameraController::OnCaptureStopped(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"OnCaptureStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Tablet::LCKCameraController::SetOrientationQualityAndTopButtonsIsDisabledState(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetOrientationQualityAndTopButtonsIsDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Threading::Tasks::Task_1<bool>* Liv::Lck::Tablet::LCKCameraController::StopEchoIfActiveAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"StopEchoIfActiveAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::RestartEcho()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"RestartEcho", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::ToggleOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ToggleOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> Liv::Lck::Tablet::LCKCameraController::GetCurrentModeCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"GetCurrentModeCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline float_t Liv::Lck::Tablet::LCKCameraController::CalculateCorrectFOV(float_t  incomingVerticalFOV)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"CalculateCorrectFOV", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, incomingVerticalFOV);
}
inline float_t Liv::Lck::Tablet::LCKCameraController::GetCurrentModeFOV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"GetCurrentModeFOV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessSelfieFlip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessSelfieFlip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::SetMonitorScale(::Liv::Lck::Tablet::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetMonitorScale", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Liv::Lck::Tablet::LCKCameraController::ProcessThirdPersonPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"ProcessThirdPersonPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Tablet::LCKCameraController::CameraModeChanged(::Liv::Lck::Tablet::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"CameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::Tablet::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Liv::Lck::Tablet::LCKCameraController::SetActiveLckCamera(::StringW  cameraId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {"SetActiveLckCamera", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraId);
}
inline void Liv::Lck::Tablet::LCKCameraController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Tablet::LCKCameraController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Tablet::LCKCameraController* Liv::Lck::Tablet::LCKCameraController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Tablet::LCKCameraController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Tablet::LCKCameraController::LCKCameraController()   {
}
