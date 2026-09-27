#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/XRInteractorAffordanceStateProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__BaseAffordanceStateProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractorAffordanceStateProvider_ActivateClickAnimationMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractorAffordanceStateProvider_SelectClickAnimationMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractorAffordanceStateProvider_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__AnimationCurveDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__AffordanceStateData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractorAffordanceStateProvider_ActivateClickAnimationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractorAffordanceStateProvider_SelectClickAnimationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__XRInteractorAffordanceStateProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__ICurveInteractionDataProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionStrengthInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_interactorSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_interactorSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d65a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_interactorSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_interactorSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_interactorSource)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb4d65a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_interactorSource", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_ignoreHoverEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreHoverEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d693c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreHoverEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_ignoreHoverEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreHoverEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreHoverEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_ignoreSelectEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreSelectEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d694c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreSelectEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_ignoreSelectEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreSelectEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreSelectEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_ignoreActivateEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreActivateEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d695c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreActivateEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_ignoreActivateEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreActivateEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreActivateEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_ignoreUGUIHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreUGUIHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d696c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreUGUIHover", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_ignoreUGUIHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreUGUIHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreUGUIHover", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_ignoreUGUISelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreUGUISelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d697c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreUGUISelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_ignoreUGUISelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreUGUISelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreUGUISelect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_ignoreXRInteractionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreXRInteractionEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d698c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreXRInteractionEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_ignoreXRInteractionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreXRInteractionEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreXRInteractionEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_hasXRHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_hasXRHover)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb4d699c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_hasUIHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_hasUIHover)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4d6a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_hasXRSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_hasXRSelection)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb4d6a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_hasUISelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_hasUISelection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4d6b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_isActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_isActivated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4d6b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_isRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_isRegistered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_isBlockedByGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_isBlockedByGroup)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4d6b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_selectClickAnimationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_selectClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_selectClickAnimationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_selectClickAnimationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_selectClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_selectClickAnimationMode", {}, {::i2c::type_of<::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_activateClickAnimationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_activateClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_activateClickAnimationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_activateClickAnimationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_activateClickAnimationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_activateClickAnimationMode", {}, {::i2c::type_of<::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_clickAnimationDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_clickAnimationDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_clickAnimationDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_clickAnimationDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_clickAnimationDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_clickAnimationDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.get_clickAnimationCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_clickAnimationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_clickAnimationCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.set_clickAnimationCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_clickAnimationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d6bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_clickAnimationCurve", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::Awake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb4d6bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.SetBoundInteractionReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::SetBoundInteractionReceiver)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xb4d6668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"SetBoundInteractionReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.BindToProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::BindToProviders)> {
  constexpr static std::size_t size = 0x7dc;
  constexpr static std::size_t addrs = 0xb4d6d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.RefreshState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::RefreshState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4d75b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"RefreshState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.ClearBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::ClearBindings)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0xb4d75e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.GenerateNewAffordanceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::GenerateNewAffordanceState)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0xb4d7e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnRegistered)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4d82cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnUnregistered)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4d8300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnHoverEntered)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xb4d8330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnHoverExited)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xb4d8718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnSelectEntered)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0xb4d8998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnSelectExited)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xb4d8df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.OnLargestInteractionStrengthChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnLargestInteractionStrengthChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb4d90ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.OnActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnActivated)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4d9134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"OnActivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.OnDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnDeactivated)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4d91ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"OnDeactivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.SelectedClickBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::SelectedClickBehavior)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb4d92a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.ActivatedClickBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::ActivatedClickBehavior)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb4d9378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.ClickAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)(uint8_t, float_t, ::System::Action*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::ClickAnimation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb4d9450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider.UIUpdateCheckCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::UIUpdateCheckCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4d7544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"UIUpdateCheckCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb4d94f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider._SelectedClickBehavior_b__96_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::_SelectedClickBehavior_b__96_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4d95f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"<SelectedClickBehavior>b__96_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider._ActivatedClickBehavior_b__97_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::_ActivatedClickBehavior_b__97_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4d95fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"<ActivatedClickBehavior>b__97_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_InteractorSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSource;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_InteractorSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_InteractorSource(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorSource = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreHoverEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreHoverEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreHoverEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IgnoreHoverEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreHoverEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreSelectEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreSelectEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreSelectEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreSelectEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IgnoreSelectEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreSelectEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreActivateEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreActivateEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreActivateEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreActivateEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IgnoreActivateEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreActivateEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreUGUIHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreUGUIHover;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreUGUIHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreUGUIHover;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IgnoreUGUIHover(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreUGUIHover = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreUGUISelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreUGUISelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreUGUISelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreUGUISelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IgnoreUGUISelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreUGUISelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreXRInteractionEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreXRInteractionEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IgnoreXRInteractionEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoreXRInteractionEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IgnoreXRInteractionEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoreXRInteractionEvents = value;
}
constexpr ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_SelectClickAnimationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectClickAnimationMode;
}
constexpr ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_SelectClickAnimationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectClickAnimationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_SelectClickAnimationMode(::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectClickAnimationMode = value;
}
constexpr ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_ActivateClickAnimationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateClickAnimationMode;
}
constexpr ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_ActivateClickAnimationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateClickAnimationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_ActivateClickAnimationMode(::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateClickAnimationMode = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickAnimationDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickAnimationDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_ClickAnimationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClickAnimationDuration = value;
}
constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickAnimationCurve;
}
constexpr ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_ClickAnimationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClickAnimationCurve;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_ClickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClickAnimationCurve = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_Interactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_Interactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_Interactor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactor = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HoverInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverInteractor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HoverInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_HoverInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverInteractor = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_SelectInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_SelectInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_SelectInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectInteractor = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_InteractionStrengthInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengthInteractor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_InteractionStrengthInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengthInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_InteractionStrengthInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionStrengthInteractor = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_RayInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayInteractor;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_RayInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_RayInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RayInteractor = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_CurveInteractionDataProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveInteractionDataProvider;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_CurveInteractionDataProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveInteractionDataProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_CurveInteractionDataProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurveInteractionDataProvider = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IsBoundToInteractionEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsBoundToInteractionEvents;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IsBoundToInteractionEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsBoundToInteractionEvents;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IsBoundToInteractionEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsBoundToInteractionEvents = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasRayInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasRayInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasRayInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasRayInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_HasRayInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasRayInteractor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasCurveInteractionDataProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCurveInteractionDataProvider;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasCurveInteractionDataProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasCurveInteractionDataProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_HasCurveInteractionDataProvider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasCurveInteractionDataProvider = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasHoverInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasHoverInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasHoverInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasHoverInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_HasHoverInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasHoverInteractor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasSelectInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelectInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasSelectInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelectInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_HasSelectInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasSelectInteractor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasInteractionStrengthInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasInteractionStrengthInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_HasInteractionStrengthInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasInteractionStrengthInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_HasInteractionStrengthInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasInteractionStrengthInteractor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IsIXRInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsIXRInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IsIXRInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsIXRInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IsIXRInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsIXRInteractor = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_SelectedClickAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedClickAnimation;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_SelectedClickAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedClickAnimation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_SelectedClickAnimation(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedClickAnimation = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_ActivatedClickAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivatedClickAnimation;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_ActivatedClickAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivatedClickAnimation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_ActivatedClickAnimation(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivatedClickAnimation = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IsActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActivated;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IsActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActivated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IsActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsActivated = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IsRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRegistered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_IsRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsRegistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_IsRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsRegistered = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_BoundActivateInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundActivateInteractable;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_BoundActivateInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundActivateInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_BoundActivateInteractable(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BoundActivateInteractable = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_UIHovering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHovering;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_UIHovering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHovering;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_UIHovering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIHovering = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_UISelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UISelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_UISelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UISelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_UISelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UISelecting = value;
}
constexpr ::UnityEngine::Coroutine*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_UGUIUpdateCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UGUIUpdateCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_get_m_UGUIUpdateCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UGUIUpdateCoroutine;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::__cordl_internal_set_m_UGUIUpdateCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UGUIUpdateCoroutine = value;
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_interactorSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_interactorSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_interactorSource(::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_interactorSource", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreHoverEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreHoverEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreHoverEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreHoverEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreSelectEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreSelectEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreSelectEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreSelectEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreActivateEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreActivateEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreActivateEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreActivateEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreUGUIHover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreUGUIHover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreUGUIHover(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreUGUIHover", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreUGUISelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreUGUISelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreUGUISelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreUGUISelect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_ignoreXRInteractionEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_ignoreXRInteractionEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_ignoreXRInteractionEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_ignoreXRInteractionEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_hasXRHover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_hasUIHover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_hasXRSelection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_hasUISelection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_isActivated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_isRegistered()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_isBlockedByGroup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_selectClickAnimationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_selectClickAnimationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_selectClickAnimationMode(::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_selectClickAnimationMode", {}, {::i2c::type_of<::GlobalNamespace::XRInteractorAffordanceStateProvider_SelectClickAnimationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_activateClickAnimationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_activateClickAnimationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_activateClickAnimationMode(::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_activateClickAnimationMode", {}, {::i2c::type_of<::GlobalNamespace::XRInteractorAffordanceStateProvider_ActivateClickAnimationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_clickAnimationDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_clickAnimationDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_clickAnimationDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_clickAnimationDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::get_clickAnimationCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"get_clickAnimationCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::set_clickAnimationCurve(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"set_clickAnimationCurve", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::SetBoundInteractionReceiver(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"SetBoundInteractionReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::BindToProviders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::RefreshState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"RefreshState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::ClearBindings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::GenerateNewAffordanceState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnLargestInteractionStrengthChanged(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"OnActivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"OnDeactivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::SelectedClickBehavior()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::ActivatedClickBehavior()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::ClickAnimation(uint8_t  targetStateIndex, float_t  duration, ::System::Action*  onComplete)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, targetStateIndex, duration, onComplete);
}
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::UIUpdateCheckCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"UIUpdateCheckCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::_SelectedClickBehavior_b__96_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"<SelectedClickBehavior>b__96_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::_ActivatedClickBehavior_b__97_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>(),
                        {"<ActivatedClickBehavior>b__97_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider::XRInteractorAffordanceStateProvider()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4d9878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::MoveNext)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xb4d987c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d9b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4d9b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d9b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::__cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99::XRInteractorAffordanceStateProvider__UIUpdateCheckCoroutine_d__99()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4d9658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4d9680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::MoveNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb4d9684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d9808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d9848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr uint8_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get_targetStateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetStateIndex;
}
constexpr uint8_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get_targetStateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetStateIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_set_targetStateIndex(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetStateIndex = value;
}
constexpr ::System::Action*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr ::System::Action* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_set_onComplete(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onComplete = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get__elapsedTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime_5__2;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_get__elapsedTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elapsedTime_5__2;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::__cordl_internal_set__elapsedTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____elapsedTime_5__2 = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::XRInteractorAffordanceStateProvider__ClickAnimation_d__98::XRInteractorAffordanceStateProvider__ClickAnimation_d__98()   {
}
