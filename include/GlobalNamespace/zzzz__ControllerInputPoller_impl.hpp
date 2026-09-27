#pragma once
// IWYU pragma private; include "GlobalNamespace/ControllerInputPoller.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller__InputCallbacksCadenceInfo_impl.hpp"
#include "GlobalNamespace/zzzz__EControllerInputPressFlags_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaControllerType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller_def.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller__EPressCadence_def.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller__InputCallback_def.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller__InputCallbacksCadenceInfo_def.hpp"
#include "GlobalNamespace/zzzz__ControllerInputPoller_def.hpp"
#include "GlobalNamespace/zzzz__EControllerInputPressFlags_def.hpp"
#include "GlobalNamespace/zzzz__EHandednessFlags_def.hpp"
#include "GlobalNamespace/zzzz__GorillaControllerType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_LeftHandValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_LeftHandValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57e3dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_LeftHandValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_RightHandValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_RightHandValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57e3d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_RightHandValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_leftIndexPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_leftIndexPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftIndexPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_leftIndexReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_leftIndexReleased)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftIndexReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_rightIndexPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_rightIndexPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightIndexPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_rightIndexReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_rightIndexReleased)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightIndexReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_leftIndexPressedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_leftIndexPressedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftIndexPressedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_leftIndexReleasedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_leftIndexReleasedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftIndexReleasedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_rightIndexPressedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_rightIndexPressedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightIndexPressedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_rightIndexReleasedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_rightIndexReleasedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightIndexReleasedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_leftVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_leftVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57e4bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_rightVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_rightVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57e4bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_leftAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_leftAngularVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57e4bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftAngularVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_rightAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_rightAngularVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e4bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightAngularVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaControllerType (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_controllerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_controllerType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.set_controllerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)(::GlobalNamespace::GorillaControllerType)>(&::GlobalNamespace::ControllerInputPoller::set_controllerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e4bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_controllerType", {}, {::i2c::type_of<::GlobalNamespace::GorillaControllerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::Awake)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x57e4bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.AddUpdateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::ControllerInputPoller::AddUpdateCallback)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x57e4d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"AddUpdateCallback", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.RemoveUpdateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::ControllerInputPoller::RemoveUpdateCallback)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x57e4f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RemoveUpdateCallback", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::LateUpdate)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0x57e50c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.CalculateGrabState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)(float_t, ::by_ref<bool>, ::by_ref<bool>, ::by_ref<bool>, ::by_ref<bool>, float_t, float_t)>(&::GlobalNamespace::ControllerInputPoller::CalculateGrabState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57e5900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"CalculateGrabState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.RecalculateGrabState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::RecalculateGrabState)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x57e5a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RecalculateGrabState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.HandTrackingActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::ControllerInputPoller::HandTrackingActive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x57e5cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"HandTrackingActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GetIndexPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GetIndexPressed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57e5d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetIndexPressed", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GetIndexReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GetIndexReleased)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57e5df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetIndexReleased", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GetIndexPressedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GetIndexPressedThisFrame)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57e5eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetIndexPressedThisFrame", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GetIndexReleasedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GetIndexReleasedThisFrame)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57e5f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetIndexReleasedThisFrame", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GetGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GetGrab)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57e5fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetGrab", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GetGrabRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GetGrabRelease)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57e608c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetGrabRelease", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GetGrabMomentary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GetGrabMomentary)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57e614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetGrabMomentary", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GetGrabReleaseMomentary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GetGrabReleaseMomentary)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57e6210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetGrabReleaseMomentary", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.Primary2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::Primary2DAxis)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57e62d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"Primary2DAxis", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.PrimaryButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::PrimaryButtonPress)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57e6378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"PrimaryButtonPress", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.SecondaryButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::SecondaryButtonPress)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57e643c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"SecondaryButtonPress", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.PrimaryButtonTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::PrimaryButtonTouch)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57e64fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"PrimaryButtonTouch", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.SecondaryButtonTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::SecondaryButtonTouch)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57e65c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"SecondaryButtonTouch", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GripFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GripFloat)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57e6680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GripFloat", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.TriggerFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::TriggerFloat)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57e6738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"TriggerFloat", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.TriggerTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::TriggerTouch)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x57e67f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"TriggerTouch", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.DevicePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::DevicePosition)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57e4904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"DevicePosition", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.DeviceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::DeviceRotation)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x57e68a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"DeviceRotation", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.DeviceVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::DeviceVelocity)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x57e6a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"DeviceVelocity", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.DeviceAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::DeviceAngularVelocity)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x57e6b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"DeviceAngularVelocity", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.PositionValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::PositionValid)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x57e6c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"PositionValid", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.HasPressFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode, ::GlobalNamespace::EControllerInputPressFlags)>(&::GlobalNamespace::ControllerInputPoller::HasPressFlags)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57e6d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"HasPressFlags", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_leftPressFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EControllerInputPressFlags (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_leftPressFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e6e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftPressFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.set_leftPressFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)(::GlobalNamespace::EControllerInputPressFlags)>(&::GlobalNamespace::ControllerInputPoller::set_leftPressFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e6e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_leftPressFlags", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_rightPressFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EControllerInputPressFlags (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_rightPressFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e6e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightPressFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.set_rightPressFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)(::GlobalNamespace::EControllerInputPressFlags)>(&::GlobalNamespace::ControllerInputPoller::set_rightPressFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e6e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_rightPressFlags", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_leftPressFlagsLastFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EControllerInputPressFlags (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_leftPressFlagsLastFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e6e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftPressFlagsLastFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.set_leftPressFlagsLastFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)(::GlobalNamespace::EControllerInputPressFlags)>(&::GlobalNamespace::ControllerInputPoller::set_leftPressFlagsLastFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e6e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_leftPressFlagsLastFrame", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.get_rightPressFlagsLastFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EControllerInputPressFlags (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::get_rightPressFlagsLastFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e6e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightPressFlagsLastFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.set_rightPressFlagsLastFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)(::GlobalNamespace::EControllerInputPressFlags)>(&::GlobalNamespace::ControllerInputPoller::set_rightPressFlagsLastFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e6e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_rightPressFlagsLastFrame", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.GetInputStateFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EControllerInputPressFlags (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ControllerInputPoller::GetInputStateFlags)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57e6d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetInputStateFlags", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.AddCallbackOnPressStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::EControllerInputPressFlags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*)>(&::GlobalNamespace::ControllerInputPoller::AddCallbackOnPressStart)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57e6e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"AddCallbackOnPressStart", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.AddCallbackOnPressEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::EControllerInputPressFlags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*)>(&::GlobalNamespace::ControllerInputPoller::AddCallbackOnPressEnd)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57e7038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"AddCallbackOnPressEnd", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.AddCallbackOnPressUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::EControllerInputPressFlags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*)>(&::GlobalNamespace::ControllerInputPoller::AddCallbackOnPressUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57e70a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"AddCallbackOnPressUpdate", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller._AddInputStateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>, ::GlobalNamespace::EControllerInputPressFlags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*)>(&::GlobalNamespace::ControllerInputPoller::_AddInputStateCallback)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57e6eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_AddInputStateCallback", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.RemoveCallbackOnPressStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::EHandednessFlags>*)>(&::GlobalNamespace::ControllerInputPoller::RemoveCallbackOnPressStart)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57e7128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RemoveCallbackOnPressStart", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.RemoveCallbackOnPressEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::EHandednessFlags>*)>(&::GlobalNamespace::ControllerInputPoller::RemoveCallbackOnPressEnd)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57e7288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RemoveCallbackOnPressEnd", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller.RemoveCallbackOnPressUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::EHandednessFlags>*)>(&::GlobalNamespace::ControllerInputPoller::RemoveCallbackOnPressUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57e72e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RemoveCallbackOnPressUpdate", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller._RemoveInputStateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*)>(&::GlobalNamespace::ControllerInputPoller::_RemoveInputStateCallback)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x57e7188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_RemoveInputStateCallback", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller._UpdatePressFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::_UpdatePressFlags)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x57e595c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_UpdatePressFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller._UpdatePressFlags_Callbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>, ::GlobalNamespace::ControllerInputPoller__EPressCadence, ::GlobalNamespace::EControllerInputPressFlags, ::GlobalNamespace::EControllerInputPressFlags, ::GlobalNamespace::EControllerInputPressFlags, ::GlobalNamespace::EControllerInputPressFlags)>(&::GlobalNamespace::ControllerInputPoller::_UpdatePressFlags_Callbacks)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x57e7350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_UpdatePressFlags_Callbacks", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>>(), ::i2c::type_of<::GlobalNamespace::ControllerInputPoller__EPressCadence>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller._IsHandContributingToPressCadence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EHandednessFlags (*)(::GlobalNamespace::EHandednessFlags, ::GlobalNamespace::ControllerInputPoller__EPressCadence, ::GlobalNamespace::EControllerInputPressFlags, ::GlobalNamespace::EControllerInputPressFlags, ::GlobalNamespace::EControllerInputPressFlags)>(&::GlobalNamespace::ControllerInputPoller::_IsHandContributingToPressCadence)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x57e75d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_IsHandContributingToPressCadence", {}, {::i2c::type_of<::GlobalNamespace::EHandednessFlags>(), ::i2c::type_of<::GlobalNamespace::ControllerInputPoller__EPressCadence>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller::*)()>(&::GlobalNamespace::ControllerInputPoller::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x57e7624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerIndexFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerIndexFloat;
}
constexpr float_t const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerIndexFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerIndexFloat;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerIndexFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerIndexFloat = value;
}
constexpr float_t& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerGripFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerGripFloat;
}
constexpr float_t const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerGripFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerGripFloat;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerGripFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerGripFloat = value;
}
constexpr float_t& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerIndexFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerIndexFloat;
}
constexpr float_t const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerIndexFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerIndexFloat;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerIndexFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerIndexFloat = value;
}
constexpr float_t& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerGripFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerGripFloat;
}
constexpr float_t const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerGripFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerGripFloat;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerGripFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerGripFloat = value;
}
constexpr float_t& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerIndexTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerIndexTouch;
}
constexpr float_t const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerIndexTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerIndexTouch;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerIndexTouch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerIndexTouch = value;
}
constexpr float_t& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerIndexTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerIndexTouch;
}
constexpr float_t const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerIndexTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerIndexTouch;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerIndexTouch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerIndexTouch = value;
}
constexpr float_t& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightStickLRFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightStickLRFloat;
}
constexpr float_t const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightStickLRFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightStickLRFloat;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightStickLRFloat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightStickLRFloat = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPosition;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPosition;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_headPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_headPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headPosition;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_headPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerRotation;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerRotation = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerRotation;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerRotation = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_headRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_headRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRotation;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_headRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headRotation = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerDevice;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerDevice = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerDevice;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerDevice = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_headDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headDevice;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_headDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headDevice;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_headDevice(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headDevice = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerIsValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerIsValid;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerIsValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerIsValid;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerIsValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerIsValid = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerIsValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerIsValid;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerIsValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerIsValid;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerIsValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerIsValid = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_handTrackingActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTrackingActive;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_handTrackingActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTrackingActive;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_handTrackingActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTrackingActive = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerPrimaryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPrimaryButton;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerPrimaryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPrimaryButton;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerPrimaryButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerPrimaryButton = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerSecondaryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerSecondaryButton;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerSecondaryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerSecondaryButton;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerSecondaryButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerSecondaryButton = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerPrimaryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPrimaryButton;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerPrimaryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPrimaryButton;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerPrimaryButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerPrimaryButton = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerSecondaryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerSecondaryButton;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerSecondaryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerSecondaryButton;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerSecondaryButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerSecondaryButton = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerPrimaryButtonTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPrimaryButtonTouch;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerPrimaryButtonTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPrimaryButtonTouch;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerPrimaryButtonTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerPrimaryButtonTouch = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerSecondaryButtonTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerSecondaryButtonTouch;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerSecondaryButtonTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerSecondaryButtonTouch;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerSecondaryButtonTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerSecondaryButtonTouch = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerPrimaryButtonTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPrimaryButtonTouch;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerPrimaryButtonTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPrimaryButtonTouch;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerPrimaryButtonTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerPrimaryButtonTouch = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerSecondaryButtonTouch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerSecondaryButtonTouch;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerSecondaryButtonTouch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerSecondaryButtonTouch;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerSecondaryButtonTouch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerSecondaryButtonTouch = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerTriggerButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerTriggerButton;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerTriggerButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerTriggerButton;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerTriggerButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerTriggerButton = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerTriggerButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerTriggerButton;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerTriggerButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerTriggerButton;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerTriggerButton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerTriggerButton = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftGrab;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftGrab;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftGrab = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftGrabRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftGrabRelease;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftGrabRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftGrabRelease;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftGrabRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftGrabRelease = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightGrab;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightGrab;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightGrab = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightGrabRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightGrabRelease;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightGrabRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightGrabRelease;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightGrabRelease(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightGrabRelease = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftGrabMomentary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftGrabMomentary;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftGrabMomentary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftGrabMomentary;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftGrabMomentary(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftGrabMomentary = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftGrabReleaseMomentary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftGrabReleaseMomentary;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftGrabReleaseMomentary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftGrabReleaseMomentary;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftGrabReleaseMomentary(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftGrabReleaseMomentary = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightGrabMomentary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightGrabMomentary;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightGrabMomentary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightGrabMomentary;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightGrabMomentary(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightGrabMomentary = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightGrabReleaseMomentary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightGrabReleaseMomentary;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightGrabReleaseMomentary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightGrabReleaseMomentary;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightGrabReleaseMomentary(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightGrabReleaseMomentary = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftIndexPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftIndexPressed;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftIndexPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftIndexPressed;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__leftIndexPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftIndexPressed = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftIndexReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftIndexReleased;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftIndexReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftIndexReleased;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__leftIndexReleased(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftIndexReleased = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightIndexPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightIndexPressed;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightIndexPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightIndexPressed;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__rightIndexPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightIndexPressed = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightIndexReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightIndexReleased;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightIndexReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightIndexReleased;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__rightIndexReleased(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightIndexReleased = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftIndexPressedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftIndexPressedThisFrame;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftIndexPressedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftIndexPressedThisFrame;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__leftIndexPressedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftIndexPressedThisFrame = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftIndexReleasedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftIndexReleasedThisFrame;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftIndexReleasedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftIndexReleasedThisFrame;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__leftIndexReleasedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftIndexReleasedThisFrame = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightIndexPressedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightIndexPressedThisFrame;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightIndexPressedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightIndexPressedThisFrame;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__rightIndexPressedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightIndexPressedThisFrame = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightIndexReleasedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightIndexReleasedThisFrame;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightIndexReleasedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightIndexReleasedThisFrame;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__rightIndexReleasedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightIndexReleasedThisFrame = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftVelocity;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__leftVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightVelocity;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__rightVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftAngularVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftAngularVelocity;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__leftAngularVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftAngularVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightAngularVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightAngularVelocity;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__rightAngularVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightAngularVelocity = value;
}
constexpr ::GlobalNamespace::GorillaControllerType& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__controllerType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType_k__BackingField;
}
constexpr ::GlobalNamespace::GorillaControllerType const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__controllerType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controllerType_k__BackingField;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__controllerType_k__BackingField(::GlobalNamespace::GorillaControllerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controllerType_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerPrimary2DAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPrimary2DAxis;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftControllerPrimary2DAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPrimary2DAxis;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftControllerPrimary2DAxis(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerPrimary2DAxis = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerPrimary2DAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPrimary2DAxis;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightControllerPrimary2DAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPrimary2DAxis;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightControllerPrimary2DAxis(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerPrimary2DAxis = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_handTriggerCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTriggerCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_handTriggerCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTriggerCurve;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_handTriggerCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTriggerCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_handGripCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handGripCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_handGripCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handGripCurve;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_handGripCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handGripCurve = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_onUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUpdate;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_onUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUpdate;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_onUpdate(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onUpdate = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>*& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_onUpdateNext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUpdateNext;
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_onUpdateNext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUpdateNext;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_onUpdateNext(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onUpdateNext = value;
}
constexpr bool& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_didModifyOnUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didModifyOnUpdate;
}
constexpr bool const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_didModifyOnUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___didModifyOnUpdate;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_didModifyOnUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___didModifyOnUpdate = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftHandOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftHandOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandOffset;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftHandOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftHandRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_leftHandRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandRotation;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_leftHandRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightHandOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightHandOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandOffset;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightHandOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightHandRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get_rightHandRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandRotation;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set_rightHandRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandRotation = value;
}
constexpr ::GlobalNamespace::EControllerInputPressFlags& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftPressFlags_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftPressFlags_k__BackingField;
}
constexpr ::GlobalNamespace::EControllerInputPressFlags const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftPressFlags_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftPressFlags_k__BackingField;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__leftPressFlags_k__BackingField(::GlobalNamespace::EControllerInputPressFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftPressFlags_k__BackingField = value;
}
constexpr ::GlobalNamespace::EControllerInputPressFlags& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightPressFlags_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightPressFlags_k__BackingField;
}
constexpr ::GlobalNamespace::EControllerInputPressFlags const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightPressFlags_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightPressFlags_k__BackingField;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__rightPressFlags_k__BackingField(::GlobalNamespace::EControllerInputPressFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightPressFlags_k__BackingField = value;
}
constexpr ::GlobalNamespace::EControllerInputPressFlags& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftPressFlagsLastFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftPressFlagsLastFrame_k__BackingField;
}
constexpr ::GlobalNamespace::EControllerInputPressFlags const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__leftPressFlagsLastFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftPressFlagsLastFrame_k__BackingField;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__leftPressFlagsLastFrame_k__BackingField(::GlobalNamespace::EControllerInputPressFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftPressFlagsLastFrame_k__BackingField = value;
}
constexpr ::GlobalNamespace::EControllerInputPressFlags& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightPressFlagsLastFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightPressFlagsLastFrame_k__BackingField;
}
constexpr ::GlobalNamespace::EControllerInputPressFlags const& GlobalNamespace::ControllerInputPoller::__cordl_internal_get__rightPressFlagsLastFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightPressFlagsLastFrame_k__BackingField;
}
constexpr void GlobalNamespace::ControllerInputPoller::__cordl_internal_set__rightPressFlagsLastFrame_k__BackingField(::GlobalNamespace::EControllerInputPressFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightPressFlagsLastFrame_k__BackingField = value;
}
inline void GlobalNamespace::ControllerInputPoller::setStaticF_instance(::UnityW<::GlobalNamespace::ControllerInputPoller>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ControllerInputPoller>, "instance", ::GlobalNamespace::ControllerInputPoller*>(std::forward<::UnityW<::GlobalNamespace::ControllerInputPoller>>(value));
}
inline ::UnityW<::GlobalNamespace::ControllerInputPoller> GlobalNamespace::ControllerInputPoller::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ControllerInputPoller>, "instance", ::GlobalNamespace::ControllerInputPoller*>();
}
inline void GlobalNamespace::ControllerInputPoller::setStaticF__g_callbacks_onPressStart(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo, "_g_callbacks_onPressStart", ::GlobalNamespace::ControllerInputPoller*>(std::forward<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>(value));
}
inline ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo GlobalNamespace::ControllerInputPoller::getStaticF__g_callbacks_onPressStart()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo, "_g_callbacks_onPressStart", ::GlobalNamespace::ControllerInputPoller*>();
}
inline void GlobalNamespace::ControllerInputPoller::setStaticF__g_callbacks_onPressEnd(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo, "_g_callbacks_onPressEnd", ::GlobalNamespace::ControllerInputPoller*>(std::forward<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>(value));
}
inline ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo GlobalNamespace::ControllerInputPoller::getStaticF__g_callbacks_onPressEnd()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo, "_g_callbacks_onPressEnd", ::GlobalNamespace::ControllerInputPoller*>();
}
inline void GlobalNamespace::ControllerInputPoller::setStaticF__g_callbacks_onPressUpdate(::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo, "_g_callbacks_onPressUpdate", ::GlobalNamespace::ControllerInputPoller*>(std::forward<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>(value));
}
inline ::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo GlobalNamespace::ControllerInputPoller::getStaticF__g_callbacks_onPressUpdate()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo, "_g_callbacks_onPressUpdate", ::GlobalNamespace::ControllerInputPoller*>();
}
inline bool GlobalNamespace::ControllerInputPoller::get_LeftHandValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_LeftHandValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::get_RightHandValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_RightHandValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::get_leftIndexPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftIndexPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::get_leftIndexReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftIndexReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::get_rightIndexPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightIndexPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::get_rightIndexReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightIndexReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::get_leftIndexPressedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftIndexPressedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::get_leftIndexReleasedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftIndexReleasedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::get_rightIndexPressedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightIndexPressedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::get_rightIndexReleasedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightIndexReleasedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ControllerInputPoller::get_leftVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ControllerInputPoller::get_rightVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ControllerInputPoller::get_leftAngularVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftAngularVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ControllerInputPoller::get_rightAngularVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightAngularVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaControllerType GlobalNamespace::ControllerInputPoller::get_controllerType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_controllerType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaControllerType>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerInputPoller::set_controllerType(::GlobalNamespace::GorillaControllerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_controllerType", {}, {::i2c::type_of<::GlobalNamespace::GorillaControllerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ControllerInputPoller::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerInputPoller::AddUpdateCallback(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"AddUpdateCallback", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::ControllerInputPoller::RemoveUpdateCallback(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RemoveUpdateCallback", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::ControllerInputPoller::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerInputPoller::CalculateGrabState(float_t  grabValue, ::by_ref<bool>  grab, ::by_ref<bool>  grabRelease, ::by_ref<bool>  grabMomentary, ::by_ref<bool>  grabReleaseMomentary, float_t  grabThreshold, float_t  grabReleaseThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"CalculateGrabState", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabValue, grab, grabRelease, grabMomentary, grabReleaseMomentary, grabThreshold, grabReleaseThreshold);
}
inline void GlobalNamespace::ControllerInputPoller::RecalculateGrabState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RecalculateGrabState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::HandTrackingActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"HandTrackingActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller::GetIndexPressed(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetIndexPressed", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::GetIndexReleased(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetIndexReleased", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::GetIndexPressedThisFrame(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetIndexPressedThisFrame", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::GetIndexReleasedThisFrame(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetIndexReleasedThisFrame", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::GetGrab(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetGrab", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::GetGrabRelease(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetGrabRelease", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::GetGrabMomentary(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetGrabMomentary", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::GetGrabReleaseMomentary(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetGrabReleaseMomentary", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline ::UnityEngine::Vector2 GlobalNamespace::ControllerInputPoller::Primary2DAxis(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"Primary2DAxis", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::PrimaryButtonPress(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"PrimaryButtonPress", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::SecondaryButtonPress(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"SecondaryButtonPress", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::PrimaryButtonTouch(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"PrimaryButtonTouch", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::SecondaryButtonTouch(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"SecondaryButtonTouch", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline float_t GlobalNamespace::ControllerInputPoller::GripFloat(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GripFloat", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, node);
}
inline float_t GlobalNamespace::ControllerInputPoller::TriggerFloat(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"TriggerFloat", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, node);
}
inline float_t GlobalNamespace::ControllerInputPoller::TriggerTouch(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"TriggerTouch", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, node);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ControllerInputPoller::DevicePosition(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"DevicePosition", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, node);
}
inline ::UnityEngine::Quaternion GlobalNamespace::ControllerInputPoller::DeviceRotation(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"DeviceRotation", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, node);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ControllerInputPoller::DeviceVelocity(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"DeviceVelocity", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, node);
}
inline ::UnityEngine::Vector3 GlobalNamespace::ControllerInputPoller::DeviceAngularVelocity(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"DeviceAngularVelocity", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::PositionValid(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"PositionValid", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::ControllerInputPoller::HasPressFlags(::UnityEngine::XR::XRNode  node, ::GlobalNamespace::EControllerInputPressFlags  inputStateFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"HasPressFlags", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node, inputStateFlags);
}
inline ::GlobalNamespace::EControllerInputPressFlags GlobalNamespace::ControllerInputPoller::get_leftPressFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftPressFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EControllerInputPressFlags>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerInputPoller::set_leftPressFlags(::GlobalNamespace::EControllerInputPressFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_leftPressFlags", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::EControllerInputPressFlags GlobalNamespace::ControllerInputPoller::get_rightPressFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightPressFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EControllerInputPressFlags>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerInputPoller::set_rightPressFlags(::GlobalNamespace::EControllerInputPressFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_rightPressFlags", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::EControllerInputPressFlags GlobalNamespace::ControllerInputPoller::get_leftPressFlagsLastFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_leftPressFlagsLastFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EControllerInputPressFlags>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerInputPoller::set_leftPressFlagsLastFrame(::GlobalNamespace::EControllerInputPressFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_leftPressFlagsLastFrame", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::EControllerInputPressFlags GlobalNamespace::ControllerInputPoller::get_rightPressFlagsLastFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"get_rightPressFlagsLastFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EControllerInputPressFlags>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerInputPoller::set_rightPressFlagsLastFrame(::GlobalNamespace::EControllerInputPressFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"set_rightPressFlagsLastFrame", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::EControllerInputPressFlags GlobalNamespace::ControllerInputPoller::GetInputStateFlags(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"GetInputStateFlags", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EControllerInputPressFlags>(nullptr, ___internal_method, node);
}
inline void GlobalNamespace::ControllerInputPoller::AddCallbackOnPressStart(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"AddCallbackOnPressStart", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flags, callback);
}
inline void GlobalNamespace::ControllerInputPoller::AddCallbackOnPressEnd(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"AddCallbackOnPressEnd", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flags, callback);
}
inline void GlobalNamespace::ControllerInputPoller::AddCallbackOnPressUpdate(::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"AddCallbackOnPressUpdate", {}, {::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flags, callback);
}
inline void GlobalNamespace::ControllerInputPoller::_AddInputStateCallback(::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>  ref_callbacksInfo, ::GlobalNamespace::EControllerInputPressFlags  flags, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_AddInputStateCallback", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ref_callbacksInfo, flags, callback);
}
inline void GlobalNamespace::ControllerInputPoller::RemoveCallbackOnPressStart(::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RemoveCallbackOnPressStart", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::ControllerInputPoller::RemoveCallbackOnPressEnd(::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RemoveCallbackOnPressEnd", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::ControllerInputPoller::RemoveCallbackOnPressUpdate(::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"RemoveCallbackOnPressUpdate", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::ControllerInputPoller::_RemoveInputStateCallback(::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>  ref_callbacksInfo, ::System::Action_1<::GlobalNamespace::EHandednessFlags>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_RemoveInputStateCallback", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::EHandednessFlags>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ref_callbacksInfo, callback);
}
inline void GlobalNamespace::ControllerInputPoller::_UpdatePressFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_UpdatePressFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ControllerInputPoller::_UpdatePressFlags_Callbacks(::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>  callbacksInfo, ::GlobalNamespace::ControllerInputPoller__EPressCadence  cadence, ::GlobalNamespace::EControllerInputPressFlags  lFlags_now, ::GlobalNamespace::EControllerInputPressFlags  lFlags_old, ::GlobalNamespace::EControllerInputPressFlags  rFlags_now, ::GlobalNamespace::EControllerInputPressFlags  rFlags_old)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_UpdatePressFlags_Callbacks", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ControllerInputPoller__InputCallbacksCadenceInfo>>(), ::i2c::type_of<::GlobalNamespace::ControllerInputPoller__EPressCadence>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callbacksInfo, cadence, lFlags_now, lFlags_old, rFlags_now, rFlags_old);
}
inline ::GlobalNamespace::EHandednessFlags GlobalNamespace::ControllerInputPoller::_IsHandContributingToPressCadence(::GlobalNamespace::EHandednessFlags  hand, ::GlobalNamespace::ControllerInputPoller__EPressCadence  pressCadence, ::GlobalNamespace::EControllerInputPressFlags  cbFlags, ::GlobalNamespace::EControllerInputPressFlags  flags_now, ::GlobalNamespace::EControllerInputPressFlags  flags_old)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {"_IsHandContributingToPressCadence", {}, {::i2c::type_of<::GlobalNamespace::EHandednessFlags>(), ::i2c::type_of<::GlobalNamespace::ControllerInputPoller__EPressCadence>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>(), ::i2c::type_of<::GlobalNamespace::EControllerInputPressFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EHandednessFlags>(nullptr, ___internal_method, hand, pressCadence, cbFlags, flags_now, flags_old);
}
inline void GlobalNamespace::ControllerInputPoller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ControllerInputPoller* GlobalNamespace::ControllerInputPoller::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ControllerInputPoller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerInputPoller::ControllerInputPoller()   {
}
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::*)()>(&::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0.__RemoveInputStateCallback_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::*)(::GlobalNamespace::ControllerInputPoller__InputCallback)>(&::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::__RemoveInputStateCallback_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e78c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0*>(),
                        {"<_RemoveInputStateCallback>b__0", {}, {::i2c::type_of<::GlobalNamespace::ControllerInputPoller__InputCallback>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::EHandednessFlags>*& GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::GlobalNamespace::EHandednessFlags>* const& GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::__cordl_internal_set_callback(::System::Action_1<::GlobalNamespace::EHandednessFlags>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::__RemoveInputStateCallback_b__0(::GlobalNamespace::ControllerInputPoller__InputCallback  sub)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0*>(),
                        {"<_RemoveInputStateCallback>b__0", {}, {::i2c::type_of<::GlobalNamespace::ControllerInputPoller__InputCallback>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sub);
}
inline ::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0* GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerInputPoller___c__DisplayClass153_0::ControllerInputPoller___c__DisplayClass153_0()   {
}
