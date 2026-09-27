#pragma once
// IWYU pragma private; include "Oculus/Interaction/TouchHandGrabInteractor.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__TouchHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ShadowHand_def.hpp"
#include "Oculus/Interaction/zzzz__ColliderGroup_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__IHandSphereMap_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "Oculus/Interaction/zzzz__TouchHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__TouchHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__TouchShadowHand_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa465948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::TouchHandGrabInteractor::set_Hand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa465950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.get_OpenHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::get_OpenHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa465960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"get_OpenHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.set_OpenHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::TouchHandGrabInteractor::set_OpenHand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa465968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"set_OpenHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.add_WhenFingerLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::System::Action*)>(&::Oculus::Interaction::TouchHandGrabInteractor::add_WhenFingerLocked)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa465978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"add_WhenFingerLocked", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.remove_WhenFingerLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::System::Action*)>(&::Oculus::Interaction::TouchHandGrabInteractor::remove_WhenFingerLocked)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa465a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"remove_WhenFingerLocked", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::TouchHandGrabInteractor::SetTimeProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa465ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.get_GrabPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::get_GrabPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa465ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"get_GrabPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.get_GrabRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::get_GrabRotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa465ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"get_GrabRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::Awake)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xa465af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::Start)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa465e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.IsFingerLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchHandGrabInteractor::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::TouchHandGrabInteractor::IsFingerLocked)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4660f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"IsFingerLocked", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.GetFingerJoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Pose> (::Oculus::Interaction::TouchHandGrabInteractor::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::TouchHandGrabInteractor::GetFingerJoints)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4661b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"GetFingerJoints", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.DoPreprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::DoPreprocess)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4661f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.DoPostprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::DoPostprocess)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa4662a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.ComputeShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::ComputeShouldSelect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4664ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.ComputeShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::ComputeShouldUnselect)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa466564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.DoHoverUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::DoHoverUpdate)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0xa46657c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.MeetsGrabPrerequisite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::MeetsGrabPrerequisite)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa466f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"MeetsGrabPrerequisite", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.HandStatusSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::HandStatusSelecting)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4664b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"HandStatusSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.ComputeNewTouching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(int32_t, ::Oculus::Interaction::ColliderGroup*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TouchHandGrabInteractor::ComputeNewTouching)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa466b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"ComputeNewTouching", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.ComputeNewRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(int32_t, ::Oculus::Interaction::ColliderGroup*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TouchHandGrabInteractor::ComputeNewRelease)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa4675dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"ComputeNewRelease", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0xa4678b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.Unselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::Unselect)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa467d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.ClearFingerLockStatuses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::ClearFingerLockStatuses)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa466f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"ClearFingerLockStatuses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::TouchHandGrabInteractable> (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0xa467e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.ComputePointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::ComputePointerPose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa468284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectAllTouchHandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::IHandSphereMap*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectAllTouchHandGrabInteractor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa468340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectAllTouchHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::IHandSphereMap*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4683a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectOpenHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectOpenHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa468478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOpenHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectHandSphereMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::Oculus::Interaction::IHandSphereMap*)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectHandSphereMap)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa468548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectHandSphereMap", {}, {::i2c::type_of<::Oculus::Interaction::IHandSphereMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectHoverLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectHoverLocation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa468618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectHoverLocation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectGrabLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectGrabLocation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa468628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectGrabLocation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectOptionalGrabPrerequisite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalGrabPrerequisite)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa468638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalGrabPrerequisite", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectOptionalMinHoverDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(float_t)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalMinHoverDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa468708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalMinHoverDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectOptionalCurlDeltaThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(float_t)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalCurlDeltaThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa468710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalCurlDeltaThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectOptionalCurlTimeThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(float_t)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalCurlTimeThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa468718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalCurlTimeThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectOptionalIterations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(int32_t)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalIterations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa468720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalIterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor.InjectOptionalTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalTimeProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa468728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor::_ctor)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xa468738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__openHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openHand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__openHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openHand;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__openHand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openHand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__OpenHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OpenHand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__OpenHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OpenHand_k__BackingField;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__OpenHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OpenHand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__handSphereMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handSphereMap;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__handSphereMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handSphereMap;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__handSphereMap(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handSphereMap = value;
}
constexpr ::Oculus::Interaction::IHandSphereMap*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get_HandSphereMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandSphereMap;
}
constexpr ::Oculus::Interaction::IHandSphereMap* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get_HandSphereMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandSphereMap;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set_HandSphereMap(::Oculus::Interaction::IHandSphereMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandSphereMap = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__hoverLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__hoverLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoverLocation;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__hoverLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hoverLocation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__grabLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__grabLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabLocation;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__grabLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabLocation = value;
}
constexpr float_t& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__minHoverDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minHoverDistance;
}
constexpr float_t const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__minHoverDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minHoverDistance;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__minHoverDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minHoverDistance = value;
}
constexpr float_t& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__curlDeltaThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curlDeltaThreshold;
}
constexpr float_t const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__curlDeltaThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curlDeltaThreshold;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__curlDeltaThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curlDeltaThreshold = value;
}
constexpr float_t& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__curlTimeThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curlTimeThreshold;
}
constexpr float_t const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__curlTimeThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curlTimeThreshold;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__curlTimeThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curlTimeThreshold = value;
}
constexpr int32_t& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__iterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr int32_t const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__iterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iterations;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__iterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iterations = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__grabPrerequisite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabPrerequisite;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__grabPrerequisite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabPrerequisite;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__grabPrerequisite(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabPrerequisite = value;
}
constexpr ::System::Action*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get_WhenFingerLocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenFingerLocked;
}
constexpr ::System::Action* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get_WhenFingerLocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenFingerLocked;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set_WhenFingerLocked(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenFingerLocked = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__saveOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__saveOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____saveOffset;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__saveOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____saveOffset = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get_GrabOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrabOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get_GrabOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrabOffset;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set_GrabOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrabOffset = value;
}
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get_GrabPrerequisite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrabPrerequisite;
}
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get_GrabPrerequisite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrabPrerequisite;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set_GrabPrerequisite(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrabPrerequisite = value;
}
constexpr ::ArrayW<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*>& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__fingerStatuses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerStatuses;
}
constexpr ::ArrayW<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*> const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__fingerStatuses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerStatuses;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__fingerStatuses(::ArrayW<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerStatuses = value;
}
constexpr ::Oculus::Interaction::TouchShadowHand*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__touchShadowHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchShadowHand;
}
constexpr ::Oculus::Interaction::TouchShadowHand* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__touchShadowHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchShadowHand;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__touchShadowHand(::Oculus::Interaction::TouchShadowHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchShadowHand = value;
}
constexpr ::Oculus::Interaction::Input::ShadowHand*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__fromShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromShadow;
}
constexpr ::Oculus::Interaction::Input::ShadowHand* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__fromShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromShadow;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__fromShadow(::Oculus::Interaction::Input::ShadowHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fromShadow = value;
}
constexpr ::Oculus::Interaction::Input::ShadowHand*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__toShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toShadow;
}
constexpr ::Oculus::Interaction::Input::ShadowHand* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__toShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toShadow;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__toShadow(::Oculus::Interaction::Input::ShadowHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toShadow = value;
}
constexpr ::Oculus::Interaction::Input::ShadowHand*& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__openShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openShadow;
}
constexpr ::Oculus::Interaction::Input::ShadowHand* const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__openShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openShadow;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__openShadow(::Oculus::Interaction::Input::ShadowHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openShadow = value;
}
constexpr bool& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__firstSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstSelect;
}
constexpr bool const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__firstSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstSelect;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__firstSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstSelect = value;
}
constexpr float_t& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__previousTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousTime;
}
constexpr float_t const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__previousTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousTime;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__previousTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousTime = value;
}
constexpr float_t& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__deltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTime;
}
constexpr float_t const& Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_get__deltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deltaTime;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor::__cordl_internal_set__deltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deltaTime = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::TouchHandGrabInteractor::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::TouchHandGrabInteractor::get_OpenHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"get_OpenHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::set_OpenHand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"set_OpenHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::add_WhenFingerLocked(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"add_WhenFingerLocked", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::remove_WhenFingerLocked(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"remove_WhenFingerLocked", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::TouchHandGrabInteractor::get_GrabPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"get_GrabPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::TouchHandGrabInteractor::get_GrabRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"get_GrabRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::TouchHandGrabInteractor::IsFingerLocked(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"IsFingerLocked", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger);
}
inline ::ArrayW<::UnityEngine::Pose> Oculus::Interaction::TouchHandGrabInteractor::GetFingerJoints(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"GetFingerJoints", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Pose>>(this, ___internal_method, finger);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::DoPreprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::DoPostprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::TouchHandGrabInteractor::ComputeShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::TouchHandGrabInteractor::ComputeShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::DoHoverUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::TouchHandGrabInteractor::MeetsGrabPrerequisite()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"MeetsGrabPrerequisite", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::TouchHandGrabInteractor::HandStatusSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"HandStatusSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::ComputeNewTouching(int32_t  idx, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"ComputeNewTouching", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, colliderGroup, offset);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::ComputeNewRelease(int32_t  idx, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"ComputeNewRelease", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, colliderGroup, offset);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::Unselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::ClearFingerLockStatuses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"ClearFingerLockStatuses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::TouchHandGrabInteractable> Oculus::Interaction::TouchHandGrabInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::TouchHandGrabInteractable>>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::TouchHandGrabInteractor::ComputePointerPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectAllTouchHandGrabInteractor(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::IHand*  openHand, ::Oculus::Interaction::IHandSphereMap*  handSphereMap, ::UnityEngine::Transform*  hoverLocation, ::UnityEngine::Transform*  grabLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectAllTouchHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::IHandSphereMap*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, openHand, handSphereMap, hoverLocation, grabLocation);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectOpenHand(::Oculus::Interaction::Input::IHand*  openHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOpenHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, openHand);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectHandSphereMap(::Oculus::Interaction::IHandSphereMap*  handSphereMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectHandSphereMap", {}, {::i2c::type_of<::Oculus::Interaction::IHandSphereMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handSphereMap);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectHoverLocation(::UnityEngine::Transform*  hoverLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectHoverLocation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hoverLocation);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectGrabLocation(::UnityEngine::Transform*  grabLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectGrabLocation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabLocation);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalGrabPrerequisite(::Oculus::Interaction::IActiveState*  grabPrerequisite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalGrabPrerequisite", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabPrerequisite);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalMinHoverDistance(float_t  minHoverDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalMinHoverDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minHoverDistance);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalCurlDeltaThreshold(float_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalCurlDeltaThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threshold);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalCurlTimeThreshold(float_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalCurlTimeThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalIterations(int32_t  iterations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalIterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iterations);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::TouchHandGrabInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TouchHandGrabInteractor* Oculus::Interaction::TouchHandGrabInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TouchHandGrabInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::TouchHandGrabInteractor::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::TouchHandGrabInteractor::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TouchHandGrabInteractor::TouchHandGrabInteractor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor___c::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa468a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor___c.__ctor_b__70_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor___c::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor___c::__ctor_b__70_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa468a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor___c*>(),
                        {"<.ctor>b__70_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor___c.__ctor_b__70_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::TouchHandGrabInteractor___c::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor___c::__ctor_b__70_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa468a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor___c*>(),
                        {"<.ctor>b__70_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::TouchHandGrabInteractor___c::setStaticF___9(::Oculus::Interaction::TouchHandGrabInteractor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::TouchHandGrabInteractor___c*, "<>9", ::Oculus::Interaction::TouchHandGrabInteractor___c*>(std::forward<::Oculus::Interaction::TouchHandGrabInteractor___c*>(value));
}
inline ::Oculus::Interaction::TouchHandGrabInteractor___c* Oculus::Interaction::TouchHandGrabInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::TouchHandGrabInteractor___c*, "<>9", ::Oculus::Interaction::TouchHandGrabInteractor___c*>();
}
inline void Oculus::Interaction::TouchHandGrabInteractor___c::setStaticF___9__70_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__70_0", ::Oculus::Interaction::TouchHandGrabInteractor___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::TouchHandGrabInteractor___c::getStaticF___9__70_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__70_0", ::Oculus::Interaction::TouchHandGrabInteractor___c*>();
}
inline void Oculus::Interaction::TouchHandGrabInteractor___c::setStaticF___9__70_1(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__70_1", ::Oculus::Interaction::TouchHandGrabInteractor___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::TouchHandGrabInteractor___c::getStaticF___9__70_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__70_1", ::Oculus::Interaction::TouchHandGrabInteractor___c*>();
}
inline void Oculus::Interaction::TouchHandGrabInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractor___c::__ctor_b__70_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor___c*>(),
                        {"<.ctor>b__70_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::TouchHandGrabInteractor___c::__ctor_b__70_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor___c*>(),
                        {"<.ctor>b__70_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::TouchHandGrabInteractor___c* Oculus::Interaction::TouchHandGrabInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TouchHandGrabInteractor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TouchHandGrabInteractor___c::TouchHandGrabInteractor___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::*)()>(&::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa465e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_Locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locked;
}
constexpr bool const& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_Locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Locked;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_set_Locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Locked = value;
}
constexpr bool& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_Selecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Selecting;
}
constexpr bool const& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_Selecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Selecting;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_set_Selecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Selecting = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId>& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_Joints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Joints;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId> const& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_Joints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Joints;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_set_Joints(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Joints = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_LocalJoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalJoints;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_LocalJoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalJoints;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_set_LocalJoints(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalJoints = value;
}
constexpr float_t& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_CurlValueAtLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurlValueAtLock;
}
constexpr float_t const& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_CurlValueAtLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurlValueAtLock;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_set_CurlValueAtLock(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurlValueAtLock = value;
}
constexpr float_t& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_Timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timer;
}
constexpr float_t const& Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_get_Timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timer;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::__cordl_internal_set_Timer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timer = value;
}
inline void Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus* Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus::TouchHandGrabInteractor_FingerStatus()   {
}
