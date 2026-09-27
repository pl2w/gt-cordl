#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_OpenVRControllerDetails_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawAxis1D_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawAxis2D_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawButton_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawNearTouch_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawTouch_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState6_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Step_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Axis1D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Axis2D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Button_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_ControllerInHandState_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Hand_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Handedness_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_HapticsAmplitudeEnvelopeVibration_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_HapticsLocation_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_HapticsPcmVibration_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InputDeviceShowState_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InteractionProfile_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_NearTouch_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_OpenVRButton_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_OpenVRControllerDetails_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_OpenVRController_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawAxis1D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawAxis2D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawButton_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawNearTouch_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawTouch_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Touch_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ControllerState6_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Step_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRInput.get_pluginSupportsActiveController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRInput::get_pluginSupportsActiveController)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa5c3388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"get_pluginSupportsActiveController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::Update)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0xa5c3b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::FixedUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa5c4770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetCurrentInteractionProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_InteractionProfile (*)(::GlobalNamespace::OVRInput_Hand)>(&::GlobalNamespace::OVRInput::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa5c487c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetCurrentInteractionProfile", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Hand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerOrientationTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerOrientationTracked)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa5c48d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerOrientationTracked", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerOrientationValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerOrientationValid)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa5c498c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerOrientationValid", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerPositionTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerPositionTracked)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa5c4a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerPositionTracked", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerPositionValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerPositionValid)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa5c4afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerPositionValid", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.AreHandPosesGeneratedByControllerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRPlugin_Step, ::GlobalNamespace::OVRInput_Hand)>(&::GlobalNamespace::OVRInput::AreHandPosesGeneratedByControllerData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa5c4bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"AreHandPosesGeneratedByControllerData", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Hand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.EnableSimultaneousHandsAndControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRInput::EnableSimultaneousHandsAndControllers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa5c4c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"EnableSimultaneousHandsAndControllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.DisableSimultaneousHandsAndControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRInput::DisableSimultaneousHandsAndControllers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa5c4c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"DisableSimultaneousHandsAndControllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerIsInHandState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_ControllerInHandState (*)(::GlobalNamespace::OVRInput_Hand)>(&::GlobalNamespace::OVRInput::GetControllerIsInHandState)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa5c4ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerIsInHandState", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Hand>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetActiveControllerForHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Controller (*)(::GlobalNamespace::OVRInput_Handedness)>(&::GlobalNamespace::OVRInput::GetActiveControllerForHand)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa5c4dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetActiveControllerForHand", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetLocalControllerPosition)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0xa5c4ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerPosition", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetLocalControllerVelocity)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa5c54d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerVelocity", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerAcceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetLocalControllerAcceleration)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa5c5738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerAcceleration", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetLocalControllerRotation)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0xa5c5998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerRotation", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetLocalControllerAngularVelocity)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa5c5f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerAngularVelocity", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerAngularAcceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetLocalControllerAngularAcceleration)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa5c61d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerAngularAcceleration", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerStatesWithoutPrediction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::OVRInput::GetLocalControllerStatesWithoutPrediction)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xa5c6430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerStatesWithoutPrediction", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDominantHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Handedness (*)()>(&::GlobalNamespace::OVRInput::GetDominantHand)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa5c6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDominantHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c67e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c46a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedButton)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa5c6848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedButton", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c69f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c6bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedButtonDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa5c6a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedButtonDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c6c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c6dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Button, ::GlobalNamespace::OVRInput_RawButton, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedButtonUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa5c6c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedButtonUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c6e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c4708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedTouch)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa5c6ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedTouch", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c701c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c71e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedTouchDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedTouchDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa5c7084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedTouchDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c724c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c7414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedTouchUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Touch, ::GlobalNamespace::OVRInput_RawTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedTouchUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa5c72b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedTouchUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c747c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawNearTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedNearTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_RawNearTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedNearTouch)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa5c74e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedNearTouch", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c76ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawNearTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c7874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedNearTouchDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_RawNearTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedNearTouchDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa5c7714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedNearTouchDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c78dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_RawNearTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c7aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedNearTouchUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_NearTouch, ::GlobalNamespace::OVRInput_RawNearTouch, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedNearTouchUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa5c7944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedNearTouchUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_Axis1D, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c7b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_RawAxis1D, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c81f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawAxis1D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedAxis1D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_Axis1D, ::GlobalNamespace::OVRInput_RawAxis1D, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedAxis1D)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0xa5c7b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedAxis1D", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawAxis1D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVRInput_Axis2D, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c82dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVRInput_RawAxis2D, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5c8694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawAxis2D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedAxis2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::OVRInput_Axis2D, ::GlobalNamespace::OVRInput_RawAxis2D, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetResolvedAxis2D)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa5c8344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedAxis2D", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawAxis2D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetConnectedControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Controller (*)()>(&::GlobalNamespace::OVRInput::GetConnectedControllers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa5c8870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetConnectedControllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.IsControllerConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::IsControllerConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa5c88c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"IsControllerConnected", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetActiveController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Controller (*)()>(&::GlobalNamespace::OVRInput::GetActiveController)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa5c892c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetActiveController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.StartVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRInput::StartVibration)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa5c8984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"StartVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetOpenVRLocalPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::GlobalNamespace::OVRInput::SetOpenVRLocalPose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa5c8a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetOpenVRLocalPose", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetOpenVRStringProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::OVR::OpenVR::ETrackedDeviceProperty, uint32_t)>(&::GlobalNamespace::OVRInput::GetOpenVRStringProperty)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa5c8bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetOpenVRStringProperty", {}, {::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.UpdateXRControllerNodeIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::UpdateXRControllerNodeIds)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0xa5c4138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"UpdateXRControllerNodeIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.UpdateXRControllerHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::UpdateXRControllerHaptics)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa5c44bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"UpdateXRControllerHaptics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.InitHapticInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::InitHapticInfo)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa5c3a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"InitHapticInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.PlayHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRInput::PlayHapticImpulse)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa5c8cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"PlayHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.IsValidOpenVRDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::GlobalNamespace::OVRInput::IsValidOpenVRDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa5c8e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"IsValidOpenVRDevice", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, float_t, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::SetControllerVibration)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa5c8e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetControllerVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerLocalizedVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRInput_HapticsLocation, float_t, float_t, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::SetControllerLocalizedVibration)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa5c9020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetControllerLocalizedVibration", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_HapticsLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerHapticsAmplitudeEnvelope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::SetControllerHapticsAmplitudeEnvelope)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa5c91fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetControllerHapticsAmplitudeEnvelope", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerHapticsPcm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::OVRInput_HapticsPcmVibration, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::SetControllerHapticsPcm)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa5c9344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetControllerHapticsPcm", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_HapticsPcmVibration>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerSampleRateHz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerSampleRateHz)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa5c9498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerSampleRateHz", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerBatteryPercentRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::GetControllerBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa5c95c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerBatteryPercentRemaining", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateAbsMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::OVRInput::CalculateAbsMax)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa5c8848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"CalculateAbsMax", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateAbsMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::OVRInput::CalculateAbsMax)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5c82b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"CalculateAbsMax", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::OVRInput::CalculateDeadzone)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa5c8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"CalculateDeadzone", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateDeadzone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::OVRInput::CalculateDeadzone)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa5c826c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"CalculateDeadzone", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.ShouldResolveController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRInput_Controller, ::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput::ShouldResolveController)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa5c6994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"ShouldResolveController", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput::setStaticF_AXIS_AS_BUTTON_THRESHOLD(float_t  value)  {
::cordl_internals::setStaticField<float_t, "AXIS_AS_BUTTON_THRESHOLD", ::GlobalNamespace::OVRInput*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_AXIS_AS_BUTTON_THRESHOLD()  {
return ::cordl_internals::getStaticField<float_t, "AXIS_AS_BUTTON_THRESHOLD", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_AXIS_DEADZONE_THRESHOLD(float_t  value)  {
::cordl_internals::setStaticField<float_t, "AXIS_DEADZONE_THRESHOLD", ::GlobalNamespace::OVRInput*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_AXIS_DEADZONE_THRESHOLD()  {
return ::cordl_internals::getStaticField<float_t, "AXIS_DEADZONE_THRESHOLD", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_controllers(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>*, "controllers", ::GlobalNamespace::OVRInput*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>* GlobalNamespace::OVRInput::getStaticF_controllers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>*, "controllers", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_activeControllerType(::GlobalNamespace::OVRInput_Controller  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRInput_Controller, "activeControllerType", ::GlobalNamespace::OVRInput*>(std::forward<::GlobalNamespace::OVRInput_Controller>(value));
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::getStaticF_activeControllerType()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRInput_Controller, "activeControllerType", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_connectedControllerTypes(::GlobalNamespace::OVRInput_Controller  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRInput_Controller, "connectedControllerTypes", ::GlobalNamespace::OVRInput*>(std::forward<::GlobalNamespace::OVRInput_Controller>(value));
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::getStaticF_connectedControllerTypes()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRInput_Controller, "connectedControllerTypes", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_stepType(::GlobalNamespace::OVRPlugin_Step  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_Step, "stepType", ::GlobalNamespace::OVRInput*>(std::forward<::GlobalNamespace::OVRPlugin_Step>(value));
}
inline ::GlobalNamespace::OVRPlugin_Step GlobalNamespace::OVRInput::getStaticF_stepType()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_Step, "stepType", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_fixedUpdateCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "fixedUpdateCount", ::GlobalNamespace::OVRInput*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRInput::getStaticF_fixedUpdateCount()  {
return ::cordl_internals::getStaticField<int32_t, "fixedUpdateCount", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF__pluginSupportsActiveController(bool  value)  {
::cordl_internals::setStaticField<bool, "_pluginSupportsActiveController", ::GlobalNamespace::OVRInput*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRInput::getStaticF__pluginSupportsActiveController()  {
return ::cordl_internals::getStaticField<bool, "_pluginSupportsActiveController", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF__pluginSupportsActiveControllerCached(bool  value)  {
::cordl_internals::setStaticField<bool, "_pluginSupportsActiveControllerCached", ::GlobalNamespace::OVRInput*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRInput::getStaticF__pluginSupportsActiveControllerCached()  {
return ::cordl_internals::getStaticField<bool, "_pluginSupportsActiveControllerCached", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF__pluginSupportsActiveControllerMinVersion(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "_pluginSupportsActiveControllerMinVersion", ::GlobalNamespace::OVRInput*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::OVRInput::getStaticF__pluginSupportsActiveControllerMinVersion()  {
return ::cordl_internals::getStaticField<::System::Version*, "_pluginSupportsActiveControllerMinVersion", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_NUM_HAPTIC_CHANNELS(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "NUM_HAPTIC_CHANNELS", ::GlobalNamespace::OVRInput*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRInput::getStaticF_NUM_HAPTIC_CHANNELS()  {
return ::cordl_internals::getStaticField<int32_t, "NUM_HAPTIC_CHANNELS", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_hapticInfos(::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*>, "hapticInfos", ::GlobalNamespace::OVRInput*>(std::forward<::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*> GlobalNamespace::OVRInput::getStaticF_hapticInfos()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*>, "hapticInfos", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE(float_t  value)  {
::cordl_internals::setStaticField<float_t, "OPENVR_MAX_HAPTIC_AMPLITUDE", ::GlobalNamespace::OVRInput*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE()  {
return ::cordl_internals::getStaticField<float_t, "OPENVR_MAX_HAPTIC_AMPLITUDE", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS(float_t  value)  {
::cordl_internals::setStaticField<float_t, "HAPTIC_VIBRATION_DURATION_SECONDS", ::GlobalNamespace::OVRInput*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS()  {
return ::cordl_internals::getStaticField<float_t, "HAPTIC_VIBRATION_DURATION_SECONDS", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_TOUCH_NAME(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "OPENVR_TOUCH_NAME", ::GlobalNamespace::OVRInput*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRInput::getStaticF_OPENVR_TOUCH_NAME()  {
return ::cordl_internals::getStaticField<::StringW, "OPENVR_TOUCH_NAME", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_VIVE_CONTROLLER_NAME(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "OPENVR_VIVE_CONTROLLER_NAME", ::GlobalNamespace::OVRInput*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRInput::getStaticF_OPENVR_VIVE_CONTROLLER_NAME()  {
return ::cordl_internals::getStaticField<::StringW, "OPENVR_VIVE_CONTROLLER_NAME", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "OPENVR_WINDOWSMR_CONTROLLER_NAME", ::GlobalNamespace::OVRInput*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRInput::getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME()  {
return ::cordl_internals::getStaticField<::StringW, "OPENVR_WINDOWSMR_CONTROLLER_NAME", ::GlobalNamespace::OVRInput*>();
}
inline void GlobalNamespace::OVRInput::setStaticF_openVRControllerDetails(::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails>, "openVRControllerDetails", ::GlobalNamespace::OVRInput*>(std::forward<::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails> GlobalNamespace::OVRInput::getStaticF_openVRControllerDetails()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails>, "openVRControllerDetails", ::GlobalNamespace::OVRInput*>();
}
inline bool GlobalNamespace::OVRInput::get_pluginSupportsActiveController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"get_pluginSupportsActiveController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_InteractionProfile GlobalNamespace::OVRInput::GetCurrentInteractionProfile(::GlobalNamespace::OVRInput_Hand  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetCurrentInteractionProfile", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Hand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_InteractionProfile>(nullptr, ___internal_method, hand);
}
inline bool GlobalNamespace::OVRInput::GetControllerOrientationTracked(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerOrientationTracked", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetControllerOrientationValid(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerOrientationValid", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetControllerPositionTracked(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerPositionTracked", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetControllerPositionValid(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerPositionValid", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::AreHandPosesGeneratedByControllerData(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRInput_Hand  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"AreHandPosesGeneratedByControllerData", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Step>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Hand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, stepId, hand);
}
inline bool GlobalNamespace::OVRInput::EnableSimultaneousHandsAndControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"EnableSimultaneousHandsAndControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRInput::DisableSimultaneousHandsAndControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"DisableSimultaneousHandsAndControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_ControllerInHandState GlobalNamespace::OVRInput::GetControllerIsInHandState(::GlobalNamespace::OVRInput_Hand  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerIsInHandState", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Hand>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_ControllerInHandState>(nullptr, ___internal_method, hand);
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::GetActiveControllerForHand(::GlobalNamespace::OVRInput_Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetActiveControllerForHand", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller>(nullptr, ___internal_method, handedness);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerPosition(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerPosition", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerVelocity(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerVelocity", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAcceleration(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerAcceleration", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRInput::GetLocalControllerRotation(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerRotation", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularVelocity(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerAngularVelocity", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularAcceleration(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerAngularAcceleration", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetLocalControllerStatesWithoutPrediction(::GlobalNamespace::OVRInput_Controller  controllerType, ::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetLocalControllerStatesWithoutPrediction", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controllerType, position, rotation, velocity, angularVelocity);
}
inline ::GlobalNamespace::OVRInput_Handedness GlobalNamespace::OVRInput::GetDominantHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDominantHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Handedness>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedButton(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedButton", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedButtonDown(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedButtonDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedButtonUp(::GlobalNamespace::OVRInput_Button  virtualMask, ::GlobalNamespace::OVRInput_RawButton  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedButtonUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawButton>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedTouch(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedTouch", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedTouchDown(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedTouchDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedTouchUp(::GlobalNamespace::OVRInput_Touch  virtualMask, ::GlobalNamespace::OVRInput_RawTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedTouchUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedNearTouch(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedNearTouch", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedNearTouchDown(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedNearTouchDown", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedNearTouchUp(::GlobalNamespace::OVRInput_NearTouch  virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedNearTouchUp", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawNearTouch>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline float_t GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_Axis1D  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline float_t GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawAxis1D  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawAxis1D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline float_t GlobalNamespace::OVRInput::GetResolvedAxis1D(::GlobalNamespace::OVRInput_Axis1D  virtualMask, ::GlobalNamespace::OVRInput_RawAxis1D  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedAxis1D", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawAxis1D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_Axis2D  virtualMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, virtualMask, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(::GlobalNamespace::OVRInput_RawAxis2D  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_RawAxis2D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::GetResolvedAxis2D(::GlobalNamespace::OVRInput_Axis2D  virtualMask, ::GlobalNamespace::OVRInput_RawAxis2D  rawMask, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetResolvedAxis2D", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_RawAxis2D>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::GetConnectedControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetConnectedControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRInput::IsControllerConnected(::GlobalNamespace::OVRInput_Controller  controller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"IsControllerConnected", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controller);
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput::GetActiveController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetActiveController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::StartVibration(float_t  amplitude, float_t  duration, ::UnityEngine::XR::XRNode  controllerNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"StartVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, amplitude, duration, controllerNode);
}
inline void GlobalNamespace::OVRInput::SetOpenVRLocalPose(::UnityEngine::Vector3  leftPos, ::UnityEngine::Vector3  rightPos, ::UnityEngine::Quaternion  leftRot, ::UnityEngine::Quaternion  rightRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetOpenVRLocalPose", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, leftPos, rightPos, leftRot, rightRot);
}
inline ::StringW GlobalNamespace::OVRInput::GetOpenVRStringProperty(::OVR::OpenVR::ETrackedDeviceProperty  prop, uint32_t  deviceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetOpenVRStringProperty", {}, {::i2c::type_of<::OVR::OpenVR::ETrackedDeviceProperty>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, prop, deviceId);
}
inline void GlobalNamespace::OVRInput::UpdateXRControllerNodeIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"UpdateXRControllerNodeIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::UpdateXRControllerHaptics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"UpdateXRControllerHaptics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::InitHapticInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"InitHapticInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::PlayHapticImpulse(float_t  amplitude, ::UnityEngine::XR::XRNode  deviceNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"PlayHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, amplitude, deviceNode);
}
inline bool GlobalNamespace::OVRInput::IsValidOpenVRDevice(uint32_t  deviceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"IsValidOpenVRDevice", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, deviceId);
}
inline void GlobalNamespace::OVRInput::SetControllerVibration(float_t  frequency, float_t  amplitude, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetControllerVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frequency, amplitude, controllerMask);
}
inline void GlobalNamespace::OVRInput::SetControllerLocalizedVibration(::GlobalNamespace::OVRInput_HapticsLocation  hapticsLocationMask, float_t  frequency, float_t  amplitude, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetControllerLocalizedVibration", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_HapticsLocation>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hapticsLocationMask, frequency, amplitude, controllerMask);
}
inline void GlobalNamespace::OVRInput::SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration  hapticsVibration, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetControllerHapticsAmplitudeEnvelope", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hapticsVibration, controllerMask);
}
inline int32_t GlobalNamespace::OVRInput::SetControllerHapticsPcm(::GlobalNamespace::OVRInput_HapticsPcmVibration  hapticsVibration, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"SetControllerHapticsPcm", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_HapticsPcmVibration>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hapticsVibration, controllerMask);
}
inline float_t GlobalNamespace::OVRInput::GetControllerSampleRateHz(::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerSampleRateHz", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, controllerMask);
}
inline uint8_t GlobalNamespace::OVRInput::GetControllerBatteryPercentRemaining(::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"GetControllerBatteryPercentRemaining", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateAbsMax(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"CalculateAbsMax", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, b);
}
inline float_t GlobalNamespace::OVRInput::CalculateAbsMax(float_t  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"CalculateAbsMax", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateDeadzone(::UnityEngine::Vector2  a, float_t  deadzone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"CalculateDeadzone", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, a, deadzone);
}
inline float_t GlobalNamespace::OVRInput::CalculateDeadzone(float_t  a, float_t  deadzone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"CalculateDeadzone", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, deadzone);
}
inline bool GlobalNamespace::OVRInput::ShouldResolveController(::GlobalNamespace::OVRInput_Controller  controllerType, ::GlobalNamespace::OVRInput_Controller  controllerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput*>(),
                        {"ShouldResolveController", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>(), ::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controllerType, controllerMask);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput::OVRInput()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa5cb470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa5cb490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa5cb53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid* GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid::OVRInput_OVRControllerGamepadAndroid()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadPC::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa5cb354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa5cb374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa5cb420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerGamepadPC.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerGamepadPC::*)()>(&::GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerGamepadPC::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerGamepadPC* GlobalNamespace::OVRInput_OVRControllerGamepadPC::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerGamepadPC*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerGamepadPC::OVRInput_OVRControllerGamepadPC()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRemote::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa5cb258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa5cb278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRemote.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRemote::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerRemote::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRemote::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRemote*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerRemote* GlobalNamespace::OVRInput_OVRControllerRemote::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerRemote*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerRemote::OVRInput_OVRControllerRemote()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRHand::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa5cb164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa5cb184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRHand.GetBatteryPercentRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerRHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRHand::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5cb250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerRHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRHand::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerRHand::GetBatteryPercentRemaining()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRHand*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerRHand* GlobalNamespace::OVRInput_OVRControllerRHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerRHand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerRHand::OVRInput_OVRControllerRHand()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLHand::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa5cb070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa5cb090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLHand.GetBatteryPercentRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerLHand::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLHand::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5cb15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerLHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLHand::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerLHand::GetBatteryPercentRemaining()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLHand*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerLHand* GlobalNamespace::OVRInput_OVRControllerLHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerLHand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerLHand::OVRInput_OVRControllerLHand()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(&::GlobalNamespace::OVRInput_OVRControllerHands::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa5caf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(&::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa5caf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(&::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cafdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(&::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(&::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cb01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(&::GlobalNamespace::OVRInput_OVRControllerHands::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5cb040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerHands.GetBatteryPercentRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerHands::*)()>(&::GlobalNamespace::OVRInput_OVRControllerHands::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa5cb05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerHands::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerHands::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerHands::GetBatteryPercentRemaining()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerHands*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerHands* GlobalNamespace::OVRInput_OVRControllerHands::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerHands*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerHands::OVRInput_OVRControllerHands()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRTouch::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5c39fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5cae44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa5caeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5caedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa5caf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5caf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerRTouch.GetBatteryPercentRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerRTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerRTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5caf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerRTouch::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerRTouch::GetBatteryPercentRemaining()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerRTouch*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerRTouch* GlobalNamespace::OVRInput_OVRControllerRTouch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerRTouch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerRTouch::OVRInput_OVRControllerRTouch()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLTouch::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5c39e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa5cad18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa5cad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cadb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa5cadd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa5cae18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerLTouch.GetBatteryPercentRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerLTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerLTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5cae3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerLTouch::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerLTouch::GetBatteryPercentRemaining()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerLTouch*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerLTouch* GlobalNamespace::OVRInput_OVRControllerLTouch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerLTouch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerLTouch::OVRInput_OVRControllerLTouch()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerTouch::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa5c39c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa5cabd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa5cac34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa5cac6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa5cac94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa5cacdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerTouch.GetBatteryPercentRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerTouch::*)()>(&::GlobalNamespace::OVRInput_OVRControllerTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa5cad04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput_OVRControllerTouch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerTouch::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerTouch::GetBatteryPercentRemaining()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerTouch*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_OVRControllerTouch* GlobalNamespace::OVRInput_OVRControllerTouch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerTouch*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerTouch::OVRInput_OVRControllerTouch()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa5c96e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_Controller (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::Update)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0xa5c9908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.GetOpenVRControllerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_ControllerState6 (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_Controller)>(&::GlobalNamespace::OVRInput_OVRControllerBase::GetOpenVRControllerState)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xa5c9e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"GetOpenVRControllerState", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.SetControllerVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)(float_t, float_t)>(&::GlobalNamespace::OVRInput_OVRControllerBase::SetControllerVibration)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa5ca2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.SetControllerLocalizedVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_HapticsLocation, float_t, float_t)>(&::GlobalNamespace::OVRInput_OVRControllerBase::SetControllerLocalizedVibration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa5ca350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.SetControllerHapticsAmplitudeEnvelope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration)>(&::GlobalNamespace::OVRInput_OVRControllerBase::SetControllerHapticsAmplitudeEnvelope)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa5ca3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.SetControllerHapticsPcm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_HapticsPcmVibration)>(&::GlobalNamespace::OVRInput_OVRControllerBase::SetControllerHapticsPcm)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa5ca4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.GetControllerSampleRateHz
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::GetControllerSampleRateHz)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa5ca6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.GetBatteryPercentRemaining
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5ca744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureButtonMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureNearTouchMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureAxis1DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ConfigureAxis2DMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_OVRControllerBase::*)()>(&::GlobalNamespace::OVRInput_OVRControllerBase::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawButton (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_Button)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa5c69e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawTouch (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_Touch)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa5c7008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawNearTouch (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_NearTouch)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa5c7698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawAxis1D (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_Axis1D)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa5c8258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput_OVRControllerBase.ResolveToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawAxis2D (::GlobalNamespace::OVRInput_OVRControllerBase::*)(::GlobalNamespace::OVRInput_Axis2D)>(&::GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa5c86fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_Controller& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_controllerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerType;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_controllerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerType;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_controllerType(::GlobalNamespace::OVRInput_Controller  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerType = value;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_buttonMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_buttonMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_buttonMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonMap = value;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_touchMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_touchMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_touchMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchMap = value;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_nearTouchMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTouchMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_nearTouchMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearTouchMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_nearTouchMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearTouchMap = value;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_axis1DMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis1DMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_axis1DMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis1DMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_axis1DMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis1DMap = value;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_axis2DMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DMap;
}
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_axis2DMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis2DMap;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_axis2DMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis2DMap = value;
}
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_previousState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6 const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_previousState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_previousState(::GlobalNamespace::OVRPlugin_ControllerState6  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousState = value;
}
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::OVRPlugin_ControllerState6 const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_currentState(::GlobalNamespace::OVRPlugin_ControllerState6  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr bool& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_shouldApplyDeadzone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldApplyDeadzone;
}
constexpr bool const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_shouldApplyDeadzone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldApplyDeadzone;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_shouldApplyDeadzone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldApplyDeadzone = value;
}
constexpr ::ArrayW<uint32_t>& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_HapticsPcmSamplesConsumedCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HapticsPcmSamplesConsumedCache;
}
constexpr ::ArrayW<uint32_t> const& GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_get_HapticsPcmSamplesConsumedCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HapticsPcmSamplesConsumedCache;
}
constexpr void GlobalNamespace::OVRInput_OVRControllerBase::__cordl_internal_set_HapticsPcmSamplesConsumedCache(::ArrayW<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HapticsPcmSamplesConsumedCache = value;
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_Controller GlobalNamespace::OVRInput_OVRControllerBase::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_Controller>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_ControllerState6 GlobalNamespace::OVRInput_OVRControllerBase::GetOpenVRControllerState(::GlobalNamespace::OVRInput_Controller  controllerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"GetOpenVRControllerState", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Controller>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_ControllerState6>(this, ___internal_method, controllerType);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::SetControllerVibration(float_t  frequency, float_t  amplitude)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency, amplitude);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::SetControllerLocalizedVibration(::GlobalNamespace::OVRInput_HapticsLocation  hapticsLocationMask, float_t  frequency, float_t  amplitude)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hapticsLocationMask, frequency, amplitude);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration  hapticsVibration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hapticsVibration);
}
inline int32_t GlobalNamespace::OVRInput_OVRControllerBase::SetControllerHapticsPcm(::GlobalNamespace::OVRInput_HapticsPcmVibration  hapticsVibration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, hapticsVibration);
}
inline float_t GlobalNamespace::OVRInput_OVRControllerBase::GetControllerSampleRateHz()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::OVRInput_OVRControllerBase::GetBatteryPercentRemaining()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureButtonMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureNearTouchMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureAxis1DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRInput_OVRControllerBase::ConfigureAxis2DMap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_Button  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawButton>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_Touch  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawTouch>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_NearTouch  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawNearTouch>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_Axis1D  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawAxis1D>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRInput_OVRControllerBase::ResolveToRawMask(::GlobalNamespace::OVRInput_Axis2D  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_OVRControllerBase*>(),
                        {"ResolveToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawAxis2D>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::OVRInput_OVRControllerBase* GlobalNamespace::OVRInput_OVRControllerBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_OVRControllerBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OVRControllerBase::OVRInput_OVRControllerBase()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap.ToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawAxis2D (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::*)(::GlobalNamespace::OVRInput_Axis2D)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::ToRawMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa5cab7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::*)()>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5c9900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_None()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_None() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawAxis2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_PrimaryThumbstick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_PrimaryThumbstick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawAxis2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_PrimaryTouchpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_PrimaryTouchpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawAxis2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryTouchpad = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_SecondaryThumbstick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_SecondaryThumbstick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawAxis2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_SecondaryTouchpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_get_SecondaryTouchpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::__cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawAxis2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryTouchpad = value;
}
inline ::GlobalNamespace::OVRInput_RawAxis2D GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::ToRawMask(::GlobalNamespace::OVRInput_Axis2D  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis2D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawAxis2D>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap::OVRControllerBase_OVRInput_VirtualAxis2DMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap.ToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawAxis1D (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::*)(::GlobalNamespace::OVRInput_Axis1D)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::ToRawMask)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa5caa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::*)()>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5c98f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_None()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_None() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryHandTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryHandTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryHandTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryHandTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryHandTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryHandTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryHandTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryHandTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryHandTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryHandTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerCurl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTriggerCurl;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerCurl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTriggerCurl;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryIndexTriggerCurl(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryIndexTriggerCurl = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerSlide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTriggerSlide;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerSlide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTriggerSlide;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryIndexTriggerSlide(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryIndexTriggerSlide = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryThumbRestForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbRestForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryThumbRestForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbRestForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryThumbRestForce(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbRestForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryStylusForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryStylusForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryStylusForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryStylusForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryStylusForce(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryStylusForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerCurl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTriggerCurl;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerCurl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTriggerCurl;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryIndexTriggerCurl(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryIndexTriggerCurl = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerSlide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTriggerSlide;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerSlide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTriggerSlide;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryIndexTriggerSlide(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryIndexTriggerSlide = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryThumbRestForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbRestForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryThumbRestForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbRestForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryThumbRestForce(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbRestForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryStylusForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryStylusForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryStylusForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryStylusForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryStylusForce(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryStylusForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTriggerForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_PrimaryIndexTriggerForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTriggerForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_PrimaryIndexTriggerForce(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryIndexTriggerForce = value;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTriggerForce;
}
constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_get_SecondaryIndexTriggerForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTriggerForce;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::__cordl_internal_set_SecondaryIndexTriggerForce(::GlobalNamespace::OVRInput_RawAxis1D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryIndexTriggerForce = value;
}
inline ::GlobalNamespace::OVRInput_RawAxis1D GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::ToRawMask(::GlobalNamespace::OVRInput_Axis1D  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Axis1D>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawAxis1D>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap::OVRControllerBase_OVRInput_VirtualAxis1DMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap.ToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawNearTouch (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::*)(::GlobalNamespace::OVRInput_NearTouch)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::ToRawMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa5caa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::*)()>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5c98f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_None()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_None() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawNearTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_PrimaryIndexTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_PrimaryIndexTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawNearTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_PrimaryThumbButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbButtons;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_PrimaryThumbButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbButtons;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_PrimaryThumbButtons(::GlobalNamespace::OVRInput_RawNearTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbButtons = value;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_SecondaryIndexTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_SecondaryIndexTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawNearTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_SecondaryThumbButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbButtons;
}
constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_get_SecondaryThumbButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbButtons;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::__cordl_internal_set_SecondaryThumbButtons(::GlobalNamespace::OVRInput_RawNearTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbButtons = value;
}
inline ::GlobalNamespace::OVRInput_RawNearTouch GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::ToRawMask(::GlobalNamespace::OVRInput_NearTouch  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_NearTouch>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawNearTouch>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap::OVRControllerBase_OVRInput_VirtualNearTouchMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap.ToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawTouch (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::*)(::GlobalNamespace::OVRInput_Touch)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::ToRawMask)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa5ca960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::*)()>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5c98e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_None()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_None() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_One()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___One;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_One() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___One;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_One(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___One = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Two()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Two;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Two() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Two;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_Two(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Two = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Three()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Three;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Three() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Three;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_Three(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Three = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Four()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Four;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_Four() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Four;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_Four(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Four = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryIndexTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryIndexTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryThumbstick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryThumbstick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryThumbRest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbRest;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryThumbRest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbRest;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_PrimaryThumbRest(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbRest = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryTouchpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_PrimaryTouchpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryTouchpad = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryIndexTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryIndexTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryThumbstick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryThumbstick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryThumbRest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbRest;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryThumbRest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbRest;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_SecondaryThumbRest(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbRest = value;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryTouchpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawTouch const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_get_SecondaryTouchpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::__cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawTouch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryTouchpad = value;
}
inline ::GlobalNamespace::OVRInput_RawTouch GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::ToRawMask(::GlobalNamespace::OVRInput_Touch  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Touch>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawTouch>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap::OVRControllerBase_OVRInput_VirtualTouchMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap.ToRawMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRInput_RawButton (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::*)(::GlobalNamespace::OVRInput_Button)>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::ToRawMask)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa5ca74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::*)()>(&::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5c98e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_None()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_None() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___None;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_None(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___None = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_One()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___One;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_One() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___One;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_One(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___One = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Two()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Two;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Two() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Two;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Two(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Two = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Three()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Three;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Three() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Three;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Three(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Three = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Four()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Four;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Four() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Four;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Four(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Four = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Start;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Start;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Start(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Start = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Back()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Back;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Back() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Back;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Back(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Back = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryShoulder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryShoulder;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryShoulder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryShoulder;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryShoulder(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryShoulder = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryIndexTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryIndexTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryHandTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryHandTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryHandTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryHandTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryHandTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstickUp;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstickUp;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstickUp(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbstickUp = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstickDown;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstickDown;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstickDown(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbstickDown = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstickLeft;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstickLeft;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstickLeft(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbstickLeft = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstickRight;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryThumbstickRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryThumbstickRight;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryThumbstickRight(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryThumbstickRight = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryTouchpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_PrimaryTouchpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrimaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrimaryTouchpad = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryShoulder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryShoulder;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryShoulder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryShoulder;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryShoulder(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryShoulder = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryIndexTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryIndexTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryHandTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryHandTrigger;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryHandTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryHandTrigger;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryHandTrigger = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstick;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstick;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbstick = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstickUp;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstickUp;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstickUp(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbstickUp = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstickDown;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstickDown;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstickDown(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbstickDown = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstickLeft;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstickLeft;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstickLeft(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbstickLeft = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstickRight;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryThumbstickRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryThumbstickRight;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryThumbstickRight(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryThumbstickRight = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryTouchpad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryTouchpad;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_SecondaryTouchpad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondaryTouchpad;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondaryTouchpad = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DpadUp;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DpadUp;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_DpadUp(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DpadUp = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DpadDown;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DpadDown;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_DpadDown(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DpadDown = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DpadLeft;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DpadLeft;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_DpadLeft(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DpadLeft = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DpadRight;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_DpadRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DpadRight;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_DpadRight(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DpadRight = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Up()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Up;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Up() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Up;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Up(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Up = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Down()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Down;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Down() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Down;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Down(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Down = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Left()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Left;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Left() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Left;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Left(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Left = value;
}
constexpr ::GlobalNamespace::OVRInput_RawButton& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Right()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Right;
}
constexpr ::GlobalNamespace::OVRInput_RawButton const& GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_get_Right() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Right;
}
constexpr void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::__cordl_internal_set_Right(::GlobalNamespace::OVRInput_RawButton  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Right = value;
}
inline ::GlobalNamespace::OVRInput_RawButton GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::ToRawMask(::GlobalNamespace::OVRInput_Button  virtualMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>(),
                        {"ToRawMask", {}, {::i2c::type_of<::GlobalNamespace::OVRInput_Button>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRInput_RawButton>(this, ___internal_method, virtualMask);
}
inline void GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap::OVRControllerBase_OVRInput_VirtualButtonMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRInput_HapticInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRInput_HapticInfo::*)()>(&::GlobalNamespace::OVRInput_HapticInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5c8e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_HapticInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_playingHaptics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingHaptics;
}
constexpr bool const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_playingHaptics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playingHaptics;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_playingHaptics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playingHaptics = value;
}
constexpr float_t& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticsDurationPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsDurationPlayed;
}
constexpr float_t const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticsDurationPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsDurationPlayed;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_hapticsDurationPlayed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticsDurationPlayed = value;
}
constexpr float_t& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticsDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsDuration;
}
constexpr float_t const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticsDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticsDuration;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_hapticsDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticsDuration = value;
}
constexpr float_t& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticAmplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticAmplitude;
}
constexpr float_t const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_hapticAmplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticAmplitude;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_hapticAmplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticAmplitude = value;
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void GlobalNamespace::OVRInput_HapticInfo::__cordl_internal_set_node(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
inline void GlobalNamespace::OVRInput_HapticInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRInput_HapticInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRInput_HapticInfo* GlobalNamespace::OVRInput_HapticInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRInput_HapticInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_HapticInfo::OVRInput_HapticInfo()   {
}
