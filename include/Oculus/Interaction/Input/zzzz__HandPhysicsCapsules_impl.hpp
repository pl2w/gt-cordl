#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandPhysicsCapsules.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerJointFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rigidbody_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandPhysicsCapsules_def.hpp"
#include "Oculus/Interaction/Input/zzzz__BoneCapsule_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerJointFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandPhysicsCapsules_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__JointsRadiusFeature_def.hpp"
#include "Oculus/Interaction/zzzz__IHandVisual_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.add_WhenCapsulesGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::System::Action*)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::add_WhenCapsulesGenerated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa50f9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"add_WhenCapsulesGenerated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.remove_WhenCapsulesGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::System::Action*)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::remove_WhenCapsulesGenerated)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa50fab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"remove_WhenCapsulesGenerated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.get_RootTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::get_RootTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50fb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"get_RootTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.get_Capsules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>* (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::get_Capsules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50fb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"get_Capsules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.set_Capsules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::set_Capsules)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa50fb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"set_Capsules", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa50fb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa50fb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::Start)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa50fc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::OnEnable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa50fd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::OnDisable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa50fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.GenerateCapsules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::GenerateCapsules)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0xa50ffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"GenerateCapsules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.IgnoreSelfCollisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::IgnoreSelfCollisions)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa510bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"IgnoreSelfCollisions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.TryGetJointRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::Oculus::Interaction::Input::HandJointId, ::by_ref<::UnityEngine::Rigidbody*>)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::TryGetJointRigidbody)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa51061c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"TryGetJointRigidbody", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.CreateJointRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Transform*, ::UnityEngine::Pose)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::CreateJointRigidbody)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa5106dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"CreateJointRigidbody", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.CreateCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CapsuleCollider> (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::StringW, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::CreateCollider)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xa510918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"CreateCollider", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.DisableRigidbodies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::DisableRigidbodies)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa50ff28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"DisableRigidbodies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.HandleHandUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::HandleHandUpdated)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa510cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.UpdateColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::UpdateColliders)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa510f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"UpdateColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.UpdateRigidbodies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::UpdateRigidbodies)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xa510d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"UpdateRigidbodies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.InjectAllOVRHandPhysicsCapsules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::Oculus::Interaction::Input::IHand*, bool, int32_t)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::InjectAllOVRHandPhysicsCapsules)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa5110fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectAllOVRHandPhysicsCapsules", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa511128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.InjectAsTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(bool)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::InjectAsTriggers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5111f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectAsTriggers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.InjectUseLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(int32_t)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::InjectUseLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa511200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectUseLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.InjectMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::Oculus::Interaction::Input::HandFingerJointFlags)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::InjectMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa511208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectMask", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFingerJointFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules.InjectJointsRadiusFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)(::Oculus::Interaction::Input::JointsRadiusFeature*)>(&::Oculus::Interaction::Input::HandPhysicsCapsules::InjectJointsRadiusFeature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa511210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectJointsRadiusFeature", {}, {::i2c::type_of<::Oculus::Interaction::Input::JointsRadiusFeature*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa511218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__handVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handVisual;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__handVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handVisual;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__handVisual(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handVisual = value;
}
constexpr ::Oculus::Interaction::IHandVisual*& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get_HandVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandVisual;
}
constexpr ::Oculus::Interaction::IHandVisual* const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get_HandVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandVisual;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set_HandVisual(::Oculus::Interaction::IHandVisual*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandVisual = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get_Hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get_Hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hand = value;
}
constexpr ::UnityW<::Oculus::Interaction::Input::JointsRadiusFeature>& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__jointsRadiusFeature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsRadiusFeature;
}
constexpr ::UnityW<::Oculus::Interaction::Input::JointsRadiusFeature> const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__jointsRadiusFeature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointsRadiusFeature;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__jointsRadiusFeature(::UnityW<::Oculus::Interaction::Input::JointsRadiusFeature>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointsRadiusFeature = value;
}
constexpr bool& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__asTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asTriggers;
}
constexpr bool const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__asTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asTriggers;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__asTriggers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asTriggers = value;
}
constexpr int32_t& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__useLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLayer;
}
constexpr int32_t const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__useLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useLayer;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__useLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useLayer = value;
}
constexpr ::Oculus::Interaction::Input::HandFingerJointFlags& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mask;
}
constexpr ::Oculus::Interaction::Input::HandFingerJointFlags const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mask;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__mask(::Oculus::Interaction::Input::HandFingerJointFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mask = value;
}
constexpr ::System::Action*& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__whenCapsulesGenerated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenCapsulesGenerated;
}
constexpr ::System::Action* const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__whenCapsulesGenerated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenCapsulesGenerated;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__whenCapsulesGenerated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenCapsulesGenerated = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__rootTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__rootTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootTransform;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__rootTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootTransform = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::BoneCapsule*>*& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__capsules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsules;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Input::BoneCapsule*>* const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__capsules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsules;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__capsules(::System::Collections::Generic::List_1<::Oculus::Interaction::Input::BoneCapsule*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capsules = value;
}
constexpr ::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__Capsules_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capsules_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>* const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__Capsules_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capsules_k__BackingField;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__Capsules_k__BackingField(::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Capsules_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>>& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__rigidbodies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodies;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Rigidbody>> const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__rigidbodies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodies;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__rigidbodies(::ArrayW<::UnityW<::UnityEngine::Rigidbody>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbodies = value;
}
constexpr bool& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__capsulesAreActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsulesAreActive;
}
constexpr bool const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__capsulesAreActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsulesAreActive;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__capsulesAreActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capsulesAreActive = value;
}
constexpr bool& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__capsulesGenerated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsulesGenerated;
}
constexpr bool const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__capsulesGenerated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsulesGenerated;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__capsulesGenerated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capsulesGenerated = value;
}
constexpr bool& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Input::HandPhysicsCapsules::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::add_WhenCapsulesGenerated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"add_WhenCapsulesGenerated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::remove_WhenCapsulesGenerated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"remove_WhenCapsulesGenerated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Input::HandPhysicsCapsules::get_RootTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"get_RootTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>* Oculus::Interaction::Input::HandPhysicsCapsules::get_Capsules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"get_Capsules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::set_Capsules(::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"set_Capsules", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Oculus::Interaction::Input::BoneCapsule*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::GenerateCapsules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"GenerateCapsules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::IgnoreSelfCollisions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"IgnoreSelfCollisions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::HandPhysicsCapsules::TryGetJointRigidbody(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Rigidbody*>  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"TryGetJointRigidbody", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, joint, body);
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::Input::HandPhysicsCapsules::CreateJointRigidbody(::Oculus::Interaction::Input::HandJointId  joint, ::UnityEngine::Transform*  holder, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"CreateJointRigidbody", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method, joint, holder, pose);
}
inline ::UnityW<::UnityEngine::CapsuleCollider> Oculus::Interaction::Input::HandPhysicsCapsules::CreateCollider(::StringW  name, ::UnityEngine::Transform*  holder, ::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, float_t  radius, float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"CreateCollider", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CapsuleCollider>>(this, ___internal_method, name, holder, from, to, radius, offset);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::DisableRigidbodies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"DisableRigidbodies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::HandleHandUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"HandleHandUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::UpdateColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"UpdateColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::UpdateRigidbodies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"UpdateRigidbodies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::InjectAllOVRHandPhysicsCapsules(::Oculus::Interaction::Input::IHand*  hand, bool  asTriggers, int32_t  useLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectAllOVRHandPhysicsCapsules", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, asTriggers, useLayer);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::InjectAsTriggers(bool  asTriggers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectAsTriggers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asTriggers);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::InjectUseLayer(int32_t  useLayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectUseLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useLayer);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::InjectMask(::Oculus::Interaction::Input::HandFingerJointFlags  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectMask", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFingerJointFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mask);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::InjectJointsRadiusFeature(::Oculus::Interaction::Input::JointsRadiusFeature*  jointsRadiusFeature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {"InjectJointsRadiusFeature", {}, {::i2c::type_of<::Oculus::Interaction::Input::JointsRadiusFeature*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointsRadiusFeature);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandPhysicsCapsules* Oculus::Interaction::Input::HandPhysicsCapsules::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandPhysicsCapsules*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandPhysicsCapsules::HandPhysicsCapsules()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules___c::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa511378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::HandPhysicsCapsules___c.__ctor_b__44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::HandPhysicsCapsules___c::*)()>(&::Oculus::Interaction::Input::HandPhysicsCapsules___c::__ctor_b__44_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa511380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules___c*>(),
                        {"<.ctor>b__44_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::HandPhysicsCapsules___c::setStaticF___9(::Oculus::Interaction::Input::HandPhysicsCapsules___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::HandPhysicsCapsules___c*, "<>9", ::Oculus::Interaction::Input::HandPhysicsCapsules___c*>(std::forward<::Oculus::Interaction::Input::HandPhysicsCapsules___c*>(value));
}
inline ::Oculus::Interaction::Input::HandPhysicsCapsules___c* Oculus::Interaction::Input::HandPhysicsCapsules___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::HandPhysicsCapsules___c*, "<>9", ::Oculus::Interaction::Input::HandPhysicsCapsules___c*>();
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules___c::setStaticF___9__44_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__44_0", ::Oculus::Interaction::Input::HandPhysicsCapsules___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Input::HandPhysicsCapsules___c::getStaticF___9__44_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__44_0", ::Oculus::Interaction::Input::HandPhysicsCapsules___c*>();
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::HandPhysicsCapsules___c::__ctor_b__44_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::HandPhysicsCapsules___c*>(),
                        {"<.ctor>b__44_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandPhysicsCapsules___c* Oculus::Interaction::Input::HandPhysicsCapsules___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::HandPhysicsCapsules___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandPhysicsCapsules___c::HandPhysicsCapsules___c()   {
}
