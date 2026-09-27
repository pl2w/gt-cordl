#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/SyntheticHand.hpp"
#include "Oculus/Interaction/Input/zzzz__Hand_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__JointFreedom_impl.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__SyntheticHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__JointFreedom_def.hpp"
#include "Oculus/Interaction/Input/zzzz__SyntheticHand_WristLockMode_def.hpp"
#include "Oculus/Interaction/Input/zzzz__SyntheticHand_def.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)()>(&::Oculus::Interaction::Input::SyntheticHand::Start)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa5088fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::SyntheticHand::Apply)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa508ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.SyncDataPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::SyntheticHand::SyncDataPoses)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa509364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SyncDataPoses", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.UpdateRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::SyntheticHand::UpdateRootPose)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa509204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"UpdateRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.UpdateJointsRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::SyntheticHand::UpdateJointsRotation)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0xa508bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"UpdateJointsRotation", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.AmendMetacarpalRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::Input::SyntheticHand::*)(int32_t, ::by_ref<::ArrayW<::UnityEngine::Quaternion>>)>(&::Oculus::Interaction::Input::SyntheticHand::AmendMetacarpalRotation)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa509510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"AmendMetacarpalRotation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Quaternion>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.OverrideAllJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::by_ref<::ArrayW<::UnityEngine::Quaternion>>, float_t)>(&::Oculus::Interaction::Input::SyntheticHand::OverrideAllJoints)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa50980c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverrideAllJoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Quaternion>>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.OverrideFingerRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::Input::HandFinger, ::ArrayW<::UnityEngine::Quaternion>, float_t)>(&::Oculus::Interaction::Input::SyntheticHand::OverrideFingerRotations)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa5098f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverrideFingerRotations", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.OverrideJointRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Quaternion, float_t)>(&::Oculus::Interaction::Input::SyntheticHand::OverrideJointRotation)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa509a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverrideJointRotation", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.OverrideJointRotationAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(int32_t, ::UnityEngine::Quaternion, float_t)>(&::Oculus::Interaction::Input::SyntheticHand::OverrideJointRotationAtIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa5099fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverrideJointRotationAtIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.LockFingerAtCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::by_ref<::Oculus::Interaction::Input::HandFinger>)>(&::Oculus::Interaction::Input::SyntheticHand::LockFingerAtCurrent)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa509b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockFingerAtCurrent", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandFinger>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.LockJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::by_ref<::Oculus::Interaction::Input::HandJointId>, ::UnityEngine::Quaternion, float_t)>(&::Oculus::Interaction::Input::SyntheticHand::LockJoint)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa509dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockJoint", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.SetFingerFreedom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::by_ref<::Oculus::Interaction::Input::HandFinger>, ::by_ref<::Oculus::Interaction::Input::JointFreedom>, bool)>(&::Oculus::Interaction::Input::SyntheticHand::SetFingerFreedom)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa509cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SetFingerFreedom", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandFinger>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Input::JointFreedom>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.SetJointFreedom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::by_ref<::Oculus::Interaction::Input::HandJointId>, ::by_ref<::Oculus::Interaction::Input::JointFreedom>, bool)>(&::Oculus::Interaction::Input::SyntheticHand::SetJointFreedom)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa509fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SetJointFreedom", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Input::JointFreedom>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.GetJointFreedom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::JointFreedom (::Oculus::Interaction::Input::SyntheticHand::*)(::by_ref<::Oculus::Interaction::Input::HandJointId>)>(&::Oculus::Interaction::Input::SyntheticHand::GetJointFreedom)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa50a050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"GetJointFreedom", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandJointId>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.FreeAllJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)()>(&::Oculus::Interaction::Input::SyntheticHand::FreeAllJoints)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa50a0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"FreeAllJoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.SetJointFreedomAtIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(int32_t, ::by_ref<::Oculus::Interaction::Input::JointFreedom>, bool)>(&::Oculus::Interaction::Input::SyntheticHand::SetJointFreedomAtIndex)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa509ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SetJointFreedomAtIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Input::JointFreedom>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.LockWristPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::UnityEngine::Pose, float_t, ::GlobalNamespace::SyntheticHand_WristLockMode, bool, bool)>(&::Oculus::Interaction::Input::SyntheticHand::LockWristPose)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa50a1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockWristPose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SyntheticHand_WristLockMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.LockWristPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::UnityEngine::Vector3, float_t, bool)>(&::Oculus::Interaction::Input::SyntheticHand::LockWristPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa50a3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockWristPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.LockWristRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::UnityEngine::Quaternion, float_t, bool)>(&::Oculus::Interaction::Input::SyntheticHand::LockWristRotation)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa50a418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockWristRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.FreeWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::GlobalNamespace::SyntheticHand_WristLockMode)>(&::Oculus::Interaction::Input::SyntheticHand::FreeWrist)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa50a4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"FreeWrist", {}, {::i2c::type_of<::GlobalNamespace::SyntheticHand_WristLockMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.SyntheticWristLockChangedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::GlobalNamespace::SyntheticHand_WristLockMode, bool)>(&::Oculus::Interaction::Input::SyntheticHand::SyntheticWristLockChangedState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa50a46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SyntheticWristLockChangedState", {}, {::i2c::type_of<::GlobalNamespace::SyntheticHand_WristLockMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.OverFlex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::Oculus::Interaction::Input::SyntheticHand::OverFlex)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa5096d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverFlex", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.UpdateProgressCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Oculus::Interaction::ProgressCurve*>, ::by_ref<::Oculus::Interaction::ProgressCurve*>, bool, bool)>(&::Oculus::Interaction::Input::SyntheticHand::UpdateProgressCurve)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa50a17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"UpdateProgressCurve", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::ProgressCurve*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::ProgressCurve*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.InjectAllSyntheticHandModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*, bool, ::Oculus::Interaction::ProgressCurve*, ::Oculus::Interaction::ProgressCurve*, ::Oculus::Interaction::ProgressCurve*, ::Oculus::Interaction::ProgressCurve*, ::Oculus::Interaction::ProgressCurve*, ::Oculus::Interaction::ProgressCurve*, float_t)>(&::Oculus::Interaction::Input::SyntheticHand::InjectAllSyntheticHandModifier)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa50a564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectAllSyntheticHandModifier", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.InjectWristPositionLockCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::ProgressCurve*)>(&::Oculus::Interaction::Input::SyntheticHand::InjectWristPositionLockCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50a614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectWristPositionLockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.InjectWristPositionUnlockCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::ProgressCurve*)>(&::Oculus::Interaction::Input::SyntheticHand::InjectWristPositionUnlockCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50a61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectWristPositionUnlockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.InjectWristRotationLockCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::ProgressCurve*)>(&::Oculus::Interaction::Input::SyntheticHand::InjectWristRotationLockCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50a624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectWristRotationLockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.InjectWristRotationUnlockCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::ProgressCurve*)>(&::Oculus::Interaction::Input::SyntheticHand::InjectWristRotationUnlockCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50a62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectWristRotationUnlockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.InjectJointLockCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::ProgressCurve*)>(&::Oculus::Interaction::Input::SyntheticHand::InjectJointLockCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50a634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectJointLockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.InjectJointUnlockCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(::Oculus::Interaction::ProgressCurve*)>(&::Oculus::Interaction::Input::SyntheticHand::InjectJointUnlockCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50a63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectJointUnlockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand.InjectSpreadAllowance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)(float_t)>(&::Oculus::Interaction::Input::SyntheticHand::InjectSpreadAllowance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50a644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectSpreadAllowance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)()>(&::Oculus::Interaction::Input::SyntheticHand::_ctor)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xa50a64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand._Start_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand::*)()>(&::Oculus::Interaction::Input::SyntheticHand::_Start_b__25_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa50a94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"<Start>b__25_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristPositionLockCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristPositionLockCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristPositionLockCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristPositionLockCurve;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__wristPositionLockCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wristPositionLockCurve = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristPositionUnlockCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristPositionUnlockCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristPositionUnlockCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristPositionUnlockCurve;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__wristPositionUnlockCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wristPositionUnlockCurve = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristRotationLockCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristRotationLockCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristRotationLockCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristRotationLockCurve;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__wristRotationLockCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wristRotationLockCurve = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristRotationUnlockCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristRotationUnlockCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristRotationUnlockCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristRotationUnlockCurve;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__wristRotationUnlockCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wristRotationUnlockCurve = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointLockCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointLockCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointLockCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointLockCurve;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__jointLockCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointLockCurve = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointUnlockCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointUnlockCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointUnlockCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointUnlockCurve;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__jointUnlockCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointUnlockCurve = value;
}
constexpr float_t& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__spreadAllowance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spreadAllowance;
}
constexpr float_t const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__spreadAllowance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spreadAllowance;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__spreadAllowance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spreadAllowance = value;
}
constexpr ::System::Action*& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get_UpdateRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateRequired;
}
constexpr ::System::Action* const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get_UpdateRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateRequired;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set_UpdateRequired(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateRequired = value;
}
constexpr ::Oculus::Interaction::Input::HandDataAsset*& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__lastStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStates;
}
constexpr ::Oculus::Interaction::Input::HandDataAsset* const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__lastStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStates;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__lastStates(::Oculus::Interaction::Input::HandDataAsset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastStates = value;
}
constexpr float_t& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristPositionOverrideFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristPositionOverrideFactor;
}
constexpr float_t const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristPositionOverrideFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristPositionOverrideFactor;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__wristPositionOverrideFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wristPositionOverrideFactor = value;
}
constexpr float_t& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristRotationOverrideFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristRotationOverrideFactor;
}
constexpr float_t const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristRotationOverrideFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristRotationOverrideFactor;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__wristRotationOverrideFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wristRotationOverrideFactor = value;
}
constexpr ::ArrayW<float_t>& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointsOverrideFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsOverrideFactor;
}
constexpr ::ArrayW<float_t> const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointsOverrideFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsOverrideFactor;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__jointsOverrideFactor(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointsOverrideFactor = value;
}
constexpr ::ArrayW<::Oculus::Interaction::ProgressCurve*>& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointLockProgressCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointLockProgressCurves;
}
constexpr ::ArrayW<::Oculus::Interaction::ProgressCurve*> const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointLockProgressCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointLockProgressCurves;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__jointLockProgressCurves(::ArrayW<::Oculus::Interaction::ProgressCurve*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointLockProgressCurves = value;
}
constexpr ::ArrayW<::Oculus::Interaction::ProgressCurve*>& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointUnlockProgressCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointUnlockProgressCurves;
}
constexpr ::ArrayW<::Oculus::Interaction::ProgressCurve*> const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointUnlockProgressCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointUnlockProgressCurves;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__jointUnlockProgressCurves(::ArrayW<::Oculus::Interaction::ProgressCurve*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointUnlockProgressCurves = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__desiredWristPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desiredWristPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__desiredWristPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desiredWristPose;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__desiredWristPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____desiredWristPose = value;
}
constexpr bool& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristPositionLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristPositionLocked;
}
constexpr bool const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristPositionLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristPositionLocked;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__wristPositionLocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wristPositionLocked = value;
}
constexpr bool& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristRotationLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristRotationLocked;
}
constexpr bool const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__wristRotationLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wristRotationLocked;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__wristRotationLocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wristRotationLocked = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__constrainedWristPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedWristPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__constrainedWristPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedWristPose;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__constrainedWristPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constrainedWristPose = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__lastWristPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWristPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__lastWristPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWristPose;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__lastWristPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWristPose = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__desiredJointsRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desiredJointsRotation;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__desiredJointsRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____desiredJointsRotation;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__desiredJointsRotation(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____desiredJointsRotation = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__constrainedJointRotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedJointRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__constrainedJointRotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedJointRotations;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__constrainedJointRotations(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constrainedJointRotations = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__lastSyntheticRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSyntheticRotation;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__lastSyntheticRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSyntheticRotation;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__lastSyntheticRotation(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSyntheticRotation = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::JointFreedom>& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointsFreedomLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsFreedomLevels;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::JointFreedom> const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__jointsFreedomLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsFreedomLevels;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__jointsFreedomLevels(::ArrayW<::Oculus::Interaction::Input::JointFreedom>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointsFreedomLevels = value;
}
constexpr bool& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__hasConnectedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasConnectedData;
}
constexpr bool const& Oculus::Interaction::Input::SyntheticHand::__cordl_internal_get__hasConnectedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasConnectedData;
}
constexpr void Oculus::Interaction::Input::SyntheticHand::__cordl_internal_set__hasConnectedData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasConnectedData = value;
}
inline void Oculus::Interaction::Input::SyntheticHand::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticHand::Apply(::Oculus::Interaction::Input::HandDataAsset*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::SyntheticHand::SyncDataPoses(::Oculus::Interaction::Input::HandDataAsset*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SyncDataPoses", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::SyntheticHand::UpdateRootPose(::by_ref<::UnityEngine::Pose>  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"UpdateRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root);
}
inline void Oculus::Interaction::Input::SyntheticHand::UpdateJointsRotation(::Oculus::Interaction::Input::HandDataAsset*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"UpdateJointsRotation", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Input::SyntheticHand::AmendMetacarpalRotation(int32_t  jointIndex, /* [IsReadOnly] */ ::by_ref<::ArrayW<::UnityEngine::Quaternion>>  sourceRotations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"AmendMetacarpalRotation", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Quaternion>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, jointIndex, sourceRotations);
}
inline void Oculus::Interaction::Input::SyntheticHand::OverrideAllJoints(/* [IsReadOnly] */ ::by_ref<::ArrayW<::UnityEngine::Quaternion>>  jointRotations, float_t  overrideFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverrideAllJoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Quaternion>>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointRotations, overrideFactor);
}
inline void Oculus::Interaction::Input::SyntheticHand::OverrideFingerRotations(::Oculus::Interaction::Input::HandFinger  finger, ::ArrayW<::UnityEngine::Quaternion>  rotations, float_t  overrideFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverrideFingerRotations", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finger, rotations, overrideFactor);
}
inline void Oculus::Interaction::Input::SyntheticHand::OverrideJointRotation(::Oculus::Interaction::Input::HandJointId  jointId, ::UnityEngine::Quaternion  rotation, float_t  overrideFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverrideJointRotation", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId, rotation, overrideFactor);
}
inline void Oculus::Interaction::Input::SyntheticHand::OverrideJointRotationAtIndex(int32_t  jointIndex, ::UnityEngine::Quaternion  rotation, float_t  overrideFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverrideJointRotationAtIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointIndex, rotation, overrideFactor);
}
inline void Oculus::Interaction::Input::SyntheticHand::LockFingerAtCurrent(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandFinger>  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockFingerAtCurrent", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandFinger>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::Input::SyntheticHand::LockJoint(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandJointId>  jointId, ::UnityEngine::Quaternion  rotation, float_t  overrideFactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockJoint", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId, rotation, overrideFactor);
}
inline void Oculus::Interaction::Input::SyntheticHand::SetFingerFreedom(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandFinger>  finger, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::JointFreedom>  freedomLevel, bool  skipAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SetFingerFreedom", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandFinger>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Input::JointFreedom>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finger, freedomLevel, skipAnimation);
}
inline void Oculus::Interaction::Input::SyntheticHand::SetJointFreedom(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandJointId>  jointId, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::JointFreedom>  freedomLevel, bool  skipAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SetJointFreedom", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Input::JointFreedom>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId, freedomLevel, skipAnimation);
}
inline ::Oculus::Interaction::Input::JointFreedom Oculus::Interaction::Input::SyntheticHand::GetJointFreedom(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::HandJointId>  jointId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"GetJointFreedom", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::HandJointId>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::JointFreedom>(this, ___internal_method, jointId);
}
inline void Oculus::Interaction::Input::SyntheticHand::FreeAllJoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"FreeAllJoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticHand::SetJointFreedomAtIndex(int32_t  jointId, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Input::JointFreedom>  freedomLevel, bool  skipAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SetJointFreedomAtIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Input::JointFreedom>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointId, freedomLevel, skipAnimation);
}
inline void Oculus::Interaction::Input::SyntheticHand::LockWristPose(::UnityEngine::Pose  wristPose, float_t  overrideFactor, ::GlobalNamespace::SyntheticHand_WristLockMode  lockMode, bool  worldPose, bool  skipAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockWristPose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SyntheticHand_WristLockMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wristPose, overrideFactor, lockMode, worldPose, skipAnimation);
}
inline void Oculus::Interaction::Input::SyntheticHand::LockWristPosition(::UnityEngine::Vector3  position, float_t  overrideFactor, bool  skipAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockWristPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, overrideFactor, skipAnimation);
}
inline void Oculus::Interaction::Input::SyntheticHand::LockWristRotation(::UnityEngine::Quaternion  rotation, float_t  overrideFactor, bool  skipAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"LockWristRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotation, overrideFactor, skipAnimation);
}
inline void Oculus::Interaction::Input::SyntheticHand::FreeWrist(::GlobalNamespace::SyntheticHand_WristLockMode  lockMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"FreeWrist", {}, {::i2c::type_of<::GlobalNamespace::SyntheticHand_WristLockMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lockMode);
}
inline void Oculus::Interaction::Input::SyntheticHand::SyntheticWristLockChangedState(::GlobalNamespace::SyntheticHand_WristLockMode  lockMode, bool  skipAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"SyntheticWristLockChangedState", {}, {::i2c::type_of<::GlobalNamespace::SyntheticHand_WristLockMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lockMode, skipAnimation);
}
inline float_t Oculus::Interaction::Input::SyntheticHand::OverFlex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  desiredLocalRot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  maxLocalRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"OverFlex", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, desiredLocalRot, maxLocalRot);
}
inline void Oculus::Interaction::Input::SyntheticHand::UpdateProgressCurve(::by_ref<::Oculus::Interaction::ProgressCurve*>  lockProgress, ::by_ref<::Oculus::Interaction::ProgressCurve*>  unlockProgress, bool  locked, bool  skipAnimation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"UpdateProgressCurve", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::ProgressCurve*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::ProgressCurve*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lockProgress, unlockProgress, locked, skipAnimation);
}
inline void Oculus::Interaction::Input::SyntheticHand::InjectAllSyntheticHandModifier(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*  modifyDataFromSource, bool  applyModifier, ::Oculus::Interaction::ProgressCurve*  wristPositionLockCurve, ::Oculus::Interaction::ProgressCurve*  wristPositionUnlockCurve, ::Oculus::Interaction::ProgressCurve*  wristRotationLockCurve, ::Oculus::Interaction::ProgressCurve*  wristRotationUnlockCurve, ::Oculus::Interaction::ProgressCurve*  jointLockCurve, ::Oculus::Interaction::ProgressCurve*  jointUnlockCurve, float_t  spreadAllowance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectAllSyntheticHandModifier", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<::Oculus::Interaction::ProgressCurve*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, modifyDataFromSource, applyModifier, wristPositionLockCurve, wristPositionUnlockCurve, wristRotationLockCurve, wristRotationUnlockCurve, jointLockCurve, jointUnlockCurve, spreadAllowance);
}
inline void Oculus::Interaction::Input::SyntheticHand::InjectWristPositionLockCurve(::Oculus::Interaction::ProgressCurve*  wristPositionLockCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectWristPositionLockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wristPositionLockCurve);
}
inline void Oculus::Interaction::Input::SyntheticHand::InjectWristPositionUnlockCurve(::Oculus::Interaction::ProgressCurve*  wristPositionUnlockCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectWristPositionUnlockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wristPositionUnlockCurve);
}
inline void Oculus::Interaction::Input::SyntheticHand::InjectWristRotationLockCurve(::Oculus::Interaction::ProgressCurve*  wristRotationLockCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectWristRotationLockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wristRotationLockCurve);
}
inline void Oculus::Interaction::Input::SyntheticHand::InjectWristRotationUnlockCurve(::Oculus::Interaction::ProgressCurve*  wristRotationUnlockCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectWristRotationUnlockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wristRotationUnlockCurve);
}
inline void Oculus::Interaction::Input::SyntheticHand::InjectJointLockCurve(::Oculus::Interaction::ProgressCurve*  jointLockCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectJointLockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointLockCurve);
}
inline void Oculus::Interaction::Input::SyntheticHand::InjectJointUnlockCurve(::Oculus::Interaction::ProgressCurve*  jointUnlockCurve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectJointUnlockCurve", {}, {::i2c::type_of<::Oculus::Interaction::ProgressCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointUnlockCurve);
}
inline void Oculus::Interaction::Input::SyntheticHand::InjectSpreadAllowance(float_t  spreadAllowance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"InjectSpreadAllowance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spreadAllowance);
}
inline void Oculus::Interaction::Input::SyntheticHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticHand::_Start_b__25_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand*>(),
                        {"<Start>b__25_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::SyntheticHand* Oculus::Interaction::Input::SyntheticHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::SyntheticHand*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::SyntheticHand::SyntheticHand()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand___c::*)()>(&::Oculus::Interaction::Input::SyntheticHand___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50a9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticHand___c.__ctor_b__57_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticHand___c::*)()>(&::Oculus::Interaction::Input::SyntheticHand___c::__ctor_b__57_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa50aa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand___c*>(),
                        {"<.ctor>b__57_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::SyntheticHand___c::setStaticF___9(::Oculus::Interaction::Input::SyntheticHand___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::SyntheticHand___c*, "<>9", ::Oculus::Interaction::Input::SyntheticHand___c*>(std::forward<::Oculus::Interaction::Input::SyntheticHand___c*>(value));
}
inline ::Oculus::Interaction::Input::SyntheticHand___c* Oculus::Interaction::Input::SyntheticHand___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::SyntheticHand___c*, "<>9", ::Oculus::Interaction::Input::SyntheticHand___c*>();
}
inline void Oculus::Interaction::Input::SyntheticHand___c::setStaticF___9__57_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__57_0", ::Oculus::Interaction::Input::SyntheticHand___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Input::SyntheticHand___c::getStaticF___9__57_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__57_0", ::Oculus::Interaction::Input::SyntheticHand___c*>();
}
inline void Oculus::Interaction::Input::SyntheticHand___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticHand___c::__ctor_b__57_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticHand___c*>(),
                        {"<.ctor>b__57_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::SyntheticHand___c* Oculus::Interaction::Input::SyntheticHand___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::SyntheticHand___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::SyntheticHand___c::SyntheticHand___c()   {
}
