#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionGate.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_LocomotionMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_LocomotionModeEventArgs_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_LocomotionMode_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionGate_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__VirtualActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.get_EnableShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::get_EnableShape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_EnableShape", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.set_EnableShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::set_EnableShape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_EnableShape", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.get_DisableShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::get_DisableShape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_DisableShape", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.set_DisableShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::set_DisableShape)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_DisableShape", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.get_ActiveMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LocomotionGate_LocomotionMode (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::get_ActiveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_ActiveMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.set_ActiveMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::GlobalNamespace::LocomotionGate_LocomotionMode)>(&::Oculus::Interaction::Locomotion::LocomotionGate::set_ActiveMode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4c7d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_ActiveMode", {}, {::i2c::type_of<::GlobalNamespace::LocomotionGate_LocomotionMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.get_CurrentAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::get_CurrentAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_CurrentAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.set_CurrentAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionGate::set_CurrentAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_CurrentAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.get_WristDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::get_WristDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4c7da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_WristDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.set_WristDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::LocomotionGate::set_WristDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4c7db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_WristDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.get_StabilizationPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::get_StabilizationPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4c7dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_StabilizationPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.set_StabilizationPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotionGate::set_StabilizationPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4c7dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_StabilizationPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.add_WhenActiveModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::add_WhenActiveModeChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4c7df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"add_WhenActiveModeChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.remove_WhenActiveModeChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::remove_WhenActiveModeChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4c7e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"remove_WhenActiveModeChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4c7f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4c7fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4c8018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::OnDisable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4c814c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::Disable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4c8128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"Disable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::Cancel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4c825c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"Cancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.HandleHandupdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::HandleHandupdated)> {
  constexpr static std::size_t size = 0xa98;
  constexpr static std::size_t addrs = 0xa4c8284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"HandleHandupdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.GetBestGateSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection* (::Oculus::Interaction::Locomotion::LocomotionGate::*)(float_t, ::by_ref<int32_t>)>(&::Oculus::Interaction::Locomotion::LocomotionGate::GetBestGateSection)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4c8d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"GetBestGateSection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.InjectAllLocomotionGate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::Oculus::Interaction::Input::IHand*, ::UnityEngine::Transform*, ::Oculus::Interaction::IActiveState*, ::Oculus::Interaction::IActiveState*, ::Oculus::Interaction::Locomotion::VirtualActiveState*, ::Oculus::Interaction::Locomotion::VirtualActiveState*, ::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>)>(&::Oculus::Interaction::Locomotion::LocomotionGate::InjectAllLocomotionGate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4c8f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectAllLocomotionGate", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::VirtualActiveState*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::VirtualActiveState*>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4c8f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.InjectShoulder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::InjectShoulder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c920c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectShoulder", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.InjectEnableShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::InjectEnableShape)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4c906c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectEnableShape", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.InjectDisableShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::InjectDisableShape)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4c913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectDisableShape", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.InjectTurningState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::Oculus::Interaction::Locomotion::VirtualActiveState*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::InjectTurningState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c9214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectTurningState", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::VirtualActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.InjectTeleportState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::Oculus::Interaction::Locomotion::VirtualActiveState*)>(&::Oculus::Interaction::Locomotion::LocomotionGate::InjectTeleportState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c921c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectTeleportState", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::VirtualActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate.InjectGateSections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)(::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>)>(&::Oculus::Interaction::Locomotion::LocomotionGate::InjectGateSections)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c9224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectGateSections", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xa4c922c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__shoulder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shoulder;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__shoulder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shoulder;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__shoulder(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shoulder = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__gateSections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gateSections;
}
constexpr ::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*> const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__gateSections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gateSections;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__gateSections(::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gateSections = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__enableShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableShape;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__enableShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableShape;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__enableShape(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableShape = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__EnableShape_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableShape_k__BackingField;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__EnableShape_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableShape_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__EnableShape_k__BackingField(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableShape_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__disableShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableShape;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__disableShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableShape;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__disableShape(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableShape = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__DisableShape_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableShape_k__BackingField;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__DisableShape_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DisableShape_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__DisableShape_k__BackingField(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DisableShape_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__turningState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turningState;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState> const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__turningState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turningState;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__turningState(::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____turningState = value;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__teleportState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportState;
}
constexpr ::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState> const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__teleportState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportState;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__teleportState(::UnityW<::Oculus::Interaction::Locomotion::VirtualActiveState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____teleportState = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__previousShapeEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShapeEnabled;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__previousShapeEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousShapeEnabled;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__previousShapeEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousShapeEnabled = value;
}
constexpr int32_t& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__currentGateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGateIndex;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__currentGateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentGateIndex;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__currentGateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentGateIndex = value;
}
constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__activeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeMode;
}
constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__activeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeMode;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__activeMode(::GlobalNamespace::LocomotionGate_LocomotionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeMode = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__CurrentAngle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentAngle_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__CurrentAngle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentAngle_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__CurrentAngle_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentAngle_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__WristDirection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristDirection_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__WristDirection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WristDirection_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__WristDirection_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WristDirection_k__BackingField = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__StabilizationPose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StabilizationPose_k__BackingField;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__StabilizationPose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StabilizationPose_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__StabilizationPose_k__BackingField(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StabilizationPose_k__BackingField = value;
}
constexpr ::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__whenActiveModeChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenActiveModeChanged;
}
constexpr ::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>* const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__whenActiveModeChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenActiveModeChanged;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__whenActiveModeChanged(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenActiveModeChanged = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__cancelled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelled;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_get__cancelled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancelled;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate::__cordl_internal_set__cancelled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancelled = value;
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::setStaticF_DefaultSection(::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*, "DefaultSection", ::Oculus::Interaction::Locomotion::LocomotionGate*>(std::forward<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>(value));
}
inline ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection* Oculus::Interaction::Locomotion::LocomotionGate::getStaticF_DefaultSection()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*, "DefaultSection", ::Oculus::Interaction::Locomotion::LocomotionGate*>();
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Locomotion::LocomotionGate::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::Locomotion::LocomotionGate::get_EnableShape()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_EnableShape", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::set_EnableShape(::Oculus::Interaction::IActiveState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_EnableShape", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::Locomotion::LocomotionGate::get_DisableShape()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_DisableShape", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::set_DisableShape(::Oculus::Interaction::IActiveState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_DisableShape", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LocomotionGate_LocomotionMode Oculus::Interaction::Locomotion::LocomotionGate::get_ActiveMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_ActiveMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocomotionGate_LocomotionMode>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::set_ActiveMode(::GlobalNamespace::LocomotionGate_LocomotionMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_ActiveMode", {}, {::i2c::type_of<::GlobalNamespace::LocomotionGate_LocomotionMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionGate::get_CurrentAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_CurrentAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::set_CurrentAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_CurrentAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::LocomotionGate::get_WristDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_WristDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::set_WristDirection(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_WristDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose Oculus::Interaction::Locomotion::LocomotionGate::get_StabilizationPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"get_StabilizationPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::set_StabilizationPose(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"set_StabilizationPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::add_WhenActiveModeChanged(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"add_WhenActiveModeChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::remove_WhenActiveModeChanged(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"remove_WhenActiveModeChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::HandleHandupdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"HandleHandupdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection* Oculus::Interaction::Locomotion::LocomotionGate::GetBestGateSection(float_t  angle, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"GetBestGateSection", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>(this, ___internal_method, angle, index);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::InjectAllLocomotionGate(::Oculus::Interaction::Input::IHand*  hand, ::UnityEngine::Transform*  shoulder, ::Oculus::Interaction::IActiveState*  enableShape, ::Oculus::Interaction::IActiveState*  disableShape, ::Oculus::Interaction::Locomotion::VirtualActiveState*  turningState, ::Oculus::Interaction::Locomotion::VirtualActiveState*  teleportState, ::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>  gateSections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectAllLocomotionGate", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::IActiveState*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::VirtualActiveState*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::VirtualActiveState*>(), ::i2c::type_of<::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, shoulder, enableShape, disableShape, turningState, teleportState, gateSections);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::InjectShoulder(::UnityEngine::Transform*  shoulder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectShoulder", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shoulder);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::InjectEnableShape(::Oculus::Interaction::IActiveState*  enableShape)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectEnableShape", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enableShape);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::InjectDisableShape(::Oculus::Interaction::IActiveState*  disableShape)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectDisableShape", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disableShape);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::InjectTurningState(::Oculus::Interaction::Locomotion::VirtualActiveState*  turningState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectTurningState", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::VirtualActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, turningState);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::InjectTeleportState(::Oculus::Interaction::Locomotion::VirtualActiveState*  teleportState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectTeleportState", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::VirtualActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teleportState);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::InjectGateSections(::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>  gateSections)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {"InjectGateSections", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gateSections);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionGate* Oculus::Interaction::Locomotion::LocomotionGate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionGate*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionGate::LocomotionGate()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate___c::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c962c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate___c.__ctor_b__65_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate___c::*)(::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs)>(&::Oculus::Interaction::Locomotion::LocomotionGate___c::__ctor_b__65_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c9634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate___c*>(),
                        {"<.ctor>b__65_0", {}, {::i2c::type_of<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::LocomotionGate___c::setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionGate___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::LocomotionGate___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionGate___c*>(std::forward<::Oculus::Interaction::Locomotion::LocomotionGate___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::LocomotionGate___c* Oculus::Interaction::Locomotion::LocomotionGate___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::LocomotionGate___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionGate___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionGate___c::setStaticF___9__65_0(::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*, "<>9__65_0", ::Oculus::Interaction::Locomotion::LocomotionGate___c*>(std::forward<::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>* Oculus::Interaction::Locomotion::LocomotionGate___c::getStaticF___9__65_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>*, "<>9__65_0", ::Oculus::Interaction::Locomotion::LocomotionGate___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionGate___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate___c::__ctor_b__65_0(::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate___c*>(),
                        {"<.ctor>b__65_0", {}, {::i2c::type_of<::GlobalNamespace::LocomotionGate_LocomotionModeEventArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Locomotion::LocomotionGate___c* Oculus::Interaction::Locomotion::LocomotionGate___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionGate___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionGate___c::LocomotionGate___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection.ScoreToAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionGate_GateSection::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionGate_GateSection::ScoreToAngle)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa4c8e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>(),
                        {"ScoreToAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionGate_GateSection::*)()>(&::Oculus::Interaction::Locomotion::LocomotionGate_GateSection::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4c9504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_get_minAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngle;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_get_minAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minAngle;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_set_minAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minAngle = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_get_maxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngle;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_get_maxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAngle;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_set_maxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAngle = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_get_canEnterDirectly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canEnterDirectly;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_get_canEnterDirectly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canEnterDirectly;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_set_canEnterDirectly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canEnterDirectly = value;
}
constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode& Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_get_locomotionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionMode;
}
constexpr ::GlobalNamespace::LocomotionGate_LocomotionMode const& Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_get_locomotionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionMode;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionGate_GateSection::__cordl_internal_set_locomotionMode(::GlobalNamespace::LocomotionGate_LocomotionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locomotionMode = value;
}
inline float_t Oculus::Interaction::Locomotion::LocomotionGate_GateSection::ScoreToAngle(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>(),
                        {"ScoreToAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, angle);
}
inline void Oculus::Interaction::Locomotion::LocomotionGate_GateSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection* Oculus::Interaction::Locomotion::LocomotionGate_GateSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionGate_GateSection*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionGate_GateSection::LocomotionGate_GateSection()   {
}
