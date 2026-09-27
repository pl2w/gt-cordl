#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/DominantHandRef.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__DominantHandRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DominantHandRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ReadOnlyHandJointPoses_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_LeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_LeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50aa08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_LeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.set_LeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::DominantHandRef::set_LeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50aa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"set_LeftHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_RightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_RightHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50aa18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_RightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.set_RightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::DominantHandRef::set_RightHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50aa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"set_RightHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_SelectDominant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_SelectDominant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50aa28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_SelectDominant", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.set_SelectDominant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)(bool)>(&::Oculus::Interaction::Input::DominantHandRef::set_SelectDominant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50aa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"set_SelectDominant", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_Hand)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa50aa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Handedness (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_Handedness)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa50aafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_Handedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_IsConnected)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa50aba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_IsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_IsHighConfidence)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa50ac50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_IsDominantHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_IsDominantHand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa50acfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsDominantHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_Scale)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa50ada8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_IsPointerPoseValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa50ae54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsPointerPoseValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_IsTrackedDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_IsTrackedDataValid)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa50af00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsTrackedDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_CurrentDataVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_CurrentDataVersion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa50afac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_CurrentDataVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.add_WhenHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)(::System::Action*)>(&::Oculus::Interaction::Input::DominantHandRef::add_WhenHandUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa50b058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"add_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.remove_WhenHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)(::System::Action*)>(&::Oculus::Interaction::Input::DominantHandRef::remove_WhenHandUpdated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa50b0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"remove_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::get_Active)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa50b178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa50b17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa50b1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::OnEnable)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa50b21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::OnDisable)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa50b3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.HandleLeftHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::HandleLeftHandUpdated)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa50b57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"HandleLeftHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.HandleRightHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::HandleRightHandUpdated)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa50b654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"HandleRightHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetFingerIsPinching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::DominantHandRef::GetFingerIsPinching)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa50b72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetFingerIsPinching", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetIndexFingerIsPinching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::GetIndexFingerIsPinching)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa50b7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetIndexFingerIsPinching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetPointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::DominantHandRef::GetPointerPose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa50b88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetPointerPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::DominantHandRef::GetJointPose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa50b940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetJointPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::DominantHandRef::GetJointPoseLocal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa50ba04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetJointPosesLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>)>(&::Oculus::Interaction::Input::DominantHandRef::GetJointPosesLocal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa50bac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPosesLocal", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetJointPoseFromWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::DominantHandRef::GetJointPoseFromWrist)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa50bb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPoseFromWrist", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetJointPosesFromWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>)>(&::Oculus::Interaction::Input::DominantHandRef::GetJointPosesFromWrist)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa50bc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPosesFromWrist", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetPalmPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::DominantHandRef::GetPalmPoseLocal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa50bcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetPalmPoseLocal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetFingerIsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::DominantHandRef::GetFingerIsHighConfidence)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa50bda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetFingerIsHighConfidence", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetFingerPinchStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::DominantHandRef::GetFingerPinchStrength)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa50be5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetFingerPinchStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.GetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::DominantHandRef::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::DominantHandRef::GetRootPose)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa50bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.InjectAllDominantHandRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::DominantHandRef::InjectAllDominantHandRef)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa50bfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"InjectAllDominantHandRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.InjectLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::DominantHandRef::InjectLeftHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa50bfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"InjectLeftHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef.InjectRightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::DominantHandRef::InjectRightHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa50c0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"InjectRightHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef::*)()>(&::Oculus::Interaction::Input::DominantHandRef::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa50c18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr void Oculus::Interaction::Input::DominantHandRef::__cordl_internal_set__leftHand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__LeftHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftHand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__LeftHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LeftHand_k__BackingField;
}
constexpr void Oculus::Interaction::Input::DominantHandRef::__cordl_internal_set__LeftHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LeftHand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr void Oculus::Interaction::Input::DominantHandRef::__cordl_internal_set__rightHand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__RightHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RightHand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__RightHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RightHand_k__BackingField;
}
constexpr void Oculus::Interaction::Input::DominantHandRef::__cordl_internal_set__RightHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RightHand_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__selectDominant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectDominant;
}
constexpr bool const& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__selectDominant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectDominant;
}
constexpr void Oculus::Interaction::Input::DominantHandRef::__cordl_internal_set__selectDominant(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectDominant = value;
}
constexpr ::System::Action*& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__whenHandUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenHandUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__whenHandUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenHandUpdated;
}
constexpr void Oculus::Interaction::Input::DominantHandRef::__cordl_internal_set__whenHandUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenHandUpdated = value;
}
constexpr bool& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Input::DominantHandRef::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Input::DominantHandRef::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Input::DominantHandRef::get_LeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_LeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::set_LeftHand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"set_LeftHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Input::DominantHandRef::get_RightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_RightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::set_RightHand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"set_RightHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::DominantHandRef::get_SelectDominant()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_SelectDominant", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::set_SelectDominant(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"set_SelectDominant", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Input::DominantHandRef::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Handedness Oculus::Interaction::Input::DominantHandRef::get_Handedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_Handedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Handedness>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::DominantHandRef::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::DominantHandRef::get_IsHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::DominantHandRef::get_IsDominantHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsDominantHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Input::DominantHandRef::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::DominantHandRef::get_IsPointerPoseValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsPointerPoseValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::DominantHandRef::get_IsTrackedDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_IsTrackedDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::Input::DominantHandRef::get_CurrentDataVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_CurrentDataVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::add_WhenHandUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"add_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::DominantHandRef::remove_WhenHandUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"remove_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::DominantHandRef::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::HandleLeftHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"HandleLeftHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef::HandleRightHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"HandleRightHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetFingerIsPinching(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetFingerIsPinching", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetIndexFingerIsPinching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetIndexFingerIsPinching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetPointerPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetPointerPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetJointPose(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetJointPoseLocal(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetJointPosesLocal(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPosesLocal", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointPosesLocal);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetJointPoseFromWrist(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPoseFromWrist", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetJointPosesFromWrist(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesFromWrist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetJointPosesFromWrist", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointPosesFromWrist);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetPalmPoseLocal(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetPalmPoseLocal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetFingerIsHighConfidence(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetFingerIsHighConfidence", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline float_t Oculus::Interaction::Input::DominantHandRef::GetFingerPinchStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetFingerPinchStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::Input::DominantHandRef::GetRootPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::Input::DominantHandRef::InjectAllDominantHandRef(::Oculus::Interaction::Input::IHand*  leftHand, ::Oculus::Interaction::Input::IHand*  rightHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"InjectAllDominantHandRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand, rightHand);
}
inline void Oculus::Interaction::Input::DominantHandRef::InjectLeftHand(::Oculus::Interaction::Input::IHand*  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"InjectLeftHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void Oculus::Interaction::Input::DominantHandRef::InjectRightHand(::Oculus::Interaction::Input::IHand*  rightHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {"InjectRightHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rightHand);
}
inline void Oculus::Interaction::Input::DominantHandRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::DominantHandRef* Oculus::Interaction::Input::DominantHandRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::DominantHandRef*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IHand"
constexpr  Oculus::Interaction::Input::DominantHandRef::operator ::Oculus::Interaction::Input::IHand*() noexcept {
return static_cast<::Oculus::Interaction::Input::IHand*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IHand"
constexpr ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Input::DominantHandRef::i___Oculus__Interaction__Input__IHand() noexcept {
return static_cast<::Oculus::Interaction::Input::IHand*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::Input::DominantHandRef::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::Input::DominantHandRef::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::DominantHandRef::DominantHandRef()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef___c::*)()>(&::Oculus::Interaction::Input::DominantHandRef___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50c2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::DominantHandRef___c.__ctor_b__60_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::DominantHandRef___c::*)()>(&::Oculus::Interaction::Input::DominantHandRef___c::__ctor_b__60_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa50c2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef___c*>(),
                        {"<.ctor>b__60_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::DominantHandRef___c::setStaticF___9(::Oculus::Interaction::Input::DominantHandRef___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::DominantHandRef___c*, "<>9", ::Oculus::Interaction::Input::DominantHandRef___c*>(std::forward<::Oculus::Interaction::Input::DominantHandRef___c*>(value));
}
inline ::Oculus::Interaction::Input::DominantHandRef___c* Oculus::Interaction::Input::DominantHandRef___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::DominantHandRef___c*, "<>9", ::Oculus::Interaction::Input::DominantHandRef___c*>();
}
inline void Oculus::Interaction::Input::DominantHandRef___c::setStaticF___9__60_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__60_0", ::Oculus::Interaction::Input::DominantHandRef___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Input::DominantHandRef___c::getStaticF___9__60_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__60_0", ::Oculus::Interaction::Input::DominantHandRef___c*>();
}
inline void Oculus::Interaction::Input::DominantHandRef___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::DominantHandRef___c::__ctor_b__60_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DominantHandRef___c*>(),
                        {"<.ctor>b__60_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::DominantHandRef___c* Oculus::Interaction::Input::DominantHandRef___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::DominantHandRef___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::DominantHandRef___c::DominantHandRef___c()   {
}
