#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRInteractionGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRInteractionGroup_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRFocusInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRGroupMember_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionOverrideGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRInteractionGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__RegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionGroupRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionGroupUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.add_registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::add_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb46ebc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"add_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.remove_registered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::remove_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb46ec78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"remove_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.add_unregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::add_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb46ed28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"add_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.remove_unregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::remove_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb46edd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"remove_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.get_groupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46ee88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_groupName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.get_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46ee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_interactionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.set_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_interactionManager)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb46ee98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.get_containingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_containingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_containingGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.set_containingGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_containingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_containingGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.get_startingGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_startingGroupMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_startingGroupMembers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.set_startingGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_startingGroupMembers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb46f018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_startingGroupMembers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.get_activeInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_activeInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_activeInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.set_activeInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_activeInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_activeInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.get_focusInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_focusInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_focusInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.set_focusInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_focusInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_focusInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.get_focusInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_focusInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_focusInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.set_focusInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_focusInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_focusInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.get_isRegisteredWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_isRegisteredWithInteractionManager)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb46f1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_isRegisteredWithInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.get_hasRegisteredStartingMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_hasRegisteredStartingMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_hasRegisteredStartingMembers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.set_hasRegisteredStartingMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_hasRegisteredStartingMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46f260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_hasRegisteredStartingMembers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46f268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::Awake)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0xb46f26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.RemoveMissingMembersFromStartingOverridesMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RemoveMissingMembersFromStartingOverridesMap)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb46f034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RemoveMissingMembersFromStartingOverridesMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb46ff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46ff68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnDestroy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb46fffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.AddStartingInteractionOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::AddStartingInteractionOverride)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0xb4700fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"AddStartingInteractionOverride", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.RemoveStartingInteractionOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RemoveStartingInteractionOverride)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb4707b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RemoveStartingInteractionOverride", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.TryGetStartingGroupMemberAndOverridesPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::Object*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::TryGetStartingGroupMemberAndOverridesPair)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb47053c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"TryGetStartingGroupMemberAndOverridesPair", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnRegistered)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xb4708cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.OnRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnBeforeUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnBeforeUnregistered)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb470d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.OnBeforeUnregistered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnUnregistered)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb470f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.OnUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.AddGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::AddGroupMember)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb46fab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"AddGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.MoveGroupMemberTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::MoveGroupMemberTo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xb46f8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"MoveGroupMemberTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.ValidateAddGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ValidateAddGroupMember)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xb4710dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ValidateAddGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.RemoveGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RemoveGroupMember)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb471348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RemoveGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.GroupMemberIsOrContainsInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::GroupMemberIsOrContainsInteractor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb471408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"GroupMemberIsOrContainsInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.ClearGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ClearGroupMembers)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb470058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ClearGroupMembers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.ContainsGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ContainsGroupMember)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4715f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ContainsGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.GetGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::GetGroupMembers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb471610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"GetGroupMembers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.HasDependencyOnGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::HasDependencyOnGroup)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb47167c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"HasDependencyOnGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.AddInteractionOverrideForGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::AddInteractionOverrideForGroupMember)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0xb46fbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"AddInteractionOverrideForGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.GroupMemberIsPartOfOverrideChain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::GroupMemberIsPartOfOverrideChain)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb471860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"GroupMemberIsPartOfOverrideChain", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.RemoveInteractionOverrideForGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RemoveInteractionOverrideForGroupMember)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb4719f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RemoveInteractionOverrideForGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.ClearInteractionOverridesForGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ClearInteractionOverridesForGroupMember)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb471b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ClearInteractionOverridesForGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.GetInteractionOverridesForGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*, ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::GetInteractionOverridesForGroupMember)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb471cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"GetInteractionOverridesForGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.FindCreateInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::FindCreateInteractionManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb46f800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"FindCreateInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.RegisterWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RegisterWithInteractionManager)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb46ef34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RegisterWithInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnregisterWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnregisterWithInteractionManager)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb46ff6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnregisterWithInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.RegisterAsGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RegisterAsGroupMember)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb470bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RegisterAsGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.RegisterAsNonGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RegisterAsNonGroupMember)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb470e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RegisterAsNonGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.ReRegisterGroupMemberWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ReRegisterGroupMemberWithInteractionManager)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb471edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ReRegisterGroupMemberWithInteractionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_PreprocessGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_PreprocessGroupMembers)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xb4720b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.PreprocessGroupMembers", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_ProcessGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_ProcessGroupMembers)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xb4723c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.ProcessGroupMembers", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_UpdateGroupMemberInteractions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_UpdateGroupMemberInteractions)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb4726bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.UpdateGroupMemberInteractions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.CanStartOrContinueAnySelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::CanStartOrContinueAnySelect)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0xb4727e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"CanStartOrContinueAnySelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_UpdateGroupMemberInteractions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_UpdateGroupMemberInteractions)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xb472b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.UpdateGroupMemberInteractions", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_ShouldOverrideActiveInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_ShouldOverrideActiveInteraction)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb473554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionOverrideGroup.ShouldOverrideActiveInteraction", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.TryGetOverridesForContainedInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::by_ref<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::TryGetOverridesForContainedInteractor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xb473774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"TryGetOverridesForContainedInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_ShouldAnyMemberOverrideInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_ShouldAnyMemberOverrideInteraction)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb473b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionOverrideGroup.ShouldAnyMemberOverrideInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.ShouldGroupMemberOverrideInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ShouldGroupMemberOverrideInteraction)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb4739a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ShouldGroupMemberOverrideInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.ShouldInteractorOverrideInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ShouldInteractorOverrideInteraction)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xb473ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ShouldInteractorOverrideInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UpdateInteractorInteractions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, bool, ::by_ref<bool>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UpdateInteractorInteractions)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0xb472f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UpdateInteractorInteractions", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.ClearAllInteractorSelections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ClearAllInteractorSelections)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb473ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ClearAllInteractorSelections", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.ClearAllInteractorHovers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ClearAllInteractorHovers)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb474244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ClearAllInteractorHovers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.OnFocusEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnFocusEntering)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb47448c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"OnFocusEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.OnFocusExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnFocusExiting)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4744d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"OnFocusExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsGroupMember)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb474538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsNonGroupMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsNonGroupMember)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4746cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsNonGroupMember", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::_ctor)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb4746d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_registered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_registered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registered = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_unregistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unregistered;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_unregistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unregistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unregistered = value;
}
constexpr ::StringW& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_GroupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupName;
}
constexpr ::StringW const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_GroupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupName;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_GroupName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroupName = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_InteractionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_InteractionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionManager = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_RegisteredInteractionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_RegisteredInteractionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredInteractionManager = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__containingGroup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containingGroup_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__containingGroup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containingGroup_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set__containingGroup_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____containingGroup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_StartingGroupMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingGroupMembers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_StartingGroupMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingGroupMembers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_StartingGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingGroupMembers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_StartingInteractionOverridesMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingInteractionOverridesMap;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_StartingInteractionOverridesMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingInteractionOverridesMap;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_StartingInteractionOverridesMap(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingInteractionOverridesMap = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__activeInteractor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeInteractor_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__activeInteractor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeInteractor_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set__activeInteractor_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeInteractor_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__focusInteractor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusInteractor_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__focusInteractor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusInteractor_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set__focusInteractor_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____focusInteractor_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__focusInteractable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusInteractable_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__focusInteractable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____focusInteractable_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set__focusInteractable_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____focusInteractable_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__hasRegisteredStartingMembers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRegisteredStartingMembers_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get__hasRegisteredStartingMembers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasRegisteredStartingMembers_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set__hasRegisteredStartingMembers_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasRegisteredStartingMembers_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_GroupMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupMembers;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_GroupMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupMembers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_GroupMembers(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroupMembers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_TempGroupMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TempGroupMembers;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_TempGroupMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TempGroupMembers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_TempGroupMembers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TempGroupMembers = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_IsProcessingGroupMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsProcessingGroupMembers;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_IsProcessingGroupMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsProcessingGroupMembers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_IsProcessingGroupMembers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsProcessingGroupMembers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_InteractionOverridesMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionOverridesMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_InteractionOverridesMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionOverridesMap;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_InteractionOverridesMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionOverridesMap = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_ValidTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargets;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_get_m_ValidTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::__cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidTargets = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::setStaticF_s_InteractablesSelected(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*, "s_InteractablesSelected", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::getStaticF_s_InteractablesSelected()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*, "s_InteractablesSelected", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::setStaticF_s_InteractablesHovered(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*, "s_InteractablesHovered", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::getStaticF_s_InteractablesHovered()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*, "s_InteractablesHovered", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"add_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"remove_registered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"add_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"remove_unregistered", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_groupName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_groupName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_interactionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_interactionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_containingGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_containingGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_containingGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_containingGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_startingGroupMembers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_startingGroupMembers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_startingGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_startingGroupMembers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_activeInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_activeInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_activeInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_activeInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_focusInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_focusInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_focusInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_focusInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_focusInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_focusInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_focusInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_focusInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_isRegisteredWithInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_isRegisteredWithInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::get_hasRegisteredStartingMembers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"get_hasRegisteredStartingMembers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::set_hasRegisteredStartingMembers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"set_hasRegisteredStartingMembers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RemoveMissingMembersFromStartingOverridesMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RemoveMissingMembersFromStartingOverridesMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::AddStartingInteractionOverride(::UnityEngine::Object*  sourceGroupMember, ::UnityEngine::Object*  overrideGroupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"AddStartingInteractionOverride", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceGroupMember, overrideGroupMember);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RemoveStartingInteractionOverride(::UnityEngine::Object*  sourceGroupMember, ::UnityEngine::Object*  overrideGroupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RemoveStartingInteractionOverride", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sourceGroupMember, overrideGroupMember);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::TryGetStartingGroupMemberAndOverridesPair(::UnityEngine::Object*  sourceGroupMember, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>  groupMemberAndOverrides)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"TryGetStartingGroupMemberAndOverridesPair", {}, {::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sourceGroupMember, groupMemberAndOverrides);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.OnRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnBeforeUnregistered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.OnBeforeUnregistered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.OnUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::AddGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"AddGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::MoveGroupMemberTo(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"MoveGroupMemberTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupMember, newIndex);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ValidateAddGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ValidateAddGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groupMember);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RemoveGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RemoveGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groupMember);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::GroupMemberIsOrContainsInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"GroupMemberIsOrContainsInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groupMember, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ClearGroupMembers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ClearGroupMembers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ContainsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ContainsGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::GetGroupMembers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"GetGroupMembers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::HasDependencyOnGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"HasDependencyOnGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, group);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::AddInteractionOverrideForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  overrideGroupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"AddInteractionOverrideForGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceGroupMember, overrideGroupMember);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::GroupMemberIsPartOfOverrideChain(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  potentialOverrideGroupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"GroupMemberIsPartOfOverrideChain", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sourceGroupMember, potentialOverrideGroupMember);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RemoveInteractionOverrideForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  overrideGroupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RemoveInteractionOverrideForGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sourceGroupMember, overrideGroupMember);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ClearInteractionOverridesForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ClearInteractionOverridesForGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sourceGroupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::GetInteractionOverridesForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"GetInteractionOverridesForGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceGroupMember, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::FindCreateInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"FindCreateInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RegisterWithInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RegisterWithInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnregisterWithInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnregisterWithInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RegisterAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RegisterAsGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::RegisterAsNonGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"RegisterAsNonGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ReRegisterGroupMemberWithInteractionManager(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ReRegisterGroupMemberWithInteractionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_PreprocessGroupMembers(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.PreprocessGroupMembers", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_ProcessGroupMembers(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.ProcessGroupMembers", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_UpdateGroupMemberInteractions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.UpdateGroupMemberInteractions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::CanStartOrContinueAnySelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  selectInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"CanStartOrContinueAnySelect", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, selectInteractor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_UpdateGroupMemberInteractions(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  prePrioritizedInteractor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>  interactorThatPerformedInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.UpdateGroupMemberInteractions", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prePrioritizedInteractor, interactorThatPerformedInteraction);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_ShouldOverrideActiveInteraction(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>  overridingInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionOverrideGroup.ShouldOverrideActiveInteraction", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, overridingInteractor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::TryGetOverridesForContainedInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>  overrideGroupMembers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"TryGetOverridesForContainedInteractor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, overrideGroupMembers);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_ShouldAnyMemberOverrideInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactingInteractor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>  overridingInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionOverrideGroup.ShouldAnyMemberOverrideInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactingInteractor, overridingInteractor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ShouldGroupMemberOverrideInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactingInteractor, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  overrideGroupMember, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>  overridingInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ShouldGroupMemberOverrideInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactingInteractor, overrideGroupMember, overridingInteractor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ShouldInteractorOverrideInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactingInteractor, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  overridingInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ShouldInteractorOverrideInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactingInteractor, overridingInteractor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UpdateInteractorInteractions(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, bool  preventInteraction, ::by_ref<bool>  performedInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UpdateInteractorInteractions", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, preventInteraction, performedInteraction);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ClearAllInteractorSelections(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  selectInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ClearAllInteractorSelections", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectInteractor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::ClearAllInteractorHovers(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  hoverInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"ClearAllInteractorHovers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hoverInteractor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnFocusEntering(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"OnFocusEntering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::OnFocusExiting(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"OnFocusExiting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsGroupMember", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsNonGroupMember()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsNonGroupMember", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractionOverrideGroup() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractionGroup() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRGroupMember() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup::XRInteractionGroup()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb470728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::__cordl_internal_get_groupMember()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupMember;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::__cordl_internal_get_groupMember() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupMember;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::__cordl_internal_set_groupMember(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupMember = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::__cordl_internal_get_overrideGroupMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideGroupMembers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::__cordl_internal_get_overrideGroupMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideGroupMembers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::__cordl_internal_set_overrideGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideGroupMembers = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair* UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair::XRInteractionGroup_GroupMemberAndOverridesPair()   {
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames::setStaticF_k_Left(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "k_Left", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames::getStaticF_k_Left()  {
return ::cordl_internals::getStaticField<::StringW, "k_Left", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames::setStaticF_k_Right(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "k_Right", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames::getStaticF_k_Right()  {
return ::cordl_internals::getStaticField<::StringW, "k_Right", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames::setStaticF_k_Center(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "k_Center", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames::getStaticF_k_Center()  {
return ::cordl_internals::getStaticField<::StringW, "k_Center", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames::XRInteractionGroup_GroupNames()   {
}
