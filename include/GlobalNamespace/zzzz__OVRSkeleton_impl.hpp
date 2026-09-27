#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeleton.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Skeleton2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_SkeletonType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRBoneCapsule_def.hpp"
#include "GlobalNamespace/zzzz__OVRBone_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointSet_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_BoneId_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_SkeletonPoseData_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_SkeletonType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(bool)>(&::GlobalNamespace::OVRSkeleton::set_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_IsDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_IsDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_IsDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(bool)>(&::GlobalNamespace::OVRSkeleton::set_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_IsDataValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_IsDataHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_IsDataHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_IsDataHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(bool)>(&::GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_IsDataHighConfidence", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_Bones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_Bones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_Bones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_Bones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*)>(&::GlobalNamespace::OVRSkeleton::set_Bones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_Bones", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_BindPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_BindPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_BindPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_BindPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*)>(&::GlobalNamespace::OVRSkeleton::set_BindPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_BindPoses", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_Capsules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_Capsules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_Capsules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_Capsules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*)>(&::GlobalNamespace::OVRSkeleton::set_Capsules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_Capsules", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetSkeletonType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetSkeletonType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa673ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetSkeletonType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.SetSkeletonType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVRSkeleton::SetSkeletonType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa673ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetRequiredBodyJointSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_BodyJointSet (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetRequiredBodyJointSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa674010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetRequiredBodyJointSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.IsValidBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)(::GlobalNamespace::OVRSkeleton_BoneId)>(&::GlobalNamespace::OVRSkeleton::IsValidBone)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa67402c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"IsValidBone", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.get_SkeletonChangedCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa674098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_SkeletonChangedCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.set_SkeletonChangedCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)(int32_t)>(&::GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6740a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_SkeletonChangedCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Awake)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa6740a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.SearchSkeletonDataProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::SearchSkeletonDataProvider)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa674328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"SearchSkeletonDataProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa674450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.ShouldInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::ShouldInitialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa6744f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"ShouldInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Initialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa673f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetBoneTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::OVRSkeleton::*)(::GlobalNamespace::OVRSkeleton_BoneId)>(&::GlobalNamespace::OVRSkeleton::GetBoneTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa674fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.InitializeBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::InitializeBones)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0xa674fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.InitializeBindPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::InitializeBindPose)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0xa676274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.InitializeCapsules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::InitializeCapsules)> {
  constexpr static std::size_t size = 0xa04;
  constexpr static std::size_t addrs = 0xa6745c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"InitializeCapsules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa676abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.UpdateSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::UpdateSkeleton)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0xa676ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"UpdateSkeleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::FixedUpdate)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xa677100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentStartBoneId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa67739c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentStartBoneId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentEndBoneId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa6773ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentEndBoneId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentMaxSkinnableBoneId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_BoneId (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa6773d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentMaxSkinnableBoneId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentNumBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentNumBones)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa6773f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentNumBones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.GetCurrentNumSkinnableBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa677434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentNumSkinnableBones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.BoneLabelFromBoneId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::OVRSkeleton_SkeletonType, ::GlobalNamespace::OVRSkeleton_BoneId)>(&::GlobalNamespace::OVRSkeleton::BoneLabelFromBoneId)> {
  constexpr static std::size_t size = 0xab8;
  constexpr static std::size_t addrs = 0xa6757ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"BoneLabelFromBoneId", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>(), ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.IsBodySkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVRSkeleton::IsBodySkeleton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa676264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"IsBodySkeleton", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton.IsHandSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRSkeleton_SkeletonType)>(&::GlobalNamespace::OVRSkeleton::IsHandSkeleton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6745c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"IsHandSkeleton", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton::*)()>(&::GlobalNamespace::OVRSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa677474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeletonType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skeletonType;
}
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeletonType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skeletonType;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__skeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skeletonType = value;
}
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__dataProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataProvider;
}
constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__dataProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataProvider;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__dataProvider(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataProvider = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRootPose;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRootPose;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__updateRootPose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateRootPose = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRootScale;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__updateRootScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateRootScale;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__updateRootScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateRootScale = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__enablePhysicsCapsules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enablePhysicsCapsules;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__enablePhysicsCapsules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enablePhysicsCapsules;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__enablePhysicsCapsules(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enablePhysicsCapsules = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__applyBoneTranslations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyBoneTranslations;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__applyBoneTranslations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyBoneTranslations;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__applyBoneTranslations(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applyBoneTranslations = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bonesGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bonesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bonesGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bonesGO;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bonesGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bonesGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPosesGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindPosesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPosesGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindPosesGO;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bindPosesGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bindPosesGO = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsulesGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsulesGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsulesGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsulesGO;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__capsulesGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capsulesGO = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bones;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bones;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bones(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bones = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindPoses;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__bindPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindPoses;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__bindPoses(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bindPoses = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsules;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__capsules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsules;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__capsules(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capsules = value;
}
constexpr ::GlobalNamespace::OVRPlugin_Skeleton2& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeleton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skeleton;
}
constexpr ::GlobalNamespace::OVRPlugin_Skeleton2 const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__skeleton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skeleton;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__skeleton(::GlobalNamespace::OVRPlugin_Skeleton2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skeleton = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::OVRSkeleton::__cordl_internal_get_wristFixupRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wristFixupRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::OVRSkeleton::__cordl_internal_get_wristFixupRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wristFixupRotation;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set_wristFixupRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wristFixupRotation = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__IsInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInitialized_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataValid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataValid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataValid_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__IsDataValid_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDataValid_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataHighConfidence_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataHighConfidence_k__BackingField;
}
constexpr bool const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__IsDataHighConfidence_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDataHighConfidence_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__IsDataHighConfidence_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDataHighConfidence_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Bones_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bones_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Bones_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bones_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__Bones_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Bones_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__BindPoses_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BindPoses_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__BindPoses_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BindPoses_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__BindPoses_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BindPoses_k__BackingField = value;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Capsules_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capsules_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__Capsules_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capsules_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__Capsules_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Capsules_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::OVRSkeleton::__cordl_internal_get__SkeletonChangedCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SkeletonChangedCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::OVRSkeleton::__cordl_internal_get__SkeletonChangedCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SkeletonChangedCount_k__BackingField;
}
constexpr void GlobalNamespace::OVRSkeleton::__cordl_internal_set__SkeletonChangedCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SkeletonChangedCount_k__BackingField = value;
}
inline bool GlobalNamespace::OVRSkeleton::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton::get_IsDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_IsDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_IsDataValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_IsDataValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton::get_IsDataHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_IsDataHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_IsDataHighConfidence(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_IsDataHighConfidence", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* GlobalNamespace::OVRSkeleton::get_Bones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_Bones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_Bones(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_Bones", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* GlobalNamespace::OVRSkeleton::get_BindPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_BindPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_BindPoses(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_BindPoses", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* GlobalNamespace::OVRSkeleton::get_Capsules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_Capsules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_Capsules(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_Capsules", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton::GetSkeletonType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetSkeletonType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::SetSkeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::GlobalNamespace::OVRPlugin_BodyJointSet GlobalNamespace::OVRSkeleton::GetRequiredBodyJointSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetRequiredBodyJointSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_BodyJointSet>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSkeleton::IsValidBone(::GlobalNamespace::OVRSkeleton_BoneId  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"IsValidBone", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bone);
}
inline int32_t GlobalNamespace::OVRSkeleton::get_SkeletonChangedCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"get_SkeletonChangedCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::set_SkeletonChangedCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"set_SkeletonChangedCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRSkeleton::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* GlobalNamespace::OVRSkeleton::SearchSkeletonDataProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"SearchSkeletonDataProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSkeleton::ShouldInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"ShouldInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::OVRSkeleton::GetBoneTransform(::GlobalNamespace::OVRSkeleton_BoneId  boneId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, boneId);
}
inline void GlobalNamespace::OVRSkeleton::InitializeBones()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::InitializeBindPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::InitializeCapsules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"InitializeCapsules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::UpdateSkeleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"UpdateSkeleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton::GetCurrentStartBoneId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentStartBoneId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton::GetCurrentEndBoneId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentEndBoneId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_BoneId GlobalNamespace::OVRSkeleton::GetCurrentMaxSkinnableBoneId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentMaxSkinnableBoneId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_BoneId>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSkeleton::GetCurrentNumBones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentNumBones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRSkeleton::GetCurrentNumSkinnableBones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"GetCurrentNumSkinnableBones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRSkeleton::BoneLabelFromBoneId(::GlobalNamespace::OVRSkeleton_SkeletonType  skeletonType, ::GlobalNamespace::OVRSkeleton_BoneId  boneId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"BoneLabelFromBoneId", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>(), ::i2c::type_of<::GlobalNamespace::OVRSkeleton_BoneId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, skeletonType, boneId);
}
inline bool GlobalNamespace::OVRSkeleton::IsBodySkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"IsBodySkeleton", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool GlobalNamespace::OVRSkeleton::IsHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {"IsHandSkeleton", {}, {::i2c::type_of<::GlobalNamespace::OVRSkeleton_SkeletonType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline void GlobalNamespace::OVRSkeleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton* GlobalNamespace::OVRSkeleton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRSkeleton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton::OVRSkeleton()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider.GetSkeletonType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonType (::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::*)()>(&::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider.GetSkeletonPoseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSkeleton_SkeletonPoseData (::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::*)()>(&::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonPoseData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::*)()>(&::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::get_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(),
                    {::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonType>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::GetSkeletonPoseData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider::get_enabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
