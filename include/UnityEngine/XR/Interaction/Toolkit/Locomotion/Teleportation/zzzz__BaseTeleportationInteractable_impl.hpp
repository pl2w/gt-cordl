#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/BaseTeleportationInteractable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_TeleportTrigger_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__MatchOrientation_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__IXRReticleDirectionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_TeleportTrigger_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__MatchOrientation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportingEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportingEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.get_teleportationProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_teleportationProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44bfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_teleportationProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.set_teleportationProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_teleportationProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb44bfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_teleportationProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.get_matchOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_matchOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44bff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_matchOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.set_matchOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_matchOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44bffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_matchOrientation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.get_matchDirectionalInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_matchDirectionalInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_matchDirectionalInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.set_matchDirectionalInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_matchDirectionalInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_matchDirectionalInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.get_teleportTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_teleportTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_teleportTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.set_teleportTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_teleportTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_teleportTrigger", {}, {::i2c::type_of<::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.get_filterSelectionByHitNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_filterSelectionByHitNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_filterSelectionByHitNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.set_filterSelectionByHitNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_filterSelectionByHitNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_filterSelectionByHitNormal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.get_upNormalToleranceDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_upNormalToleranceDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_upNormalToleranceDegrees", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.set_upNormalToleranceDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_upNormalToleranceDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_upNormalToleranceDegrees", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.get_teleporting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_teleporting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_teleporting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.set_teleporting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_teleporting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb44c04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_teleporting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::Awake)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb44c05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb44c120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.GenerateTeleportRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::RaycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::GenerateTeleportRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44c12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.SendTeleportRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::SendTeleportRequest)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0xb44c134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"SendTeleportRequest", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.UpdateTeleportRequestRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::UpdateTeleportRequestRotation)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb44c578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"UpdateTeleportRequestRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.ProcessInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::ProcessInteractable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb44c6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::OnSelectEntered)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb44cc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::OnSelectExited)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb44cc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.OnActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::OnActivated)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb44cccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.OnDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::OnDeactivated)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb44cd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.IsSelectableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::IsSelectableBy)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb44cd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.GetReticleDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::GetReticleDirection)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xb44cf28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"GetReticleDirection", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable.GenerateTeleportRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::RaycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::GenerateTeleportRequest)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb44d1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 116}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xb44d228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable._ProcessInteractable_g__CalculateTeleportForward_37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::_ProcessInteractable_g__CalculateTeleportForward_37_0)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0xb44c814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"<ProcessInteractable>g__CalculateTeleportForward|37_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportationProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportationProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportationProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportationProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_set_m_TeleportationProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportationProvider = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_MatchOrientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MatchOrientation;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_MatchOrientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MatchOrientation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_set_m_MatchOrientation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MatchOrientation = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_MatchDirectionalInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MatchDirectionalInput;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_MatchDirectionalInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MatchDirectionalInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_set_m_MatchDirectionalInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MatchDirectionalInput = value;
}
constexpr ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportTrigger;
}
constexpr ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportTrigger;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_set_m_TeleportTrigger(::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportTrigger = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_FilterSelectionByHitNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FilterSelectionByHitNormal;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_FilterSelectionByHitNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FilterSelectionByHitNormal;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_set_m_FilterSelectionByHitNormal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FilterSelectionByHitNormal = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_UpNormalToleranceDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpNormalToleranceDegrees;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_UpNormalToleranceDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpNormalToleranceDegrees;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_set_m_UpNormalToleranceDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpNormalToleranceDegrees = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_Teleporting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Teleporting;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_Teleporting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Teleporting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_set_m_Teleporting(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Teleporting = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportingEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportingEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportingEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportingEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_set_m_TeleportingEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportingEventArgs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::Vector3>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportForwardPerInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportForwardPerInteractor;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::Vector3>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_get_m_TeleportForwardPerInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportForwardPerInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::__cordl_internal_set_m_TeleportForwardPerInteractor(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportForwardPerInteractor = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider> UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_teleportationProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_teleportationProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_teleportationProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_teleportationProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_matchOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_matchOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_matchOrientation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_matchOrientation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_matchDirectionalInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_matchDirectionalInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_matchDirectionalInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_matchDirectionalInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_teleportTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_teleportTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_teleportTrigger(::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_teleportTrigger", {}, {::i2c::type_of<::GlobalNamespace::BaseTeleportationInteractable_TeleportTrigger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_filterSelectionByHitNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_filterSelectionByHitNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_filterSelectionByHitNormal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_filterSelectionByHitNormal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_upNormalToleranceDegrees()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_upNormalToleranceDegrees", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_upNormalToleranceDegrees(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_upNormalToleranceDegrees", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::get_teleporting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"get_teleporting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::set_teleporting(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"set_teleporting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, raycastHit, teleportRequest);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::SendTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"SendTeleportRequest", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::UpdateTeleportRequestRotation(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"UpdateTeleportRequestRotation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, teleportRequest);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::ProcessInteractable(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::GetReticleDirection(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::Vector3  hitNormal, ::by_ref<::UnityEngine::Vector3>  reticleUp, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  optionalReticleForward)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"GetReticleDirection", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, hitNormal, reticleUp, optionalReticleForward);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(), 116}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, raycastHit, teleportRequest);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::_ProcessInteractable_g__CalculateTeleportForward_37_0(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>(),
                        {"<ProcessInteractable>g__CalculateTeleportForward|37_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__IXRReticleDirectionProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRReticleDirectionProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable::BaseTeleportationInteractable()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c.__ctor_b__46_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::__ctor_b__46_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb44d4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>(),
                        {"<.ctor>b__46_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::setStaticF___9__46_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*, "<>9__46_0", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::getStaticF___9__46_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>*, "<>9__46_0", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::__ctor_b__46_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>(),
                        {"<.ctor>b__46_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::BaseTeleportationInteractable___c::BaseTeleportationInteractable___c()   {
}
