#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTargetGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_PositionModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_RotationModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_UpdateMethods_impl.hpp"
#include "UnityEngine/zzzz__BoundingSphere_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_PositionModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_RotationModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_UpdateMethods_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTargetGroup_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineTargetGroup_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::OnValidate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xae9b628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::Reset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae9b740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae9b7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.get_m_Targets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*> (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::get_m_Targets)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xae9b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_m_Targets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.set_m_Targets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)(::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>)>(&::Unity::Cinemachine::CinemachineTargetGroup::set_m_Targets)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xae9b880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"set_m_Targets", {}, {::i2c::type_of<::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::get_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae9b910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::get_IsValid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xae9b918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.get_BoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::get_BoundingBox)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xae9b974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_BoundingBox", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.set_BoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)(::UnityEngine::Bounds)>(&::Unity::Cinemachine::CinemachineTargetGroup::set_BoundingBox)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae9bba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"set_BoundingBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.get_Sphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::get_Sphere)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae9bbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_Sphere", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.set_Sphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)(::UnityEngine::BoundingSphere)>(&::Unity::Cinemachine::CinemachineTargetGroup::set_Sphere)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae9bc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"set_Sphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::get_IsEmpty)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xae9bc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.AddMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)(::UnityEngine::Transform*, float_t, float_t)>(&::Unity::Cinemachine::CinemachineTargetGroup::AddMember)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xae9bd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"AddMember", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.RemoveMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineTargetGroup::RemoveMember)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae9be6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"RemoveMember", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.FindMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Cinemachine::CinemachineTargetGroup::*)(::UnityEngine::Transform*)>(&::Unity::Cinemachine::CinemachineTargetGroup::FindMember)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae9bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"FindMember", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.GetWeightedBoundsForMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (::Unity::Cinemachine::CinemachineTargetGroup::*)(int32_t)>(&::Unity::Cinemachine::CinemachineTargetGroup::GetWeightedBoundsForMember)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xae9bfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"GetWeightedBoundsForMember", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.GetViewSpaceBoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Unity::Cinemachine::CinemachineTargetGroup::*)(::UnityEngine::Matrix4x4, bool)>(&::Unity::Cinemachine::CinemachineTargetGroup::GetViewSpaceBoundingBox)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xae9c294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"GetViewSpaceBoundingBox", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.get_CachedCountIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::get_CachedCountIsValid)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae9c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_CachedCountIsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.IndexIsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineTargetGroup::*)(int32_t)>(&::Unity::Cinemachine::CinemachineTargetGroup::IndexIsValid)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xae9c0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"IndexIsValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.WeightedMemberBoundsForValidMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (*)(::Unity::Cinemachine::CinemachineTargetGroup_Target*, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineTargetGroup::WeightedMemberBoundsForValidMember)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xae9c164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"WeightedMemberBoundsForValidMember", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineTargetGroup_Target*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.DoUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::DoUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xae9ba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"DoUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.UpdateMemberValidity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::UpdateMemberValidity)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xae9c6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"UpdateMemberValidity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.CalculateAveragePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::CalculateAveragePosition)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xae9cac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"CalculateAveragePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.CalculateBoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::CalculateBoundingBox)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xae9cc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"CalculateBoundingBox", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.CalculateBoundingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::CalculateBoundingSphere)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xae9ceec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"CalculateBoundingSphere", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.CalculateAverageOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::CalculateAverageOrientation)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xae9d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"CalculateAverageOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::FixedUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae9d458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::Update)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae9d46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::LateUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae9d4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup.GetViewSpaceAngularBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)(::UnityEngine::Matrix4x4, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::Unity::Cinemachine::CinemachineTargetGroup::GetViewSpaceAngularBounds)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0xae9d4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"GetViewSpaceAngularBounds", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xae9da40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineTargetGroup_PositionModes& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_PositionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionMode;
}
constexpr ::GlobalNamespace::CinemachineTargetGroup_PositionModes const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_PositionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionMode;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_PositionMode(::GlobalNamespace::CinemachineTargetGroup_PositionModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionMode = value;
}
constexpr ::GlobalNamespace::CinemachineTargetGroup_RotationModes& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_RotationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationMode;
}
constexpr ::GlobalNamespace::CinemachineTargetGroup_RotationModes const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_RotationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationMode;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_RotationMode(::GlobalNamespace::CinemachineTargetGroup_RotationModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationMode = value;
}
constexpr ::GlobalNamespace::CinemachineTargetGroup_UpdateMethods& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_UpdateMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateMethod;
}
constexpr ::GlobalNamespace::CinemachineTargetGroup_UpdateMethods const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_UpdateMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateMethod;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_UpdateMethod(::GlobalNamespace::CinemachineTargetGroup_UpdateMethods  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateMethod = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineTargetGroup_Target*>*& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_Targets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Targets;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineTargetGroup_Target*>* const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_Targets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Targets;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_Targets(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineTargetGroup_Target*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Targets = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_MaxWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxWeight;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_MaxWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxWeight;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_m_MaxWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxWeight = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_WeightSum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WeightSum;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_WeightSum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WeightSum;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_m_WeightSum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WeightSum = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_AveragePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AveragePos;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_AveragePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AveragePos;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_m_AveragePos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AveragePos = value;
}
constexpr ::UnityEngine::Bounds& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_BoundingBox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingBox;
}
constexpr ::UnityEngine::Bounds const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_BoundingBox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingBox;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_m_BoundingBox(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BoundingBox = value;
}
constexpr ::UnityEngine::BoundingSphere& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_BoundingSphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingSphere;
}
constexpr ::UnityEngine::BoundingSphere const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_BoundingSphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingSphere;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_m_BoundingSphere(::UnityEngine::BoundingSphere  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BoundingSphere = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_LastUpdateFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastUpdateFrame;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_LastUpdateFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastUpdateFrame;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_m_LastUpdateFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastUpdateFrame = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_ValidMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidMembers;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_ValidMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidMembers;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_m_ValidMembers(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidMembers = value;
}
constexpr ::System::Collections::Generic::List_1<bool>*& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_MemberValidity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MemberValidity;
}
constexpr ::System::Collections::Generic::List_1<bool>* const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_MemberValidity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MemberValidity;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_m_MemberValidity(::System::Collections::Generic::List_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MemberValidity = value;
}
constexpr ::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_LegacyTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyTargets;
}
constexpr ::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*> const& Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_get_m_LegacyTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyTargets;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup::__cordl_internal_set_m_LegacyTargets(::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyTargets = value;
}
inline void Unity::Cinemachine::CinemachineTargetGroup::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*> Unity::Cinemachine::CinemachineTargetGroup::get_m_Targets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_m_Targets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::set_m_Targets(::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"set_m_Targets", {}, {::i2c::type_of<::ArrayW<::Unity::Cinemachine::CinemachineTargetGroup_Target*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Unity::Cinemachine::CinemachineTargetGroup::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineTargetGroup::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Unity::Cinemachine::CinemachineTargetGroup::get_BoundingBox()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_BoundingBox", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::set_BoundingBox(::UnityEngine::Bounds  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"set_BoundingBox", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::BoundingSphere Unity::Cinemachine::CinemachineTargetGroup::get_Sphere()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_Sphere", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::set_Sphere(::UnityEngine::BoundingSphere  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"set_Sphere", {}, {::i2c::type_of<::UnityEngine::BoundingSphere>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Unity::Cinemachine::CinemachineTargetGroup::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::AddMember(::UnityEngine::Transform*  t, float_t  weight, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"AddMember", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, weight, radius);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::RemoveMember(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"RemoveMember", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline int32_t Unity::Cinemachine::CinemachineTargetGroup::FindMember(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"FindMember", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, t);
}
inline ::UnityEngine::BoundingSphere Unity::Cinemachine::CinemachineTargetGroup::GetWeightedBoundsForMember(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"GetWeightedBoundsForMember", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(this, ___internal_method, index);
}
inline ::UnityEngine::Bounds Unity::Cinemachine::CinemachineTargetGroup::GetViewSpaceBoundingBox(::UnityEngine::Matrix4x4  observer, bool  includeBehind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"GetViewSpaceBoundingBox", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, observer, includeBehind);
}
inline bool Unity::Cinemachine::CinemachineTargetGroup::get_CachedCountIsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"get_CachedCountIsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineTargetGroup::IndexIsValid(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"IndexIsValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline ::UnityEngine::BoundingSphere Unity::Cinemachine::CinemachineTargetGroup::WeightedMemberBoundsForValidMember(::Unity::Cinemachine::CinemachineTargetGroup_Target*  t, ::UnityEngine::Vector3  avgPos, float_t  maxWeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"WeightedMemberBoundsForValidMember", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineTargetGroup_Target*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(nullptr, ___internal_method, t, avgPos, maxWeight);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::DoUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"DoUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::UpdateMemberValidity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"UpdateMemberValidity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineTargetGroup::CalculateAveragePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"CalculateAveragePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Unity::Cinemachine::CinemachineTargetGroup::CalculateBoundingBox()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"CalculateBoundingBox", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::BoundingSphere Unity::Cinemachine::CinemachineTargetGroup::CalculateBoundingSphere()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"CalculateBoundingSphere", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::CinemachineTargetGroup::CalculateAverageOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"CalculateAverageOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::GetViewSpaceAngularBounds(::UnityEngine::Matrix4x4  observer, ::by_ref<::UnityEngine::Vector2>  minAngles, ::by_ref<::UnityEngine::Vector2>  maxAngles, ::by_ref<::UnityEngine::Vector2>  zRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {"GetViewSpaceAngularBounds", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, observer, minAngles, maxAngles, zRange);
}
inline void Unity::Cinemachine::CinemachineTargetGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineTargetGroup* Unity::Cinemachine::CinemachineTargetGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineTargetGroup*>());
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineTargetGroup"
constexpr  Unity::Cinemachine::CinemachineTargetGroup::operator ::Unity::Cinemachine::ICinemachineTargetGroup*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineTargetGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineTargetGroup"
constexpr ::Unity::Cinemachine::ICinemachineTargetGroup* Unity::Cinemachine::CinemachineTargetGroup::i___Unity__Cinemachine__ICinemachineTargetGroup() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineTargetGroup*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineTargetGroup::CinemachineTargetGroup()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineTargetGroup_Target._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineTargetGroup_Target::*)()>(&::Unity::Cinemachine::CinemachineTargetGroup_Target::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xae9be58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup_Target*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Unity::Cinemachine::CinemachineTargetGroup_Target::__cordl_internal_get_Object()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Unity::Cinemachine::CinemachineTargetGroup_Target::__cordl_internal_get_Object() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Object;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup_Target::__cordl_internal_set_Object(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Object = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTargetGroup_Target::__cordl_internal_get_Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTargetGroup_Target::__cordl_internal_get_Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup_Target::__cordl_internal_set_Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineTargetGroup_Target::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& Unity::Cinemachine::CinemachineTargetGroup_Target::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void Unity::Cinemachine::CinemachineTargetGroup_Target::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
inline void Unity::Cinemachine::CinemachineTargetGroup_Target::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineTargetGroup_Target*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineTargetGroup_Target* Unity::Cinemachine::CinemachineTargetGroup_Target::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineTargetGroup_Target*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineTargetGroup_Target::CinemachineTargetGroup_Target()   {
}
