#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRBaseInteractor.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__InteractorHandedness_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__HashSetList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRFilterList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRHoverFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRSelectFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRTargetFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRBaseTargetFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractionStrengthInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_MovementType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRGroupMember_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionStrengthInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRTargetPriorityInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__InteractorHandedness_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ExposedRegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractorEvent_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.add_registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::add_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb469f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"add_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.remove_registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::remove_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb469fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"remove_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.add_unregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::add_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb46a088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"add_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.remove_unregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::remove_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb46a138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"remove_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_interactionManager)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb46a1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_containingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_containingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_containingGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_containingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_containingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_containingGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_interactionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactionLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_interactionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_interactionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_interactionLayers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_handedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_handedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_handedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_handedness", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_attachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_attachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_attachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_attachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_attachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_attachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_keepSelectedTargetValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_keepSelectedTargetValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_keepSelectedTargetValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_keepSelectedTargetValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_keepSelectedTargetValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_keepSelectedTargetValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_disableVisualsWhenBlockedInGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_disableVisualsWhenBlockedInGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_disableVisualsWhenBlockedInGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_disableVisualsWhenBlockedInGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_disableVisualsWhenBlockedInGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_disableVisualsWhenBlockedInGroup", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_startingSelectedInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_startingSelectedInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_startingSelectedInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_startingSelectedInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_startingSelectedInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_startingSelectedInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_startingTargetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_startingTargetFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_startingTargetFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_startingTargetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_startingTargetFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_startingTargetFilter", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_hoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_hoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_hoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_hoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_hoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_hoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_hoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_hoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_selectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_selectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_selectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_selectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_selectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_selectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_selectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_selectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_selectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_selectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_targetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_targetFilter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4632e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_targetFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_targetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_targetFilter)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb46a42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_targetFilter", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_allowHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_allowHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_allowHover", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_allowHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_allowHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_allowHover", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_allowSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_allowSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_allowSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_allowSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_allowSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_allowSelect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_isPerformingManualInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_isPerformingManualInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_isPerformingManualInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_interactablesHovered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactablesHovered)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4674dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactablesHovered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_hasHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hasHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hasHover", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_hasHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_hasHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_hasHover", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_interactablesSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactablesSelected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb464514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactablesSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_firstInteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_firstInteractableSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_firstInteractableSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_firstInteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_firstInteractableSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_firstInteractableSelected", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_hasSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hasSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hasSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_hasSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_hasSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_hasSelection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_startingHoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_startingHoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_startingHoverFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_startingHoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_startingHoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_startingHoverFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_hoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hoverFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_startingSelectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_startingSelectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_startingSelectFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_startingSelectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_startingSelectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_startingSelectFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_selectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_selectFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_largestInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_largestInteractionStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_largestInteractionStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.TryGetXROrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::by_ref<::UnityEngine::Transform*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::TryGetXROrigin)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb46a658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"TryGetXROrigin", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46a798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::Awake)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb465f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb466568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb466940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::Start)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb46aaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnDestroy)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb46ab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.GetAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetAttachTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb46ad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.GetAttachPoseOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetAttachPoseOnSelect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb46ad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"GetAttachPoseOnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.GetLocalAttachPoseOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetLocalAttachPoseOnSelect)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb46ae50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"GetLocalAttachPoseOnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetValidTargets)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46af20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.FindCreateInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::FindCreateInteractionManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb46a944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"FindCreateInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.RegisterWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::RegisterWithInteractionManager)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb46a28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"RegisterWithInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnregisterWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnregisterWithInteractionManager)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb46aa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnregisterWithInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_isHoverActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_isHoverActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46af24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_isSelectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_isSelectActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46af2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_targetPriorityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_targetPriorityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46af34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_targetPriorityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_targetPriorityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46af3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_targetsForSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_targetsForSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46af44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_targetsForSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_targetsForSelection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46af4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.CanHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CanHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46af5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CanSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46af64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.IsHovering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::IsHovering)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb46af6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"IsHovering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.IsSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::IsSelecting)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb46afdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"IsSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.IsHovering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::IsHovering)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb46b04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"IsHovering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.IsSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::IsSelecting)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb469380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"IsSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_selectedInteractableMovementTypeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectedInteractableMovementTypeOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46b0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.CaptureAttachPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CaptureAttachPose)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb46b0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"CaptureAttachPose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.CreateAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CreateAttachTransform)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb46a79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"CreateAttachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.PreprocessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb466944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.ProcessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::ProcessInteractor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb466ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.GetInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetInteractionStrength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46b23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"GetInteractionStrength", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_ProcessInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_ProcessInteractionStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionStrengthInteractor.ProcessInteractionStrength", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_OnRegistered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.OnRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_OnUnregistered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.OnUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_CanHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_CanHover)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb46b2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.CanHover", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverEntering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverExiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_CanSelect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb46b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.CanSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectEntering)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb46b428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnRegistered)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb46b438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnUnregistered)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb46b570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverEntering)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb469428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverEntered)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb46b6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnHoverExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverExiting)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb46950c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverExited)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb46b708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectEntering)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb46756c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectEntered)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb464690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectExiting)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb4676b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectExited)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4649a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.ProcessInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::ProcessInteractionStrength)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0xb46b768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.StartManualInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::StartManualInteraction)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb46bc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 81}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.EndManualInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::EndManualInteraction)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb46bd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.ProcessHoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::ProcessHoverFilters)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb46b338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"ProcessHoverFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.ProcessSelectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::ProcessSelectFilters)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb46b3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"ProcessSelectFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsGroupMember)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb46be94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsNonGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsNonGroupMember)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb46c028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsNonGroupMember", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_interactionLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactionLayerMask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactionLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_interactionLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_interactionLayerMask)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_interactionLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_enableInteractions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_enableInteractions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_enableInteractions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_enableInteractions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_enableInteractions)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_enableInteractions", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_onHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46c224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_onHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_onHoverEntered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46c22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_onHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_onHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46c230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_onHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_onHoverExited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46c238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_onHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_onSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46c23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_onSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_onSelectEntered)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46c244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_onSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_onSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46c248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_onSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_onSelectExited)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46c250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_onSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_onHoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46c254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onHoverEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_onHoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46c25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onHoverExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_onSelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46c264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onSelectEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_onSelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46c26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onSelectExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverEntering)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverEntered)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnHoverExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverExiting)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 85}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverExited)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectEntering)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectEntered)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectExiting)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectExited)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_selectTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectTarget)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_selectTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.set_selectTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_selectTarget)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_selectTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_hoverTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hoverTargets)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hoverTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.GetHoverTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetHoverTargets)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"GetHoverTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetValidTargets)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.CanHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CanHover)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CanSelect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.get_requireSelectExclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_requireSelectExclusive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46c9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.StartManualInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::StartManualInteraction)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb46ca34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::_ctor)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0xb469728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46cb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_registered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_registered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registered = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_unregistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unregistered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_unregistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unregistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unregistered = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionManager = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__containingGroup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containingGroup_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__containingGroup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containingGroup_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set__containingGroup_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____containingGroup_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractionLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionLayers;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractionLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionLayers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_InteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionLayers = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_Handedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Handedness;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_Handedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Handedness;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_Handedness(::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Handedness = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_AttachTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_AttachTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_AttachTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttachTransform = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_KeepSelectedTargetValid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeepSelectedTargetValid;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_KeepSelectedTargetValid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KeepSelectedTargetValid;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_KeepSelectedTargetValid(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KeepSelectedTargetValid = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_DisableVisualsWhenBlockedInGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableVisualsWhenBlockedInGroup;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_DisableVisualsWhenBlockedInGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableVisualsWhenBlockedInGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_DisableVisualsWhenBlockedInGroup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisableVisualsWhenBlockedInGroup = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_StartingSelectedInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSelectedInteractable;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_StartingSelectedInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSelectedInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_StartingSelectedInteractable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingSelectedInteractable = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_StartingTargetFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingTargetFilter;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_StartingTargetFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingTargetFilter;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_StartingTargetFilter(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingTargetFilter = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_HoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_HoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_HoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_HoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_HoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_HoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_SelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_SelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_SelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_SelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_SelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_SelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_TargetFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetFilter;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_TargetFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetFilter;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_TargetFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetFilter = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_AllowHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHover;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_AllowHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHover;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_AllowHover(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowHover = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_AllowSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_AllowSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_AllowSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowSelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_IsPerformingManualInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsPerformingManualInteraction;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_IsPerformingManualInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsPerformingManualInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_IsPerformingManualInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsPerformingManualInteraction = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractablesHovered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractablesHovered;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractablesHovered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractablesHovered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_InteractablesHovered(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractablesHovered = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__hasHover_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasHover_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__hasHover_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasHover_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set__hasHover_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasHover_k__BackingField = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractablesSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractablesSelected;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractablesSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractablesSelected;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_InteractablesSelected(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractablesSelected = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__firstInteractableSelected_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstInteractableSelected_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__firstInteractableSelected_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstInteractableSelected_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set__firstInteractableSelected_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstInteractableSelected_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__hasSelection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasSelection_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__hasSelection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasSelection_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set__hasSelection_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasSelection_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_StartingHoverFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingHoverFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_StartingHoverFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingHoverFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingHoverFilters = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_HoverFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverFilters;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_HoverFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_HoverFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverFilters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_StartingSelectFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSelectFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_StartingSelectFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSelectFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingSelectFilters = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_SelectFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectFilters;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_SelectFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_SelectFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectFilters = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_LargestInteractionStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LargestInteractionStrength;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_LargestInteractionStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LargestInteractionStrength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_LargestInteractionStrength(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LargestInteractionStrength = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_ClearedLargestInteractionStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClearedLargestInteractionStrength;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_ClearedLargestInteractionStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClearedLargestInteractionStrength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_ClearedLargestInteractionStrength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClearedLargestInteractionStrength = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_AttachPoseOnSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachPoseOnSelect;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_AttachPoseOnSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachPoseOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_AttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttachPoseOnSelect = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_LocalAttachPoseOnSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalAttachPoseOnSelect;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_LocalAttachPoseOnSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalAttachPoseOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_LocalAttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalAttachPoseOnSelect = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractionStrengthInteractables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengthInteractables;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractionStrengthInteractables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengthInteractables;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_InteractionStrengthInteractables(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionStrengthInteractables = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractionStrengths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengths;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_InteractionStrengths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionStrengths;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_InteractionStrengths(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionStrengths = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_ManualInteractionInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManualInteractionInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_ManualInteractionInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManualInteractionInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_ManualInteractionInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManualInteractionInteractable = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_RegisteredInteractionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_RegisteredInteractionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredInteractionManager = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_XROriginTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROriginTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_XROriginTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROriginTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_XROriginTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XROriginTransform = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_HasXROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasXROrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_HasXROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasXROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_HasXROrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasXROrigin = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_FailedToFindXROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FailedToFindXROrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get_m_FailedToFindXROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FailedToFindXROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set_m_FailedToFindXROrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FailedToFindXROrigin = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__targetPriorityMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPriorityMode_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__targetPriorityMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPriorityMode_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set__targetPriorityMode_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPriorityMode_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__targetsForSelection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetsForSelection_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_get__targetsForSelection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetsForSelection_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::__cordl_internal_set__targetsForSelection_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetsForSelection_k__BackingField = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::getStaticF_s_ProcessInteractionStrengthMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::setStaticF_s_ProcessInteractionStrengthEventMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthEventMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::getStaticF_s_ProcessInteractionStrengthEventMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthEventMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"add_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"remove_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"add_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"remove_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_containingGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_containingGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_containingGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_containingGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactionLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactionLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_interactionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_interactionLayers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_handedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_handedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_handedness(::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_handedness", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_attachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_attachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_attachTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_attachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_keepSelectedTargetValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_keepSelectedTargetValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_keepSelectedTargetValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_keepSelectedTargetValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_disableVisualsWhenBlockedInGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_disableVisualsWhenBlockedInGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_disableVisualsWhenBlockedInGroup(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_disableVisualsWhenBlockedInGroup", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_startingSelectedInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_startingSelectedInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_startingSelectedInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_startingSelectedInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_startingTargetFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_startingTargetFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_startingTargetFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_startingTargetFilter", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_hoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_hoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_hoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_hoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_selectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_selectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_selectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_selectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_selectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_selectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_targetFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_targetFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_targetFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_targetFilter", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_allowHover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_allowHover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_allowHover(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_allowHover", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_allowSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_allowSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_allowSelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_allowSelect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_isPerformingManualInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_isPerformingManualInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactablesHovered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactablesHovered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hasHover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hasHover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_hasHover(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_hasHover", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactablesSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactablesSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_firstInteractableSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_firstInteractableSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_firstInteractableSelected(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_firstInteractableSelected", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hasSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hasSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_hasSelection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_hasSelection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_startingHoverFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_startingHoverFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_startingHoverFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hoverFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hoverFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_startingSelectFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_startingSelectFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_startingSelectFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_selectFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_largestInteractionStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_largestInteractionStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>*>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::TryGetXROrigin(::by_ref<::UnityEngine::Transform*>  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"TryGetXROrigin", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, interactable);
}
inline ::UnityEngine::Pose UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"GetAttachPoseOnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, interactable);
}
inline ::UnityEngine::Pose UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"GetLocalAttachPoseOnSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::FindCreateInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"FindCreateInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::RegisterWithInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"RegisterWithInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnregisterWithInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnregisterWithInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_isHoverActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_isSelectActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_targetPriorityMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_targetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_targetsForSelection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_targetsForSelection(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::IsHovering(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"IsHovering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::IsSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"IsSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::IsHovering(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"IsHovering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::IsSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"IsSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline ::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectedInteractableMovementTypeOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CaptureAttachPose(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"CaptureAttachPose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CreateAttachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"CreateAttachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"GetInteractionStrength", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionStrengthInteractor.ProcessInteractionStrength", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.OnRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.OnUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.CanHover", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.CanSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::StartManualInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 81}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::EndManualInteraction()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"ProcessHoverFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"ProcessSelectFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsNonGroupMember()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsNonGroupMember", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_interactionLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_interactionLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_interactionLayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_interactionLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_enableInteractions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_enableInteractions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_enableInteractions(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_enableInteractions", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_onHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_onHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_onHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_onHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_onSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_onSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_onSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_onSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onHoverEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onHoverEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onHoverExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onHoverExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onSelectEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onSelectEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_onSelectExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_onSelectExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 85}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_selectTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_selectTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::set_selectTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"set_selectTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_hoverTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"get_hoverTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetHoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  targets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"GetHoverTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::GetValidTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::get_requireSelectExclusive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::StartManualInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRHoverInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRSelectInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRTargetPriorityInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRGroupMember() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractionStrengthInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor::XRBaseInteractor()   {
}
