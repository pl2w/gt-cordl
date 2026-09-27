#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GTLckController.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCameraModeTransform_impl.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_impl.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController_def.hpp"
#include "GlobalNamespace/zzzz__GtThirdPersonCameraBehaviour_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CoconutCamera_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneSystem_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController__OnQualityOptionSelected_d__81_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController__StopEchoIfActiveAsync_d__134_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController__ToggleOrientation_d__131_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GTLckController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtAudioButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCameraDockSettings_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCameraModeTransform_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtColliderTriggerProcessorsGroup_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCounter_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtDroneModeTabletUIAppearance_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtRecordButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSaveEchoButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtScreenButton_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSelectorsGroup_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSettingsSectionGroup_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtToggle_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtUiSettings_def.hpp"
#include "Liv/Lck/Smoothing/zzzz__LckStabilizer_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckNotificationController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckTopButtonsController_def.hpp"
#include "Liv/Lck/UI/zzzz__LckQualitySelector_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckCamera_def.hpp"
#include "Liv/Lck/zzzz__LckHeadsetCamera_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.add_OnCameraModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*)>(&::Liv::Lck::GorillaTag::GTLckController::add_OnCameraModeChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d24384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"add_OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.remove_OnCameraModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*)>(&::Liv::Lck::GorillaTag::GTLckController::remove_OnCameraModeChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d24420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"remove_OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.add_OnHorizontalModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::Liv::Lck::GorillaTag::GTLckController::add_OnHorizontalModeChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d244bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"add_OnHorizontalModeChanged", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.remove_OnHorizontalModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::Liv::Lck::GorillaTag::GTLckController::remove_OnHorizontalModeChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d2456c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"remove_OnHorizontalModeChanged", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.get_GTSelectorsGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup> (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::get_GTSelectorsGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2461c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_GTSelectorsGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.set_GTSelectorsGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::GorillaTag::GtSelectorsGroup*)>(&::Liv::Lck::GorillaTag::GTLckController::set_GTSelectorsGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d24624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"set_GTSelectorsGroup", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtSelectorsGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.get_ThirdPersonHeightAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::get_ThirdPersonHeightAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2462c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_ThirdPersonHeightAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.set_ThirdPersonHeightAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(float_t)>(&::Liv::Lck::GorillaTag::GTLckController::set_ThirdPersonHeightAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d24634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"set_ThirdPersonHeightAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.get_ThirdPersonSideAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::get_ThirdPersonSideAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2463c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_ThirdPersonSideAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.set_ThirdPersonSideAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(float_t)>(&::Liv::Lck::GorillaTag::GTLckController::set_ThirdPersonSideAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d24644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"set_ThirdPersonSideAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.get_IsThirdPersonFront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::get_IsThirdPersonFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2464c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_IsThirdPersonFront", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.set_IsThirdPersonFront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController::set_IsThirdPersonFront)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d24654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"set_IsThirdPersonFront", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.get_HorizontalMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::get_HorizontalMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2465c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_HorizontalMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.get_CurrentCameraMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::GorillaTag::CameraMode (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::get_CurrentCameraMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d24664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_CurrentCameraMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.get_IsTabletFollowingPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::get_IsTabletFollowingPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2466c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_IsTabletFollowingPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::OnValidate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d24674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::OnEnable)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0x9d2474c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.OnQualityOptionSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::QualityOption)>(&::Liv::Lck::GorillaTag::GTLckController::OnQualityOptionSelected)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d250b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnQualityOptionSelected", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetCameraMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::GorillaTag::CameraMode)>(&::Liv::Lck::GorillaTag::GTLckController::SetCameraMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d25190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetCameraMode", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessDroneModeStateChangeRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessDroneModeStateChangeRequest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9d253fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessDroneModeStateChangeRequest", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.GetDescriptorForCurrentOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::CameraTrackDescriptor (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::GorillaTag::GTLckController::GetDescriptorForCurrentOrientation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d2543c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"GetDescriptorForCurrentOrientation", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.IsQuest2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::IsQuest2)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9d25484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"IsQuest2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::OnDisable)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x9d25548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::OnDestroy)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x9d25d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::Start)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x9d261c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetupCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::SetupCamera)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x9d265c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetupCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d26948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetSelfieCameraOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::GorillaTag::GtCameraModeTransform)>(&::Liv::Lck::GorillaTag::GTLckController::SetSelfieCameraOrientation)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d26890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetSelfieCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtCameraModeTransform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessFirstCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::ProcessFirstCameraPosition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9d269b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessFirstCameraPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.UpdateThirdPersonHeightAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(float_t)>(&::Liv::Lck::GorillaTag::GTLckController::UpdateThirdPersonHeightAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d26b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"UpdateThirdPersonHeightAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.UpdateThirdPersonSideAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(float_t)>(&::Liv::Lck::GorillaTag::GTLckController::UpdateThirdPersonSideAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d26b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"UpdateThirdPersonSideAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessThirdCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::ProcessThirdCameraPosition)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d26ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdCameraPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.FindPlayerReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::FindPlayerReferences)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d267bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"FindPlayerReferences", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.CheckMicPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::CheckMicPermission)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d25048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"CheckMicPermission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ChangeCameraMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::GorillaTag::CameraMode)>(&::Liv::Lck::GorillaTag::GTLckController::ChangeCameraMode)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9d25194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ChangeCameraMode", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetUpDroneCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::SetUpDroneCamera)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x9d26f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpDroneCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetUpSelfieCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::SetUpSelfieCamera)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d26878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpSelfieCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetUpFirstPersonCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::SetUpFirstPersonCamera)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d26efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpFirstPersonCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetUpThirdPersonCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::SetUpThirdPersonCamera)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d26f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpThirdPersonCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetUpHeadsetCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::SetUpHeadsetCamera)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d26f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpHeadsetCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetActiveLckCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::StringW)>(&::Liv::Lck::GorillaTag::GTLckController::SetActiveLckCamera)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9d272b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetActiveLckCamera", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetMonitorScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::GorillaTag::CameraMode)>(&::Liv::Lck::GorillaTag::GTLckController::SetMonitorScale)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d26d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetMonitorScale", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetVirtualCameraUIActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController::SetVirtualCameraUIActive)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9d26e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetVirtualCameraUIActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.GetActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::GetActiveCamera)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d273a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"GetActiveCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetFollowModeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController::SetFollowModeState)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9d27448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetFollowModeState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessSelfieFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(int32_t)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessSelfieFov)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d275d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessSelfieFov", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessSelfieSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(int32_t)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessSelfieSmoothness)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d27584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessSelfieSmoothness", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessSelfieFlip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::ProcessSelfieFlip)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d27638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessSelfieFlip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessFirstPersonFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(int32_t)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessFirstPersonFov)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d2769c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessFirstPersonFov", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessFirstPersonSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(int32_t)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessFirstPersonSmoothness)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d27700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessFirstPersonSmoothness", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessThirdPersonFov
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(int32_t)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessThirdPersonFov)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d27734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdPersonFov", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessThirdPersonSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(int32_t)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessThirdPersonSmoothness)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d27764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdPersonSmoothness", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessThirdPersonDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(int32_t)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessThirdPersonDistance)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d27798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdPersonDistance", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessThirdPersonPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessThirdPersonPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d277bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdPersonPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ToggleRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::ToggleRecording)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9d277f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ToggleRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessHeadsetEye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessHeadsetEye)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d279b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessHeadsetEye", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.OnCaptureStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::GTLckController::OnCaptureStart)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9d27a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnCaptureStart", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ProcessHeadsetCropMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController::ProcessHeadsetCropMode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d27b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessHeadsetCropMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SaveEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::SaveEcho)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9d27bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SaveEcho", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.OnCaptureStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::GTLckController::OnCaptureStopped)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9d27cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnCaptureStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetOrientationQualityAndTopButtonsIsDisabledState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController::SetOrientationQualityAndTopButtonsIsDisabledState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d20b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetOrientationQualityAndTopButtonsIsDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::StopRecording)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9d27dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"StopRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ToggleMicrophoneRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::UnityEngine::Events::UnityAction_1<bool>*)>(&::Liv::Lck::GorillaTag::GTLckController::ToggleMicrophoneRecording)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9d27eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ToggleMicrophoneRecording", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ToggleOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::ToggleOrientation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d28078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ToggleOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.GenerateVerticalCameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::CameraTrackDescriptor (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::GenerateVerticalCameraTrackDescriptor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d28120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"GenerateVerticalCameraTrackDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.GetCurrentModeFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::GetCurrentModeFOV)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9d26b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"GetCurrentModeFOV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.StopEchoIfActiveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::StopEchoIfActiveAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d28178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"StopEchoIfActiveAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.RestartEcho
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::RestartEcho)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d28280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"RestartEcho", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::GorillaTag::CameraMode, float_t)>(&::Liv::Lck::GorillaTag::GTLckController::SetFOV)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d26cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetFOV", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.CalculateCorrectFOV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::GTLckController::*)(float_t)>(&::Liv::Lck::GorillaTag::GTLckController::CalculateCorrectFOV)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d26bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"CalculateCorrectFOV", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.SetOverlayEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController::SetOverlayEnabled)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d28328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetOverlayEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController.ApplyCameraSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)(::Liv::Lck::GorillaTag::GtCameraDockSettings)>(&::Liv::Lck::GorillaTag::GTLckController::ApplyCameraSettings)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d2833c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ApplyCameraSettings", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtCameraDockSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController::*)()>(&::Liv::Lck::GorillaTag::GTLckController::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9d28424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get_OnCameraModeChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCameraModeChanged;
}
constexpr ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate* const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get_OnCameraModeChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCameraModeChanged;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set_OnCameraModeChanged(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCameraModeChanged = value;
}
constexpr ::UnityEngine::Events::UnityAction_1<bool>*& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get_OnHorizontalModeChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHorizontalModeChanged;
}
constexpr ::UnityEngine::Events::UnityAction_1<bool>* const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get_OnHorizontalModeChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHorizontalModeChanged;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set_OnHorizontalModeChanged(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHorizontalModeChanged = value;
}
constexpr ::Liv::Lck::ILckService*& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__GTSelectorsGroup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GTSelectorsGroup_k__BackingField;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__GTSelectorsGroup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GTSelectorsGroup_k__BackingField;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__GTSelectorsGroup_k__BackingField(::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GTSelectorsGroup_k__BackingField = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSettingsSectionGroup>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__gtSettingsSectionGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtSettingsSectionGroup;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSettingsSectionGroup> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__gtSettingsSectionGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gtSettingsSectionGroup;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__gtSettingsSectionGroup(::UnityW<::Liv::Lck::GorillaTag::GtSettingsSectionGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gtSettingsSectionGroup = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get_GtColliderTriggerProcessorsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GtColliderTriggerProcessorsGroup;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get_GtColliderTriggerProcessorsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GtColliderTriggerProcessorsGroup;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set_GtColliderTriggerProcessorsGroup(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GtColliderTriggerProcessorsGroup = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFovCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFovCounter;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFovCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFovCounter;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieFovCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieFovCounter = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieSmoothnessCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieSmoothnessCounter;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieSmoothnessCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieSmoothnessCounter;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieSmoothnessCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieSmoothnessCounter = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFlipButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFlipButton;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFlipButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFlipButton;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieFlipButton(::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieFlipButton = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__tabletFollowsPlayerToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabletFollowsPlayerToggle;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__tabletFollowsPlayerToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tabletFollowsPlayerToggle;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__tabletFollowsPlayerToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tabletFollowsPlayerToggle = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__firstPersonFovCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonFovCounter;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__firstPersonFovCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonFovCounter;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__firstPersonFovCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonFovCounter = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__firstPersonSmoothnessCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonSmoothnessCounter;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__firstPersonSmoothnessCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonSmoothnessCounter;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__firstPersonSmoothnessCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonSmoothnessCounter = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonFovCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonFovCounter;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonFovCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonFovCounter;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__thirdPersonFovCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonFovCounter = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonSmoothnessCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonSmoothnessCounter;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonSmoothnessCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonSmoothnessCounter;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__thirdPersonSmoothnessCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonSmoothnessCounter = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonDistanceCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonDistanceCounter;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonDistanceCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonDistanceCounter;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__thirdPersonDistanceCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonDistanceCounter = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonPositionToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonPositionToggle;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonPositionToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonPositionToggle;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__thirdPersonPositionToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonPositionToggle = value;
}
constexpr ::UnityW<::Liv::Lck::LckCamera>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieCamera;
}
constexpr ::UnityW<::Liv::Lck::LckCamera> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieCamera;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieCamera(::UnityW<::Liv::Lck::LckCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieCamera = value;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieStabilizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieStabilizer;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieStabilizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieStabilizer;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieStabilizer = value;
}
constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFrontTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFrontTransform;
}
constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFrontTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFrontTransform;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieFrontTransform(::Liv::Lck::GorillaTag::GtCameraModeTransform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieFrontTransform = value;
}
constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieBackTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieBackTransform;
}
constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieBackTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieBackTransform;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieBackTransform(::Liv::Lck::GorillaTag::GtCameraModeTransform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieBackTransform = value;
}
constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFollowModeTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFollowModeTransform;
}
constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFollowModeTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFollowModeTransform;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieFollowModeTransform(::Liv::Lck::GorillaTag::GtCameraModeTransform  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieFollowModeTransform = value;
}
constexpr ::UnityW<::Liv::Lck::LckCamera>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__firstPersonCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamera;
}
constexpr ::UnityW<::Liv::Lck::LckCamera> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__firstPersonCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonCamera;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__firstPersonCamera(::UnityW<::Liv::Lck::LckCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonCamera = value;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__firstPersonStabilizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonStabilizer;
}
constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__firstPersonStabilizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstPersonStabilizer;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__firstPersonStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstPersonStabilizer = value;
}
constexpr ::UnityW<::Liv::Lck::LckCamera>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonCamera;
}
constexpr ::UnityW<::Liv::Lck::LckCamera> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonCamera;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__thirdPersonCamera(::UnityW<::Liv::Lck::LckCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonCamera = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__coconutCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coconutCamera;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__coconutCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coconutCamera;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__coconutCamera(::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____coconutCamera = value;
}
constexpr ::UnityW<::GlobalNamespace::GtThirdPersonCameraBehaviour>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonCameraBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonCameraBehaviour;
}
constexpr ::UnityW<::GlobalNamespace::GtThirdPersonCameraBehaviour> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonCameraBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonCameraBehaviour;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__thirdPersonCameraBehaviour(::UnityW<::GlobalNamespace::GtThirdPersonCameraBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonCameraBehaviour = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__ThirdPersonHeightAngle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThirdPersonHeightAngle_k__BackingField;
}
constexpr float_t const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__ThirdPersonHeightAngle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThirdPersonHeightAngle_k__BackingField;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__ThirdPersonHeightAngle_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThirdPersonHeightAngle_k__BackingField = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__ThirdPersonSideAngle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThirdPersonSideAngle_k__BackingField;
}
constexpr float_t const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__ThirdPersonSideAngle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThirdPersonSideAngle_k__BackingField;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__ThirdPersonSideAngle_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThirdPersonSideAngle_k__BackingField = value;
}
constexpr bool& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__IsThirdPersonFront_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsThirdPersonFront_k__BackingField;
}
constexpr bool const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__IsThirdPersonFront_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsThirdPersonFront_k__BackingField;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__IsThirdPersonFront_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsThirdPersonFront_k__BackingField = value;
}
constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__headsetCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCamera;
}
constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__headsetCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCamera;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__headsetCamera(::UnityW<::Liv::Lck::LckHeadsetCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headsetCamera = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__virtualCameraOnlyUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualCameraOnlyUI;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__virtualCameraOnlyUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____virtualCameraOnlyUI;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__virtualCameraOnlyUI(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____virtualCameraOnlyUI = value;
}
constexpr ::System::Action_1<::Liv::Lck::GorillaTag::CameraMode>*& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get_OnFOVUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFOVUpdated;
}
constexpr ::System::Action_1<::Liv::Lck::GorillaTag::CameraMode>* const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get_OnFOVUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFOVUpdated;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set_OnFOVUpdated(::System::Action_1<::Liv::Lck::GorillaTag::CameraMode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFOVUpdated = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::DroneSystem>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__droneSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneSystem;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::DroneSystem> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__droneSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneSystem;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__droneSystem(::UnityW<::Liv::Lck::GorillaTag::DroneSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneSystem = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__droneModeTabletUIAppearance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneModeTabletUIAppearance;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__droneModeTabletUIAppearance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneModeTabletUIAppearance;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__droneModeTabletUIAppearance(::UnityW<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneModeTabletUIAppearance = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__headsetEyeToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetEyeToggle;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__headsetEyeToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetEyeToggle;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__headsetEyeToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headsetEyeToggle = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__headsetCropModeToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCropModeToggle;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__headsetCropModeToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headsetCropModeToggle;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__headsetCropModeToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headsetCropModeToggle = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtRecordButton>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__recordButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordButton;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtRecordButton> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__recordButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordButton;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__recordButton(::UnityW<::Liv::Lck::GorillaTag::GtRecordButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordButton = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSaveEchoButton>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__saveEchoButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveEchoButton;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSaveEchoButton> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__saveEchoButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveEchoButton;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__saveEchoButton(::UnityW<::Liv::Lck::GorillaTag::GtSaveEchoButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____saveEchoButton = value;
}
constexpr ::UnityW<::UnityEngine::ScriptableObject>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__qualityConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityConfig;
}
constexpr ::UnityW<::UnityEngine::ScriptableObject> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__qualityConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualityConfig;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__qualityConfig(::UnityW<::UnityEngine::ScriptableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qualityConfig = value;
}
constexpr ::UnityW<::Liv::Lck::UI::LckQualitySelector>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__qualitySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualitySelector;
}
constexpr ::UnityW<::Liv::Lck::UI::LckQualitySelector> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__qualitySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____qualitySelector;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__qualitySelector(::UnityW<::Liv::Lck::UI::LckQualitySelector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____qualitySelector = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtButton>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__changeOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changeOrientation;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtButton> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__changeOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____changeOrientation;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__changeOrientation(::UnityW<::Liv::Lck::GorillaTag::GtButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____changeOrientation = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__microphoneButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneButton;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__microphoneButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____microphoneButton;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__microphoneButton(::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____microphoneButton = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__monitorTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__monitorTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorTransform;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__monitorTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monitorTransform = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__topButtonsController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__topButtonsController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsController;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__topButtonsController(::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topButtonsController = value;
}
constexpr bool& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__isHorizontalMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHorizontalMode;
}
constexpr bool const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__isHorizontalMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHorizontalMode;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__isHorizontalMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHorizontalMode = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__notificationController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__notificationController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notificationController = value;
}
constexpr ::Liv::Lck::GorillaTag::CameraMode& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__currentCameraMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraMode;
}
constexpr ::Liv::Lck::GorillaTag::CameraMode const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__currentCameraMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraMode;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__currentCameraMode(::Liv::Lck::GorillaTag::CameraMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentCameraMode = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__playerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__playerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerCamera;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__playerCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerCamera = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__playerHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__playerHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerHead;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerHead = value;
}
constexpr bool& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__justTransitioned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justTransitioned;
}
constexpr bool const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__justTransitioned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____justTransitioned;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__justTransitioned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____justTransitioned = value;
}
constexpr bool& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__isTabletFollowingPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTabletFollowingPlayer;
}
constexpr bool const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__isTabletFollowingPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isTabletFollowingPlayer;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__isTabletFollowingPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isTabletFollowingPlayer = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieSmoothness;
}
constexpr float_t const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieSmoothness;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieSmoothness = value;
}
constexpr bool& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__isSelfieFront()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSelfieFront;
}
constexpr bool const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__isSelfieFront() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSelfieFront;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__isSelfieFront(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSelfieFront = value;
}
constexpr ::Liv::Lck::LckCameraOrientation& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__currentCameraOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraOrientation;
}
constexpr ::Liv::Lck::LckCameraOrientation const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__currentCameraOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentCameraOrientation;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__currentCameraOrientation(::Liv::Lck::LckCameraOrientation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentCameraOrientation = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFollowModeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFollowModeOffset;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__selfieFollowModeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selfieFollowModeOffset;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__selfieFollowModeOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selfieFollowModeOffset = value;
}
constexpr bool& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__micState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micState;
}
constexpr bool const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__micState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____micState;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__micState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____micState = value;
}
constexpr float_t& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonHeightAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonHeightAngle;
}
constexpr float_t const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__thirdPersonHeightAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thirdPersonHeightAngle;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__thirdPersonHeightAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thirdPersonHeightAngle = value;
}
constexpr ::Liv::Lck::CameraTrackDescriptor& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__currentTrackDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTrackDescriptor;
}
constexpr ::Liv::Lck::CameraTrackDescriptor const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__currentTrackDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTrackDescriptor;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__currentTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTrackDescriptor = value;
}
constexpr bool& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__isOverlayActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOverlayActive;
}
constexpr bool const& Liv::Lck::GorillaTag::GTLckController::__cordl_internal_get__isOverlayActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isOverlayActive;
}
constexpr void Liv::Lck::GorillaTag::GTLckController::__cordl_internal_set__isOverlayActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isOverlayActive = value;
}
inline void Liv::Lck::GorillaTag::GTLckController::add_OnCameraModeChanged(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"add_OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::remove_OnCameraModeChanged(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"remove_OnCameraModeChanged", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::add_OnHorizontalModeChanged(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"add_OnHorizontalModeChanged", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::remove_OnHorizontalModeChanged(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"remove_OnHorizontalModeChanged", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup> Liv::Lck::GorillaTag::GTLckController::get_GTSelectorsGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_GTSelectorsGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::set_GTSelectorsGroup(::Liv::Lck::GorillaTag::GtSelectorsGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"set_GTSelectorsGroup", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtSelectorsGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Liv::Lck::GorillaTag::GTLckController::get_ThirdPersonHeightAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_ThirdPersonHeightAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::set_ThirdPersonHeightAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"set_ThirdPersonHeightAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Liv::Lck::GorillaTag::GTLckController::get_ThirdPersonSideAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_ThirdPersonSideAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::set_ThirdPersonSideAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"set_ThirdPersonSideAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::GorillaTag::GTLckController::get_IsThirdPersonFront()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_IsThirdPersonFront", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::set_IsThirdPersonFront(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"set_IsThirdPersonFront", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::GorillaTag::GTLckController::get_HorizontalMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_HorizontalMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::CameraMode Liv::Lck::GorillaTag::GTLckController::get_CurrentCameraMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_CurrentCameraMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::GorillaTag::CameraMode>(this, ___internal_method);
}
inline bool Liv::Lck::GorillaTag::GTLckController::get_IsTabletFollowingPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"get_IsTabletFollowingPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::OnQualityOptionSelected(::Liv::Lck::QualityOption  qualityOption)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnQualityOptionSelected", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityOption);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetCameraMode(::Liv::Lck::GorillaTag::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetCameraMode", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessDroneModeStateChangeRequest(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessDroneModeStateChangeRequest", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline ::Liv::Lck::CameraTrackDescriptor Liv::Lck::GorillaTag::GTLckController::GetDescriptorForCurrentOrientation(::Liv::Lck::CameraTrackDescriptor  descriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"GetDescriptorForCurrentOrientation", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::CameraTrackDescriptor>(this, ___internal_method, descriptor);
}
inline bool Liv::Lck::GorillaTag::GTLckController::IsQuest2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"IsQuest2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetupCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetupCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetSelfieCameraOrientation(::Liv::Lck::GorillaTag::GtCameraModeTransform  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetSelfieCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtCameraModeTransform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessFirstCameraPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessFirstCameraPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::UpdateThirdPersonHeightAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"UpdateThirdPersonHeightAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::UpdateThirdPersonSideAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"UpdateThirdPersonSideAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessThirdCameraPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdCameraPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::FindPlayerReferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"FindPlayerReferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::CheckMicPermission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"CheckMicPermission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::ChangeCameraMode(::Liv::Lck::GorillaTag::CameraMode  newMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ChangeCameraMode", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMode);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetUpDroneCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpDroneCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetUpSelfieCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpSelfieCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetUpFirstPersonCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpFirstPersonCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetUpThirdPersonCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpThirdPersonCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetUpHeadsetCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetUpHeadsetCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetActiveLckCamera(::StringW  cameraId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetActiveLckCamera", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraId);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetMonitorScale(::Liv::Lck::GorillaTag::CameraMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetMonitorScale", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetVirtualCameraUIActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetVirtualCameraUIActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline ::UnityW<::UnityEngine::Camera> Liv::Lck::GorillaTag::GTLckController::GetActiveCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"GetActiveCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetFollowModeState(bool  isFollowing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetFollowModeState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFollowing);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessSelfieFov(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessSelfieFov", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessSelfieSmoothness(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessSelfieSmoothness", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessSelfieFlip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessSelfieFlip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessFirstPersonFov(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessFirstPersonFov", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessFirstPersonSmoothness(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessFirstPersonSmoothness", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessThirdPersonFov(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdPersonFov", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessThirdPersonSmoothness(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdPersonSmoothness", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessThirdPersonDistance(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdPersonDistance", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessThirdPersonPosition(bool  isFirstSelected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessThirdPersonPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFirstSelected);
}
inline void Liv::Lck::GorillaTag::GTLckController::ToggleRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ToggleRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessHeadsetEye(bool  isFirstSelected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessHeadsetEye", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFirstSelected);
}
inline void Liv::Lck::GorillaTag::GTLckController::OnCaptureStart(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnCaptureStart", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::GTLckController::ProcessHeadsetCropMode(bool  isFirstSelected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ProcessHeadsetCropMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isFirstSelected);
}
inline void Liv::Lck::GorillaTag::GTLckController::SaveEcho()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SaveEcho", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::OnCaptureStopped(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"OnCaptureStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetOrientationQualityAndTopButtonsIsDisabledState(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetOrientationQualityAndTopButtonsIsDisabledState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline bool Liv::Lck::GorillaTag::GTLckController::StopRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"StopRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::ToggleMicrophoneRecording(::UnityEngine::Events::UnityAction_1<bool>*  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ToggleMicrophoneRecording", {}, {::i2c::type_of<::UnityEngine::Events::UnityAction_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Liv::Lck::GorillaTag::GTLckController::ToggleOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ToggleOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::CameraTrackDescriptor Liv::Lck::GorillaTag::GTLckController::GenerateVerticalCameraTrackDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"GenerateVerticalCameraTrackDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::CameraTrackDescriptor>(this, ___internal_method);
}
inline float_t Liv::Lck::GorillaTag::GTLckController::GetCurrentModeFOV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"GetCurrentModeFOV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Liv::Lck::GorillaTag::GTLckController::StopEchoIfActiveAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"StopEchoIfActiveAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::RestartEcho()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"RestartEcho", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetFOV(::Liv::Lck::GorillaTag::CameraMode  mode, float_t  fov)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetFOV", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::CameraMode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, fov);
}
inline float_t Liv::Lck::GorillaTag::GTLckController::CalculateCorrectFOV(float_t  incomingVerticalFOV)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"CalculateCorrectFOV", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, incomingVerticalFOV);
}
inline void Liv::Lck::GorillaTag::GTLckController::SetOverlayEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"SetOverlayEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::GTLckController::ApplyCameraSettings(::Liv::Lck::GorillaTag::GtCameraDockSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {"ApplyCameraSettings", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtCameraDockSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void Liv::Lck::GorillaTag::GTLckController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GTLckController* Liv::Lck::GorillaTag::GTLckController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GTLckController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GTLckController::GTLckController()   {
}
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController___c::*)()>(&::Liv::Lck::GorillaTag::GTLckController___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2873c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController___c.__ctor_b__140_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController___c::*)(bool)>(&::Liv::Lck::GorillaTag::GTLckController___c::__ctor_b__140_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d28744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController___c*>(),
                        {"<.ctor>b__140_0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::GorillaTag::GTLckController___c::setStaticF___9(::Liv::Lck::GorillaTag::GTLckController___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::GorillaTag::GTLckController___c*, "<>9", ::Liv::Lck::GorillaTag::GTLckController___c*>(std::forward<::Liv::Lck::GorillaTag::GTLckController___c*>(value));
}
inline ::Liv::Lck::GorillaTag::GTLckController___c* Liv::Lck::GorillaTag::GTLckController___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::GorillaTag::GTLckController___c*, "<>9", ::Liv::Lck::GorillaTag::GTLckController___c*>();
}
inline void Liv::Lck::GorillaTag::GTLckController___c::setStaticF___9__140_0(::UnityEngine::Events::UnityAction_1<bool>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<bool>*, "<>9__140_0", ::Liv::Lck::GorillaTag::GTLckController___c*>(std::forward<::UnityEngine::Events::UnityAction_1<bool>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<bool>* Liv::Lck::GorillaTag::GTLckController___c::getStaticF___9__140_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<bool>*, "<>9__140_0", ::Liv::Lck::GorillaTag::GTLckController___c*>();
}
inline void Liv::Lck::GorillaTag::GTLckController___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GTLckController___c::__ctor_b__140_0(bool  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController___c*>(),
                        {"<.ctor>b__140_0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Liv::Lck::GorillaTag::GTLckController___c* Liv::Lck::GorillaTag::GTLckController___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GTLckController___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GTLckController___c::GTLckController___c()   {
}
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d28580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::*)(::Liv::Lck::GorillaTag::CameraMode, ::Liv::Lck::ILckCamera*)>(&::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d28620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::*)(::Liv::Lck::GorillaTag::CameraMode, ::Liv::Lck::ILckCamera*, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d28634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::*)(::System::IAsyncResult*)>(&::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d286c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(),
                    {::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::Invoke(::Liv::Lck::GorillaTag::CameraMode  mode, ::Liv::Lck::ILckCamera*  camera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, camera);
}
inline ::System::IAsyncResult* Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::BeginInvoke(::Liv::Lck::GorillaTag::CameraMode  mode, ::Liv::Lck::ILckCamera*  camera, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, mode, camera, callback, object);
}
inline void Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate* Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate::GTLckController_CameraModeDelegate()   {
}
