#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabInteraction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteraction_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabTypeFlags_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabResult_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabTarget_GrabAnchor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.TryCalculateBestGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*, ::Oculus::Interaction::Grab::GrabTypeFlags, ::by_ref<::GlobalNamespace::HandGrabTarget_GrabAnchor>, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::TryCalculateBestGrab)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4deb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"TryCalculateBestGrab", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandGrabTarget_GrabAnchor>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.CurrentGrabType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::CurrentGrabType)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4debac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"CurrentGrabType", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.CalculateBestGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*, ::Oculus::Interaction::Grab::GrabTypeFlags, ::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::CalculateBestGrab)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa4dc34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"CalculateBestGrab", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.GenerateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::GenerateMovement)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4dad94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.GetHandGrabPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::GetHandGrabPose)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa4da540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GetHandGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.GetPoseScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*, ::Oculus::Interaction::Grab::GrabTypeFlags, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::GetPoseScore)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xa4dbd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GetPoseScore", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.CanInteractWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::CanInteractWith)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xa4db7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"CanInteractWith", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.GetGrabOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::GetGrabOffset)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4daca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GetGrabOffset", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.ComputeHandGrabScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*, ::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>, bool)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::ComputeHandGrabScore)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa4dc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"ComputeHandGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.ComputeShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::ComputeShouldSelect)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa4d9f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"ComputeShouldSelect", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.ComputeShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabTypeFlags (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::ComputeShouldUnselect)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0xa4da654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"ComputeShouldUnselect", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.GrabbingFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::GrabbingFingers)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa4d988c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GrabbingFingers", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.SupportsPinch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::SupportsPinch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4df004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"SupportsPinch", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.SupportsPalm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::SupportsPalm)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4df0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"SupportsPalm", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.SupportsPinch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::SupportsPinch)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4df164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"SupportsPinch", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.SupportsPalm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::Grab::GrabTypeFlags)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::SupportsPalm)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4df214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"SupportsPalm", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabInteraction.GetPoseOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::Grab::GrabTypeFlags, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::HandGrab::HandGrabInteraction::GetPoseOffset)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0xa4dec58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GetPoseOffset", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::HandGrab::HandGrabInteraction::TryCalculateBestGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  grabTypes, ::by_ref<::GlobalNamespace::HandGrabTarget_GrabAnchor>  anchorMode, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  handGrabResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"TryCalculateBestGrab", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::by_ref<::GlobalNamespace::HandGrabTarget_GrabAnchor>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handGrabInteractor, interactable, grabTypes, anchorMode, handGrabResult);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::HandGrabInteraction::CurrentGrabType(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"CurrentGrabType", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(nullptr, ___internal_method, handGrabInteractor);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteraction::CalculateBestGrab(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  grabFlags, ::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>  activeGrabFlags, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"CalculateBestGrab", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handGrabInteractor, interactable, grabFlags, activeGrabFlags, result);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::HandGrab::HandGrabInteraction::GenerateMovement(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(nullptr, ___internal_method, handGrabInteractor, interactable);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabInteraction::GetHandGrabPose(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GetHandGrabPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, handGrabInteractor);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::HandGrab::HandGrabInteraction::GetPoseScore(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  interactable, ::Oculus::Interaction::Grab::GrabTypeFlags  grabTypes, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GetPoseScore", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(nullptr, ___internal_method, handGrabInteractor, interactable, grabTypes, result);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteraction::CanInteractWith(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"CanInteractWith", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handGrabInteractor, handGrabInteractable);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::HandGrabInteraction::GetGrabOffset(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GetGrabOffset", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, handGrabInteractor);
}
inline float_t Oculus::Interaction::HandGrab::HandGrabInteraction::ComputeHandGrabScore(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable, ::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>  handGrabTypes, bool  includeSelecting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"ComputeHandGrabScore", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::GrabTypeFlags>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, handGrabInteractor, handGrabInteractable, handGrabTypes, includeSelecting);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::HandGrabInteraction::ComputeShouldSelect(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"ComputeShouldSelect", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(nullptr, ___internal_method, handGrabInteractor, handGrabInteractable);
}
inline ::Oculus::Interaction::Grab::GrabTypeFlags Oculus::Interaction::HandGrab::HandGrabInteraction::ComputeShouldUnselect(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"ComputeShouldUnselect", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabTypeFlags>(nullptr, ___internal_method, handGrabInteractor, handGrabInteractable);
}
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::HandGrab::HandGrabInteraction::GrabbingFingers(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GrabbingFingers", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(nullptr, ___internal_method, handGrabInteractor, handGrabInteractable);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteraction::SupportsPinch(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"SupportsPinch", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handGrabInteractor, handGrabInteractable);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteraction::SupportsPalm(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::HandGrab::IHandGrabInteractable*  handGrabInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"SupportsPalm", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handGrabInteractor, handGrabInteractable);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteraction::SupportsPinch(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::Grab::GrabTypeFlags  grabTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"SupportsPinch", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handGrabInteractor, grabTypes);
}
inline bool Oculus::Interaction::HandGrab::HandGrabInteraction::SupportsPalm(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::Grab::GrabTypeFlags  grabTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"SupportsPalm", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handGrabInteractor, grabTypes);
}
inline void Oculus::Interaction::HandGrab::HandGrabInteraction::GetPoseOffset(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::Grab::GrabTypeFlags  anchorMode, ::by_ref<::UnityEngine::Pose>  pose, ::by_ref<::UnityEngine::Pose>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabInteraction*>(),
                        {"GetPoseOffset", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Grab::GrabTypeFlags>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handGrabInteractor, anchorMode, pose, offset);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabInteraction::HandGrabInteraction()   {
}
