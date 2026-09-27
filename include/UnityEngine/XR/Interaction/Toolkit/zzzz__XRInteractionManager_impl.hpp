#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRInteractionManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRFilterList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRHoverFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRSelectFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRFocusInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRInteractableSnapVolume_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRTargetPriorityInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__InteractorHandedness_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ExposedRegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__RegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionGroupRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionGroupUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.add_interactionGroupRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactionGroupRegistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4086f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactionGroupRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.remove_interactionGroupRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactionGroupRegistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4087a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactionGroupRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.add_interactionGroupUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactionGroupUnregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactionGroupUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.remove_interactionGroupUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactionGroupUnregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactionGroupUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.add_interactorRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactorRegistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4089b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactorRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.remove_interactorRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactorRegistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactorRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.add_interactorUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactorUnregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactorUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.remove_interactorUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactorUnregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactorUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.add_interactableRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactableRegistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactableRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.remove_interactableRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactableRegistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactableRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.add_interactableUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactableUnregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactableUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.remove_interactableUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactableUnregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactableUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.add_focusGained
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_focusGained)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_focusGained", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.remove_focusGained
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_focusGained)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb408fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_focusGained", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.add_focusLost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_focusLost)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb409094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_focusLost", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.remove_focusLost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_focusLost)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb409144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_focusLost", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.add_activeInteractionManagersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_activeInteractionManagersChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4091f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_activeInteractionManagersChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.remove_activeInteractionManagersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_activeInteractionManagersChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4092e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_activeInteractionManagersChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.get_startingHoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_startingHoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4093d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_startingHoverFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.set_startingHoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::set_startingHoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4093dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"set_startingHoverFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.get_hoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_hoverFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4093e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_hoverFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.get_startingSelectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_startingSelectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4093ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_startingSelectFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.set_startingSelectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::set_startingSelectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4093f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"set_startingSelectFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.get_selectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_selectFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4093fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_selectFilters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.get_lastFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_lastFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb409404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_lastFocused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.set_lastFocused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::set_lastFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40940c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"set_lastFocused", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.get_activeInteractionManagers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>* (*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_activeInteractionManagers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb409414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_activeInteractionManagers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb40946c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnEnable)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xb4094f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnDisable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb409734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::Update)> {
  constexpr static std::size_t size = 0xd04;
  constexpr static std::size_t addrs = 0xb409c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::LateUpdate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb40ab8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FixedUpdate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb40ad3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.OnBeforeRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnBeforeRender)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb40aeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.PreprocessInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::PreprocessInteractors)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0xb40b09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ProcessInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessInteractors)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0xb40b4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ProcessInteractables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessInteractables)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb40b900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ProcessInteractionStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessInteractionStrength)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xb40bafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CanHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CanHover)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb40bec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsHoverPossible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsHoverPossible)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb40bfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsHoverPossible", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CanSelect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb40c26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsSelectPossible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsSelectPossible)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb40c344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsSelectPossible", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CanFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CanFocus)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb40c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsFocusPossible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsFocusPossible)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb40c4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsFocusPossible", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.RegisterInteractionGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractionGroup)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xb40c654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnRegistered)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb40c960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.UnregisterInteractionGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractionGroup)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0xb40ca38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnUnregistered)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb40d0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetInteractionGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetInteractionGroups)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb40d1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetInteractionGroups", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetInteractionGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetInteractionGroup)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb40d1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetInteractionGroup", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.RegisterInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractor)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xb40d39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnRegistered)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb40d68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.UnregisterInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractor)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xb40d764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnUnregistered)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb40dc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.RegisterInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractable)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0xb40dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnRegistered)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb40e1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.UnregisterInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractable)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0xb40e2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnUnregistered)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb40e738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.RegisterSnapVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterSnapVolume)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb40e810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"RegisterSnapVolume", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.UnregisterSnapVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterSnapVolume)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb40e9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"UnregisterSnapVolume", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetRegisteredInteractionGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractionGroups)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb40eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractionGroups", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetRegisteredInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractors)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb40eb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetRegisteredInteractables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractables)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb40ebb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb40c944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb40da60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb40e71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.TryGetInteractableForCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::TryGetInteractableForCollider)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb40ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"TryGetInteractableForCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.TryGetInteractableForCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::TryGetInteractableForCollider)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb40edbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"TryGetInteractableForCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsColliderRegisteredToInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::by_ref<::UnityEngine::Collider*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsColliderRegisteredToInteractable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb40ef98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsColliderRegisteredToInteractable", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsColliderRegisteredSnapVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::by_ref<::UnityEngine::Collider*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsColliderRegisteredSnapVolume)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb40f02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsColliderRegisteredSnapVolume", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsHighestPriorityTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsHighestPriorityTarget)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb40f084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsHighestPriorityTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsHandSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsHandSelecting)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xb40f158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsHandSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetValidTargets)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb40a9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetValidTargets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.RemoveAllUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RemoveAllUnregistered)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb40f3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"RemoveAllUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ClearInteractionGroupFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractionGroupFocus)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xb40f4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractorFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorFocus)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb40da7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"CancelInteractorFocus", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractableFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableFocus)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb40f7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ClearInteractorSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractorSelection)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0xb40f938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractorSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorSelection)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb40fd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractableSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableSelection)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb40feb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ClearInteractorHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractorHover)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0xb41002c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractorHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorHover)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb4103d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractableHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableHover)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb41054c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.FocusEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusEnter)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xb4106c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.FocusExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusExit)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xb410990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.FocusCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusCancel)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb410ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectEnter)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xb410dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectExit)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb411008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectCancel)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb411184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverEnter)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb411304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverExit)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb411470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverCancel)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb4115ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.FocusEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*, ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusEnter)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0xb41176c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.FocusExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*, ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusExit)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0xb411b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*, ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectEnter)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xb411fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*, ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectExit)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xb4122a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*, ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverEnter)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xb412580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*, ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverExit)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xb412858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.InteractorSelectValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::InteractorSelectValidTargets)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0xb412b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.InteractorHoverValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::InteractorHoverValidTargets)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb4130c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ResolveExistingFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ResolveExistingFocus)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb41330c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ResolveExistingSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ResolveExistingSelect)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb4135d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HasInteractionLayerOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HasInteractionLayerOverlap)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb40c130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"HasInteractionLayerOverlap", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ProcessHoverFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessHoverFilters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb40c260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ProcessHoverFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ProcessSelectFilters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessSelectFilters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb40c4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ProcessSelectFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ExitInteractableSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ExitInteractableSelection)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb41372c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ExitInteractableSelection", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ExitInteractableFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ExitInteractableFocus)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb413464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ExitInteractableFocus", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ClearPriorityForSelectionMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearPriorityForSelectionMap)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0xb409884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ClearPriorityForSelectionMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.FlushRegistration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FlushRegistration)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb40a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"FlushRegistration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.RegisterInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4138a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.UnregisterInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb41391c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.RegisterInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.UnregisterInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetRegisteredInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractors)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetRegisteredInteractables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractables)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.IsRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.TryGetInteractableForCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::TryGetInteractableForCollider)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"TryGetInteractableForCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetInteractableForCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetInteractableForCollider)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetInteractableForCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetColliderToInteractableMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetColliderToInteractableMap)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetColliderToInteractableMap", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetValidTargets)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetValidTargets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ForceSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ForceSelect)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ForceSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ClearInteractorSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractorSelection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractorSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorSelection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractableSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableSelection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb413fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.ClearInteractorHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractorHover)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb414060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractorHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorHover)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4140dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.CancelInteractableHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableHover)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb414158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectEnter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4141d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectExit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb414250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectCancel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4142cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverEnter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb414348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverExit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4143c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverCancel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb414440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*, ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectEnter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4144bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.SelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*, ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectExit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb414538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*, ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverEnter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4145b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.HoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*, ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverExit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb414630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.InteractorSelectValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::InteractorSelectValidTargets)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4146ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager.InteractorHoverValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::InteractorHoverValidTargets)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb414728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::_ctor)> {
  constexpr static std::size_t size = 0x115c;
  constexpr static std::size_t addrs = 0xb4147a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactionGroupRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionGroupRegistered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactionGroupRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionGroupRegistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_interactionGroupRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionGroupRegistered = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactionGroupUnregistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionGroupUnregistered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactionGroupUnregistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactionGroupUnregistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_interactionGroupUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactionGroupUnregistered = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactorRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactorRegistered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactorRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactorRegistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_interactorRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactorRegistered = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactorUnregistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactorUnregistered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactorUnregistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactorUnregistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_interactorUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactorUnregistered = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactableRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableRegistered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactableRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableRegistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_interactableRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactableRegistered = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactableUnregistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableUnregistered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_interactableUnregistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableUnregistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_interactableUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactableUnregistered = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_focusGained()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusGained;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_focusGained() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusGained;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_focusGained(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusGained = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_focusLost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusLost;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_focusLost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusLost;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_focusLost(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusLost = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_StartingHoverFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingHoverFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_StartingHoverFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingHoverFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingHoverFilters = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_HoverFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverFilters;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_HoverFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_HoverFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverFilters = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_StartingSelectFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSelectFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_StartingSelectFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSelectFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingSelectFilters = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_SelectFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectFilters;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_SelectFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectFilters;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_SelectFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectFilters = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get__lastFocused_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFocused_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get__lastFocused_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFocused_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set__lastFocused_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFocused_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ColliderToInteractableMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColliderToInteractableMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ColliderToInteractableMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColliderToInteractableMap;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_ColliderToInteractableMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ColliderToInteractableMap = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ColliderToSnapVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColliderToSnapVolumes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ColliderToSnapVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColliderToSnapVolumes;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_ColliderToSnapVolumes(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ColliderToSnapVolumes = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_Interactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactors;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_Interactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_Interactors(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactors = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractionGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionGroups;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractionGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionGroups;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_InteractionGroups(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionGroups = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_Interactables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactables;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_Interactables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactables;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_Interactables(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactables = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_CurrentHovered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentHovered;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_CurrentHovered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentHovered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_CurrentHovered(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentHovered = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_CurrentSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentSelected;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_CurrentSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentSelected;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_CurrentSelected(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentSelected = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_HighestPriorityTargetMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HighestPriorityTargetMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_HighestPriorityTargetMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HighestPriorityTargetMap;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_HighestPriorityTargetMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HighestPriorityTargetMap = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ValidTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargets;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ValidTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidTargets = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_UnorderedValidTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedValidTargets;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_UnorderedValidTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnorderedValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_UnorderedValidTargets(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnorderedValidTargets = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractorsInGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorsInGroup;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractorsInGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorsInGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_InteractorsInGroup(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorsInGroup = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_GroupsInGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupsInGroup;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_GroupsInGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupsInGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_GroupsInGroup(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroupsInGroup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ScratchInteractionGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScratchInteractionGroups;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ScratchInteractionGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScratchInteractionGroups;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_ScratchInteractionGroups(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScratchInteractionGroups = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ScratchInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScratchInteractors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_ScratchInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScratchInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_ScratchInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScratchInteractors = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_FocusEnterEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusEnterEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_FocusEnterEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusEnterEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_FocusEnterEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FocusEnterEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_FocusExitEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusExitEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_FocusExitEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusExitEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_FocusExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FocusExitEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_SelectEnterEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEnterEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_SelectEnterEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEnterEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_SelectEnterEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectEnterEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_SelectExitEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExitEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_SelectExitEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExitEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_SelectExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectExitEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_HoverEnterEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEnterEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_HoverEnterEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEnterEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_HoverEnterEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverEnterEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_HoverExitEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExitEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_HoverExitEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExitEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_HoverExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverExitEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractionGroupRegisteredEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionGroupRegisteredEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractionGroupRegisteredEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionGroupRegisteredEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_InteractionGroupRegisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionGroupRegisteredEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractionGroupUnregisteredEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionGroupUnregisteredEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractionGroupUnregisteredEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionGroupUnregisteredEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_InteractionGroupUnregisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionGroupUnregisteredEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractorRegisteredEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorRegisteredEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractorRegisteredEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorRegisteredEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_InteractorRegisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorRegisteredEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractorUnregisteredEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorUnregisteredEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractorUnregisteredEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorUnregisteredEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_InteractorUnregisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorUnregisteredEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractableRegisteredEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableRegisteredEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractableRegisteredEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableRegisteredEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_InteractableRegisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableRegisteredEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractableUnregisteredEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableUnregisteredEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_get_m_InteractableUnregisteredEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableUnregisteredEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::__cordl_internal_set_m_InteractableUnregisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableUnregisteredEventArgs = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_activeInteractionManagersChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*, "activeInteractionManagersChanged", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_activeInteractionManagersChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*, "activeInteractionManagersChanged", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF__activeInteractionManagers_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>*, "<activeInteractionManagers>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF__activeInteractionManagers_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>*, "<activeInteractionManagers>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_TargetPriorityInteractorListPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*, "s_TargetPriorityInteractorListPool", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_TargetPriorityInteractorListPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*, "s_TargetPriorityInteractorListPool", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_PreprocessInteractorsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_PreprocessInteractorsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_PreprocessInteractorsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_PreprocessInteractorsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_ProcessInteractionStrengthMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractionStrengthMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_ProcessInteractorsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractorsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_ProcessInteractorsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractorsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_ProcessInteractablesMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractablesMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_ProcessInteractablesMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessInteractablesMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_UpdateGroupMemberInteractionsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateGroupMemberInteractionsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_UpdateGroupMemberInteractionsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_UpdateGroupMemberInteractionsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_GetValidTargetsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_GetValidTargetsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_GetValidTargetsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_GetValidTargetsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_FilterRegisteredValidTargetsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_FilterRegisteredValidTargetsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_FilterRegisteredValidTargetsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_FilterRegisteredValidTargetsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_EvaluateInvalidFocusMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateInvalidFocusMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_EvaluateInvalidFocusMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateInvalidFocusMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_EvaluateInvalidSelectionsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateInvalidSelectionsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_EvaluateInvalidSelectionsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateInvalidSelectionsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_EvaluateInvalidHoversMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateInvalidHoversMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_EvaluateInvalidHoversMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateInvalidHoversMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_EvaluateValidSelectionsMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateValidSelectionsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_EvaluateValidSelectionsMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateValidSelectionsMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_EvaluateValidHoversMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateValidHoversMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_EvaluateValidHoversMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_EvaluateValidHoversMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_FocusEnterMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_FocusEnterMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_FocusEnterMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_FocusEnterMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_FocusExitMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_FocusExitMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_FocusExitMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_FocusExitMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_SelectEnterMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_SelectEnterMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_SelectEnterMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_SelectEnterMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_SelectExitMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_SelectExitMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_SelectExitMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_SelectExitMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_HoverEnterMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_HoverEnterMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_HoverEnterMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_HoverEnterMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::setStaticF_s_HoverExitMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_HoverExitMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::getStaticF_s_HoverExitMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_HoverExitMarker", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactionGroupRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactionGroupRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactionGroupRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactionGroupRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactionGroupUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactionGroupUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactionGroupUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactionGroupUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactorRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactorRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactorRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactorRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactorUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactorUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactorUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactorUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactableRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactableRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactableRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactableRegistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_interactableUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_interactableUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_interactableUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_interactableUnregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_focusGained(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_focusGained", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_focusGained(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_focusGained", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_focusLost(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_focusLost", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_focusLost(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_focusLost", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::add_activeInteractionManagersChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"add_activeInteractionManagersChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::remove_activeInteractionManagersChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"remove_activeInteractionManagersChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_startingHoverFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_startingHoverFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"set_startingHoverFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_hoverFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_hoverFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_startingSelectFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_startingSelectFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"set_startingSelectFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_selectFilters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_selectFilters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_lastFocused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_lastFocused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::set_lastFocused(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"set_lastFocused", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::get_activeInteractionManagers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"get_activeInteractionManagers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>*>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnBeforeRender()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::PreprocessInteractors(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessInteractors(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessInteractables(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsHoverPossible(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsHoverPossible", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsSelectPossible(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsSelectPossible", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CanFocus(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsFocusPossible(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsFocusPossible", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractionGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionGroup);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractionGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionGroup);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetInteractionGroups(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  interactionGroups)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetInteractionGroups", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionGroups);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetInteractionGroup(::StringW  groupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetInteractionGroup", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(this, ___internal_method, groupName);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterSnapVolume(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*  snapVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"RegisterSnapVolume", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapVolume);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterSnapVolume(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*  snapVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"UnregisterSnapVolume", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapVolume);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractionGroups(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractionGroups", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractables(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactionGroup);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::TryGetInteractableForCollider(::UnityEngine::Collider*  interactableCollider, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"TryGetInteractableForCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactableCollider, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::TryGetInteractableForCollider(::UnityEngine::Collider*  interactableCollider, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>  interactable, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>  snapVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"TryGetInteractableForCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactableCollider, interactable, snapVolume);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsColliderRegisteredToInteractable(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Collider*>  colliderToCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsColliderRegisteredToInteractable", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colliderToCheck);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsColliderRegisteredSnapVolume(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Collider*>  potentialSnapVolumeCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsColliderRegisteredSnapVolume", {}, {::i2c::type_of<::by_ref<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, potentialSnapVolumeCollider);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsHighestPriorityTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  target, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*  interactors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsHighestPriorityTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target, interactors);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsHandSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsHandSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hand);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetValidTargets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, targets);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RemoveAllUnregistered(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  manager, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"RemoveAllUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, manager, interactables);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractionGroupFocus(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactionGroup);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorFocus(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"CancelInteractorFocus", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableFocus(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  validTargets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, validTargets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableSelection(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractorHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  validTargets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, validTargets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FocusExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::InteractorSelectValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  validTargets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, validTargets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::InteractorHoverValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  validTargets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, validTargets);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ResolveExistingFocus(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactionGroup, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ResolveExistingSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HasInteractionLayerOverlap(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"HasInteractionLayerOverlap", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ProcessHoverFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ProcessSelectFilters", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ExitInteractableSelection(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ExitInteractableSelection", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ExitInteractableFocus(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ExitInteractableFocus", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearPriorityForSelectionMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ClearPriorityForSelectionMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::FlushRegistration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"FlushRegistration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::RegisterInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::UnregisterInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractors", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetRegisteredInteractables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetRegisteredInteractables", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"IsRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::TryGetInteractableForCollider(::UnityEngine::Collider*  interactableCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"TryGetInteractableForCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>(this, ___internal_method, interactableCollider);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetInteractableForCollider(::UnityEngine::Collider*  interactableCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetInteractableForCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>(this, ___internal_method, interactableCollider);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetColliderToInteractableMap(::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>  map)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetColliderToInteractableMap", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::GetValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  validTargets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"GetValidTargets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>(this, ___internal_method, interactor, validTargets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ForceSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {"ForceSelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableSelection(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::ClearInteractorHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  validTargets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, validTargets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractorHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::CancelInteractableHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::SelectExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::HoverExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, interactable, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::InteractorSelectValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  validTargets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, validTargets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::InteractorHoverValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  validTargets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, validTargets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager::XRInteractionManager()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb415f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb415f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb415fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb416024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_3)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb416078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4160cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_5)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb416120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_6)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb416174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_7)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4161c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_8)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb41621c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_9)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb416270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_10)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4162c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__ctor_b__237_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_11)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb416318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_11", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__cctor_b__238_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>* (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__cctor_b__238_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb41636c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.cctor>b__238_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c.__cctor_b__238_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__cctor_b__238_1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4163d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.cctor>b__238_1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*, "<>9__237_0", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*, "<>9__237_0", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_1(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*, "<>9__237_1", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*, "<>9__237_1", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_2(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*, "<>9__237_2", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_2()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*, "<>9__237_2", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_3(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*, "<>9__237_3", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_3()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*, "<>9__237_3", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_4(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*, "<>9__237_4", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_4()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*, "<>9__237_4", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_5(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*, "<>9__237_5", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_5()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*, "<>9__237_5", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_6(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*, "<>9__237_6", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_6()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*, "<>9__237_6", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_7(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*, "<>9__237_7", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_7()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*, "<>9__237_7", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_8(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*, "<>9__237_8", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_8()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*, "<>9__237_8", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_9(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*, "<>9__237_9", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_9()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*, "<>9__237_9", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_10(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*, "<>9__237_10", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_10()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*, "<>9__237_10", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::setStaticF___9__237_11(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*, "<>9__237_11", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::getStaticF___9__237_11()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*, "<>9__237_11", ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__ctor_b__237_11()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.ctor>b__237_11", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__cctor_b__238_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.cctor>b__238_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::__cctor_b__238_1(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>(),
                        {"<.cctor>b__238_1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c* UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c::XRInteractionManager___c()   {
}
