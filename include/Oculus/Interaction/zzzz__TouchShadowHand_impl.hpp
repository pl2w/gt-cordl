#pragma once
// IWYU pragma private; include "Oculus/Interaction/TouchShadowHand.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__TouchShadowHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ShadowHand_def.hpp"
#include "Oculus/Interaction/zzzz__ColliderGroup_def.hpp"
#include "Oculus/Interaction/zzzz__HandSphere_def.hpp"
#include "Oculus/Interaction/zzzz__IHandSphereMap_def.hpp"
#include "Oculus/Interaction/zzzz__TouchShadowHand_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.get_ShadowHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ShadowHand* (::Oculus::Interaction::TouchShadowHand::*)()>(&::Oculus::Interaction::TouchShadowHand::get_ShadowHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa468e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"get_ShadowHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.get_TotalIterations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::TouchShadowHand::*)()>(&::Oculus::Interaction::TouchShadowHand::get_TotalIterations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa468e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"get_TotalIterations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.set_TotalIterations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(int32_t)>(&::Oculus::Interaction::TouchShadowHand::set_TotalIterations)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa468ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"set_TotalIterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.get_PushoutIterations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::TouchShadowHand::*)()>(&::Oculus::Interaction::TouchShadowHand::get_PushoutIterations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa468eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"get_PushoutIterations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.set_PushoutIterations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(int32_t)>(&::Oculus::Interaction::TouchShadowHand::set_PushoutIterations)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa468ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"set_PushoutIterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(::Oculus::Interaction::IHandSphereMap*, ::Oculus::Interaction::Input::Handedness, int32_t)>(&::Oculus::Interaction::TouchShadowHand::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa465f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::IHandSphereMap*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.SetShadowRootFromHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(::Oculus::Interaction::Input::ShadowHand*)>(&::Oculus::Interaction::TouchShadowHand::SetShadowRootFromHand)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa467d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowRootFromHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.SetShadowRootFromHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, float_t)>(&::Oculus::Interaction::TouchShadowHand::SetShadowRootFromHands)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa466ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowRootFromHands", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.SetShadowFingerFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(int32_t, ::Oculus::Interaction::Input::ShadowHand*)>(&::Oculus::Interaction::TouchShadowHand::SetShadowFingerFrom)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa46701c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowFingerFrom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.SetShadowFingerFromLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(int32_t, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, float_t)>(&::Oculus::Interaction::TouchShadowHand::SetShadowFingerFromLerp)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa468ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowFingerFromLerp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.SetShadowFingerFromLerps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(int32_t, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, ::ArrayW<float_t>)>(&::Oculus::Interaction::TouchShadowHand::SetShadowFingerFromLerps)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa469064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowFingerFromLerps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.SetShadowFromLerpHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, float_t)>(&::Oculus::Interaction::TouchShadowHand::SetShadowFromLerpHands)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa46920c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowFromLerpHands", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.LoadSpheresForFingerFromShadow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(int32_t, int32_t)>(&::Oculus::Interaction::TouchShadowHand::LoadSpheresForFingerFromShadow)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa469390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"LoadSpheresForFingerFromShadow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.LoadSpheresForHandFromShadow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)()>(&::Oculus::Interaction::TouchShadowHand::LoadSpheresForHandFromShadow)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa469564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"LoadSpheresForHandFromShadow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.CheckSphereCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchShadowHand::*)(::Oculus::Interaction::ColliderGroup*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*)>(&::Oculus::Interaction::TouchShadowHand::CheckSphereCollision)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa4696bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"CheckSphereCollision", {}, {::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.CheckFingerTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchShadowHand::*)(int32_t, int32_t, ::Oculus::Interaction::ColliderGroup*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<int32_t>*)>(&::Oculus::Interaction::TouchShadowHand::CheckFingerTouch)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa467130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"CheckFingerTouch", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.CheckTouchFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::ColliderGroup*, ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*)>(&::Oculus::Interaction::TouchShadowHand::CheckTouchFingers)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa46993c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"CheckTouchFingers", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.GrabReleaseFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchShadowHand::*)(int32_t, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::ColliderGroup*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TouchShadowHand::GrabReleaseFinger)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4677b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabReleaseFinger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.GrabConformFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchShadowHand::*)(int32_t, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::ColliderGroup*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TouchShadowHand::GrabConformFinger)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xa46718c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabConformFinger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.GrabConformFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::ColliderGroup*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TouchShadowHand::GrabConformFingers)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa469a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabConformFingers", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.PushoutFinger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TouchShadowHand::*)(int32_t, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::ColliderGroup*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TouchShadowHand::PushoutFinger)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa466e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"PushoutFinger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.GrabTouchStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::ColliderGroup*, int32_t, ::UnityEngine::Vector3, bool, ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*)>(&::Oculus::Interaction::TouchShadowHand::GrabTouchStep)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0xa469b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabTouchStep", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.GrabTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::Input::ShadowHand*, ::Oculus::Interaction::ColliderGroup*, bool, ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*)>(&::Oculus::Interaction::TouchShadowHand::GrabTouch)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa466a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabTouch", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand.GetJointsFromShadow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand::*)(::ArrayW<::Oculus::Interaction::Input::HandJointId>, ::ArrayW<::UnityEngine::Pose>, bool)>(&::Oculus::Interaction::TouchShadowHand::GetJointsFromShadow)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4674e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GetJointsFromShadow", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Pose>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::ShadowHand*& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__shadowHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shadowHand;
}
constexpr ::Oculus::Interaction::Input::ShadowHand* const& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__shadowHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shadowHand;
}
constexpr void Oculus::Interaction::TouchShadowHand::__cordl_internal_set__shadowHand(::Oculus::Interaction::Input::ShadowHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shadowHand = value;
}
constexpr ::Oculus::Interaction::IHandSphereMap*& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__handSphereMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handSphereMap;
}
constexpr ::Oculus::Interaction::IHandSphereMap* const& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__handSphereMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handSphereMap;
}
constexpr void Oculus::Interaction::TouchShadowHand::__cordl_internal_set__handSphereMap(::Oculus::Interaction::IHandSphereMap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handSphereMap = value;
}
constexpr ::Oculus::Interaction::Input::Handedness& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__handedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr ::Oculus::Interaction::Input::Handedness const& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__handedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr void Oculus::Interaction::TouchShadowHand::__cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handedness = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__spheres()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheres;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>* const& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__spheres() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spheres;
}
constexpr void Oculus::Interaction::TouchShadowHand::__cordl_internal_set__spheres(::System::Collections::Generic::List_1<::Oculus::Interaction::HandSphere>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spheres = value;
}
constexpr int32_t& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__totalIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalIterations;
}
constexpr int32_t const& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__totalIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalIterations;
}
constexpr void Oculus::Interaction::TouchShadowHand::__cordl_internal_set__totalIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalIterations = value;
}
constexpr int32_t& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__pushoutIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushoutIterations;
}
constexpr int32_t const& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__pushoutIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pushoutIterations;
}
constexpr void Oculus::Interaction::TouchShadowHand::__cordl_internal_set__pushoutIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pushoutIterations = value;
}
constexpr int32_t& Oculus::Interaction::TouchShadowHand::__cordl_internal_get_Iterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Iterations;
}
constexpr int32_t const& Oculus::Interaction::TouchShadowHand::__cordl_internal_get_Iterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Iterations;
}
constexpr void Oculus::Interaction::TouchShadowHand::__cordl_internal_set_Iterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Iterations = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__sphereHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sphereHit;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Oculus::Interaction::TouchShadowHand::__cordl_internal_get__sphereHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sphereHit;
}
constexpr void Oculus::Interaction::TouchShadowHand::__cordl_internal_set__sphereHit(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sphereHit = value;
}
inline ::Oculus::Interaction::Input::ShadowHand* Oculus::Interaction::TouchShadowHand::get_ShadowHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"get_ShadowHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ShadowHand*>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::TouchShadowHand::get_TotalIterations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"get_TotalIterations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchShadowHand::set_TotalIterations(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"set_TotalIterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::TouchShadowHand::get_PushoutIterations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"get_PushoutIterations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchShadowHand::set_PushoutIterations(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"set_PushoutIterations", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::TouchShadowHand::_ctor(::Oculus::Interaction::IHandSphereMap*  map, ::Oculus::Interaction::Input::Handedness  handedness, int32_t  iterations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::IHandSphereMap*>(), ::i2c::type_of<::Oculus::Interaction::Input::Handedness>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, handedness, iterations);
}
inline void Oculus::Interaction::TouchShadowHand::SetShadowRootFromHand(::Oculus::Interaction::Input::ShadowHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowRootFromHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::TouchShadowHand::SetShadowRootFromHands(::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowRootFromHands", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline void Oculus::Interaction::TouchShadowHand::SetShadowFingerFrom(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  from)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowFingerFrom", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerIdx, from);
}
inline void Oculus::Interaction::TouchShadowHand::SetShadowFingerFromLerp(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowFingerFromLerp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerIdx, from, to, t);
}
inline void Oculus::Interaction::TouchShadowHand::SetShadowFingerFromLerps(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, ::ArrayW<float_t>  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowFingerFromLerps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerIdx, from, to, t);
}
inline void Oculus::Interaction::TouchShadowHand::SetShadowFromLerpHands(::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"SetShadowFromLerpHands", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
inline void Oculus::Interaction::TouchShadowHand::LoadSpheresForFingerFromShadow(int32_t  fingerIdx, int32_t  jointIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"LoadSpheresForFingerFromShadow", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerIdx, jointIdx);
}
inline void Oculus::Interaction::TouchShadowHand::LoadSpheresForHandFromShadow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"LoadSpheresForHandFromShadow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::TouchShadowHand::CheckSphereCollision(::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset, ::System::Collections::Generic::List_1<int32_t>*  sphereHit, ::System::Collections::Generic::List_1<int32_t>*  sphereIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"CheckSphereCollision", {}, {::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colliderGroup, offset, sphereHit, sphereIndices);
}
inline bool Oculus::Interaction::TouchShadowHand::CheckFingerTouch(int32_t  fingerIdx, int32_t  jointIdx, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset, ::System::Collections::Generic::List_1<int32_t>*  sphereHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"CheckFingerTouch", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingerIdx, jointIdx, colliderGroup, offset, sphereHit);
}
inline void Oculus::Interaction::TouchShadowHand::CheckTouchFingers(::Oculus::Interaction::Input::ShadowHand*  hand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"CheckTouchFingers", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, colliderGroup, result);
}
inline bool Oculus::Interaction::TouchShadowHand::GrabReleaseFinger(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  fromHand, ::Oculus::Interaction::Input::ShadowHand*  toHand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabReleaseFinger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingerIdx, fromHand, toHand, colliderGroup, offset);
}
inline bool Oculus::Interaction::TouchShadowHand::GrabConformFinger(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  fromHand, ::Oculus::Interaction::Input::ShadowHand*  toHand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabConformFinger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingerIdx, fromHand, toHand, colliderGroup, offset);
}
inline void Oculus::Interaction::TouchShadowHand::GrabConformFingers(::Oculus::Interaction::Input::ShadowHand*  fromHand, ::Oculus::Interaction::Input::ShadowHand*  toHand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabConformFingers", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromHand, toHand, colliderGroup, offset);
}
inline bool Oculus::Interaction::TouchShadowHand::PushoutFinger(int32_t  fingerIdx, ::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"PushoutFinger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fingerIdx, from, to, colliderGroup, offset);
}
inline void Oculus::Interaction::TouchShadowHand::GrabTouchStep(::Oculus::Interaction::Input::ShadowHand*  from, ::Oculus::Interaction::Input::ShadowHand*  to, ::Oculus::Interaction::ColliderGroup*  colliderGroup, int32_t  iteration, ::UnityEngine::Vector3  colliderOffset, bool  pushout, ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabTouchStep", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, colliderGroup, iteration, colliderOffset, pushout, result);
}
inline void Oculus::Interaction::TouchShadowHand::GrabTouch(::Oculus::Interaction::Input::ShadowHand*  fromHand, ::Oculus::Interaction::Input::ShadowHand*  toHand, ::Oculus::Interaction::ColliderGroup*  colliderGroup, bool  pushout, ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GrabTouch", {}, {::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ShadowHand*>(), ::i2c::type_of<::Oculus::Interaction::ColliderGroup*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromHand, toHand, colliderGroup, pushout, result);
}
inline void Oculus::Interaction::TouchShadowHand::GetJointsFromShadow(::ArrayW<::Oculus::Interaction::Input::HandJointId>  jointIds, ::ArrayW<::UnityEngine::Pose>  outJoints, bool  local)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand*>(),
                        {"GetJointsFromShadow", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::Input::HandJointId>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Pose>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointIds, outJoints, local);
}
inline ::Oculus::Interaction::TouchShadowHand* Oculus::Interaction::TouchShadowHand::New_ctor(::Oculus::Interaction::IHandSphereMap*  map, ::Oculus::Interaction::Input::Handedness  handedness, int32_t  iterations)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TouchShadowHand*>(map, handedness, iterations));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TouchShadowHand::TouchShadowHand()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchShadowHand_GrabTouchInfo::*)()>(&::Oculus::Interaction::TouchShadowHand_GrabTouchInfo::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4669ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr bool& Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_get_grabbing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbing;
}
constexpr bool const& Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_get_grabbing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbing;
}
constexpr void Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_set_grabbing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbing = value;
}
constexpr ::ArrayW<bool>& Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_get_grabbingFingers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingFingers;
}
constexpr ::ArrayW<bool> const& Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_get_grabbingFingers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbingFingers;
}
constexpr void Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_set_grabbingFingers(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbingFingers = value;
}
constexpr float_t& Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_get_grabT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabT;
}
constexpr float_t const& Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_get_grabT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabT;
}
constexpr void Oculus::Interaction::TouchShadowHand_GrabTouchInfo::__cordl_internal_set_grabT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabT = value;
}
inline void Oculus::Interaction::TouchShadowHand_GrabTouchInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo* Oculus::Interaction::TouchShadowHand_GrabTouchInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TouchShadowHand_GrabTouchInfo*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TouchShadowHand_GrabTouchInfo::TouchShadowHand_GrabTouchInfo()   {
}
