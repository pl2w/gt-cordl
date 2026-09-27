#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Hand.hpp"
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__Hand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointCache_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeleton_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Hand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "Oculus/Interaction/Input/zzzz__PoseOrigin_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ReadOnlyHandJointPoses_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.get_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Handedness (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::get_Handedness)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa50d4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_Handedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.get_TrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer* (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::get_TrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa50a35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.get_HandSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandSkeleton* (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::get_HandSkeleton)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa50d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_HandSkeleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.add_WhenHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand::*)(::System::Action*)>(&::Oculus::Interaction::Input::Hand::add_WhenHandUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa50d594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"add_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.remove_WhenHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand::*)(::System::Action*)>(&::Oculus::Interaction::Input::Hand::remove_WhenHandUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa50d630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"remove_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::get_IsConnected)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa50d6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.get_IsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::get_IsHighConfidence)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa50d75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.get_IsDominantHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::get_IsDominantHand)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa50d7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsDominantHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::get_Scale)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa50d80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand::*)(::Oculus::Interaction::Input::HandDataAsset*)>(&::Oculus::Interaction::Input::Hand::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa50d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Hand*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.MarkInputDataRequiresUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::MarkInputDataRequiresUpdate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa50d914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Hand*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.InitializeJointPosesCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::InitializeJointPosesCache)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa50d9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"InitializeJointPosesCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.CheckJointPosesCacheUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::CheckJointPosesCacheUpdate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa50da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"CheckJointPosesCacheUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetFingerIsPinching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::Hand::GetFingerIsPinching)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa50dbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetFingerIsPinching", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetIndexFingerIsPinching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::GetIndexFingerIsPinching)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50dc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetIndexFingerIsPinching", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.get_IsPointerPoseValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::get_IsPointerPoseValid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa50dc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsPointerPoseValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetPointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Hand::GetPointerPose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa50dcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetPointerPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetJointPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Hand::GetJointPose)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa50debc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetJointPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Hand::GetJointPoseLocal)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa50e080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetJointPosesLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>)>(&::Oculus::Interaction::Input::Hand::GetJointPosesLocal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa50e148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPosesLocal", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetJointPoseFromWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Hand::GetJointPoseFromWrist)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa50e224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPoseFromWrist", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetJointPosesFromWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>)>(&::Oculus::Interaction::Input::Hand::GetJointPosesFromWrist)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa50e2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPosesFromWrist", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetPalmPoseLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Hand::GetPalmPoseLocal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa50e3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetPalmPoseLocal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetFingerIsHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::Hand::GetFingerIsHighConfidence)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa50e518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetFingerIsHighConfidence", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetFingerPinchStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Input::Hand::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::Input::Hand::GetFingerPinchStrength)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa50e598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetFingerPinchStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.get_IsTrackedDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::get_IsTrackedDataValid)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa50dfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsTrackedDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.GetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Hand::GetRootPose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa50e010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.ValidatePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::by_ref<::UnityEngine::Pose>, ::Oculus::Interaction::Input::PoseOrigin, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Hand::ValidatePose)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa50dd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"ValidatePose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::PoseOrigin>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.IsPoseOriginAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::Oculus::Interaction::Input::PoseOrigin)>(&::Oculus::Interaction::Input::Hand::IsPoseOriginAllowed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa50dcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"IsPoseOriginAllowed", {}, {::i2c::type_of<::Oculus::Interaction::Input::PoseOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.IsPoseOriginDisallowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hand::*)(::Oculus::Interaction::Input::PoseOrigin)>(&::Oculus::Interaction::Input::Hand::IsPoseOriginDisallowed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa50e618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"IsPoseOriginDisallowed", {}, {::i2c::type_of<::Oculus::Interaction::Input::PoseOrigin>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand.InjectAllHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*, bool)>(&::Oculus::Interaction::Input::Hand::InjectAllHand)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa507fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"InjectAllHand", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand::*)()>(&::Oculus::Interaction::Input::Hand::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa508080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandJointCache*& Oculus::Interaction::Input::Hand::__cordl_internal_get__jointPosesCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosesCache;
}
constexpr ::Oculus::Interaction::Input::HandJointCache* const& Oculus::Interaction::Input::Hand::__cordl_internal_get__jointPosesCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointPosesCache;
}
constexpr void Oculus::Interaction::Input::Hand::__cordl_internal_set__jointPosesCache(::Oculus::Interaction::Input::HandJointCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointPosesCache = value;
}
constexpr ::System::Action*& Oculus::Interaction::Input::Hand::__cordl_internal_get_WhenHandUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenHandUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::Input::Hand::__cordl_internal_get_WhenHandUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenHandUpdated;
}
constexpr void Oculus::Interaction::Input::Hand::__cordl_internal_set_WhenHandUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenHandUpdated = value;
}
inline void Oculus::Interaction::Input::Hand::setStaticF_PALM_LOCAL_OFFSET(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "PALM_LOCAL_OFFSET", ::Oculus::Interaction::Input::Hand*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Input::Hand::getStaticF_PALM_LOCAL_OFFSET()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "PALM_LOCAL_OFFSET", ::Oculus::Interaction::Input::Hand*>();
}
inline ::Oculus::Interaction::Input::Handedness Oculus::Interaction::Input::Hand::get_Handedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_Handedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Handedness>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* Oculus::Interaction::Input::Hand::get_TrackingToWorldTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandSkeleton* Oculus::Interaction::Input::Hand::get_HandSkeleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_HandSkeleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandSkeleton*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Hand::add_WhenHandUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"add_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::Hand::remove_WhenHandUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"remove_WhenHandUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Input::Hand::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Hand::get_IsHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Hand::get_IsDominantHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsDominantHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Input::Hand::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Hand::Apply(::Oculus::Interaction::Input::HandDataAsset*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Hand*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::Hand::MarkInputDataRequiresUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Hand*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Hand::InitializeJointPosesCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"InitializeJointPosesCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Hand::CheckJointPosesCacheUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"CheckJointPosesCacheUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Hand::GetFingerIsPinching(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetFingerIsPinching", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::Input::Hand::GetIndexFingerIsPinching()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetIndexFingerIsPinching", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Hand::get_IsPointerPoseValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsPointerPoseValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Hand::GetPointerPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetPointerPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline bool Oculus::Interaction::Input::Hand::GetJointPose(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPose", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline bool Oculus::Interaction::Input::Hand::GetJointPoseLocal(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPoseLocal", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline bool Oculus::Interaction::Input::Hand::GetJointPosesLocal(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  localJointPoses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPosesLocal", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, localJointPoses);
}
inline bool Oculus::Interaction::Input::Hand::GetJointPoseFromWrist(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPoseFromWrist", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handJointId, pose);
}
inline bool Oculus::Interaction::Input::Hand::GetJointPosesFromWrist(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesFromWrist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetJointPosesFromWrist", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointPosesFromWrist);
}
inline bool Oculus::Interaction::Input::Hand::GetPalmPoseLocal(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetPalmPoseLocal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline bool Oculus::Interaction::Input::Hand::GetFingerIsHighConfidence(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetFingerIsHighConfidence", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline float_t Oculus::Interaction::Input::Hand::GetFingerPinchStrength(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetFingerPinchStrength", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::Input::Hand::get_IsTrackedDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"get_IsTrackedDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Hand::GetRootPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"GetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline bool Oculus::Interaction::Input::Hand::ValidatePose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  sourcePose, ::Oculus::Interaction::Input::PoseOrigin  sourcePoseOrigin, ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"ValidatePose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::Input::PoseOrigin>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sourcePose, sourcePoseOrigin, pose);
}
inline bool Oculus::Interaction::Input::Hand::IsPoseOriginAllowed(::Oculus::Interaction::Input::PoseOrigin  poseOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"IsPoseOriginAllowed", {}, {::i2c::type_of<::Oculus::Interaction::Input::PoseOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, poseOrigin);
}
inline bool Oculus::Interaction::Input::Hand::IsPoseOriginDisallowed(::Oculus::Interaction::Input::PoseOrigin  poseOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"IsPoseOriginDisallowed", {}, {::i2c::type_of<::Oculus::Interaction::Input::PoseOrigin>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, poseOrigin);
}
inline void Oculus::Interaction::Input::Hand::InjectAllHand(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*  modifyDataFromSource, bool  applyModifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {"InjectAllHand", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, modifyDataFromSource, applyModifier);
}
inline void Oculus::Interaction::Input::Hand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Hand* Oculus::Interaction::Input::Hand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Hand*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IHand"
constexpr  Oculus::Interaction::Input::Hand::operator ::Oculus::Interaction::Input::IHand*() noexcept {
return static_cast<::Oculus::Interaction::Input::IHand*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IHand"
constexpr ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Input::Hand::i___Oculus__Interaction__Input__IHand() noexcept {
return static_cast<::Oculus::Interaction::Input::IHand*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Hand::Hand()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand___c::*)()>(&::Oculus::Interaction::Input::Hand___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hand___c.__ctor_b__43_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hand___c::*)()>(&::Oculus::Interaction::Input::Hand___c::__ctor_b__43_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa50e6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand___c*>(),
                        {"<.ctor>b__43_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::Hand___c::setStaticF___9(::Oculus::Interaction::Input::Hand___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::Hand___c*, "<>9", ::Oculus::Interaction::Input::Hand___c*>(std::forward<::Oculus::Interaction::Input::Hand___c*>(value));
}
inline ::Oculus::Interaction::Input::Hand___c* Oculus::Interaction::Input::Hand___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::Hand___c*, "<>9", ::Oculus::Interaction::Input::Hand___c*>();
}
inline void Oculus::Interaction::Input::Hand___c::setStaticF___9__43_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__43_0", ::Oculus::Interaction::Input::Hand___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Input::Hand___c::getStaticF___9__43_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__43_0", ::Oculus::Interaction::Input::Hand___c*>();
}
inline void Oculus::Interaction::Input::Hand___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Hand___c::__ctor_b__43_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hand___c*>(),
                        {"<.ctor>b__43_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Hand___c* Oculus::Interaction::Input::Hand___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Hand___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Hand___c::Hand___c()   {
}
