#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandRef.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ReadOnlyHandJointPoses_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5113c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandRef::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::HandRef::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5113cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Handedness (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_Handedness)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa5113d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_Handedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_IsConnected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa511474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_IsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_IsHighConfidence)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa511518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_IsDominantHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_IsDominantHand)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa5115bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsDominantHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_Scale)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa511660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_IsPointerPoseValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa511704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsPointerPoseValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_IsTrackedDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_IsTrackedDataValid)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa5117a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsTrackedDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_CurrentDataVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_CurrentDataVersion)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa51184c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_CurrentDataVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.add_WhenHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandRef::*)(::System::Action*)>(&::Oculus::Interaction::Input::HandRef::add_WhenHandUpdated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa5118f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"add_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.remove_WhenHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandRef::*)(::System::Action*)>(&::Oculus::Interaction::Input::HandRef::remove_WhenHandUpdated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa51199c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"remove_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::get_Active)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa511a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa511a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa511aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetFingerIsPinching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::HandRef::GetFingerIsPinching)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa511aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetFingerIsPinching", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetIndexFingerIsPinching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::GetIndexFingerIsPinching)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa511b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetIndexFingerIsPinching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetPointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::HandRef::GetPointerPose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa511bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetPointerPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::HandRef::GetJointPose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa511ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetJointPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::HandRef::GetJointPoseLocal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa511d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetJointPosesLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>)>(&::Oculus::Interaction::Input::HandRef::GetJointPosesLocal)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa511e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPosesLocal", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetJointPoseFromWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::HandRef::GetJointPoseFromWrist)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa511ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPoseFromWrist", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetJointPosesFromWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>)>(&::Oculus::Interaction::Input::HandRef::GetJointPosesFromWrist)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa511f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPosesFromWrist", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetPalmPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::HandRef::GetPalmPoseLocal)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa512030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetPalmPoseLocal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetFingerIsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::HandRef::GetFingerIsHighConfidence)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa5120dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetFingerIsHighConfidence", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetFingerPinchStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::HandRef::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::HandRef::GetFingerPinchStrength)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa512188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetFingerPinchStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.GetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandRef::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::HandRef::GetRootPose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa512234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.InjectAllHandRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandRef::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::HandRef::InjectAllHandRef)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa5122e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"InjectAllHandRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandRef::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::HandRef::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa5122e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandRef::*)()>(&::Oculus::Interaction::Input::HandRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5123b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::HandRef::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::HandRef::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::Input::HandRef::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Input::HandRef::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Input::HandRef::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::Input::HandRef::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Input::HandRef::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandRef::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::Handedness Oculus::Interaction::Input::HandRef::get_Handedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_Handedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Handedness>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandRef::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandRef::get_IsHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandRef::get_IsDominantHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsDominantHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Input::HandRef::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandRef::get_IsPointerPoseValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsPointerPoseValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandRef::get_IsTrackedDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_IsTrackedDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::Input::HandRef::get_CurrentDataVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_CurrentDataVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandRef::add_WhenHandUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"add_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::HandRef::remove_WhenHandUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"remove_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::HandRef::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandRef::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandRef::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandRef::GetFingerIsPinching(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetFingerIsPinching", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::Input::HandRef::GetIndexFingerIsPinching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetIndexFingerIsPinching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandRef::GetPointerPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetPointerPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline bool Oculus::Interaction::Input::HandRef::GetJointPose(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline bool Oculus::Interaction::Input::HandRef::GetJointPoseLocal(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline bool Oculus::Interaction::Input::HandRef::GetJointPosesLocal(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesLocal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPosesLocal", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointPosesLocal);
}
inline bool Oculus::Interaction::Input::HandRef::GetJointPoseFromWrist(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPoseFromWrist", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline bool Oculus::Interaction::Input::HandRef::GetJointPosesFromWrist(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesFromWrist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetJointPosesFromWrist", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointPosesFromWrist);
}
inline bool Oculus::Interaction::Input::HandRef::GetPalmPoseLocal(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetPalmPoseLocal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline bool Oculus::Interaction::Input::HandRef::GetFingerIsHighConfidence(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetFingerIsHighConfidence", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline float_t Oculus::Interaction::Input::HandRef::GetFingerPinchStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetFingerPinchStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::Input::HandRef::GetRootPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::Input::HandRef::InjectAllHandRef(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"InjectAllHandRef", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::Input::HandRef::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::Input::HandRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandRef* Oculus::Interaction::Input::HandRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandRef*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IHand"
constexpr  Oculus::Interaction::Input::HandRef::operator ::Oculus::Interaction::Input::IHand*() noexcept {
return static_cast<::Oculus::Interaction::Input::IHand*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IHand"
constexpr ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Input::HandRef::i___Oculus__Interaction__Input__IHand() noexcept {
return static_cast<::Oculus::Interaction::Input::IHand*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::Input::HandRef::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::Input::HandRef::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandRef::HandRef()   {
}
