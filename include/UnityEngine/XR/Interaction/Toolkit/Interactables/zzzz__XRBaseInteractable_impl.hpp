#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRBaseInteractable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__InteractableFocusMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__InteractableSelectMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_DistanceCalculationMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__HashSetList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRFilterList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRHoverFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRInteractionStrengthFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRSelectFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Gaze/zzzz__IXROverridesGazeAutoSelect_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__DistanceInfo_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRFocusInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractionStrengthInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__InteractableFocusMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__InteractableSelectMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_DistanceCalculationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_MovementType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ExposedRegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractableEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.add_registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::add_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4915f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"add_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.remove_registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::remove_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4916a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"remove_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.add_unregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::add_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb491750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"add_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.remove_unregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::remove_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb491800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"remove_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_getDistanceOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_getDistanceOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4918b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_getDistanceOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_getDistanceOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_getDistanceOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4918b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_getDistanceOverride", {}, {::i2c::type_of<::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4918c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_interactionManager)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4918c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_colliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_colliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_colliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_interactionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_interactionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_interactionLayers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_distanceCalculationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_distanceCalculationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_distanceCalculationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_distanceCalculationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_distanceCalculationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_distanceCalculationMode", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_selectMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_selectMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_selectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_selectMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_focusMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_focusMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_focusMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_focusMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_focusMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_focusMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_customReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_customReticle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_customReticle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_customReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_customReticle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_customReticle", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_allowGazeInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_allowGazeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_allowGazeInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_allowGazeInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_allowGazeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_allowGazeInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_allowGazeSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_allowGazeSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_allowGazeSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_allowGazeSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_allowGazeSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_allowGazeSelect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_overrideGazeTimeToSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_overrideGazeTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_overrideGazeTimeToSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_overrideGazeTimeToSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_overrideGazeTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_overrideGazeTimeToSelect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_gazeTimeToSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_gazeTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_gazeTimeToSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_gazeTimeToSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_gazeTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_gazeTimeToSelect", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_overrideTimeToAutoDeselectGaze
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_overrideTimeToAutoDeselectGaze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_overrideTimeToAutoDeselectGaze", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_overrideTimeToAutoDeselectGaze
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_overrideTimeToAutoDeselectGaze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_overrideTimeToAutoDeselectGaze", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_timeToAutoDeselectGaze
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_timeToAutoDeselectGaze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_timeToAutoDeselectGaze", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_timeToAutoDeselectGaze
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_timeToAutoDeselectGaze)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_timeToAutoDeselectGaze", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_allowGazeAssistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_allowGazeAssistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_allowGazeAssistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_allowGazeAssistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_allowGazeAssistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_allowGazeAssistance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_firstHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_firstHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_lastHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_lastHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_lastHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_lastHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_lastHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_lastHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_hoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_hoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_hoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_hoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_hoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_hoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_hoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_hoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_hoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_hoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_hoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_hoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_firstSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_firstSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_lastSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_lastSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_lastSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_lastSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_lastSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_lastSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_selectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_selectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_selectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_selectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_selectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_selectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_selectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_selectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_firstFocusEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstFocusEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstFocusEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_firstFocusEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstFocusEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstFocusEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_lastFocusExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_lastFocusExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_lastFocusExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_lastFocusExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_lastFocusExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_lastFocusExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_focusEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_focusEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_focusEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_focusEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_focusEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_focusEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_focusExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_focusExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_focusExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_focusExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_focusExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_focusExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_activated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_activated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_activated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_activated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_activated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_activated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_deactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_deactivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_deactivated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_deactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_deactivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_deactivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_interactorsHovering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactorsHovering)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb491bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactorsHovering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_isHovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_isHovered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_isHovered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_isHovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_isHovered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_isHovered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_interactorsSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactorsSelecting)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb491c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactorsSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_firstInteractorSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstInteractorSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstInteractorSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_firstInteractorSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstInteractorSelecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb491d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstInteractorSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_isSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_isSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_isSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_isSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_isSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_isSelected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_interactionGroupsFocusing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionGroupsFocusing)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb491d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionGroupsFocusing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_firstInteractionGroupFocusing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstInteractionGroupFocusing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstInteractionGroupFocusing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_firstInteractionGroupFocusing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstInteractionGroupFocusing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb491ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstInteractionGroupFocusing", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_isFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_isFocused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_isFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_isFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_isFocused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_canFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_canFocus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb491dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_canFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_startingHoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_startingHoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_startingHoverFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_startingHoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_startingHoverFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb491e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_startingHoverFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_hoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_hoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_hoverFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_startingSelectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_startingSelectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_startingSelectFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_startingSelectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_startingSelectFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb491e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_startingSelectFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_selectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_startingInteractionStrengthFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_startingInteractionStrengthFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_startingInteractionStrengthFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_startingInteractionStrengthFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_startingInteractionStrengthFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb491e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_startingInteractionStrengthFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_interactionStrengthFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionStrengthFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionStrengthFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_largestInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_largestInteractionStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_largestInteractionStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb491e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::Awake)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb491e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb492104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb49211c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4921c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.FindCreateInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::FindCreateInteractionManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb492044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"FindCreateInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.RegisterWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::RegisterWithInteractionManager)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb491964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"RegisterWithInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnregisterWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnregisterWithInteractionManager)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb492120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnregisterWithInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.GetAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4921c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.GetAttachPoseOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetAttachPoseOnSelect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb4921cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"GetAttachPoseOnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.GetLocalAttachPoseOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetLocalAttachPoseOnSelect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb49229c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"GetLocalAttachPoseOnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.GetDistanceSqrToInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetDistanceSqrToInteractor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb49236c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.GetDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetDistance)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb492494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.GetInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetInteractionStrength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4925c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"GetInteractionStrength", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.IsHoverableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsHoverableBy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb492640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.IsSelectableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsSelectableBy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4926c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.IsHovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsHovered)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb492750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"IsHovered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.IsSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsSelected)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb4927c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"IsSelected", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.IsHovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsHovered)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb492830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"IsHovered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.IsSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsSelected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4928a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"IsSelected", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.GetCustomReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetCustomReticle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb492918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.AttachCustomReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::AttachCustomReticle)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xb492990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.RemoveCustomReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::RemoveCustomReticle)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xb492cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.CaptureAttachPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::CaptureAttachPose)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb492f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"CaptureAttachPose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.ProcessInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessInteractable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4930f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractionStrengthInteractable_ProcessInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractionStrengthInteractable_ProcessInteractionStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4930fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractionStrengthInteractable.ProcessInteractionStrength", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_OnRegistered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable.OnRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_OnUnregistered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49311c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable.OnUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_OnActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_OnActivated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49312c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable.OnActivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_OnDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_OnDeactivated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49313c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable.OnDeactivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_IsHoverableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_IsHoverableBy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb49314c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.IsHoverableBy", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverEntering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4931ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4931bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverExiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4931cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4931dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_IsSelectableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_IsSelectableBy)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb4931ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.IsSelectableBy", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectEntering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49324c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49325c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectExiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49326c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49327c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusEntering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49329c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusExiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4932ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4932bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnRegistered)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb4932cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnUnregistered)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb493404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 81}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverEntering)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb49353c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverEntered)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4936a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnHoverExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverExiting)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb493740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverExited)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb493944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 85}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectEntering)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb4939c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectEntered)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb493b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectExiting)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb493b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectExited)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb493d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnFocusEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnFocusEntering)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb493df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnFocusEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnFocusEntered)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb493e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnFocusExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnFocusExiting)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb493f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnFocusExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnFocusExited)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb493fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnActivated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb494040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnDeactivated)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4940a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.ProcessInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessInteractionStrength)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0xb494100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.ReadInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ReadInteractionStrength)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb4946b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"ReadInteractionStrength", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.ProcessHoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessHoverFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49319c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"ProcessHoverFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.ProcessSelectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessSelectFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49323c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"ProcessSelectFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.ProcessInteractionStrengthFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessInteractionStrengthFilters)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4946a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"ProcessInteractionStrengthFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_interactionLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionLayerMask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb49477c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_interactionLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_interactionLayerMask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4947f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_interactionLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onFirstHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onFirstHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb494874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onFirstHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_onFirstHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onFirstHoverEntered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb49487c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onFirstHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onLastHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onLastHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb494880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onLastHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_onLastHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onLastHoverExited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb494888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onLastHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_onHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onHoverEntered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb494894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb494898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_onHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onHoverExited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4948a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4948a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_onSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onSelectEntered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4948ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4948b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_onSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onSelectExited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4948b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4948bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_onSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onSelectCanceled)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4948c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onSelectCanceled", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4948c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_onActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onActivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4948d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onActivate", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onDeactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4948d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_onDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4948dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onDeactivate", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onFirstHoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onFirstHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4948e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onFirstHoverEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onHoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4948e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onHoverEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onHoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4948f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onHoverExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onLastHoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onLastHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4948f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onLastHoverExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onSelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb494900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onSelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb494908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_onSelectCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectCancel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb494910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectCancel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverEntering)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverEntered)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 98}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnHoverExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverExiting)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 99}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverExited)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 100}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectEntering)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectEntered)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectExiting)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectExited)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectCanceling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectCanceling)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 105}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectCanceled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnActivate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.OnDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnDeactivate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.GetDistanceSqrToInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetDistanceSqrToInteractor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 109}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.AttachCustomReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::AttachCustomReticle)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 110}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.RemoveCustomReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::RemoveCustomReticle)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb494fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 111}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_hoveringInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_hoveringInteractors)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb49505c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_hoveringInteractors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.get_selectingInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectingInteractor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4950d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectingInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.set_selectingInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_selectingInteractor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb495154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_selectingInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.IsHoverableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsHoverableBy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4951d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 112}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.IsSelectableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsSelectableBy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb49524c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 113}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::_ctor)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0xb4952c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable.UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable.get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_registered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_registered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registered = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_unregistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unregistered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_unregistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unregistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unregistered = value;
}
constexpr ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__getDistanceOverride_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getDistanceOverride_k__BackingField;
}
constexpr ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__getDistanceOverride_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getDistanceOverride_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set__getDistanceOverride_k__BackingField(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getDistanceOverride_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionManager = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_Colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_Colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Colliders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_Colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Colliders = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionLayers;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionLayers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_InteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionLayers = value;
}
constexpr ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_DistanceCalculationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceCalculationMode;
}
constexpr ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_DistanceCalculationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DistanceCalculationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_DistanceCalculationMode(::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DistanceCalculationMode = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_SelectMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_SelectMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_SelectMode(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectMode = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FocusMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FocusMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_FocusMode(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FocusMode = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_CustomReticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomReticle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_CustomReticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomReticle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_CustomReticle(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CustomReticle = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_AllowGazeInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowGazeInteraction;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_AllowGazeInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowGazeInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_AllowGazeInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowGazeInteraction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_AllowGazeSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowGazeSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_AllowGazeSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowGazeSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_AllowGazeSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowGazeSelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_OverrideGazeTimeToSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideGazeTimeToSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_OverrideGazeTimeToSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideGazeTimeToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_OverrideGazeTimeToSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideGazeTimeToSelect = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_GazeTimeToSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeTimeToSelect;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_GazeTimeToSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GazeTimeToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_GazeTimeToSelect(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GazeTimeToSelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_OverrideTimeToAutoDeselectGaze()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideTimeToAutoDeselectGaze;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_OverrideTimeToAutoDeselectGaze() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideTimeToAutoDeselectGaze;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_OverrideTimeToAutoDeselectGaze(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideTimeToAutoDeselectGaze = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_TimeToAutoDeselectGaze()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeToAutoDeselectGaze;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_TimeToAutoDeselectGaze() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeToAutoDeselectGaze;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_TimeToAutoDeselectGaze(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeToAutoDeselectGaze = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_AllowGazeAssistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowGazeAssistance;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_AllowGazeAssistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowGazeAssistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_AllowGazeAssistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowGazeAssistance = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FirstHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstHoverEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FirstHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_FirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstHoverEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LastHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHoverExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LastHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_LastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastHoverExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_HoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_HoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_HoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_HoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_HoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_HoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FirstSelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstSelectEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FirstSelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_FirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstSelectEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LastSelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSelectExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LastSelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_LastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastSelectExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_SelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_SelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_SelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_SelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_SelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_SelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FirstFocusEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstFocusEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FirstFocusEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstFocusEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_FirstFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstFocusEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LastFocusExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFocusExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LastFocusExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFocusExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_LastFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFocusExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FocusEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FocusEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_FocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FocusEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FocusExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_FocusExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_FocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FocusExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_Activated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Activated;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_Activated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Activated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_Activated(::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Activated = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_Deactivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Deactivated;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_Deactivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Deactivated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_Deactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Deactivated = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractorsHovering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorsHovering;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractorsHovering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorsHovering;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_InteractorsHovering(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorsHovering = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__isHovered_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHovered_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__isHovered_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isHovered_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set__isHovered_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isHovered_k__BackingField = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractorsSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorsSelecting;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractorsSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorsSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_InteractorsSelecting(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorsSelecting = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__firstInteractorSelecting_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstInteractorSelecting_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__firstInteractorSelecting_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstInteractorSelecting_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set__firstInteractorSelecting_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstInteractorSelecting_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__isSelected_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSelected_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__isSelected_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isSelected_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set__isSelected_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isSelected_k__BackingField = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionGroupsFocusing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionGroupsFocusing;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionGroupsFocusing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionGroupsFocusing;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_InteractionGroupsFocusing(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionGroupsFocusing = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__firstInteractionGroupFocusing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstInteractionGroupFocusing_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__firstInteractionGroupFocusing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstInteractionGroupFocusing_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set__firstInteractionGroupFocusing_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstInteractionGroupFocusing_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__isFocused_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFocused_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get__isFocused_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isFocused_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set__isFocused_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isFocused_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_StartingHoverFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingHoverFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_StartingHoverFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingHoverFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingHoverFilters = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_HoverFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverFilters;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_HoverFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_HoverFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverFilters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_StartingSelectFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSelectFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_StartingSelectFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSelectFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingSelectFilters = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_SelectFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectFilters;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_SelectFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_SelectFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectFilters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_StartingInteractionStrengthFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingInteractionStrengthFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_StartingInteractionStrengthFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingInteractionStrengthFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_StartingInteractionStrengthFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingInteractionStrengthFilters = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionStrengthFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengthFilters;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionStrengthFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengthFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_InteractionStrengthFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionStrengthFilters = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LargestInteractionStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LargestInteractionStrength;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LargestInteractionStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LargestInteractionStrength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_LargestInteractionStrength(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LargestInteractionStrength = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_ClearedLargestInteractionStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClearedLargestInteractionStrength;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_ClearedLargestInteractionStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClearedLargestInteractionStrength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_ClearedLargestInteractionStrength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClearedLargestInteractionStrength = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_AttachPoseOnSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachPoseOnSelect;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_AttachPoseOnSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachPoseOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_AttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttachPoseOnSelect = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LocalAttachPoseOnSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalAttachPoseOnSelect;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_LocalAttachPoseOnSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalAttachPoseOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_LocalAttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalAttachPoseOnSelect = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::GameObject>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_ReticleCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::GameObject>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_ReticleCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_ReticleCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReticleCache = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_VariableSelectInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariableSelectInteractors;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_VariableSelectInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariableSelectInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_VariableSelectInteractors(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VariableSelectInteractors = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,float_t>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionStrengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengths;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,float_t>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_InteractionStrengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengths;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_InteractionStrengths(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionStrengths = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_RegisteredInteractionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_get_m_RegisteredInteractionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::__cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredInteractionManager = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::getStaticF_s_ProcessInteractionStrengthMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::setStaticF_s_ProcessInteractionStrengthEventMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthEventMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::getStaticF_s_ProcessInteractionStrengthEventMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthEventMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"add_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"remove_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"add_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"remove_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_getDistanceOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_getDistanceOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_getDistanceOverride(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_getDistanceOverride", {}, {::i2c::type_of<::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_colliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_colliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_interactionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_interactionLayers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_distanceCalculationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_distanceCalculationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_distanceCalculationMode(::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_distanceCalculationMode", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_selectMode(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_selectMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_focusMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_focusMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_focusMode(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_focusMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_customReticle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_customReticle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_customReticle(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_customReticle", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_allowGazeInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_allowGazeInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_allowGazeInteraction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_allowGazeInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_allowGazeSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_allowGazeSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_allowGazeSelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_allowGazeSelect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_overrideGazeTimeToSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_overrideGazeTimeToSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_overrideGazeTimeToSelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_overrideGazeTimeToSelect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_gazeTimeToSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_gazeTimeToSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_gazeTimeToSelect(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_gazeTimeToSelect", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_overrideTimeToAutoDeselectGaze()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_overrideTimeToAutoDeselectGaze", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_overrideTimeToAutoDeselectGaze(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_overrideTimeToAutoDeselectGaze", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_timeToAutoDeselectGaze()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_timeToAutoDeselectGaze", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_timeToAutoDeselectGaze(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_timeToAutoDeselectGaze", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_allowGazeAssistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_allowGazeAssistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_allowGazeAssistance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_allowGazeAssistance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_lastHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_lastHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_lastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_lastHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_hoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_hoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_hoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_hoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_hoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_hoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_hoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_hoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_lastSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_lastSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_lastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_lastSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_selectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_selectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_selectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_selectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstFocusEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstFocusEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstFocusEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_lastFocusExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_lastFocusExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_lastFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_lastFocusExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_focusEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_focusEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_focusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_focusEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_focusExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_focusExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_focusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_focusExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_activated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_activated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_activated(::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_activated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_deactivated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_deactivated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_deactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_deactivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactorsHovering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactorsHovering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>*>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_isHovered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_isHovered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_isHovered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_isHovered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactorsSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactorsSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstInteractorSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstInteractorSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstInteractorSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstInteractorSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_isSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_isSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_isSelected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_isSelected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionGroupsFocusing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionGroupsFocusing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_firstInteractionGroupFocusing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_firstInteractionGroupFocusing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_firstInteractionGroupFocusing(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_firstInteractionGroupFocusing", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_isFocused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_isFocused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_isFocused(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_isFocused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_canFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_canFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_startingHoverFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_startingHoverFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_startingHoverFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_hoverFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_hoverFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_startingSelectFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_startingSelectFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_startingSelectFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_startingInteractionStrengthFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_startingInteractionStrengthFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_startingInteractionStrengthFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_startingInteractionStrengthFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionStrengthFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionStrengthFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_largestInteractionStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_largestInteractionStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::FindCreateInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"FindCreateInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::RegisterWithInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"RegisterWithInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnregisterWithInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnregisterWithInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, interactor);
}
inline ::UnityEngine::Pose UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"GetAttachPoseOnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, interactor);
}
inline ::UnityEngine::Pose UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"GetLocalAttachPoseOnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, interactor);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetDistance(::UnityEngine::Vector3  position)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>(this, ___internal_method, position);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"GetInteractionStrength", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsHovered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"IsHovered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsSelected(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"IsSelected", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsHovered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"IsHovered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsSelected(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"IsSelected", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::AttachCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::RemoveCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::CaptureAttachPose(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"CaptureAttachPose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessInteractable(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractionStrengthInteractable_ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractionStrengthInteractable.ProcessInteractionStrength", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable.OnRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable.OnUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable.OnActivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable.OnDeactivated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.IsHoverableBy", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.IsSelectableBy", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusEntering(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusExiting(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 81}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 85}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnFocusEntering(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnFocusExiting(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ReadInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"ReadInteractionStrength", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"ProcessHoverFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"ProcessSelectFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::ProcessInteractionStrengthFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, float_t  interactionStrength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"ProcessInteractionStrengthFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor, interactionStrength);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_interactionLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_interactionLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_interactionLayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_interactionLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onFirstHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onFirstHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onFirstHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onLastHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onLastHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onLastHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onSelectCanceled", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onActivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onActivate", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_onDeactivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_onDeactivate", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onFirstHoverEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onFirstHoverEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onHoverEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onHoverEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onHoverExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onHoverExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onLastHoverExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onLastHoverExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_onSelectCancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_onSelectCancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 98}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 99}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 100}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectCanceling(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 105}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnActivate(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::OnDeactivate(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 109}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::AttachCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 110}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::RemoveCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 111}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_hoveringInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_hoveringInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::get_selectingInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"get_selectingInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::set_selectingInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"set_selectingInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 112}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(), 113}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable.get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRActivateInteractable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRInteractable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRHoverInteractable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRSelectInteractable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRFocusInteractable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRInteractionStrengthInteractable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::i___UnityEngine__XR__Interaction__Toolkit__Gaze__IXROverridesGazeAutoSelect() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable::XRBaseInteractable()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c._Awake_b__190_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::_Awake_b__190_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb495bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>(),
                        {"<Awake>b__190_0", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::setStaticF___9__190_0(::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*, "<>9__190_0", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::getStaticF___9__190_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*, "<>9__190_0", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::_Awake_b__190_0(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>(),
                        {"<Awake>b__190_0", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, col);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c* UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c::XRBaseInteractable___c()   {
}
