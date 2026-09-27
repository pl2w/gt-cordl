#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/XRInteractableAffordanceStateProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__BaseAffordanceStateProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_ActivateClickAnimationMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_SelectClickAnimationMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__AnimationCurveDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__AffordanceStateData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_ActivateClickAnimationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_SelectClickAnimationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractableAffordanceStateProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRFocusInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractionStrengthInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_interactableSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_interactableSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d360c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_interactableSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_interactableSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_interactableSource)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb4d3614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_interactableSource", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_ignoreHoverEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreHoverEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d393c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreHoverEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_ignoreHoverEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreHoverEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreHoverEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_ignoreHoverPriorityEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreHoverPriorityEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d394c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreHoverPriorityEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_ignoreHoverPriorityEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreHoverPriorityEvents)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4d3954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreHoverPriorityEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_ignoreFocusEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreFocusEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreFocusEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_ignoreFocusEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreFocusEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreFocusEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_ignoreSelectEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreSelectEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreSelectEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_ignoreSelectEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreSelectEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreSelectEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_ignoreActivateEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreActivateEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreActivateEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_ignoreActivateEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreActivateEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreActivateEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_selectClickAnimationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_selectClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_selectClickAnimationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_selectClickAnimationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_selectClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_selectClickAnimationMode", {}, {::i2c::type_of<::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_activateClickAnimationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_activateClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_activateClickAnimationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_activateClickAnimationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_activateClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_activateClickAnimationMode", {}, {::i2c::type_of<::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_clickAnimationDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_clickAnimationDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_clickAnimationDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_clickAnimationDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_clickAnimationDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_clickAnimationDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_clickAnimationCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_clickAnimationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_clickAnimationCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.set_clickAnimationCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_clickAnimationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_clickAnimationCurve", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_isHovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isHovered)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb4d3b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_isSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isSelected)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb4d3bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_isFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isFocused)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4d3c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_isActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.get_isRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isRegistered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::Awake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb4d3d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnValidate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4d3eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.SetBoundInteractionReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::SetBoundInteractionReceiver)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xb4d36d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"SetBoundInteractionReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnRegistered)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4d3f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnUnregistered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d3f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnFirstHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstHoverEntered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4d3f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnLastHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastHoverExited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4d3f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnHoverEntered)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb4d3f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnHoverExited)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4d40fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.StopHoveredPriorityRoutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopHoveredPriorityRoutine)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb4d39f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"StopHoveredPriorityRoutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnFirstSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstSelectEntered)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4d4194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnLastSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastSelectExited)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4d4220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnFirstFocusEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstFocusEntered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4d42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnLastFocusExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastFocusExited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4d42c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnActivatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnActivatedEvent)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb4d42c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnDeactivatedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnDeactivatedEvent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4d435c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.OnLargestInteractionStrengthChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLargestInteractionStrengthChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4d4400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.SelectedClickBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::SelectedClickBehavior)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb4d4418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.ActivatedClickBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ActivatedClickBehavior)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb4d4500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.StopActivatedCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopActivatedCoroutine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb4d45d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"StopActivatedCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.StopSelectedCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopSelectedCoroutine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb4d4614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"StopSelectedCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.StopAllClickAnimations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopAllClickAnimations)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4d44e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"StopAllClickAnimations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.ClickAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)(uint8_t, float_t, ::System::Action*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ClickAnimation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4d4658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.GenerateNewAffordanceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::GenerateNewAffordanceState)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0xb4d4720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.HoveredPriorityRoutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::HoveredPriorityRoutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4d4090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"HoveredPriorityRoutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.BindToProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::BindToProviders)> {
  constexpr static std::size_t size = 0xbf8;
  constexpr static std::size_t addrs = 0xb4d4bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.RefreshState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::RefreshState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4d3a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"RefreshState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider.ClearBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ClearBindings)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0xb4d57ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4d615c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider._SelectedClickBehavior_b__86_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_SelectedClickBehavior_b__86_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4d6200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"<SelectedClickBehavior>b__86_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider._ActivatedClickBehavior_b__87_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_ActivatedClickBehavior_b__87_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4d620c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"<ActivatedClickBehavior>b__87_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_InteractableSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableSource;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_InteractableSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_InteractableSource(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableSource = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreHoverEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreHoverEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IgnoreHoverEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreHoverEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverPriorityEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreHoverPriorityEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverPriorityEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreHoverPriorityEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IgnoreHoverPriorityEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreHoverPriorityEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreFocusEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreFocusEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreFocusEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreFocusEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IgnoreFocusEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreFocusEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreSelectEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreSelectEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreSelectEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreSelectEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IgnoreSelectEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreSelectEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreActivateEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreActivateEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IgnoreActivateEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreActivateEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IgnoreActivateEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreActivateEvents = value;
}
constexpr ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectClickAnimationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectClickAnimationMode;
}
constexpr ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectClickAnimationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectClickAnimationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_SelectClickAnimationMode(::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectClickAnimationMode = value;
}
constexpr ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivateClickAnimationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateClickAnimationMode;
}
constexpr ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivateClickAnimationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateClickAnimationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ActivateClickAnimationMode(::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateClickAnimationMode = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickAnimationDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickAnimationDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ClickAnimationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClickAnimationDuration = value;
}
constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickAnimationCurve;
}
constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickAnimationCurve;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ClickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClickAnimationCurve = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_Interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_Interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoverInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoverInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HoverInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverInteractable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_SelectInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectInteractable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_FocusInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_FocusInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_FocusInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FocusInteractable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivateInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivateInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ActivateInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateInteractable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_InteractionStrengthInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengthInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_InteractionStrengthInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengthInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_InteractionStrengthInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionStrengthInteractable = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectedClickAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedClickAnimation;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_SelectedClickAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedClickAnimation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_SelectedClickAnimation(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedClickAnimation = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivatedClickAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivatedClickAnimation;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_ActivatedClickAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivatedClickAnimation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_ActivatedClickAnimation(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivatedClickAnimation = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoveredPriorityRoutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoveredPriorityRoutine;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoveredPriorityRoutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoveredPriorityRoutine;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HoveredPriorityRoutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoveredPriorityRoutine = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsBoundToInteractionEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsBoundToInteractionEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsBoundToInteractionEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsBoundToInteractionEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IsBoundToInteractionEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsBoundToInteractionEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActivated;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActivated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IsActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsActivated = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRegistered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRegistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IsRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsRegistered = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsHoveredPriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsHoveredPriority;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_IsHoveredPriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsHoveredPriority;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_IsHoveredPriority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsHoveredPriority = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HasHoverInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasHoverInteractable;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HasHoverInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasHoverInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HasHoverInteractable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasHoverInteractable = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HasSelectInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelectInteractable;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HasSelectInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelectInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HasSelectInteractable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasSelectInteractable = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HasInteractionStrengthInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasInteractionStrengthInteractable;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HasInteractionStrengthInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasInteractionStrengthInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HasInteractionStrengthInteractable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasInteractionStrengthInteractable = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoveringPriorityInteractorCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoveringPriorityInteractorCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_get_m_HoveringPriorityInteractorCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoveringPriorityInteractorCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::__cordl_internal_set_m_HoveringPriorityInteractorCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoveringPriorityInteractorCount = value;
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_interactableSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_interactableSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_interactableSource(::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_interactableSource", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreHoverEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreHoverEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreHoverEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreHoverEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreHoverPriorityEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreHoverPriorityEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreHoverPriorityEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreHoverPriorityEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreFocusEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreFocusEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreFocusEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreFocusEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreSelectEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreSelectEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreSelectEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreSelectEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_ignoreActivateEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_ignoreActivateEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_ignoreActivateEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_ignoreActivateEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_selectClickAnimationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_selectClickAnimationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_selectClickAnimationMode(::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_selectClickAnimationMode", {}, {::i2c::type_of<::GlobalNamespace::XRInteractableAffordanceStateProvider_SelectClickAnimationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_activateClickAnimationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_activateClickAnimationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_activateClickAnimationMode(::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_activateClickAnimationMode", {}, {::i2c::type_of<::GlobalNamespace::XRInteractableAffordanceStateProvider_ActivateClickAnimationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_clickAnimationDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_clickAnimationDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_clickAnimationDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_clickAnimationDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_clickAnimationCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"get_clickAnimationCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::set_clickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"set_clickAnimationCurve", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isHovered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isSelected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isFocused()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isActivated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::get_isRegistered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::SetBoundInteractionReceiver(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"SetBoundInteractionReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, receiver);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopHoveredPriorityRoutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"StopHoveredPriorityRoutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnFirstFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLastFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnActivatedEvent(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnDeactivatedEvent(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::OnLargestInteractionStrengthChanged(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::SelectedClickBehavior()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ActivatedClickBehavior()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopActivatedCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"StopActivatedCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopSelectedCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"StopSelectedCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::StopAllClickAnimations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"StopAllClickAnimations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ClickAnimation(uint8_t  targetStateIndex, float_t  duration, ::System::Action*  onComplete)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, targetStateIndex, duration, onComplete);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::GenerateNewAffordanceState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::HoveredPriorityRoutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"HoveredPriorityRoutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::BindToProviders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::RefreshState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"RefreshState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::ClearBindings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_SelectedClickBehavior_b__86_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"<SelectedClickBehavior>b__86_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::_ActivatedClickBehavior_b__87_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>(),
                        {"<ActivatedClickBehavior>b__87_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider::XRInteractableAffordanceStateProvider()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4d4bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4d63f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::MoveNext)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb4d63f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4d6560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::__cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93::XRInteractableAffordanceStateProvider__HoveredPriorityRoutine_d__93()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4d46f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4d6218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::MoveNext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb4d621c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d63ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4d63b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d63ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr uint8_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get_targetStateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetStateIndex;
}
constexpr uint8_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get_targetStateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetStateIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_set_targetStateIndex(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetStateIndex = value;
}
constexpr ::System::Action*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_set_onComplete(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onComplete = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get__elapsedTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime_5__2;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_get__elapsedTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime_5__2;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::__cordl_internal_set__elapsedTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elapsedTime_5__2 = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractableAffordanceStateProvider__ClickAnimation_d__91::XRInteractableAffordanceStateProvider__ClickAnimation_d__91()   {
}
